/* Header file automatically generated from windows.applicationmodel.extendedexecution.idl */
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
#ifndef __windows2Eapplicationmodel2Eextendedexecution_h__
#define __windows2Eapplicationmodel2Eextendedexecution_h__
#ifndef __windows2Eapplicationmodel2Eextendedexecution_p_h__
#define __windows2Eapplicationmodel2Eextendedexecution_p_h__


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
#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                interface IExtendedExecutionRevokedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                interface IExtendedExecutionSession;
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession

#endif // ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                enum ExtendedExecutionResult : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("873c5c7a-c638-5a33-9b03-215c72471663"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1dbb1bc9-6cd7-5947-8cd1-29632b5aa950"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_USE */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                class ExtendedExecutionRevokedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b6d68d9c-9546-50b3-8af6-9c985a372ba8"))
ITypedEventHandler<IInspectable*,ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs*, ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<IInspectable*,ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_t;
#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs*>
//#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<IInspectable*,ABI::Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_USE */


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
        namespace ApplicationModel {
            namespace ExtendedExecution {
                
                typedef enum ExtendedExecutionReason : int ExtendedExecutionReason;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                
                typedef enum ExtendedExecutionResult : int ExtendedExecutionResult;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                
                typedef enum ExtendedExecutionRevokedReason : int ExtendedExecutionRevokedReason;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                class ExtendedExecutionSession;
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                /* [v1_enum, contract] */
                enum ExtendedExecutionReason : int
                {
                    ExtendedExecutionReason_Unspecified = 0,
                    ExtendedExecutionReason_LocationTracking = 1,
                    ExtendedExecutionReason_SavingData = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                /* [v1_enum, contract] */
                enum ExtendedExecutionResult : int
                {
                    ExtendedExecutionResult_Allowed = 0,
                    ExtendedExecutionResult_Denied = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                /* [v1_enum, contract] */
                enum ExtendedExecutionRevokedReason : int
                {
                    ExtendedExecutionRevokedReason_Resumed = 0,
                    ExtendedExecutionRevokedReason_SystemPolicy = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                /* [object, uuid("BFBC9F16-63B5-4C0B-AAD6-828AF5373EC3"), exclusiveto, contract] */
                MIDL_INTERFACE("BFBC9F16-63B5-4C0B-AAD6-828AF5373EC3")
                IExtendedExecutionRevokedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedReason * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExtendedExecutionRevokedEventArgs=_uuidof(IExtendedExecutionRevokedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession[] = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                /* [object, uuid("AF908A2D-118B-48F1-9308-0C4FC41E200F"), exclusiveto, contract] */
                MIDL_INTERFACE("AF908A2D-118B-48F1-9308-0C4FC41E200F")
                IExtendedExecutionSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Reason(
                        /* [in] */ABI::Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionReason value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Description(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PercentProgress(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PercentProgress(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Revoked(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Revoked(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestExtensionAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IExtendedExecutionSession=_uuidof(IExtendedExecutionSession);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* ExtendedExecution */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession[] = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession;

#endif // ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs;

typedef struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * This,/* [in] */ __RPC__in_opt IInspectable * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgsVtbl;

interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason;


typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult;


typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason;













/*
 *
 * Struct Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason
{
    ExtendedExecutionReason_Unspecified = 0,
    ExtendedExecutionReason_LocationTracking = 1,
    ExtendedExecutionReason_SavingData = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionResult
{
    ExtendedExecutionResult_Allowed = 0,
    ExtendedExecutionResult_Denied = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason
{
    ExtendedExecutionRevokedReason_Resumed = 0,
    ExtendedExecutionRevokedReason_SystemPolicy = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs";
/* [object, uuid("BFBC9F16-63B5-4C0B-AAD6-828AF5373EC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionRevokedReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionRevokedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_IExtendedExecutionSession[] = L"Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession";
/* [object, uuid("AF908A2D-118B-48F1-9308-0C4FC41E200F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Reason )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CExtendedExecution_CExtendedExecutionReason value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PercentProgress )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PercentProgress )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [in] */UINT32 value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Revoked )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionRevokedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Revoked )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestExtensionAsync )(
        __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CExtendedExecutionResult * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSessionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_put_Reason(This,value) \
    ( (This)->lpVtbl->put_Reason(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_put_Description(This,value) \
    ( (This)->lpVtbl->put_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_get_PercentProgress(This,value) \
    ( (This)->lpVtbl->get_PercentProgress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_put_PercentProgress(This,value) \
    ( (This)->lpVtbl->put_PercentProgress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_add_Revoked(This,handler,token) \
    ( (This)->lpVtbl->add_Revoked(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_remove_Revoked(This,token) \
    ( (This)->lpVtbl->remove_Revoked(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_RequestExtensionAsync(This,operation) \
    ( (This)->lpVtbl->RequestExtensionAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CIExtendedExecutionSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionRevokedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionRevokedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.ExtendedExecution.IExtendedExecutionSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_ExtendedExecutionSession[] = L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession";
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
#endif // __windows2Eapplicationmodel2Eextendedexecution_p_h__

#endif // __windows2Eapplicationmodel2Eextendedexecution_h__
