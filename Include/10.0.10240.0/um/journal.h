

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
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


#ifndef __journal_h__
#define __journal_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IJournalReader_FWD_DEFINED__
#define __IJournalReader_FWD_DEFINED__
typedef interface IJournalReader IJournalReader;

#endif 	/* __IJournalReader_FWD_DEFINED__ */


#ifndef __JournalReader_FWD_DEFINED__
#define __JournalReader_FWD_DEFINED__

#ifdef __cplusplus
typedef class JournalReader JournalReader;
#else
typedef struct JournalReader JournalReader;
#endif /* __cplusplus */

#endif 	/* __JournalReader_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_journal_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


extern RPC_IF_HANDLE __MIDL_itf_journal_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_journal_0000_0000_v0_0_s_ifspec;


#ifndef __JournalLib_LIBRARY_DEFINED__
#define __JournalLib_LIBRARY_DEFINED__

/* library JournalLib */
/* [helpstring][version][uuid] */ 

#define GUID_STROKE_TIMESTAMP                    L"{04EA66C4-F33A-461B-B8FE-68070D9C7575}"
#define GUID_STROKE_TIMEID                       L"{050B6BC8-3B7D-4816-8C61-BC7E905B2132}"
#define GUID_HIGHLIGHTER                         L"{9B6267B8-3968-4048-AB74-F490406A2DFA}"
#define GUID_INK_STYLE_BOLD                      L"{E02FB5C1-9693-4312-A434-00DE7F3AD493}"
#define GUID_INK_STYLE_ITALICS                   L"{05253b51-49C6-4A04-8993-64DD9ABD842A}"

EXTERN_C const IID LIBID_JournalLib;

#ifndef __IJournalReader_INTERFACE_DEFINED__
#define __IJournalReader_INTERFACE_DEFINED__

/* interface IJournalReader */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IJournalReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("26213A0B-5A6C-4472-923D-9F29EFF608B2")
    IJournalReader : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ReadFromStream( 
            /* [in] */ __RPC__in_opt IStream *pJntFile,
            /* [retval][out] */ __RPC__deref_out_opt IStream **ppJntXml) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IJournalReaderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IJournalReader * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IJournalReader * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IJournalReader * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ReadFromStream )( 
            __RPC__in IJournalReader * This,
            /* [in] */ __RPC__in_opt IStream *pJntFile,
            /* [retval][out] */ __RPC__deref_out_opt IStream **ppJntXml);
        
        END_INTERFACE
    } IJournalReaderVtbl;

    interface IJournalReader
    {
        CONST_VTBL struct IJournalReaderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJournalReader_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJournalReader_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJournalReader_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJournalReader_ReadFromStream(This,pJntFile,ppJntXml)	\
    ( (This)->lpVtbl -> ReadFromStream(This,pJntFile,ppJntXml) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJournalReader_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_JournalReader;

#ifdef __cplusplus

class DECLSPEC_UUID("B4124623-FC0E-47CE-BCA9-126A6104ADA1")
JournalReader;
#endif
#endif /* __JournalLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_journal_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_journal_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_journal_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


