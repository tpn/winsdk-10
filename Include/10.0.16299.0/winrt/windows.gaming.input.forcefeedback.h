/* Header file automatically generated from windows.gaming.input.forcefeedback.idl */
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
#ifndef __windows2Egaming2Einput2Eforcefeedback_h__
#define __windows2Egaming2Einput2Eforcefeedback_h__
#ifndef __windows2Egaming2Einput2Eforcefeedback_p_h__
#define __windows2Egaming2Einput2Eforcefeedback_p_h__


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
#include "Windows.Foundation.Numerics.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IConditionForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect ABI::Windows::Gaming::Input::ForceFeedback::IConditionForceEffect

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IConditionForceEffectFactory;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory ABI::Windows::Gaming::Input::ForceFeedback::IConditionForceEffectFactory

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IConstantForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect ABI::Windows::Gaming::Input::ForceFeedback::IConstantForceEffect

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IForceFeedbackEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IForceFeedbackMotor;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IPeriodicForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect ABI::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IPeriodicForceEffectFactory;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory ABI::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffectFactory

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    interface IRampForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect ABI::Windows::Gaming::Input::ForceFeedback::IRampForceEffect

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    class ForceFeedbackMotor;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64cf69e0-5464-5b72-bd4b-82f7c3d0386d"))
IIterator<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*, ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t;
#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
//#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c14440d1-fea0-5147-aed8-9b85239da882"))
IIterable<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*, ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t;
#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
//#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5bfc5070-101d-5fbb-8d5f-ce5c23becdd9"))
IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*, ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackMotor*> __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t;
#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
//#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackMotor*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    enum ForceFeedbackLoadEffectResult : int;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8220a41-f738-51e8-89ba-76bbd66158cb"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackLoadEffectResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("21f834fc-e845-5ab9-bf85-9534e2397798"))
IAsyncOperation<enum ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> : IAsyncOperation_impl<enum ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.Input.ForceFeedback.ForceFeedbackLoadEffectResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult> __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_t;
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
//#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackLoadEffectResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    
                    typedef enum ConditionForceEffectKind : int ConditionForceEffectKind;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    
                    typedef enum ForceFeedbackEffectAxes : unsigned int ForceFeedbackEffectAxes;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    
                    typedef enum ForceFeedbackEffectState : int ForceFeedbackEffectState;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    
                    typedef enum ForceFeedbackLoadEffectResult : int ForceFeedbackLoadEffectResult;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    
                    typedef enum PeriodicForceEffectKind : int PeriodicForceEffectKind;
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    class ConditionForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    class ConstantForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    class PeriodicForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    class RampForceEffect;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */












