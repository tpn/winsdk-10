

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Eapplicationmodel2Eextendedexecution2Eforeground_h__
#define __windows2Eapplicationmodel2Eextendedexecution2Eforeground_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;

#endif 	/* ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__
#define ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs;

#endif 	/* ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    interface IExtendedExecutionForegroundRevokedEventArgs;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    interface IExtendedExecutionForegroundSession;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace ExtendedExecution {
namespace Foreground {
enum ExtendedExecutionForegroundResult;
} /*Foreground*/
} /*ExtendedExecution*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0325 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0325 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0325_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0325_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07e1dc01-18ba-596a-b745-79f9cde44ccc"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundResult>"; }
};
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0326 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0326 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0326_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0326_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b18ea00f-8c20-5ac2-9246-3ef405271f1a"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundResult>"; }
};
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult> __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_t;
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_USE */

interface IInspectable;
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace ExtendedExecution {
namespace Foreground {
class ExtendedExecutionForegroundRevokedEventArgs;
} /*Foreground*/
} /*ExtendedExecution*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace ExtendedExecution {
namespace Foreground {
interface IExtendedExecutionForegroundRevokedEventArgs;
} /*Foreground*/
} /*ExtendedExecution*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0002 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0327 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0327 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0327_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0327_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0003 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_USE
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f874197a-bf19-5482-9ab1-34923de6738d"))
ITypedEventHandler<IInspectable*,ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs*> : ITypedEventHandler_impl<IInspectable*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs*, ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Object, Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedEventArgs>"; }
};
typedef ITypedEventHandler<IInspectable*,ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedEventArgs*> __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_t;
#define ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason;


#endif /* end if !defined(__cplusplus) */


#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace ExtendedExecution {
namespace Foreground {
class ExtendedExecutionForegroundSession;
} /*Foreground*/
} /*ExtendedExecution*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0003 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    
                    typedef enum ExtendedExecutionForegroundReason ExtendedExecutionForegroundReason;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    
                    typedef enum ExtendedExecutionForegroundResult ExtendedExecutionForegroundResult;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    
                    typedef enum ExtendedExecutionForegroundRevokedReason ExtendedExecutionForegroundRevokedReason;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0328 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0328 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0328_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0328_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0004_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07e1dc01-18ba-596a-b745-79f9cde44ccc")
    __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0005 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0329 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0329 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0329_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0329_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0006_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b18ea00f-8c20-5ac2-9246-3ef405271f1a")
    __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__out enum ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundResult *results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult * This,
            /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult *results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl;

    interface __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0007 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0330 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0330 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0330_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground2Eidl_0000_0330_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0008 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs
#define DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0008_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f874197a-bf19-5482-9ab1-34923de6738d")
    __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IInspectable *sender,
            /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs * This,
            /* [in] */ __RPC__in_opt IInspectable *sender,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgsVtbl;

    interface __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs
    {
        CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason
    {
        ExtendedExecutionForegroundReason_Unspecified	= 0,
        ExtendedExecutionForegroundReason_SavingData	= 1,
        ExtendedExecutionForegroundReason_BackgroundAudio	= 2,
        ExtendedExecutionForegroundReason_Unconstrained	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundResult
    {
        ExtendedExecutionForegroundResult_Allowed	= 0,
        ExtendedExecutionForegroundResult_Denied	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason
    {
        ExtendedExecutionForegroundRevokedReason_Resumed	= 0,
        ExtendedExecutionForegroundRevokedReason_SystemPolicy	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.IExtendedExecutionForegroundRevokedEventArgs";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0009 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    
                    /* [v1_enum] */ 
                    enum ExtendedExecutionForegroundReason
                        {
                            ExtendedExecutionForegroundReason_Unspecified	= 0,
                            ExtendedExecutionForegroundReason_SavingData	= 1,
                            ExtendedExecutionForegroundReason_BackgroundAudio	= 2,
                            ExtendedExecutionForegroundReason_Unconstrained	= 3
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    
                    /* [v1_enum] */ 
                    enum ExtendedExecutionForegroundResult
                        {
                            ExtendedExecutionForegroundResult_Allowed	= 0,
                            ExtendedExecutionForegroundResult_Denied	= 1
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace ExtendedExecution {
                namespace Foreground {
                    
                    /* [v1_enum] */ 
                    enum ExtendedExecutionForegroundRevokedReason
                        {
                            ExtendedExecutionForegroundRevokedReason_Resumed	= 0,
                            ExtendedExecutionForegroundRevokedReason_SystemPolicy	= 1
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0009_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace ExtendedExecution {
                    namespace Foreground {
                        
                        MIDL_INTERFACE("B07CD940-9557-AEA4-2C99-BDD56D9BE461")
                        IExtendedExecutionForegroundRevokedEventArgs : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Reason( 
                                /* [out][retval] */ __RPC__out ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundRevokedReason *value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IExtendedExecutionForegroundRevokedEventArgs = __uuidof(IExtendedExecutionForegroundRevokedEventArgs);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reason )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundRevokedReason *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_get_Reason(This,value)	\
    ( (This)->lpVtbl -> get_Reason(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundRevokedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0010 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_ExtendedExecution_Foreground_IExtendedExecutionForegroundSession[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.IExtendedExecutionForegroundSession";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0010_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace ExtendedExecution {
                    namespace Foreground {
                        
                        MIDL_INTERFACE("FBF440E1-9D10-4201-B01E-C83275296F2E")
                        IExtendedExecutionForegroundSession : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE add_Revoked( 
                                /* [in] */ __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs *handler,
                                /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE remove_Revoked( 
                                /* [in] */ EventRegistrationToken token) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE RequestExtensionAsync( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult **operation) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Reason( 
                                /* [out][retval] */ __RPC__out ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Reason( 
                                /* [in] */ ABI::Windows::ApplicationModel::ExtendedExecution::Foreground::ExtendedExecutionForegroundReason value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IExtendedExecutionForegroundSession = __uuidof(IExtendedExecutionForegroundSession);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [in] */ __RPC__in HSTRING value);
        
        HRESULT ( STDMETHODCALLTYPE *add_Revoked )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundRevokedEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_Revoked )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *RequestExtensionAsync )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CExtendedExecution__CForeground__CExtendedExecutionForegroundResult **operation);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Reason )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Reason )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CExtendedExecutionForegroundReason value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSessionVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_get_Description(This,value)	\
    ( (This)->lpVtbl -> get_Description(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_put_Description(This,value)	\
    ( (This)->lpVtbl -> put_Description(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_add_Revoked(This,handler,token)	\
    ( (This)->lpVtbl -> add_Revoked(This,handler,token) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_remove_Revoked(This,token)	\
    ( (This)->lpVtbl -> remove_Revoked(This,token) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_RequestExtensionAsync(This,operation)	\
    ( (This)->lpVtbl -> RequestExtensionAsync(This,operation) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_get_Reason(This,value)	\
    ( (This)->lpVtbl -> get_Reason(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_put_Reason(This,value)	\
    ( (This)->lpVtbl -> put_Reason(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CExtendedExecution_CForeground_CIExtendedExecutionForegroundSession_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0011 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundRevokedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundRevokedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundRevokedEventArgs[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundRevokedEventArgs";
#endif
#ifndef RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundSession_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_ExtendedExecution_Foreground_ExtendedExecutionForegroundSession[] = L"Windows.ApplicationModel.ExtendedExecution.Foreground.ExtendedExecutionForegroundSession";
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Eextendedexecution2Eforeground_0000_0011_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


