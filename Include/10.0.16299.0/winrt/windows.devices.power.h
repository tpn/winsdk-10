/* Header file automatically generated from windows.devices.power.idl */
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
#ifndef __windows2Edevices2Epower_h__
#define __windows2Edevices2Epower_h__
#ifndef __windows2Edevices2Epower_p_h__
#define __windows2Edevices2Epower_p_h__


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
#include "Windows.System.Power.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBattery_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBattery_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                interface IBattery;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPower_CIBattery ABI::Windows::Devices::Power::IBattery

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBattery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                interface IBatteryReport;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport ABI::Windows::Devices::Power::IBatteryReport

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                interface IBatteryStatics;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics ABI::Windows::Devices::Power::IBatteryStatics

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                class Battery;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("97f82115-3822-507b-82e6-2777b336e98e"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Power::Battery*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Power::Battery*, ABI::Windows::Devices::Power::IBattery*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Power.Battery>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Power::Battery*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Power::IBattery*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Power::IBattery*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("daa3d556-1529-56d2-a5f8-bfb6c22a3dfe"))
IAsyncOperation<ABI::Windows::Devices::Power::Battery*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Power::Battery*, ABI::Windows::Devices::Power::IBattery*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Power.Battery>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Power::Battery*> __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_t;
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Power::IBattery*>
//#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Power::IBattery*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4d4aa646-767f-5645-af5c-546464d3ec09"))
ITypedEventHandler<ABI::Windows::Devices::Power::Battery*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Power::Battery*, ABI::Windows::Devices::Power::IBattery*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Power.Battery, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Power::Battery*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Power::IBattery*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Power::IBattery*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_int_USE
#define DEF___FIReference_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4"))
IReference<int> : IReference_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<int> __FIReference_1_int_t;
#define __FIReference_1_int ABI::Windows::Foundation::__FIReference_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_int ABI::Windows::Foundation::IReference<INT32>
//#define __FIReference_1_int_t ABI::Windows::Foundation::IReference<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_int_USE */








namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                
                typedef enum BatteryStatus : int BatteryStatus;
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                class BatteryReport;
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */










