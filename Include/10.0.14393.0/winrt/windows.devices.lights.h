

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

#ifndef __windows2Edevices2Elights_h__
#define __windows2Edevices2Elights_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;

#endif 	/* ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs;

#endif 	/* ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CLights_CILamp __x_ABI_CWindows_CDevices_CLights_CILamp;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                interface ILamp;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CLights_CILamp_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                interface ILampAvailabilityChangedEventArgs;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CLights_CILampStatics __x_ABI_CWindows_CDevices_CLights_CILampStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Lights {
                interface ILampStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CDevices_CLights_CILampStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.UI.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0000 */
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
namespace Devices {
namespace Lights {
class Lamp;
} /*Lights*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Lights {
interface ILamp;
} /*Lights*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0332 */




/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0332 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0332_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0332_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("191a8c6e-60dd-5a21-a53c-bf3f940a1dde"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Lights::Lamp*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::Lamp*, ABI::Windows::Devices::Lights::ILamp*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Lights.Lamp>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Lights::Lamp*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_USE */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0333 */




/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0333 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0333_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0333_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("52a69dfd-f0d6-5931-b8e1-f38066d71bf2"))
IAsyncOperation<ABI::Windows::Devices::Lights::Lamp*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::Lamp*, ABI::Windows::Devices::Lights::ILamp*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Lights.Lamp>"; }
};
typedef IAsyncOperation<ABI::Windows::Devices::Lights::Lamp*> __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_t;
#define ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Lights {
class LampAvailabilityChangedEventArgs;
} /*Lights*/
} /*Devices*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Devices {
namespace Lights {
interface ILampAvailabilityChangedEventArgs;
} /*Lights*/
} /*Devices*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0334 */




/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0334 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0334_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0334_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights_0000_0003 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("556a02d9-7685-576f-89ca-b62dc481d29d"))
ITypedEventHandler<ABI::Windows::Devices::Lights::Lamp*,ABI::Windows::Devices::Lights::LampAvailabilityChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::Lamp*, ABI::Windows::Devices::Lights::ILamp*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Lights::LampAvailabilityChangedEventArgs*, ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Lights.Lamp, Windows.Devices.Lights.LampAvailabilityChangedEventArgs>"; }
};
typedef ITypedEventHandler<ABI::Windows::Devices::Lights::Lamp*,ABI::Windows::Devices::Lights::LampAvailabilityChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_t;
#define ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui_h__)
#include <Windows.UI.h>
#endif // !defined(__windows2Eui_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#endif



/* interface __MIDL_itf_windows2Edevices2Elights_0000_0003 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0335 */




/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0335 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0335_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0335_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights_0000_0004 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Edevices2Elights_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0004_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("191a8c6e-60dd-5a21-a53c-bf3f940a1dde")
    __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLampVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp *asyncInfo,
            /* [in] */ AsyncStatus status);
        
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


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0005 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0336 */




/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0336 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0336_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0336_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp
#define DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0006_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52a69dfd-f0d6-5931-b8e1-f38066d71bf2")
    __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Devices::Lights::ILamp **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CDevices__CLights__CLampVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CLights__CLamp **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CLights_CILamp **results);
        
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


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CDevices__CLights__CLamp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0007 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CLights__CLamp */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0337 */