/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ConditionForceEffectKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [v1_enum, contract] */
                    enum ConditionForceEffectKind : int
                    {
                        ConditionForceEffectKind_Spring = 0,
                        ConditionForceEffectKind_Damper = 1,
                        ConditionForceEffectKind_Inertia = 2,
                        ConditionForceEffectKind_Friction = 3,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectAxes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [v1_enum, flags, contract] */
                    enum ForceFeedbackEffectAxes : unsigned int
                    {
                        ForceFeedbackEffectAxes_None = 0,
                        ForceFeedbackEffectAxes_X = 0x1,
                        ForceFeedbackEffectAxes_Y = 0x2,
                        ForceFeedbackEffectAxes_Z = 0x4,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(ForceFeedbackEffectAxes)
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [v1_enum, contract] */
                    enum ForceFeedbackEffectState : int
                    {
                        ForceFeedbackEffectState_Stopped = 0,
                        ForceFeedbackEffectState_Running = 1,
                        ForceFeedbackEffectState_Paused = 2,
                        ForceFeedbackEffectState_Faulted = 3,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ForceFeedbackLoadEffectResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [v1_enum, contract] */
                    enum ForceFeedbackLoadEffectResult : int
                    {
                        ForceFeedbackLoadEffectResult_Succeeded = 0,
                        ForceFeedbackLoadEffectResult_EffectStorageFull = 1,
                        ForceFeedbackLoadEffectResult_EffectNotSupported = 2,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.PeriodicForceEffectKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [v1_enum, contract] */
                    enum PeriodicForceEffectKind : int
                    {
                        PeriodicForceEffectKind_SquareWave = 0,
                        PeriodicForceEffectKind_SineWave = 1,
                        PeriodicForceEffectKind_TriangleWave = 2,
                        PeriodicForceEffectKind_SawtoothWaveUp = 3,
                        PeriodicForceEffectKind_SawtoothWaveDown = 4,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IConditionForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ConditionForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffect";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("32D1EA68-3695-4E69-85C0-CD1944189140"), exclusiveto, contract] */
                    MIDL_INTERFACE("32D1EA68-3695-4E69-85C0-CD1944189140")
                    IConditionForceEffect : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParameters(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 direction,
                            /* [in] */FLOAT positiveCoefficient,
                            /* [in] */FLOAT negativeCoefficient,
                            /* [in] */FLOAT maxPositiveMagnitude,
                            /* [in] */FLOAT maxNegativeMagnitude,
                            /* [in] */FLOAT deadZone,
                            /* [in] */FLOAT bias
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IConditionForceEffect=_uuidof(IConditionForceEffect);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ConditionForceEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory[] = L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("91A99264-1810-4EB6-A773-BFD3B8CDDBAB"), exclusiveto, contract] */
                    MIDL_INTERFACE("91A99264-1810-4EB6-A773-BFD3B8CDDBAB")
                    IConditionForceEffectFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::Gaming::Input::ForceFeedback::ConditionForceEffectKind effectKind,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IConditionForceEffectFactory=_uuidof(IConditionForceEffectFactory);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IConstantForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ConstantForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IConstantForceEffect";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("9BFA0140-F3C7-415C-B068-0F068734BCE0"), exclusiveto, contract] */
                    MIDL_INTERFACE("9BFA0140-F3C7-415C-B068-0F068734BCE0")
                    IConstantForceEffect : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetParameters(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 vector,
                            /* [in] */ABI::Windows::Foundation::TimeSpan duration
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParametersWithEnvelope(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 vector,
                            /* [in] */FLOAT attackGain,
                            /* [in] */FLOAT sustainGain,
                            /* [in] */FLOAT releaseGain,
                            /* [in] */ABI::Windows::Foundation::TimeSpan startDelay,
                            /* [in] */ABI::Windows::Foundation::TimeSpan attackDuration,
                            /* [in] */ABI::Windows::Foundation::TimeSpan sustainDuration,
                            /* [in] */ABI::Windows::Foundation::TimeSpan releaseDuration,
                            /* [in] */UINT32 repeatCount
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IConstantForceEffect=_uuidof(IConstantForceEffect);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect[] = L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("A17FBA0C-2AE4-48C2-8063-EABD0777CB89"), contract] */
                    MIDL_INTERFACE("A17FBA0C-2AE4-48C2-8063-EABD0777CB89")
                    IForceFeedbackEffect : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gain(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Gain(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectState * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IForceFeedbackEffect=_uuidof(IForceFeedbackEffect);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor[] = L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("8D3D417C-A5EA-4516-8026-2B00F74EF6E5"), exclusiveto, contract] */
                    MIDL_INTERFACE("8D3D417C-A5EA-4516-8026-2B00F74EF6E5")
                    IForceFeedbackMotor : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreEffectsPaused(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MasterGain(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MasterGain(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedAxes(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::ForceFeedback::ForceFeedbackEffectAxes * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadEffectAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect * effect,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * * asyncOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE PauseAllEffects(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ResumeAllEffects(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE StopAllEffects(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryDisableAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryEnableAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryResetAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryUnloadEffectAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect * effect,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IForceFeedbackMotor=_uuidof(IForceFeedbackMotor);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("5C5138D7-FC75-4D52-9A0A-EFE4CAB5FE64"), exclusiveto, contract] */
                    MIDL_INTERFACE("5C5138D7-FC75-4D52-9A0A-EFE4CAB5FE64")
                    IPeriodicForceEffect : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParameters(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 vector,
                            /* [in] */FLOAT frequency,
                            /* [in] */FLOAT phase,
                            /* [in] */FLOAT bias,
                            /* [in] */ABI::Windows::Foundation::TimeSpan duration
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParametersWithEnvelope(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 vector,
                            /* [in] */FLOAT frequency,
                            /* [in] */FLOAT phase,
                            /* [in] */FLOAT bias,
                            /* [in] */FLOAT attackGain,
                            /* [in] */FLOAT sustainGain,
                            /* [in] */FLOAT releaseGain,
                            /* [in] */ABI::Windows::Foundation::TimeSpan startDelay,
                            /* [in] */ABI::Windows::Foundation::TimeSpan attackDuration,
                            /* [in] */ABI::Windows::Foundation::TimeSpan sustainDuration,
                            /* [in] */ABI::Windows::Foundation::TimeSpan releaseDuration,
                            /* [in] */UINT32 repeatCount
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPeriodicForceEffect=_uuidof(IPeriodicForceEffect);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory[] = L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("6F62EB1A-9851-477B-B318-35ECAA15070F"), exclusiveto, contract] */
                    MIDL_INTERFACE("6F62EB1A-9851-477B-B318-35ECAA15070F")
                    IPeriodicForceEffectFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::Gaming::Input::ForceFeedback::PeriodicForceEffectKind effectKind,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPeriodicForceEffectFactory=_uuidof(IPeriodicForceEffectFactory);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IRampForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.RampForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IRampForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IRampForceEffect";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace ForceFeedback {
                    /* [object, uuid("F1F81259-1CA6-4080-B56D-B43F3354D052"), exclusiveto, contract] */
                    MIDL_INTERFACE("F1F81259-1CA6-4080-B56D-B43F3354D052")
                    IRampForceEffect : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetParameters(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 startVector,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 endVector,
                            /* [in] */ABI::Windows::Foundation::TimeSpan duration
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetParametersWithEnvelope(
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 startVector,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 endVector,
                            /* [in] */FLOAT attackGain,
                            /* [in] */FLOAT sustainGain,
                            /* [in] */FLOAT releaseGain,
                            /* [in] */ABI::Windows::Foundation::TimeSpan startDelay,
                            /* [in] */ABI::Windows::Foundation::TimeSpan attackDuration,
                            /* [in] */ABI::Windows::Foundation::TimeSpan sustainDuration,
                            /* [in] */ABI::Windows::Foundation::TimeSpan releaseDuration,
                            /* [in] */UINT32 repeatCount
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRampForceEffect=_uuidof(IRampForceEffect);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* ForceFeedback */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.ConditionForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IConditionForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.ConstantForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IConstantForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.ConstantForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor[] = L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.RampForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IRampForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_RampForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_RampForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_RampForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.RampForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect;

#endif // ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

typedef struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;

interface __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

typedef  struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;

interface __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor;

typedef struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl;

interface __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackMotor_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;





typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind;


typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes;


typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState;


typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult;


typedef enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind;
























/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ConditionForceEffectKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind
{
    ConditionForceEffectKind_Spring = 0,
    ConditionForceEffectKind_Damper = 1,
    ConditionForceEffectKind_Inertia = 2,
    ConditionForceEffectKind_Friction = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectAxes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes
{
    ForceFeedbackEffectAxes_None = 0,
    ForceFeedbackEffectAxes_X = 0x1,
    ForceFeedbackEffectAxes_Y = 0x2,
    ForceFeedbackEffectAxes_Z = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ForceFeedbackEffectState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState
{
    ForceFeedbackEffectState_Stopped = 0,
    ForceFeedbackEffectState_Running = 1,
    ForceFeedbackEffectState_Paused = 2,
    ForceFeedbackEffectState_Faulted = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.ForceFeedbackLoadEffectResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackLoadEffectResult
{
    ForceFeedbackLoadEffectResult_Succeeded = 0,
    ForceFeedbackLoadEffectResult_EffectStorageFull = 1,
    ForceFeedbackLoadEffectResult_EffectNotSupported = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Gaming.Input.ForceFeedback.PeriodicForceEffectKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind
{
    PeriodicForceEffectKind_SquareWave = 0,
    PeriodicForceEffectKind_SineWave = 1,
    PeriodicForceEffectKind_TriangleWave = 2,
    PeriodicForceEffectKind_SawtoothWaveUp = 3,
    PeriodicForceEffectKind_SawtoothWaveDown = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IConditionForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ConditionForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConditionForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffect";
/* [object, uuid("32D1EA68-3695-4E69-85C0-CD1944189140"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 direction,
        /* [in] */FLOAT positiveCoefficient,
        /* [in] */FLOAT negativeCoefficient,
        /* [in] */FLOAT maxPositiveMagnitude,
        /* [in] */FLOAT maxNegativeMagnitude,
        /* [in] */FLOAT deadZone,
        /* [in] */FLOAT bias
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_SetParameters(This,direction,positiveCoefficient,negativeCoefficient,maxPositiveMagnitude,maxNegativeMagnitude,deadZone,bias) \
    ( (This)->lpVtbl->SetParameters(This,direction,positiveCoefficient,negativeCoefficient,maxPositiveMagnitude,maxNegativeMagnitude,deadZone,bias) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ConditionForceEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConditionForceEffectFactory[] = L"Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory";
/* [object, uuid("91A99264-1810-4EB6-A773-BFD3B8CDDBAB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CForceFeedback_CConditionForceEffectKind effectKind,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactoryVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_CreateInstance(This,effectKind,value) \
    ( (This)->lpVtbl->CreateInstance(This,effectKind,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConditionForceEffectFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IConstantForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ConstantForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IConstantForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IConstantForceEffect";
/* [object, uuid("9BFA0140-F3C7-415C-B068-0F068734BCE0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *SetParametersWithEnvelope )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
        /* [in] */FLOAT attackGain,
        /* [in] */FLOAT sustainGain,
        /* [in] */FLOAT releaseGain,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan startDelay,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan attackDuration,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan sustainDuration,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan releaseDuration,
        /* [in] */UINT32 repeatCount
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffectVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_SetParameters(This,vector,duration) \
    ( (This)->lpVtbl->SetParameters(This,vector,duration) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_SetParametersWithEnvelope(This,vector,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) \
    ( (This)->lpVtbl->SetParametersWithEnvelope(This,vector,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIConstantForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IForceFeedbackEffect[] = L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect";
/* [object, uuid("A17FBA0C-2AE4-48C2-8063-EABD0777CB89"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Gain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffectVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_get_Gain(This,value) \
    ( (This)->lpVtbl->get_Gain(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_put_Gain(This,value) \
    ( (This)->lpVtbl->put_Gain(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IForceFeedbackMotor[] = L"Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor";
/* [object, uuid("8D3D417C-A5EA-4516-8026-2B00F74EF6E5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreEffectsPaused )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MasterGain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MasterGain )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedAxes )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CForceFeedbackEffectAxes * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadEffectAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * effect,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CInput__CForceFeedback__CForceFeedbackLoadEffectResult * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *PauseAllEffects )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
        );
    HRESULT ( STDMETHODCALLTYPE *ResumeAllEffects )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
        );
    HRESULT ( STDMETHODCALLTYPE *StopAllEffects )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryDisableAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryEnableAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryResetAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryUnloadEffectAsync )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * effect,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotorVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_get_AreEffectsPaused(This,value) \
    ( (This)->lpVtbl->get_AreEffectsPaused(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_get_MasterGain(This,value) \
    ( (This)->lpVtbl->get_MasterGain(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_put_MasterGain(This,value) \
    ( (This)->lpVtbl->put_MasterGain(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_get_SupportedAxes(This,value) \
    ( (This)->lpVtbl->get_SupportedAxes(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_LoadEffectAsync(This,effect,asyncOperation) \
    ( (This)->lpVtbl->LoadEffectAsync(This,effect,asyncOperation) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_PauseAllEffects(This) \
    ( (This)->lpVtbl->PauseAllEffects(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_ResumeAllEffects(This) \
    ( (This)->lpVtbl->ResumeAllEffects(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_StopAllEffects(This) \
    ( (This)->lpVtbl->StopAllEffects(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_TryDisableAsync(This,asyncOperation) \
    ( (This)->lpVtbl->TryDisableAsync(This,asyncOperation) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_TryEnableAsync(This,asyncOperation) \
    ( (This)->lpVtbl->TryEnableAsync(This,asyncOperation) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_TryResetAsync(This,asyncOperation) \
    ( (This)->lpVtbl->TryResetAsync(This,asyncOperation) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_TryUnloadEffectAsync(This,effect,asyncOperation) \
    ( (This)->lpVtbl->TryUnloadEffectAsync(This,effect,asyncOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackMotor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect";
/* [object, uuid("5C5138D7-FC75-4D52-9A0A-EFE4CAB5FE64"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
        /* [in] */FLOAT frequency,
        /* [in] */FLOAT phase,
        /* [in] */FLOAT bias,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *SetParametersWithEnvelope )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 vector,
        /* [in] */FLOAT frequency,
        /* [in] */FLOAT phase,
        /* [in] */FLOAT bias,
        /* [in] */FLOAT attackGain,
        /* [in] */FLOAT sustainGain,
        /* [in] */FLOAT releaseGain,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan startDelay,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan attackDuration,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan sustainDuration,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan releaseDuration,
        /* [in] */UINT32 repeatCount
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_SetParameters(This,vector,frequency,phase,bias,duration) \
    ( (This)->lpVtbl->SetParameters(This,vector,frequency,phase,bias,duration) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_SetParametersWithEnvelope(This,vector,frequency,phase,bias,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) \
    ( (This)->lpVtbl->SetParametersWithEnvelope(This,vector,frequency,phase,bias,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IPeriodicForceEffectFactory[] = L"Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory";
/* [object, uuid("6F62EB1A-9851-477B-B318-35ECAA15070F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CForceFeedback_CPeriodicForceEffectKind effectKind,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIForceFeedbackEffect * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactoryVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_CreateInstance(This,effectKind,value) \
    ( (This)->lpVtbl->CreateInstance(This,effectKind,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIPeriodicForceEffectFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Gaming.Input.ForceFeedback.IRampForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.ForceFeedback.RampForceEffect
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_ForceFeedback_IRampForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.IRampForceEffect";
/* [object, uuid("F1F81259-1CA6-4080-B56D-B43F3354D052"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetParameters )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 startVector,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 endVector,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan duration
        );
    HRESULT ( STDMETHODCALLTYPE *SetParametersWithEnvelope )(
        __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 startVector,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 endVector,
        /* [in] */FLOAT attackGain,
        /* [in] */FLOAT sustainGain,
        /* [in] */FLOAT releaseGain,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan startDelay,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan attackDuration,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan sustainDuration,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan releaseDuration,
        /* [in] */UINT32 repeatCount
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffectVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_SetParameters(This,startVector,endVector,duration) \
    ( (This)->lpVtbl->SetParameters(This,startVector,endVector,duration) )

#define __x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_SetParametersWithEnvelope(This,startVector,endVector,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) \
    ( (This)->lpVtbl->SetParametersWithEnvelope(This,startVector,endVector,attackGain,sustainGain,releaseGain,startDelay,attackDuration,sustainDuration,releaseDuration,repeatCount) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CForceFeedback_CIRampForceEffect_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.ConditionForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Gaming.Input.ForceFeedback.IConditionForceEffectFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IConditionForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ConditionForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.ConditionForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.ConstantForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IConstantForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ConstantForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.ConstantForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackMotor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_ForceFeedbackMotor[] = L"Windows.Gaming.Input.ForceFeedback.ForceFeedbackMotor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffectFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IPeriodicForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_PeriodicForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.PeriodicForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Gaming.Input.ForceFeedback.RampForceEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Input.ForceFeedback.IForceFeedbackEffect ** Default Interface **
 *    Windows.Gaming.Input.ForceFeedback.IRampForceEffect
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_RampForceEffect_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_ForceFeedback_RampForceEffect_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_ForceFeedback_RampForceEffect[] = L"Windows.Gaming.Input.ForceFeedback.RampForceEffect";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egaming2Einput2Eforcefeedback_p_h__

#endif // __windows2Egaming2Einput2Eforcefeedback_h__