/*
 *
 * Interface Windows.Devices.Power.IBattery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Power.Battery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPower_CIBattery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPower_CIBattery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBattery[] = L"Windows.Devices.Power.IBattery";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                /* [object, uuid("BC894FC6-0072-47C8-8B5D-614AAA7A437E"), exclusiveto, contract] */
                MIDL_INTERFACE("BC894FC6-0072-47C8-8B5D-614AAA7A437E")
                IBattery : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetReport(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Power::IBatteryReport * * result
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ReportUpdated(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ReportUpdated(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBattery=_uuidof(IBattery);
                
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBattery;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPower_CIBattery_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Power.IBatteryReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Power.BatteryReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBatteryReport[] = L"Windows.Devices.Power.IBatteryReport";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                /* [object, uuid("C9858C3A-4E13-420A-A8D0-24F18F395401"), exclusiveto, contract] */
                MIDL_INTERFACE("C9858C3A-4E13-420A-A8D0-24F18F395401")
                IBatteryReport : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChargeRateInMilliwatts(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesignCapacityInMilliwattHours(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FullChargeCapacityInMilliwattHours(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemainingCapacityInMilliwattHours(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Power::BatteryStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBatteryReport=_uuidof(IBatteryReport);
                
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Power.IBatteryStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Power.Battery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBatteryStatics[] = L"Windows.Devices.Power.IBatteryStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Power {
                /* [object, uuid("79CD72B6-9E5E-4452-BEA6-DFCD541E597F"), exclusiveto, contract] */
                MIDL_INTERFACE("79CD72B6-9E5E-4452-BEA6-DFCD541E597F")
                IBatteryStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AggregateBattery(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Power::IBattery * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBatteryStatics=_uuidof(IBatteryStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Power */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBatteryStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Power.Battery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Power.IBatteryStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Power.IBattery ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Power_Battery_DEFINED
#define RUNTIMECLASS_Windows_Devices_Power_Battery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Power_Battery[] = L"Windows.Devices.Power.Battery";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Power.BatteryReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Power.IBatteryReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Power_BatteryReport[] = L"Windows.Devices.Power.BatteryReport";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBattery_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBattery_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBattery __x_ABI_CWindows_CDevices_CPower_CIBattery;

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBattery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics;

#endif // ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBatteryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBatteryVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBatteryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CPower__CBattery;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CPower__CBatteryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CPower__CBattery **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CPower_CIBattery * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CPower__CBatteryVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CPower__CBatteryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CPower__CBattery_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CPower_CIBattery * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_int_INTERFACE_DEFINED__)
#define ____FIReference_1_int_INTERFACE_DEFINED__

typedef interface __FIReference_1_int __FIReference_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_int;

typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;

interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_int_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_int_INTERFACE_DEFINED__







typedef enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus;

















/*
 *
 * Interface Windows.Devices.Power.IBattery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Power.Battery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPower_CIBattery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPower_CIBattery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBattery[] = L"Windows.Devices.Power.IBattery";
/* [object, uuid("BC894FC6-0072-47C8-8B5D-614AAA7A437E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetReport )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * * result
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ReportUpdated )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CPower__CBattery_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ReportUpdated )(
        __x_ABI_CWindows_CDevices_CPower_CIBattery * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPower_CIBatteryVtbl;

interface __x_ABI_CWindows_CDevices_CPower_CIBattery
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPower_CIBatteryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPower_CIBattery_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_GetReport(This,result) \
    ( (This)->lpVtbl->GetReport(This,result) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_add_ReportUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_ReportUpdated(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CPower_CIBattery_remove_ReportUpdated(This,token) \
    ( (This)->lpVtbl->remove_ReportUpdated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBattery;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPower_CIBattery_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Power.IBatteryReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Power.BatteryReport
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBatteryReport[] = L"Windows.Devices.Power.IBatteryReport";
/* [object, uuid("C9858C3A-4E13-420A-A8D0-24F18F395401"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChargeRateInMilliwatts )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesignCapacityInMilliwattHours )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FullChargeCapacityInMilliwattHours )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemainingCapacityInMilliwattHours )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CPower_CBatteryStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl;

interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPower_CIBatteryReportVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_ChargeRateInMilliwatts(This,value) \
    ( (This)->lpVtbl->get_ChargeRateInMilliwatts(This,value) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_DesignCapacityInMilliwattHours(This,value) \
    ( (This)->lpVtbl->get_DesignCapacityInMilliwattHours(This,value) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_FullChargeCapacityInMilliwattHours(This,value) \
    ( (This)->lpVtbl->get_FullChargeCapacityInMilliwattHours(This,value) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_RemainingCapacityInMilliwattHours(This,value) \
    ( (This)->lpVtbl->get_RemainingCapacityInMilliwattHours(This,value) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryReport_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryReport_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Power.IBatteryStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Power.Battery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Power_IBatteryStatics[] = L"Windows.Devices.Power.IBatteryStatics";
/* [object, uuid("79CD72B6-9E5E-4452-BEA6-DFCD541E597F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CPower_CIBatteryStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AggregateBattery )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBattery * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CPower__CBattery * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPower_CIBatteryStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPower_CIBatteryStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_get_AggregateBattery(This,result) \
    ( (This)->lpVtbl->get_AggregateBattery(This,result) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_FromIdAsync(This,deviceId,result) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,result) )

#define __x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_GetDeviceSelector(This,result) \
    ( (This)->lpVtbl->GetDeviceSelector(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPower_CIBatteryStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPower_CIBatteryStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Power.Battery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Power.IBatteryStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Power.IBattery ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Power_Battery_DEFINED
#define RUNTIMECLASS_Windows_Devices_Power_Battery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Power_Battery[] = L"Windows.Devices.Power.Battery";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Power.BatteryReport
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Power.IBatteryReport ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED
#define RUNTIMECLASS_Windows_Devices_Power_BatteryReport_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Power_BatteryReport[] = L"Windows.Devices.Power.BatteryReport";
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
#endif // __windows2Edevices2Epower_p_h__

#endif // __windows2Edevices2Epower_h__
