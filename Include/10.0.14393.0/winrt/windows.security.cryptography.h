

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

#ifndef __windows2Esecurity2Ecryptography_h__
#define __windows2Esecurity2Ecryptography_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                interface ICryptographicBufferStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esecurity2Ecryptography_0000_0000 */
/* [local] */ 

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

typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding;


#endif /* end if !defined(__cplusplus) */


#endif

#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding
    {
        BinaryStringEncoding_Utf8	= 0,
        BinaryStringEncoding_Utf16LE	= 1,
        BinaryStringEncoding_Utf16BE	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_ICryptographicBufferStatics[] = L"Windows.Security.Cryptography.ICryptographicBufferStatics";
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography_0000_0000 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                
                typedef enum BinaryStringEncoding BinaryStringEncoding;
                
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
        namespace Security {
            namespace Cryptography {
                
                /* [v1_enum] */ 
                enum BinaryStringEncoding
                    {
                        BinaryStringEncoding_Utf8	= 0,
                        BinaryStringEncoding_Utf16LE	= 1,
                        BinaryStringEncoding_Utf16BE	= 2
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Security::Cryptography::ICryptographicBufferStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Security {
                namespace Cryptography {
                    
                    MIDL_INTERFACE("320B7E22-3CB0-4CDF-8663-1D28910065EB")
                    ICryptographicBufferStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Compare( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *object1,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *object2,
                            /* [out][retval] */ __RPC__out boolean *isEqual) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GenerateRandom( 
                            /* [in] */ UINT32 length,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **buffer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GenerateRandomNumber( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateFromByteArray( 
                            /* [in] */ UINT32 __valueSize,
                            /* [in][size_is] */ __RPC__in_ecount_full(__valueSize) BYTE *value,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **buffer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CopyToByteArray( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer,
                            /* [out] */ __RPC__out UINT32 *__valueSize,
                            /* [out][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*__valueSize) BYTE **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE DecodeFromHexString( 
                            /* [in] */ __RPC__in HSTRING value,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **buffer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE EncodeToHexString( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE DecodeFromBase64String( 
                            /* [in] */ __RPC__in HSTRING value,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **buffer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE EncodeToBase64String( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE ConvertStringToBinary( 
                            /* [in] */ __RPC__in HSTRING value,
                            /* [in] */ ABI::Windows::Security::Cryptography::BinaryStringEncoding encoding,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer **buffer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE ConvertBinaryToString( 
                            /* [in] */ ABI::Windows::Security::Cryptography::BinaryStringEncoding encoding,
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IBuffer *buffer,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ICryptographicBufferStatics = __uuidof(ICryptographicBufferStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *object1,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *object2,
            /* [out][retval] */ __RPC__out boolean *isEqual);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateRandom )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ UINT32 length,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateRandomNumber )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromByteArray )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ UINT32 __valueSize,
            /* [in][size_is] */ __RPC__in_ecount_full(__valueSize) BYTE *value,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *CopyToByteArray )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer,
            /* [out] */ __RPC__out UINT32 *__valueSize,
            /* [out][size_is][size_is] */ __RPC__deref_out_ecount_full_opt(*__valueSize) BYTE **value);
        
        HRESULT ( STDMETHODCALLTYPE *DecodeFromHexString )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in HSTRING value,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *EncodeToHexString )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        HRESULT ( STDMETHODCALLTYPE *DecodeFromBase64String )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in HSTRING value,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *EncodeToBase64String )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertStringToBinary )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __RPC__in HSTRING value,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding encoding,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer **buffer);
        
        HRESULT ( STDMETHODCALLTYPE *ConvertBinaryToString )( 
            __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding encoding,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer *buffer,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl;

    interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_Compare(This,object1,object2,isEqual)	\
    ( (This)->lpVtbl -> Compare(This,object1,object2,isEqual) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_GenerateRandom(This,length,buffer)	\
    ( (This)->lpVtbl -> GenerateRandom(This,length,buffer) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_GenerateRandomNumber(This,value)	\
    ( (This)->lpVtbl -> GenerateRandomNumber(This,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_CreateFromByteArray(This,__valueSize,value,buffer)	\
    ( (This)->lpVtbl -> CreateFromByteArray(This,__valueSize,value,buffer) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_CopyToByteArray(This,buffer,__valueSize,value)	\
    ( (This)->lpVtbl -> CopyToByteArray(This,buffer,__valueSize,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_DecodeFromHexString(This,value,buffer)	\
    ( (This)->lpVtbl -> DecodeFromHexString(This,value,buffer) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_EncodeToHexString(This,buffer,value)	\
    ( (This)->lpVtbl -> EncodeToHexString(This,buffer,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_DecodeFromBase64String(This,value,buffer)	\
    ( (This)->lpVtbl -> DecodeFromBase64String(This,value,buffer) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_EncodeToBase64String(This,buffer,value)	\
    ( (This)->lpVtbl -> EncodeToBase64String(This,buffer,value) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_ConvertStringToBinary(This,value,encoding,buffer)	\
    ( (This)->lpVtbl -> ConvertStringToBinary(This,value,encoding,buffer) ) 

#define __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_ConvertBinaryToString(This,encoding,buffer,value)	\
    ( (This)->lpVtbl -> ConvertBinaryToString(This,encoding,buffer,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esecurity2Ecryptography_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_CryptographicBuffer_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_CryptographicBuffer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_CryptographicBuffer[] = L"Windows.Security.Cryptography.CryptographicBuffer";
#endif


/* interface __MIDL_itf_windows2Esecurity2Ecryptography_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esecurity2Ecryptography_0000_0001_v0_0_s_ifspec;

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


