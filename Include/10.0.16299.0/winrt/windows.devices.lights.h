/* Header file automatically generated from windows.devices.lights.idl */
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
#ifndef __windows2Edevices2Elights_h__
#define __windows2Edevices2Elights_h__
#ifndef __windows2Edevices2Elights_p_h__
#define __windows2Edevices2Elights_p_h__


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
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                interface ILamp;
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */
#define __x_ABI_CWindows_CDevices_CLights_CILamp ABI::Windows::Devices::Lights::ILamp

#endif // ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                interface ILampAvailabilityChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */
#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                interface ILampStatics;
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */
#define __x_ABI_CWindows_CDevices_CLights_CILampStatics ABI::Windows::Devices::Lights::ILampStatics

#endif // ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                class Lamp;
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("191a8c6e-60dd-5a21-a53c-bf3f940a1dde"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Lights::Lamp*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::Lamp*, ABI::Windows::Devices::Lights::ILamp*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Lights.Lamp>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Lights::Lamp*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Lights::ILamp*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Lights::ILamp*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("52a69dfd-f0d6-5931-b8e1-f38066d71bf2"))
IAsyncOperation<ABI::Windows::Devices::Lights::Lamp*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::Lamp*, ABI::Windows::Devices::Lights::ILamp*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Lights.Lamp>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Lights::Lamp*> __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_t;
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Lights::ILamp*>
//#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Lights::ILamp*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                class LampAvailabilityChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("556a02d9-7685-576f-89ca-b62dc481d29d"))
ITypedEventHandler<ABI::Windows::Devices::Lights::Lamp*,ABI::Windows::Devices::Lights::LampAvailabilityChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::Lamp*, ABI::Windows::Devices::Lights::ILamp*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::LampAvailabilityChangedEventArgs*, ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Lights.Lamp, Windows.Devices.Lights.LampAvailabilityChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Lights::Lamp*,ABI::Windows::Devices::Lights::LampAvailabilityChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Lights::ILamp*,ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Lights::ILamp*,ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */
















/*
 *
 * Interface Windows.Devices.Lights.ILamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Lights.Lamp
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILamp[] = L"Windows.Devices.Lights.ILamp";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                /* [object, uuid("047D5B9A-EA45-4B2B-B1A2-14DFF00BDE7B"), exclusiveto, contract] */
                MIDL_INTERFACE("047D5B9A-EA45-4B2B-B1A2-14DFF00BDE7B")
                ILamp : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrightnessLevel(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BrightnessLevel(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsColorSettable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Color(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Color(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AvailabilityChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AvailabilityChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILamp=_uuidof(ILamp);
                
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILamp;
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Lights.ILampAvailabilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Lights.LampAvailabilityChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                /* [object, uuid("4F6E3DED-07A2-499D-9260-67E304532BA4"), exclusiveto, contract] */
                MIDL_INTERFACE("4F6E3DED-07A2-499D-9260-67E304532BA4")
                ILampAvailabilityChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAvailable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILampAvailabilityChangedEventArgs=_uuidof(ILampAvailabilityChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Lights.ILampStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Lights.Lamp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampStatics[] = L"Windows.Devices.Lights.ILampStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                /* [object, uuid("A822416C-8885-401E-B821-8E8B38A8E8EC"), exclusiveto, contract] */
                MIDL_INTERFACE("A822416C-8885-401E-B821-8E8B38A8E8EC")
                ILampStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILampStatics=_uuidof(ILampStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Lights */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Lights.Lamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Lights.ILampStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Lights.ILamp ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Lights_Lamp_DEFINED
#define RUNTIMECLASS_Windows_Devices_Lights_Lamp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Lamp[] = L"Windows.Devices.Lights.Lamp";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Lights.LampAvailabilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Lights.ILampAvailabilityChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Lights_LampAvailabilityChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Lights_LampAvailabilityChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_LampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CLights_CILamp __x_ABI_CWindows_CDevices_CLights_CILamp;

#endif // ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampStatics __x_ABI_CWindows_CDevices_CLights_CILampStatics;

#endif // ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CLights_CILamp * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILamp * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
















/*
 *
 * Interface Windows.Devices.Lights.ILamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Lights.Lamp
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILamp[] = L"Windows.Devices.Lights.ILamp";
/* [object, uuid("047D5B9A-EA45-4B2B-B1A2-14DFF00BDE7B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrightnessLevel )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BrightnessLevel )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsColorSettable )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AvailabilityChanged )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AvailabilityChanged )(
        __x_ABI_CWindows_CDevices_CLights_CILamp * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CLights_CILampVtbl;

interface __x_ABI_CWindows_CDevices_CLights_CILamp
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CLights_CILamp_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_BrightnessLevel(This,value) \
    ( (This)->lpVtbl->get_BrightnessLevel(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_put_BrightnessLevel(This,value) \
    ( (This)->lpVtbl->put_BrightnessLevel(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_IsColorSettable(This,value) \
    ( (This)->lpVtbl->get_IsColorSettable(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_Color(This,value) \
    ( (This)->lpVtbl->get_Color(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_put_Color(This,value) \
    ( (This)->lpVtbl->put_Color(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_add_AvailabilityChanged(This,handler,token) \
    ( (This)->lpVtbl->add_AvailabilityChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CLights_CILamp_remove_AvailabilityChanged(This,token) \
    ( (This)->lpVtbl->remove_AvailabilityChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILamp;
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Lights.ILampAvailabilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Lights.LampAvailabilityChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs";
/* [object, uuid("4F6E3DED-07A2-499D-9260-67E304532BA4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )(
        __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_get_IsAvailable(This,value) \
    ( (This)->lpVtbl->get_IsAvailable(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Lights.ILampStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Lights.Lamp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampStatics[] = L"Windows.Devices.Lights.ILampStatics";
/* [object, uuid("A822416C-8885-401E-B821-8E8B38A8E8EC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )(
        __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CLights_CILampStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetDefaultAsync(This,operation) \
    ( (This)->lpVtbl->GetDefaultAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Lights.Lamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Lights.ILampStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Lights.ILamp ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Lights_Lamp_DEFINED
#define RUNTIMECLASS_Windows_Devices_Lights_Lamp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Lamp[] = L"Windows.Devices.Lights.Lamp";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Lights.LampAvailabilityChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Lights.ILampAvailabilityChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Lights_LampAvailabilityChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Lights_LampAvailabilityChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_LampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs";
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
#endif // __windows2Edevices2Elights_p_h__

#endif // __windows2Edevices2Elights_h__
