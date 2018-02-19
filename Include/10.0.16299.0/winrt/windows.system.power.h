/* Header file automatically generated from windows.system.power.idl */
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
#ifndef __windows2Esystem2Epower_h__
#define __windows2Esystem2Epower_h__
#ifndef __windows2Esystem2Epower_p_h__
#define __windows2Esystem2Epower_p_h__


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
#ifndef ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                interface IBackgroundEnergyManagerStatics;
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics ABI::Windows::System::Power::IBackgroundEnergyManagerStatics

#endif // ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                interface IForegroundEnergyManagerStatics;
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics ABI::Windows::System::Power::IForegroundEnergyManagerStatics

#endif // ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                interface IPowerManagerStatics;
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */
#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics ABI::Windows::System::Power::IPowerManagerStatics

#endif // ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions


#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
        namespace System {
            namespace Power {
                
                typedef enum EnergySaverStatus : int EnergySaverStatus;
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                
                typedef enum PowerSupplyStatus : int PowerSupplyStatus;
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */











/*
 *
 * Struct Windows.System.Power.BatteryStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                /* [v1_enum, contract] */
                enum BatteryStatus : int
                {
                    BatteryStatus_NotPresent = 0,
                    BatteryStatus_Discharging = 1,
                    BatteryStatus_Idle = 2,
                    BatteryStatus_Charging = 3,
                };
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.Power.EnergySaverStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                /* [v1_enum, contract] */
                enum EnergySaverStatus : int
                {
                    EnergySaverStatus_Disabled = 0,
                    EnergySaverStatus_Off = 1,
                    EnergySaverStatus_On = 2,
                };
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.Power.PowerSupplyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                /* [v1_enum, contract] */
                enum PowerSupplyStatus : int
                {
                    PowerSupplyStatus_NotPresent = 0,
                    PowerSupplyStatus_Inadequate = 1,
                    PowerSupplyStatus_Adequate = 2,
                };
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.IBackgroundEnergyManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.BackgroundEnergyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IBackgroundEnergyManagerStatics[] = L"Windows.System.Power.IBackgroundEnergyManagerStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                /* [object, uuid("B3161D95-1180-4376-96E1-4095568147CE"), exclusiveto, contract] */
                MIDL_INTERFACE("B3161D95-1180-4376-96E1-4095568147CE")
                IBackgroundEnergyManagerStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LowUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NearMaxAcceptableUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxAcceptableUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExcessiveUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NearTerminationUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TerminationUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecentEnergyUsage(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecentEnergyUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageIncreased(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageIncreased(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageReturnedToLow(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageReturnedToLow(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IBackgroundEnergyManagerStatics=_uuidof(IBackgroundEnergyManagerStatics);
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.IForegroundEnergyManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.ForegroundEnergyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IForegroundEnergyManagerStatics[] = L"Windows.System.Power.IForegroundEnergyManagerStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                /* [object, uuid("9FF86872-E677-4814-9A20-5337CA732B98"), exclusiveto, contract] */
                MIDL_INTERFACE("9FF86872-E677-4814-9A20-5337CA732B98")
                IForegroundEnergyManagerStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LowUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NearMaxAcceptableUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxAcceptableUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExcessiveUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecentEnergyUsage(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RecentEnergyUsageLevel(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageIncreased(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageIncreased(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RecentEnergyUsageReturnedToLow(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RecentEnergyUsageReturnedToLow(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IForegroundEnergyManagerStatics=_uuidof(IForegroundEnergyManagerStatics);
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.IPowerManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.PowerManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IPowerManagerStatics[] = L"Windows.System.Power.IPowerManagerStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                /* [object, uuid("1394825D-62CE-4364-98D5-AA28C7FBD15B"), exclusiveto, contract] */
                MIDL_INTERFACE("1394825D-62CE-4364-98D5-AA28C7FBD15B")
                IPowerManagerStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnergySaverStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Power::EnergySaverStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnergySaverStatusChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnergySaverStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BatteryStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Power::BatteryStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_BatteryStatusChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_BatteryStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowerSupplyStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::System::Power::PowerSupplyStatus * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PowerSupplyStatusChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PowerSupplyStatusChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemainingChargePercent(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RemainingChargePercentChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RemainingChargePercentChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemainingDischargeTime(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RemainingDischargeTimeChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RemainingDischargeTimeChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPowerManagerStatics=_uuidof(IPowerManagerStatics);
                
            } /* Windows */
        } /* System */
    } /* Power */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.BackgroundEnergyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.IBackgroundEnergyManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_BackgroundEnergyManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_BackgroundEnergyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_BackgroundEnergyManager[] = L"Windows.System.Power.BackgroundEnergyManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.ForegroundEnergyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.IForegroundEnergyManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_ForegroundEnergyManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_ForegroundEnergyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_ForegroundEnergyManager[] = L"Windows.System.Power.ForegroundEnergyManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.PowerManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.IPowerManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_PowerManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_PowerManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_PowerManager[] = L"Windows.System.Power.PowerManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus __x_ABI_CWindows_CSystem_CPower_CBatteryStatus;


typedef enum __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus;


typedef enum __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus;











/*
 *
 * Struct Windows.System.Power.BatteryStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CPower_CBatteryStatus
{
    BatteryStatus_NotPresent = 0,
    BatteryStatus_Discharging = 1,
    BatteryStatus_Idle = 2,
    BatteryStatus_Charging = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.Power.EnergySaverStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus
{
    EnergySaverStatus_Disabled = 0,
    EnergySaverStatus_Off = 1,
    EnergySaverStatus_On = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.System.Power.PowerSupplyStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus
{
    PowerSupplyStatus_NotPresent = 0,
    PowerSupplyStatus_Inadequate = 1,
    PowerSupplyStatus_Adequate = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.IBackgroundEnergyManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.BackgroundEnergyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IBackgroundEnergyManagerStatics[] = L"Windows.System.Power.IBackgroundEnergyManagerStatics";
/* [object, uuid("B3161D95-1180-4376-96E1-4095568147CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LowUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NearMaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExcessiveUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NearTerminationUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TerminationUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_LowUsageLevel(This,value) \
    ( (This)->lpVtbl->get_LowUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_NearMaxAcceptableUsageLevel(This,value) \
    ( (This)->lpVtbl->get_NearMaxAcceptableUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_MaxAcceptableUsageLevel(This,value) \
    ( (This)->lpVtbl->get_MaxAcceptableUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_ExcessiveUsageLevel(This,value) \
    ( (This)->lpVtbl->get_ExcessiveUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_NearTerminationUsageLevel(This,value) \
    ( (This)->lpVtbl->get_NearTerminationUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_TerminationUsageLevel(This,value) \
    ( (This)->lpVtbl->get_TerminationUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_RecentEnergyUsage(This,value) \
    ( (This)->lpVtbl->get_RecentEnergyUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_get_RecentEnergyUsageLevel(This,value) \
    ( (This)->lpVtbl->get_RecentEnergyUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_add_RecentEnergyUsageIncreased(This,handler,token) \
    ( (This)->lpVtbl->add_RecentEnergyUsageIncreased(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_remove_RecentEnergyUsageIncreased(This,token) \
    ( (This)->lpVtbl->remove_RecentEnergyUsageIncreased(This,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_add_RecentEnergyUsageReturnedToLow(This,handler,token) \
    ( (This)->lpVtbl->add_RecentEnergyUsageReturnedToLow(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_remove_RecentEnergyUsageReturnedToLow(This,token) \
    ( (This)->lpVtbl->remove_RecentEnergyUsageReturnedToLow(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIBackgroundEnergyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.IForegroundEnergyManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.ForegroundEnergyManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IForegroundEnergyManagerStatics[] = L"Windows.System.Power.IForegroundEnergyManagerStatics";
/* [object, uuid("9FF86872-E677-4814-9A20-5337CA732B98"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LowUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NearMaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxAcceptableUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExcessiveUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RecentEnergyUsageLevel )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageIncreased )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RecentEnergyUsageReturnedToLow )(
        __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_LowUsageLevel(This,value) \
    ( (This)->lpVtbl->get_LowUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_NearMaxAcceptableUsageLevel(This,value) \
    ( (This)->lpVtbl->get_NearMaxAcceptableUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_MaxAcceptableUsageLevel(This,value) \
    ( (This)->lpVtbl->get_MaxAcceptableUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_ExcessiveUsageLevel(This,value) \
    ( (This)->lpVtbl->get_ExcessiveUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_RecentEnergyUsage(This,value) \
    ( (This)->lpVtbl->get_RecentEnergyUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_get_RecentEnergyUsageLevel(This,value) \
    ( (This)->lpVtbl->get_RecentEnergyUsageLevel(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_add_RecentEnergyUsageIncreased(This,handler,token) \
    ( (This)->lpVtbl->add_RecentEnergyUsageIncreased(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_remove_RecentEnergyUsageIncreased(This,token) \
    ( (This)->lpVtbl->remove_RecentEnergyUsageIncreased(This,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_add_RecentEnergyUsageReturnedToLow(This,handler,token) \
    ( (This)->lpVtbl->add_RecentEnergyUsageReturnedToLow(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_remove_RecentEnergyUsageReturnedToLow(This,token) \
    ( (This)->lpVtbl->remove_RecentEnergyUsageReturnedToLow(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIForegroundEnergyManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.IPowerManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.PowerManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_IPowerManagerStatics[] = L"Windows.System.Power.IPowerManagerStatics";
/* [object, uuid("1394825D-62CE-4364-98D5-AA28C7FBD15B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnergySaverStatus )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CPower_CEnergySaverStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnergySaverStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnergySaverStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BatteryStatus )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CPower_CBatteryStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_BatteryStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_BatteryStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowerSupplyStatus )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CPower_CPowerSupplyStatus * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PowerSupplyStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PowerSupplyStatusChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemainingChargePercent )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RemainingChargePercentChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RemainingChargePercentChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemainingDischargeTime )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RemainingDischargeTimeChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RemainingDischargeTimeChanged )(
        __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_EnergySaverStatus(This,value) \
    ( (This)->lpVtbl->get_EnergySaverStatus(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_EnergySaverStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_EnergySaverStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_EnergySaverStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_EnergySaverStatusChanged(This,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_BatteryStatus(This,value) \
    ( (This)->lpVtbl->get_BatteryStatus(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_BatteryStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_BatteryStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_BatteryStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_BatteryStatusChanged(This,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_PowerSupplyStatus(This,value) \
    ( (This)->lpVtbl->get_PowerSupplyStatus(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_PowerSupplyStatusChanged(This,handler,token) \
    ( (This)->lpVtbl->add_PowerSupplyStatusChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_PowerSupplyStatusChanged(This,token) \
    ( (This)->lpVtbl->remove_PowerSupplyStatusChanged(This,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_RemainingChargePercent(This,value) \
    ( (This)->lpVtbl->get_RemainingChargePercent(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_RemainingChargePercentChanged(This,handler,token) \
    ( (This)->lpVtbl->add_RemainingChargePercentChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_RemainingChargePercentChanged(This,token) \
    ( (This)->lpVtbl->remove_RemainingChargePercentChanged(This,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_get_RemainingDischargeTime(This,value) \
    ( (This)->lpVtbl->get_RemainingDischargeTime(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_add_RemainingDischargeTimeChanged(This,handler,token) \
    ( (This)->lpVtbl->add_RemainingDischargeTimeChanged(This,handler,token) )

#define __x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_remove_RemainingDischargeTimeChanged(This,token) \
    ( (This)->lpVtbl->remove_RemainingDischargeTimeChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CIPowerManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.BackgroundEnergyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.IBackgroundEnergyManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_BackgroundEnergyManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_BackgroundEnergyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_BackgroundEnergyManager[] = L"Windows.System.Power.BackgroundEnergyManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.ForegroundEnergyManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.IForegroundEnergyManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_ForegroundEnergyManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_ForegroundEnergyManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_ForegroundEnergyManager[] = L"Windows.System.Power.ForegroundEnergyManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.PowerManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.IPowerManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_PowerManager_DEFINED
#define RUNTIMECLASS_Windows_System_Power_PowerManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_PowerManager[] = L"Windows.System.Power.PowerManager";
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
#endif // __windows2Esystem2Epower_p_h__

#endif // __windows2Esystem2Epower_h__
