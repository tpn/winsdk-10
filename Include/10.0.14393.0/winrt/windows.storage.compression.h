

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

#ifndef __windows2Estorage2Ecompression_h__
#define __windows2Estorage2Ecompression_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CICompressor __x_ABI_CWindows_CStorage_CCompression_CICompressor;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface ICompressor;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CICompressor_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface ICompressorFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor __x_ABI_CWindows_CStorage_CCompression_CIDecompressor;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface IDecompressor;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                interface IDecompressorFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3109 */




/* interface __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; }
};
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define ____FIAsyncOperationCompletedHandler_1_boolean_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3110 */




/* interface __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; }
};
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define ____FIAsyncOperation_1_boolean_FWD_DEFINED__
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_boolean_USE */
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



#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Compression {
class Compressor;
} /*Compression*/
} /*Storage*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Compression {
class Decompressor;
} /*Compression*/
} /*Storage*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm
    {
        CompressAlgorithm_InvalidAlgorithm	= 0,
        CompressAlgorithm_NullAlgorithm	= 1,
        CompressAlgorithm_Mszip	= 2,
        CompressAlgorithm_Xpress	= 3,
        CompressAlgorithm_XpressHuff	= 4,
        CompressAlgorithm_Lzms	= 5
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressor[] = L"Windows.Storage.Compression.ICompressor";
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0002 */
/* [local] */ 





#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Compression {
                
                typedef enum CompressAlgorithm CompressAlgorithm;
                
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
        namespace Storage {
            namespace Compression {
                
                /* [v1_enum] */ 
                enum CompressAlgorithm
                    {
                        CompressAlgorithm_InvalidAlgorithm	= 0,
                        CompressAlgorithm_NullAlgorithm	= 1,
                        CompressAlgorithm_Mszip	= 2,
                        CompressAlgorithm_Xpress	= 3,
                        CompressAlgorithm_XpressHuff	= 4,
                        CompressAlgorithm_Lzms	= 5
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CCompression_CICompressor */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Compression::ICompressor */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Compression {
                    
                    MIDL_INTERFACE("0AC3645A-57AC-4EE1-B702-84D39D5424E0")
                    ICompressor : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE FinishAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE DetachStream( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IOutputStream **stream) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICompressor = __uuidof(ICompressor);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *FinishAsync )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        HRESULT ( STDMETHODCALLTYPE *DetachStream )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream **stream);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl;

    interface __x_ABI_CWindows_CStorage_CCompression_CICompressor
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_FinishAsync(This,operation)	\
    ( (This)->lpVtbl -> FinishAsync(This,operation) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressor_DetachStream(This,stream)	\
    ( (This)->lpVtbl -> DetachStream(This,stream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CICompressor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressorFactory[] = L"Windows.Storage.Compression.ICompressorFactory";
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Compression::ICompressorFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Compression {
                    
                    MIDL_INTERFACE("5F3D96A4-2CFB-442C-A8BA-D7D11B039DA0")
                    ICompressorFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateCompressor( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream *underlyingStream,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Compression::ICompressor **createdCompressor) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateCompressorEx( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream *underlyingStream,
                            /* [in] */ ABI::Windows::Storage::Compression::CompressAlgorithm algorithm,
                            /* [in] */ UINT32 blockSize,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Compression::ICompressor **createdCompressor) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICompressorFactory = __uuidof(ICompressorFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCompressor )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream *underlyingStream,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CICompressor **createdCompressor);
        
        HRESULT ( STDMETHODCALLTYPE *CreateCompressorEx )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream *underlyingStream,
            /* [in] */ __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm algorithm,
            /* [in] */ UINT32 blockSize,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CICompressor **createdCompressor);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl;

    interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_CreateCompressor(This,underlyingStream,createdCompressor)	\
    ( (This)->lpVtbl -> CreateCompressor(This,underlyingStream,createdCompressor) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_CreateCompressorEx(This,underlyingStream,algorithm,blockSize,createdCompressor)	\
    ( (This)->lpVtbl -> CreateCompressorEx(This,underlyingStream,algorithm,blockSize,createdCompressor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CICompressorFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0004 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressor[] = L"Windows.Storage.Compression.IDecompressor";
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Compression::IDecompressor */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Compression {
                    
                    MIDL_INTERFACE("B883FE46-D68A-4C8B-ADA0-4EE813FC5283")
                    IDecompressor : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE DetachStream( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IInputStream **stream) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDecompressor = __uuidof(IDecompressor);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *DetachStream )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream **stream);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl;

    interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressor_DetachStream(This,stream)	\
    ( (This)->lpVtbl -> DetachStream(This,stream) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CIDecompressor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0005 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressorFactory[] = L"Windows.Storage.Compression.IDecompressorFactory";
#endif /* !defined(____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0005_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Compression::IDecompressorFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Compression {
                    
                    MIDL_INTERFACE("5337E252-1DA2-42E1-8834-0379D28D742F")
                    IDecompressorFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateDecompressor( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IInputStream *underlyingStream,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Compression::IDecompressor **createdDecompressor) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDecompressorFactory = __uuidof(IDecompressorFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDecompressor )( 
            __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream *underlyingStream,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CIDecompressor **createdDecompressor);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl;

    interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_CreateDecompressor(This,underlyingStream,createdDecompressor)	\
    ( (This)->lpVtbl -> CreateDecompressor(This,underlyingStream,createdDecompressor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0006 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Storage_Compression_Compressor_DEFINED
#define RUNTIMECLASS_Windows_Storage_Compression_Compressor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Compressor[] = L"Windows.Storage.Compression.Compressor";
#endif
#ifndef RUNTIMECLASS_Windows_Storage_Compression_Decompressor_DEFINED
#define RUNTIMECLASS_Windows_Storage_Compression_Decompressor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Decompressor[] = L"Windows.Storage.Compression.Decompressor";
#endif


/* interface __MIDL_itf_windows2Estorage2Ecompression_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Ecompression_0000_0006_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


