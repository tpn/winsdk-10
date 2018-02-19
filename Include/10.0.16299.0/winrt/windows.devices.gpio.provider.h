/* Header file automatically generated from windows.devices.gpio.provider.idl */
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
#ifndef __windows2Edevices2Egpio2Eprovider_h__
#define __windows2Edevices2Egpio2Eprovider_h__
#ifndef __windows2Edevices2Egpio2Eprovider_p_h__
#define __windows2Edevices2Egpio2Eprovider_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    interface IGpioControllerProvider;
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    interface IGpioPinProvider;
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    interface IGpioPinProviderValueChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    interface IGpioPinProviderValueChangedEventArgsFactory;
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_FWD_DEFINED__

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

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE
#define DEF___FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6ac0edb9-e3c9-5840-8aa8-1bc45366f6ca"))
IIterator<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> : IIterator_impl<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Gpio.Provider.IGpioControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t;
#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*>
//#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE
#define DEF___FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09212bd4-851b-52bd-b82c-421bf3d6f511"))
IIterable<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> : IIterable_impl<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Gpio.Provider.IGpioControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t;
#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*>
//#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE
#define DEF___FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f429355f-7a16-5dcf-a575-db7d2a20eced"))
IVectorView<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> : IVectorView_impl<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Gpio.Provider.IGpioControllerProvider>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*> __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t;
#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*>
//#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Gpio::Provider::IGpioControllerProvider*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    class GpioPinProviderValueChangedEventArgs;
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("af259d89-9e01-529e-a879-c6763142d160"))
ITypedEventHandler<ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider*,ABI::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs*, ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Gpio.Provider.IGpioPinProvider, Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider*,ABI::Windows::Devices::Gpio::Provider::GpioPinProviderValueChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider*,ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider*,ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_USE */


