

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

#ifndef __windows2Edata2Ehtml_h__
#define __windows2Edata2Ehtml_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Html {
                interface IHtmlUtilities;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edata2Ehtml_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Html_IHtmlUtilities[] = L"Windows.Data.Html.IHtmlUtilities";
#endif /* !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Ehtml_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Ehtml_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Ehtml_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Html::IHtmlUtilities */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Html {
                    
                    MIDL_INTERFACE("FEC00ADD-2399-4FAC-B5A7-05E9ACD7181D")
                    IHtmlUtilities : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ConvertToText( 
                            /* [in] */ __RPC__in HSTRING html,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *text) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHtmlUtilities = __uuidof(IHtmlUtilities);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertToText )( 
            __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
            /* [in] */ __RPC__in HSTRING html,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *text);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl;

    interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_ConvertToText(This,html,text)	\
    ( (This)->lpVtbl -> ConvertToText(This,html,text) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Ehtml_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Data_Html_HtmlUtilities_DEFINED
#define RUNTIMECLASS_Windows_Data_Html_HtmlUtilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Html_HtmlUtilities[] = L"Windows.Data.Html.HtmlUtilities";
#endif


/* interface __MIDL_itf_windows2Edata2Ehtml_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Ehtml_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Ehtml_0000_0001_v0_0_s_ifspec;

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