/* interface __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0337 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0337_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights2Eidl_0000_0337_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edevices2Elights_0000_0008 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs
#define DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0008_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("556a02d9-7685-576f-89ca-b62dc481d29d")
    __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Lights::ILamp *sender,
            /* [in] */ __RPC__in_opt ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILamp *sender,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs *e);
        
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


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs */
#if !defined(____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILamp[] = L"Windows.Devices.Lights.ILamp";
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0009_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CLights_CILamp */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Lights::ILamp */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILamp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Lights {
                    
                    MIDL_INTERFACE("047D5B9A-EA45-4B2B-B1A2-14DFF00BDE7B")
                    ILamp : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DeviceId( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsEnabled( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsEnabled( 
                            /* [in] */ boolean value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BrightnessLevel( 
                            /* [out][retval] */ __RPC__out FLOAT *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BrightnessLevel( 
                            /* [in] */ FLOAT value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsColorSettable( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Color( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Color( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_AvailabilityChanged( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs *handler,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_AvailabilityChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILamp = __uuidof(ILamp);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CLights_CILampVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceId )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BrightnessLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out][retval] */ __RPC__out FLOAT *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BrightnessLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [in] */ FLOAT value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsColorSettable )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Color )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Color )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        HRESULT ( STDMETHODCALLTYPE *add_AvailabilityChanged )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CLights__CLamp_Windows__CDevices__CLights__CLampAvailabilityChangedEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_AvailabilityChanged )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILamp * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CLights_CILampVtbl;

    interface __x_ABI_CWindows_CDevices_CLights_CILamp
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CLights_CILamp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CLights_CILamp_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_DeviceId(This,value)	\
    ( (This)->lpVtbl -> get_DeviceId(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_IsEnabled(This,value)	\
    ( (This)->lpVtbl -> get_IsEnabled(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_put_IsEnabled(This,value)	\
    ( (This)->lpVtbl -> put_IsEnabled(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_BrightnessLevel(This,value)	\
    ( (This)->lpVtbl -> get_BrightnessLevel(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_put_BrightnessLevel(This,value)	\
    ( (This)->lpVtbl -> put_BrightnessLevel(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_IsColorSettable(This,value)	\
    ( (This)->lpVtbl -> get_IsColorSettable(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_get_Color(This,value)	\
    ( (This)->lpVtbl -> get_Color(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_put_Color(This,value)	\
    ( (This)->lpVtbl -> put_Color(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_add_AvailabilityChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_AvailabilityChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILamp_remove_AvailabilityChanged(This,token)	\
    ( (This)->lpVtbl -> remove_AvailabilityChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CLights_CILamp_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0010 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs";
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0010_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Lights::ILampAvailabilityChangedEventArgs */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Lights {
                    
                    MIDL_INTERFACE("4F6E3DED-07A2-499D-9260-67E304532BA4")
                    ILampAvailabilityChangedEventArgs : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsAvailable( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILampAvailabilityChangedEventArgs = __uuidof(ILampAvailabilityChangedEventArgs);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsAvailable )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl;

    interface __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_get_IsAvailable(This,value)	\
    ( (This)->lpVtbl -> get_IsAvailable(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CLights_CILampAvailabilityChangedEventArgs_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0011 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Lights_ILampStatics[] = L"Windows.Devices.Lights.ILampStatics";
#endif /* !defined(____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0011_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CDevices_CLights_CILampStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Devices::Lights::ILampStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CLights_CILampStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Devices {
                namespace Lights {
                    
                    MIDL_INTERFACE("A822416C-8885-401E-B821-8E8B38A8E8EC")
                    ILampStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE FromIdAsync( 
                            /* [in] */ __RPC__in HSTRING deviceId,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetDefaultAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILampStatics = __uuidof(ILampStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        HRESULT ( STDMETHODCALLTYPE *FromIdAsync )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [in] */ __RPC__in HSTRING deviceId,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp **operation);
        
        HRESULT ( STDMETHODCALLTYPE *GetDefaultAsync )( 
            __RPC__in __x_ABI_CWindows_CDevices_CLights_CILampStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CLights__CLamp **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl;

    interface __x_ABI_CWindows_CDevices_CLights_CILampStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CDevices_CLights_CILampStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetDeviceSelector(This,value)	\
    ( (This)->lpVtbl -> GetDeviceSelector(This,value) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_FromIdAsync(This,deviceId,operation)	\
    ( (This)->lpVtbl -> FromIdAsync(This,deviceId,operation) ) 

#define __x_ABI_CWindows_CDevices_CLights_CILampStatics_GetDefaultAsync(This,operation)	\
    ( (This)->lpVtbl -> GetDefaultAsync(This,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CDevices_CLights_CILampStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0012 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Devices_Lights_Lamp_DEFINED
#define RUNTIMECLASS_Windows_Devices_Lights_Lamp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_Lamp[] = L"Windows.Devices.Lights.Lamp";
#endif
#ifndef RUNTIMECLASS_Windows_Devices_Lights_LampAvailabilityChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Lights_LampAvailabilityChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Lights_LampAvailabilityChangedEventArgs[] = L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs";
#endif


/* interface __MIDL_itf_windows2Edevices2Elights_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Elights_0000_0012_v0_0_s_ifspec;

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