#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000






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
                namespace Provider {
                    
                    typedef enum ProviderGpioPinDriveMode : int ProviderGpioPinDriveMode;
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    
                    typedef enum ProviderGpioPinEdge : int ProviderGpioPinEdge;
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    
                    typedef enum ProviderGpioPinValue : int ProviderGpioPinValue;
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    
                    typedef enum ProviderGpioSharingMode : int ProviderGpioSharingMode;
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

















/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioPinDriveMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderGpioPinDriveMode : int
                    {
                        ProviderGpioPinDriveMode_Input = 0,
                        ProviderGpioPinDriveMode_Output = 1,
                        ProviderGpioPinDriveMode_InputPullUp = 2,
                        ProviderGpioPinDriveMode_InputPullDown = 3,
                        ProviderGpioPinDriveMode_OutputOpenDrain = 4,
                        ProviderGpioPinDriveMode_OutputOpenDrainPullUp = 5,
                        ProviderGpioPinDriveMode_OutputOpenSource = 6,
                        ProviderGpioPinDriveMode_OutputOpenSourcePullDown = 7,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioPinEdge
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderGpioPinEdge : int
                    {
                        ProviderGpioPinEdge_FallingEdge = 0,
                        ProviderGpioPinEdge_RisingEdge = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioPinValue
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderGpioPinValue : int
                    {
                        ProviderGpioPinValue_Low = 0,
                        ProviderGpioPinValue_High = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [v1_enum, contract] */
                    enum ProviderGpioSharingMode : int
                    {
                        ProviderGpioSharingMode_Exclusive = 0,
                        ProviderGpioSharingMode_SharedReadOnly = 1,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioControllerProvider[] = L"Windows.Devices.Gpio.Provider.IGpioControllerProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [object, uuid("AD11CEC7-19EA-4B21-874F-B91AED4A25DB"), contract] */
                    MIDL_INTERFACE("AD11CEC7-19EA-4B21-874F-B91AED4A25DB")
                    IGpioControllerProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PinCount(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OpenPinProvider(
                            /* [in] */INT32 pin,
                            /* [in] */ABI::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode sharingMode,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::Provider::IGpioPinProvider * * gpioPinProvider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGpioControllerProvider=_uuidof(IGpioControllerProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioPinProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProvider[] = L"Windows.Devices.Gpio.Provider.IGpioPinProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [object, uuid("42344CB7-6ABC-40FF-9CE7-73B85301B900"), contract] */
                    MIDL_INTERFACE("42344CB7-6ABC-40FF-9CE7-73B85301B900")
                    IGpioPinProvider : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ValueChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * handler,
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
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::Provider::ProviderGpioSharingMode * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IsDriveModeSupported(
                            /* [in] */ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode driveMode,
                            /* [retval, out] */__RPC__out boolean * supported
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDriveMode(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDriveMode(
                            /* [in] */ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinDriveMode value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Write(
                            /* [in] */ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinValue value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Read(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinValue * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGpioPinProvider=_uuidof(IGpioPinProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs[] = L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [object, uuid("32A6D6F2-3D5B-44CD-8FBE-13A69F2EDB24"), exclusiveto, contract] */
                    MIDL_INTERFACE("32A6D6F2-3D5B-44CD-8FBE-13A69F2EDB24")
                    IGpioPinProviderValueChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Edge(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGpioPinProviderValueChangedEventArgs=_uuidof(IGpioPinProviderValueChangedEventArgs);
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory[] = L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [object, uuid("3ECB0B59-568C-4392-B24A-8A59A902B1F1"), exclusiveto, contract] */
                    MIDL_INTERFACE("3ECB0B59-568C-4392-B24A-8A59A902B1F1")
                    IGpioPinProviderValueChangedEventArgsFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */ABI::Windows::Devices::Gpio::Provider::ProviderGpioPinEdge edge,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Gpio::Provider::IGpioPinProviderValueChangedEventArgs * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGpioPinProviderValueChangedEventArgsFactory=_uuidof(IGpioPinProviderValueChangedEventArgsFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioProvider[] = L"Windows.Devices.Gpio.Provider.IGpioProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Gpio {
                namespace Provider {
                    /* [object, uuid("44E82707-08CA-434A-AFE0-D61580446F7E"), contract] */
                    MIDL_INTERFACE("44E82707-08CA-434A-AFE0-D61580446F7E")
                    IGpioProvider : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetControllers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGpioProvider=_uuidof(IGpioProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Gpio */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs[] = L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;

#endif // ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;

typedef struct __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl;

interface __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;

typedef  struct __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl;

interface __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider;

typedef struct __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl;

interface __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProviderVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000



#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000






typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue;


typedef enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode;

















/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioPinDriveMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode
{
    ProviderGpioPinDriveMode_Input = 0,
    ProviderGpioPinDriveMode_Output = 1,
    ProviderGpioPinDriveMode_InputPullUp = 2,
    ProviderGpioPinDriveMode_InputPullDown = 3,
    ProviderGpioPinDriveMode_OutputOpenDrain = 4,
    ProviderGpioPinDriveMode_OutputOpenDrainPullUp = 5,
    ProviderGpioPinDriveMode_OutputOpenSource = 6,
    ProviderGpioPinDriveMode_OutputOpenSourcePullDown = 7,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioPinEdge
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge
{
    ProviderGpioPinEdge_FallingEdge = 0,
    ProviderGpioPinEdge_RisingEdge = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioPinValue
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue
{
    ProviderGpioPinValue_Low = 0,
    ProviderGpioPinValue_High = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Devices.Gpio.Provider.ProviderGpioSharingMode
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */

#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode
{
    ProviderGpioSharingMode_Exclusive = 0,
    ProviderGpioSharingMode_SharedReadOnly = 1,
};
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioControllerProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioControllerProvider[] = L"Windows.Devices.Gpio.Provider.IGpioControllerProvider";
/* [object, uuid("AD11CEC7-19EA-4B21-874F-B91AED4A25DB"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PinCount )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *OpenPinProvider )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider * This,
        /* [in] */INT32 pin,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode sharingMode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * * gpioPinProvider
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProviderVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_get_PinCount(This,value) \
    ( (This)->lpVtbl->get_PinCount(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_OpenPinProvider(This,pin,sharingMode,gpioPinProvider) \
    ( (This)->lpVtbl->OpenPinProvider(This,pin,sharingMode,gpioPinProvider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioControllerProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioPinProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProvider[] = L"Windows.Devices.Gpio.Provider.IGpioPinProvider";
/* [object, uuid("42344CB7-6ABC-40FF-9CE7-73B85301B900"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CGpio__CProvider__CIGpioPinProvider_Windows__CDevices__CGpio__CProvider__CGpioPinProviderValueChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ValueChanged )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DebounceTimeout )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PinNumber )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SharingMode )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioSharingMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsDriveModeSupported )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode driveMode,
        /* [retval, out] */__RPC__out boolean * supported
        );
    HRESULT ( STDMETHODCALLTYPE *GetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDriveMode )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinDriveMode value
        );
    HRESULT ( STDMETHODCALLTYPE *Write )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue value
        );
    HRESULT ( STDMETHODCALLTYPE *Read )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinValue * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_add_ValueChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ValueChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_remove_ValueChanged(This,token) \
    ( (This)->lpVtbl->remove_ValueChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_get_DebounceTimeout(This,value) \
    ( (This)->lpVtbl->get_DebounceTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_put_DebounceTimeout(This,value) \
    ( (This)->lpVtbl->put_DebounceTimeout(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_get_PinNumber(This,value) \
    ( (This)->lpVtbl->get_PinNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_get_SharingMode(This,value) \
    ( (This)->lpVtbl->get_SharingMode(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_IsDriveModeSupported(This,driveMode,supported) \
    ( (This)->lpVtbl->IsDriveModeSupported(This,driveMode,supported) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_GetDriveMode(This,value) \
    ( (This)->lpVtbl->GetDriveMode(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_SetDriveMode(This,value) \
    ( (This)->lpVtbl->SetDriveMode(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_Write(This,value) \
    ( (This)->lpVtbl->Write(This,value) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_Read(This,value) \
    ( (This)->lpVtbl->Read(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgs[] = L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs";
/* [object, uuid("32A6D6F2-3D5B-44CD-8FBE-13A69F2EDB24"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Edge )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_get_Edge(This,value) \
    ( (This)->lpVtbl->get_Edge(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioPinProviderValueChangedEventArgsFactory[] = L"Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory";
/* [object, uuid("3ECB0B59-568C-4392-B24A-8A59A902B1F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CGpio_CProvider_CProviderGpioPinEdge edge,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgs * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_Create(This,edge,value) \
    ( (This)->lpVtbl->Create(This,edge,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioPinProviderValueChangedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Devices.Gpio.Provider.IGpioProvider
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Gpio_Provider_IGpioProvider[] = L"Windows.Devices.Gpio.Provider.IGpioProvider";
/* [object, uuid("44E82707-08CA-434A-AFE0-D61580446F7E"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetControllers )(
        __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CGpio__CProvider__CIGpioControllerProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProviderVtbl;

interface __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_GetControllers(This,result) \
    ( (This)->lpVtbl->GetControllers(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CGpio_CProvider_CIGpioProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs
 *
 * Introduced to Windows.Devices.DevicesLowLevelContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgsFactory interface starting with version 2.0 of the Windows.Devices.DevicesLowLevelContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Gpio.Provider.IGpioPinProviderValueChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Gpio_Provider_GpioPinProviderValueChangedEventArgs[] = L"Windows.Devices.Gpio.Provider.GpioPinProviderValueChangedEventArgs";
#endif
#endif // WINDOWS_DEVICES_DEVICESLOWLEVELCONTRACT_VERSION >= 0x20000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Egpio2Eprovider_p_h__

#endif // __windows2Edevices2Egpio2Eprovider_h__
