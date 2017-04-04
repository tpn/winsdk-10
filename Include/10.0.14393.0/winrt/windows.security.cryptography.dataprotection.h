

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

#ifndef __windows2Esecurity2Ecryptography2Edataprotection_h__
#define __windows2Esecurity2Ecryptography2Edataprotection_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace DataProtection {
                    interface IDataProtectionProvider;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace DataProtection {
                    interface IDataProtectionProviderFactory;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0000 */
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
namespace Storage {
namespace Streams {
interface IBuffer;
} /*Streams*/
} /*Storage*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3109 */




/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3110 */




/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; }
};
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)





#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Security {
namespace Cryptography {
namespace DataProtection {
class DataProtectionProvider;
} /*DataProtection*/
} /*Cryptography*/
} /*Security*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_DataProtection_IDataProtectionProvider[] = L"Windows.Security.Cryptography.DataProtection.IDataProtectionProvider";
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0002 */
/* [local] */ 









extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider */
/* [uuid][object] */ 



/* interface ABI::Windows::Security::Cryptography::DataProtection::IDataProtectionProvider */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Security {
                namespace Cryptography {
                    namespace DataProtection {
                        
                        MIDL_INTERFACE("09639948-ED22-4270-BD1C-6D72C00F8787")
                        IDataProtectionProvider : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE ProtectAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *data,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE UnprotectAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *data,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ProtectStreamAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IInputStream *src,
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream *dest,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE UnprotectStreamAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IInputStream *src,
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream *dest,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IDataProtectionProvider = __uuidof(IDataProtectionProvider);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *ProtectAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *data,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **value);
        
        HRESULT ( STDMETHODCALLTYPE *UnprotectAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *data,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer **value);
        
        HRESULT ( STDMETHODCALLTYPE *ProtectStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream *src,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream *dest,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **value);
        
        HRESULT ( STDMETHODCALLTYPE *UnprotectStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream *src,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream *dest,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderVtbl;

    interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_ProtectAsync(This,data,value)	\
    ( (This)->lpVtbl -> ProtectAsync(This,data,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_UnprotectAsync(This,data,value)	\
    ( (This)->lpVtbl -> UnprotectAsync(This,data,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_ProtectStreamAsync(This,src,dest,value)	\
    ( (This)->lpVtbl -> ProtectStreamAsync(This,src,dest,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_UnprotectStreamAsync(This,src,dest,value)	\
    ( (This)->lpVtbl -> UnprotectStreamAsync(This,src,dest,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_DataProtection_IDataProtectionProviderFactory[] = L"Windows.Security.Cryptography.DataProtection.IDataProtectionProviderFactory";
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Security::Cryptography::DataProtection::IDataProtectionProviderFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Security {
                namespace Cryptography {
                    namespace DataProtection {
                        
                        MIDL_INTERFACE("ADF33DAC-4932-4CDF-AC41-7214333514CA")
                        IDataProtectionProviderFactory : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateOverloadExplicit( 
                                /* [in] */ __RPC__in HSTRING protectionDescriptor,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Security::Cryptography::DataProtection::IDataProtectionProvider **value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IDataProtectionProviderFactory = __uuidof(IDataProtectionProviderFactory);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateOverloadExplicit )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory * This,
            /* [in] */ __RPC__in HSTRING protectionDescriptor,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProvider **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactoryVtbl;

    interface __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_CreateOverloadExplicit(This,protectionDescriptor,value)	\
    ( (This)->lpVtbl -> CreateOverloadExplicit(This,protectionDescriptor,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSecurity_CCryptography_CDataProtection_CIDataProtectionProviderFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0004 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_DataProtection_DataProtectionProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_DataProtection_DataProtectionProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_DataProtection_DataProtectionProvider[] = L"Windows.Security.Cryptography.DataProtection.DataProtectionProvider";
#endif


/* interface __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography2Edataprotection_0000_0004_v0_0_s_ifspec;

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


