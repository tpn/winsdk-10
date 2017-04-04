

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

#ifndef __windows2Efoundation2Emetadata_h__
#define __windows2Efoundation2Emetadata_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Metadata {
                interface IApiInformationStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Efoundation2Emetadata_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CMetadata_CGCPressureAmount __x_ABI_CWindows_CFoundation_CMetadata_CGCPressureAmount;


#endif /* end if !defined(__cplusplus) */


#endif

#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CMetadata_CGCPressureAmount
    {
        GCPressureAmount_Low	= 0,
        GCPressureAmount_Medium	= 1,
        GCPressureAmount_High	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Metadata_IApiInformationStatics[] = L"Windows.Foundation.Metadata.IApiInformationStatics";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Efoundation2Emetadata_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Metadata {
                
                typedef enum GCPressureAmount GCPressureAmount;
                
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
        namespace Foundation {
            namespace Metadata {
                
                /* [v1_enum] */ 
                enum GCPressureAmount
                    {
                        GCPressureAmount_Low	= 0,
                        GCPressureAmount_Medium	= 1,
                        GCPressureAmount_High	= 2
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Emetadata_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Emetadata_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Foundation::Metadata::IApiInformationStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                namespace Metadata {
                    
                    MIDL_INTERFACE("997439FE-F681-4A11-B416-C13A47E8BA36")
                    IApiInformationStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE IsTypePresent( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsMethodPresent( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [in] */ __RPC__in HSTRING methodName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsMethodPresentWithArity( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [in] */ __RPC__in HSTRING methodName,
                            /* [in] */ UINT32 inputParameterCount,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsEventPresent( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [in] */ __RPC__in HSTRING eventName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsPropertyPresent( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [in] */ __RPC__in HSTRING propertyName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsReadOnlyPropertyPresent( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [in] */ __RPC__in HSTRING propertyName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsWriteablePropertyPresent( 
                            /* [in] */ __RPC__in HSTRING typeName,
                            /* [in] */ __RPC__in HSTRING propertyName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsEnumNamedValuePresent( 
                            /* [in] */ __RPC__in HSTRING enumTypeName,
                            /* [in] */ __RPC__in HSTRING valueName,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsApiContractPresentByMajor( 
                            /* [in] */ __RPC__in HSTRING contractName,
                            /* [in] */ UINT16 majorVersion,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE IsApiContractPresentByMajorAndMinor( 
                            /* [in] */ __RPC__in HSTRING contractName,
                            /* [in] */ UINT16 majorVersion,
                            /* [in] */ UINT16 minorVersion,
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IApiInformationStatics = __uuidof(IApiInformationStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *IsTypePresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsMethodPresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [in] */ __RPC__in HSTRING methodName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsMethodPresentWithArity )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [in] */ __RPC__in HSTRING methodName,
            /* [in] */ UINT32 inputParameterCount,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsEventPresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [in] */ __RPC__in HSTRING eventName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsPropertyPresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [in] */ __RPC__in HSTRING propertyName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsReadOnlyPropertyPresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [in] */ __RPC__in HSTRING propertyName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsWriteablePropertyPresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING typeName,
            /* [in] */ __RPC__in HSTRING propertyName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsEnumNamedValuePresent )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING enumTypeName,
            /* [in] */ __RPC__in HSTRING valueName,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsApiContractPresentByMajor )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING contractName,
            /* [in] */ UINT16 majorVersion,
            /* [out][retval] */ __RPC__out boolean *value);
        
        HRESULT ( STDMETHODCALLTYPE *IsApiContractPresentByMajorAndMinor )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
            /* [in] */ __RPC__in HSTRING contractName,
            /* [in] */ UINT16 majorVersion,
            /* [in] */ UINT16 minorVersion,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStaticsVtbl;

    interface __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsTypePresent(This,typeName,value)	\
    ( (This)->lpVtbl -> IsTypePresent(This,typeName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsMethodPresent(This,typeName,methodName,value)	\
    ( (This)->lpVtbl -> IsMethodPresent(This,typeName,methodName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsMethodPresentWithArity(This,typeName,methodName,inputParameterCount,value)	\
    ( (This)->lpVtbl -> IsMethodPresentWithArity(This,typeName,methodName,inputParameterCount,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsEventPresent(This,typeName,eventName,value)	\
    ( (This)->lpVtbl -> IsEventPresent(This,typeName,eventName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsPropertyPresent(This,typeName,propertyName,value)	\
    ( (This)->lpVtbl -> IsPropertyPresent(This,typeName,propertyName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsReadOnlyPropertyPresent(This,typeName,propertyName,value)	\
    ( (This)->lpVtbl -> IsReadOnlyPropertyPresent(This,typeName,propertyName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsWriteablePropertyPresent(This,typeName,propertyName,value)	\
    ( (This)->lpVtbl -> IsWriteablePropertyPresent(This,typeName,propertyName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsEnumNamedValuePresent(This,enumTypeName,valueName,value)	\
    ( (This)->lpVtbl -> IsEnumNamedValuePresent(This,enumTypeName,valueName,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsApiContractPresentByMajor(This,contractName,majorVersion,value)	\
    ( (This)->lpVtbl -> IsApiContractPresentByMajor(This,contractName,majorVersion,value) ) 

#define __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_IsApiContractPresentByMajorAndMinor(This,contractName,majorVersion,minorVersion,value)	\
    ( (This)->lpVtbl -> IsApiContractPresentByMajorAndMinor(This,contractName,majorVersion,minorVersion,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Efoundation2Emetadata_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Foundation_Metadata_ApiInformation_DEFINED
#define RUNTIMECLASS_Windows_Foundation_Metadata_ApiInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Metadata_ApiInformation[] = L"Windows.Foundation.Metadata.ApiInformation";
#endif


/* interface __MIDL_itf_windows2Efoundation2Emetadata_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Emetadata_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Efoundation2Emetadata_0000_0001_v0_0_s_ifspec;

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


