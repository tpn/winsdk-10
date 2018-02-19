/* Header file automatically generated from windows.devices.input.idl */
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
#ifndef __windows2Edevices2Einput_h__
#define __windows2Edevices2Einput_h__
#ifndef __windows2Edevices2Einput_p_h__
#define __windows2Edevices2Einput_p_h__


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
#ifndef ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IKeyboardCapabilities;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities ABI::Windows::Devices::Input::IKeyboardCapabilities

#endif // ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IMouseCapabilities;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities ABI::Windows::Devices::Input::IMouseCapabilities

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IMouseDevice;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice ABI::Windows::Devices::Input::IMouseDevice

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IMouseDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics ABI::Windows::Devices::Input::IMouseDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IMouseEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs ABI::Windows::Devices::Input::IMouseEventArgs

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IPointerDevice;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice ABI::Windows::Devices::Input::IPointerDevice

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IPointerDevice2;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 ABI::Windows::Devices::Input::IPointerDevice2

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface IPointerDeviceStatics;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics ABI::Windows::Devices::Input::IPointerDeviceStatics

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                interface ITouchCapabilities;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities ABI::Windows::Devices::Input::ITouchCapabilities

#endif // ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class PointerDevice;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CInput__CPointerDevice_USE
#define DEF___FIIterator_1_Windows__CDevices__CInput__CPointerDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de94641c-7960-5fcd-abe8-d6ba609ef7d3"))
IIterator<ABI::Windows::Devices::Input::PointerDevice*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Input::PointerDevice*, ABI::Windows::Devices::Input::IPointerDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Input.PointerDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Input::PointerDevice*> __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_t;
#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CInput__CPointerDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Input::IPointerDevice*>
//#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Input::IPointerDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CInput__CPointerDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CInput__CPointerDevice_USE
#define DEF___FIIterable_1_Windows__CDevices__CInput__CPointerDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ad26662c-845b-5c6d-aeaa-406f48c21ae9"))
IIterable<ABI::Windows::Devices::Input::PointerDevice*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Input::PointerDevice*, ABI::Windows::Devices::Input::IPointerDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Input.PointerDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Input::PointerDevice*> __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_t;
#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CInput__CPointerDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Input::IPointerDevice*>
//#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Input::IPointerDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CInput__CPointerDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                struct PointerDeviceUsage;
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE
#define DEF___FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9ab2160d-11ef-5eca-8dd9-3e13aa4e5f99"))
IIterator<struct ABI::Windows::Devices::Input::PointerDeviceUsage> : IIterator_impl<struct ABI::Windows::Devices::Input::PointerDeviceUsage> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Input.PointerDeviceUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Devices::Input::PointerDeviceUsage> __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_t;
#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Input::PointerDeviceUsage>
//#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Input::PointerDeviceUsage>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE
#define DEF___FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("592d6618-eaab-5a79-a47a-c7fc0b749a4e"))
IIterable<struct ABI::Windows::Devices::Input::PointerDeviceUsage> : IIterable_impl<struct ABI::Windows::Devices::Input::PointerDeviceUsage> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Input.PointerDeviceUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Devices::Input::PointerDeviceUsage> __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_t;
#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Input::PointerDeviceUsage>
//#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Input::PointerDeviceUsage>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_USE
#define DEF___FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cf5674f1-9808-5a2b-80b8-5684ed0ea816"))
IVectorView<ABI::Windows::Devices::Input::PointerDevice*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Input::PointerDevice*, ABI::Windows::Devices::Input::IPointerDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Input.PointerDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Input::PointerDevice*> __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_t;
#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Input::IPointerDevice*>
//#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Input::IPointerDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE
#define DEF___FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8e5a2c7e-3830-50d5-92ba-3163c89cbbd0"))
IVectorView<struct ABI::Windows::Devices::Input::PointerDeviceUsage> : IVectorView_impl<struct ABI::Windows::Devices::Input::PointerDeviceUsage> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Input.PointerDeviceUsage>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::Devices::Input::PointerDeviceUsage> __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_t;
#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Input::PointerDeviceUsage>
//#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Input::PointerDeviceUsage>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class MouseDevice;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class MouseEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5d72e594-28e4-5895-a34b-ea910f70fdbb"))
ITypedEventHandler<ABI::Windows::Devices::Input::MouseDevice*,ABI::Windows::Devices::Input::MouseEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Input::MouseDevice*, ABI::Windows::Devices::Input::IMouseDevice*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Input::MouseEventArgs*, ABI::Windows::Devices::Input::IMouseEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Input.MouseDevice, Windows.Devices.Input.MouseEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Input::MouseDevice*,ABI::Windows::Devices::Input::MouseEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Input::IMouseDevice*,ABI::Windows::Devices::Input::IMouseEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Input::IMouseDevice*,ABI::Windows::Devices::Input::IMouseEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                
                typedef enum PointerDeviceType : int PointerDeviceType;
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                
                typedef struct MouseDelta MouseDelta;
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                
                typedef struct PointerDeviceUsage PointerDeviceUsage;
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class KeyboardCapabilities;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class MouseCapabilities;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                class TouchCapabilities;
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */










/*
 *
 * Struct Windows.Devices.Input.PointerDeviceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [v1_enum, contract] */
                enum PointerDeviceType : int
                {
                    PointerDeviceType_Touch = 0,
                    PointerDeviceType_Pen = 1,
                    PointerDeviceType_Mouse = 2,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Input.MouseDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [contract] */
                struct MouseDelta
                {
                    INT32 X;
                    INT32 Y;
                };
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Input.PointerDeviceUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [contract] */
                struct PointerDeviceUsage
                {
                    UINT32 UsagePage;
                    UINT32 Usage;
                    INT32 MinLogical;
                    INT32 MaxLogical;
                    INT32 MinPhysical;
                    INT32 MaxPhysical;
                    UINT32 Unit;
                    FLOAT PhysicalMultiplier;
                };
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IKeyboardCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.KeyboardCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IKeyboardCapabilities[] = L"Windows.Devices.Input.IKeyboardCapabilities";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("3A3F9B56-6798-4BBC-833E-0F34B17C65FF"), exclusiveto, contract] */
                MIDL_INTERFACE("3A3F9B56-6798-4BBC-833E-0F34B17C65FF")
                IKeyboardCapabilities : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyboardPresent(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IKeyboardCapabilities=_uuidof(IKeyboardCapabilities);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseCapabilities[] = L"Windows.Devices.Input.IMouseCapabilities";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("BCA5E023-7DD9-4B6B-9A92-55D43CB38F73"), exclusiveto, contract] */
                MIDL_INTERFACE("BCA5E023-7DD9-4B6B-9A92-55D43CB38F73")
                IMouseCapabilities : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MousePresent(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VerticalWheelPresent(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalWheelPresent(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SwapButtons(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumberOfButtons(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMouseCapabilities=_uuidof(IMouseCapabilities);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseDevice[] = L"Windows.Devices.Input.IMouseDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("88EDF458-F2C8-49F4-BE1F-C256B388BC11"), exclusiveto, contract] */
                MIDL_INTERFACE("88EDF458-F2C8-49F4-BE1F-C256B388BC11")
                IMouseDevice : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MouseMoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MouseMoved(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMouseDevice=_uuidof(IMouseDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseDeviceStatics[] = L"Windows.Devices.Input.IMouseDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("484A9045-6D70-49DB-8E68-46FFBD17D38D"), exclusiveto, contract] */
                MIDL_INTERFACE("484A9045-6D70-49DB-8E68-46FFBD17D38D")
                IMouseDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Input::IMouseDevice * * mouseDevice
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMouseDeviceStatics=_uuidof(IMouseDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseEventArgs[] = L"Windows.Devices.Input.IMouseEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("F625AA5D-2354-4CC7-9230-96941C969FDE"), exclusiveto, contract] */
                MIDL_INTERFACE("F625AA5D-2354-4CC7-9230-96941C969FDE")
                IMouseEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseDelta(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::MouseDelta * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMouseEventArgs=_uuidof(IMouseEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IPointerDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.PointerDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDevice[] = L"Windows.Devices.Input.IPointerDevice";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("93C9BAFC-EBCB-467E-82C6-276FEAE36B5A"), exclusiveto, contract] */
                MIDL_INTERFACE("93C9BAFC-EBCB-467E-82C6-276FEAE36B5A")
                IPointerDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerDeviceType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Input::PointerDeviceType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsIntegrated(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxContacts(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhysicalDeviceRect(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScreenRect(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedUsages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerDevice=_uuidof(IPointerDevice);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IPointerDevice2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.PointerDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDevice2[] = L"Windows.Devices.Input.IPointerDevice2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("F8A6D2A0-C484-489F-AE3E-30D2EE1FFD3E"), exclusiveto, contract] */
                MIDL_INTERFACE("F8A6D2A0-C484-489F-AE3E-30D2EE1FFD3E")
                IPointerDevice2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPointersWithZDistance(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerDevice2=_uuidof(IPointerDevice2);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDevice2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IPointerDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.PointerDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDeviceStatics[] = L"Windows.Devices.Input.IPointerDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("D8B89AA1-D1C6-416E-BD8D-5790914DC563"), exclusiveto, contract] */
                MIDL_INTERFACE("D8B89AA1-D1C6-416E-BD8D-5790914DC563")
                IPointerDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetPointerDevice(
                        /* [in] */UINT32 pointerId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Input::IPointerDevice * * pointerDevice
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPointerDevices(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * * pointerDevices
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPointerDeviceStatics=_uuidof(IPointerDeviceStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.ITouchCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.TouchCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_ITouchCapabilities[] = L"Windows.Devices.Input.ITouchCapabilities";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Input {
                /* [object, uuid("20DD55F9-13F1-46C8-9285-2C05FA3EDA6F"), exclusiveto, contract] */
                MIDL_INTERFACE("20DD55F9-13F1-46C8-9285-2C05FA3EDA6F")
                ITouchCapabilities : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchPresent(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contacts(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITouchCapabilities=_uuidof(ITouchCapabilities);
                
            } /* Windows */
        } /* Devices */
    } /* Input */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CITouchCapabilities;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.KeyboardCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IKeyboardCapabilities ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_KeyboardCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_KeyboardCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_KeyboardCapabilities[] = L"Windows.Devices.Input.KeyboardCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.MouseCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IMouseCapabilities ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_MouseCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_MouseCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseCapabilities[] = L"Windows.Devices.Input.MouseCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.MouseDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Input.IMouseDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IMouseDevice ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_MouseDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_MouseDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseDevice[] = L"Windows.Devices.Input.MouseDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.MouseEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IMouseEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_MouseEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_MouseEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseEventArgs[] = L"Windows.Devices.Input.MouseEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.PointerDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Input.IPointerDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IPointerDevice ** Default Interface **
 *    Windows.Devices.Input.IPointerDevice2
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_PointerDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_PointerDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_PointerDevice[] = L"Windows.Devices.Input.PointerDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.TouchCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.ITouchCapabilities ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_TouchCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_TouchCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_TouchCapabilities[] = L"Windows.Devices.Input.TouchCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseDevice __x_ABI_CWindows_CDevices_CInput_CIMouseDevice;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice __x_ABI_CWindows_CDevices_CInput_CIPointerDevice;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics;

#endif // ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities;

#endif // ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CInput__CPointerDevice __FIIterator_1_Windows__CDevices__CInput__CPointerDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CInput__CPointerDevice;

typedef struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDevice * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceVtbl;

interface __FIIterator_1_Windows__CDevices__CInput__CPointerDevice
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDevice_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CInput__CPointerDevice __FIIterable_1_Windows__CDevices__CInput__CPointerDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CInput__CPointerDevice;

typedef  struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CInput__CPointerDevice **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceVtbl;

interface __FIIterable_1_Windows__CDevices__CInput__CPointerDevice
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CInput__CPointerDevice_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage;

#if !defined(____FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage;

typedef struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl;

interface __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage;

typedef  struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CInput__CPointerDeviceUsage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl;

interface __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CInput__CPointerDevice;

typedef struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceVtbl;

interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CInput__CPointerDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage;

typedef struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
            /* [in] */ struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl;

interface __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;





typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;


typedef struct __x_ABI_CWindows_CDevices_CInput_CMouseDelta __x_ABI_CWindows_CDevices_CInput_CMouseDelta;


typedef struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage;
























/*
 *
 * Struct Windows.Devices.Input.PointerDeviceType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType
{
    PointerDeviceType_Touch = 0,
    PointerDeviceType_Pen = 1,
    PointerDeviceType_Mouse = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Input.MouseDelta
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CInput_CMouseDelta
{
    INT32 X;
    INT32 Y;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.Input.PointerDeviceUsage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CDevices_CInput_CPointerDeviceUsage
{
    UINT32 UsagePage;
    UINT32 Usage;
    INT32 MinLogical;
    INT32 MaxLogical;
    INT32 MinPhysical;
    INT32 MaxPhysical;
    UINT32 Unit;
    FLOAT PhysicalMultiplier;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IKeyboardCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.KeyboardCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IKeyboardCapabilities[] = L"Windows.Devices.Input.IKeyboardCapabilities";
/* [object, uuid("3A3F9B56-6798-4BBC-833E-0F34B17C65FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyboardPresent )(
        __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilitiesVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_get_KeyboardPresent(This,value) \
    ( (This)->lpVtbl->get_KeyboardPresent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIKeyboardCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseCapabilities[] = L"Windows.Devices.Input.IMouseCapabilities";
/* [object, uuid("BCA5E023-7DD9-4B6B-9A92-55D43CB38F73"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MousePresent )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VerticalWheelPresent )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalWheelPresent )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SwapButtons )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumberOfButtons )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilitiesVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_get_MousePresent(This,value) \
    ( (This)->lpVtbl->get_MousePresent(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_get_VerticalWheelPresent(This,value) \
    ( (This)->lpVtbl->get_VerticalWheelPresent(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_get_HorizontalWheelPresent(This,value) \
    ( (This)->lpVtbl->get_HorizontalWheelPresent(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_get_SwapButtons(This,value) \
    ( (This)->lpVtbl->get_SwapButtons(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_get_NumberOfButtons(This,value) \
    ( (This)->lpVtbl->get_NumberOfButtons(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseDevice[] = L"Windows.Devices.Input.IMouseDevice";
/* [object, uuid("88EDF458-F2C8-49F4-BE1F-C256B388BC11"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MouseMoved )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CInput__CMouseDevice_Windows__CDevices__CInput__CMouseEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MouseMoved )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIMouseDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_add_MouseMoved(This,handler,cookie) \
    ( (This)->lpVtbl->add_MouseMoved(This,handler,cookie) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDevice_remove_MouseMoved(This,cookie) \
    ( (This)->lpVtbl->remove_MouseMoved(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseDeviceStatics[] = L"Windows.Devices.Input.IMouseDeviceStatics";
/* [object, uuid("484A9045-6D70-49DB-8E68-46FFBD17D38D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIMouseDevice * * mouseDevice
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_GetForCurrentView(This,mouseDevice) \
    ( (This)->lpVtbl->GetForCurrentView(This,mouseDevice) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IMouseEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.MouseEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IMouseEventArgs[] = L"Windows.Devices.Input.IMouseEventArgs";
/* [object, uuid("F625AA5D-2354-4CC7-9230-96941C969FDE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseDelta )(
        __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CMouseDelta * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_get_MouseDelta(This,value) \
    ( (This)->lpVtbl->get_MouseDelta(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIMouseEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IPointerDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.PointerDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDevice[] = L"Windows.Devices.Input.IPointerDevice";
/* [object, uuid("93C9BAFC-EBCB-467E-82C6-276FEAE36B5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsIntegrated )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxContacts )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhysicalDeviceRect )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScreenRect )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedUsages )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPointerDeviceUsage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_get_PointerDeviceType(This,value) \
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_get_IsIntegrated(This,value) \
    ( (This)->lpVtbl->get_IsIntegrated(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_get_MaxContacts(This,value) \
    ( (This)->lpVtbl->get_MaxContacts(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_get_PhysicalDeviceRect(This,value) \
    ( (This)->lpVtbl->get_PhysicalDeviceRect(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_get_ScreenRect(This,value) \
    ( (This)->lpVtbl->get_ScreenRect(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice_get_SupportedUsages(This,value) \
    ( (This)->lpVtbl->get_SupportedUsages(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDevice;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IPointerDevice2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.PointerDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDevice2[] = L"Windows.Devices.Input.IPointerDevice2";
/* [object, uuid("F8A6D2A0-C484-489F-AE3E-30D2EE1FFD3E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPointersWithZDistance )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2Vtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_get_MaxPointersWithZDistance(This,value) \
    ( (This)->lpVtbl->get_MaxPointersWithZDistance(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDevice2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDevice2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.IPointerDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.PointerDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_IPointerDeviceStatics[] = L"Windows.Devices.Input.IPointerDeviceStatics";
/* [object, uuid("D8B89AA1-D1C6-416E-BD8D-5790914DC563"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPointerDevice )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
        /* [in] */UINT32 pointerId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * * pointerDevice
        );
    HRESULT ( STDMETHODCALLTYPE *GetPointerDevices )(
        __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CInput__CPointerDevice * * pointerDevices
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_GetPointerDevice(This,pointerId,pointerDevice) \
    ( (This)->lpVtbl->GetPointerDevice(This,pointerId,pointerDevice) )

#define __x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_GetPointerDevices(This,pointerDevices) \
    ( (This)->lpVtbl->GetPointerDevices(This,pointerDevices) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CIPointerDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Input.ITouchCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Input.TouchCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Input_ITouchCapabilities[] = L"Windows.Devices.Input.ITouchCapabilities";
/* [object, uuid("20DD55F9-13F1-46C8-9285-2C05FA3EDA6F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CInput_CITouchCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchPresent )(
        __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contacts )(
        __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CInput_CITouchCapabilitiesVtbl;

interface __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CInput_CITouchCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_get_TouchPresent(This,value) \
    ( (This)->lpVtbl->get_TouchPresent(This,value) )

#define __x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_get_Contacts(This,value) \
    ( (This)->lpVtbl->get_Contacts(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CInput_CITouchCapabilities;
#endif /* !defined(____x_ABI_CWindows_CDevices_CInput_CITouchCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.KeyboardCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IKeyboardCapabilities ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_KeyboardCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_KeyboardCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_KeyboardCapabilities[] = L"Windows.Devices.Input.KeyboardCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.MouseCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IMouseCapabilities ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_MouseCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_MouseCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseCapabilities[] = L"Windows.Devices.Input.MouseCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.MouseDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Input.IMouseDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IMouseDevice ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_MouseDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_MouseDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseDevice[] = L"Windows.Devices.Input.MouseDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.MouseEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IMouseEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_MouseEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_MouseEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_MouseEventArgs[] = L"Windows.Devices.Input.MouseEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.PointerDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Input.IPointerDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.IPointerDevice ** Default Interface **
 *    Windows.Devices.Input.IPointerDevice2
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_PointerDevice_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_PointerDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_PointerDevice[] = L"Windows.Devices.Input.PointerDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Input.TouchCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Input.ITouchCapabilities ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Input_TouchCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Devices_Input_TouchCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Input_TouchCapabilities[] = L"Windows.Devices.Input.TouchCapabilities";
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
#endif // __windows2Edevices2Einput_p_h__

#endif // __windows2Edevices2Einput_h__
