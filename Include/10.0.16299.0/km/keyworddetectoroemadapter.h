

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
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

#ifndef __keyworddetectoroemadapter_h__
#define __keyworddetectoroemadapter_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKeywordDetectorOemAdapter_FWD_DEFINED__
#define __IKeywordDetectorOemAdapter_FWD_DEFINED__
typedef interface IKeywordDetectorOemAdapter IKeywordDetectorOemAdapter;

#endif 	/* __IKeywordDetectorOemAdapter_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "mfobjects.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_keyworddetectoroemadapter_0000_0000 */
/* [local] */ 

#define _IKsControl_
#include "ks.h"
#include "ksmedia.h"
#ifndef _KS_
typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_keyworddetectoroemadapter_0000_0000_0001
    {
    ULONG Size;
    GUID PatternType;
    } 	SOUNDDETECTOR_PATTERNHEADER;

#endif
DEFINE_GUID(IID_IKeywordDetectorOemAdapter , 0xa13f4e6a, 0x3bc5, 0x46b4, 0x88, 0xfb, 0xf3, 0x90, 0x14, 0xb5, 0x1a, 0xc9);


extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0000_v0_0_s_ifspec;

#ifndef __IKeywordDetectorOemAdapter_INTERFACE_DEFINED__
#define __IKeywordDetectorOemAdapter_INTERFACE_DEFINED__

/* interface IKeywordDetectorOemAdapter */
/* [unique][version][uuid][local][object] */ 

typedef /* [public][public][public][public][public][public][public] */ 
enum __MIDL_IKeywordDetectorOemAdapter_0002
    {
        KwInvalid	= 0,
        KwVoiceAssistant	= 1,
        KwSelection	= 2
    } 	KEYWORDID;

typedef unsigned short LANGID;

typedef /* [public][public][public] */ struct __MIDL_IKeywordDetectorOemAdapter_0003
    {
    KEYWORDID KeywordId;
    LANGID LangId;
    } 	KEYWORDSELECTOR;


EXTERN_C const IID IID_IKeywordDetectorOemAdapter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A13F4E6A-3BC5-46B4-88FB-F39014B51AC9")
    IKeywordDetectorOemAdapter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCapabilities( 
            /* [ref][out] */ BOOL *SupportsUserModels,
            /* [full][out] */ KEYWORDID **KeywordIds,
            /* [ref][out] */ ULONG *NumKeywords,
            /* [full][out] */ LANGID **LangIds,
            /* [ref][out] */ ULONG *NumLanguages,
            /* [full][out] */ IMFMediaType **ppMediaType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE VerifyUserKeyword( 
            /* [full][in] */ IStream *ModelData,
            /* [in] */ KEYWORDID KeywordId,
            /* [in] */ LANGID LangId,
            /* [in] */ LONG KeywordEndBytePos,
            /* [full][in] */ IMFMediaBuffer *UserRecording) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComputeAndAddUserModelData( 
            /* [full][out][in] */ IStream *ModelData,
            /* [in] */ KEYWORDSELECTOR KeywordSelector,
            /* [full][in] */ LONG *KeywordEndBytePos,
            /* [full][in] */ IMFMediaBuffer **UserRecordings,
            /* [in] */ ULONG NumUserRecordings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BuildArmingPatternData( 
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ KEYWORDSELECTOR *KeywordSelectors,
            /* [in] */ ULONG NumKeywordSelectors,
            /* [full][out] */ SOUNDDETECTOR_PATTERNHEADER **ppPatternData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ParseDetectionResultData( 
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ SOUNDDETECTOR_PATTERNHEADER *Result,
            /* [full][out] */ KEYWORDID *KeywordId,
            /* [full][out] */ LANGID *LangId,
            /* [full][out] */ BOOL *pIsUserMatch,
            /* [full][out] */ ULONG64 *KeywordStartPerformanceCounterValue,
            /* [full][out] */ ULONG64 *KeywordEndPerformanceCounterValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKeywordDetectorOemAdapterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKeywordDetectorOemAdapter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKeywordDetectorOemAdapter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKeywordDetectorOemAdapter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )( 
            IKeywordDetectorOemAdapter * This,
            /* [ref][out] */ BOOL *SupportsUserModels,
            /* [full][out] */ KEYWORDID **KeywordIds,
            /* [ref][out] */ ULONG *NumKeywords,
            /* [full][out] */ LANGID **LangIds,
            /* [ref][out] */ ULONG *NumLanguages,
            /* [full][out] */ IMFMediaType **ppMediaType);
        
        HRESULT ( STDMETHODCALLTYPE *VerifyUserKeyword )( 
            IKeywordDetectorOemAdapter * This,
            /* [full][in] */ IStream *ModelData,
            /* [in] */ KEYWORDID KeywordId,
            /* [in] */ LANGID LangId,
            /* [in] */ LONG KeywordEndBytePos,
            /* [full][in] */ IMFMediaBuffer *UserRecording);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeAndAddUserModelData )( 
            IKeywordDetectorOemAdapter * This,
            /* [full][out][in] */ IStream *ModelData,
            /* [in] */ KEYWORDSELECTOR KeywordSelector,
            /* [full][in] */ LONG *KeywordEndBytePos,
            /* [full][in] */ IMFMediaBuffer **UserRecordings,
            /* [in] */ ULONG NumUserRecordings);
        
        HRESULT ( STDMETHODCALLTYPE *BuildArmingPatternData )( 
            IKeywordDetectorOemAdapter * This,
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ KEYWORDSELECTOR *KeywordSelectors,
            /* [in] */ ULONG NumKeywordSelectors,
            /* [full][out] */ SOUNDDETECTOR_PATTERNHEADER **ppPatternData);
        
        HRESULT ( STDMETHODCALLTYPE *ParseDetectionResultData )( 
            IKeywordDetectorOemAdapter * This,
            /* [full][in] */ IStream *UserModelData,
            /* [full][in] */ SOUNDDETECTOR_PATTERNHEADER *Result,
            /* [full][out] */ KEYWORDID *KeywordId,
            /* [full][out] */ LANGID *LangId,
            /* [full][out] */ BOOL *pIsUserMatch,
            /* [full][out] */ ULONG64 *KeywordStartPerformanceCounterValue,
            /* [full][out] */ ULONG64 *KeywordEndPerformanceCounterValue);
        
        END_INTERFACE
    } IKeywordDetectorOemAdapterVtbl;

    interface IKeywordDetectorOemAdapter
    {
        CONST_VTBL struct IKeywordDetectorOemAdapterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKeywordDetectorOemAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKeywordDetectorOemAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKeywordDetectorOemAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKeywordDetectorOemAdapter_GetCapabilities(This,SupportsUserModels,KeywordIds,NumKeywords,LangIds,NumLanguages,ppMediaType)	\
    ( (This)->lpVtbl -> GetCapabilities(This,SupportsUserModels,KeywordIds,NumKeywords,LangIds,NumLanguages,ppMediaType) ) 

#define IKeywordDetectorOemAdapter_VerifyUserKeyword(This,ModelData,KeywordId,LangId,KeywordEndBytePos,UserRecording)	\
    ( (This)->lpVtbl -> VerifyUserKeyword(This,ModelData,KeywordId,LangId,KeywordEndBytePos,UserRecording) ) 

#define IKeywordDetectorOemAdapter_ComputeAndAddUserModelData(This,ModelData,KeywordSelector,KeywordEndBytePos,UserRecordings,NumUserRecordings)	\
    ( (This)->lpVtbl -> ComputeAndAddUserModelData(This,ModelData,KeywordSelector,KeywordEndBytePos,UserRecordings,NumUserRecordings) ) 

#define IKeywordDetectorOemAdapter_BuildArmingPatternData(This,UserModelData,KeywordSelectors,NumKeywordSelectors,ppPatternData)	\
    ( (This)->lpVtbl -> BuildArmingPatternData(This,UserModelData,KeywordSelectors,NumKeywordSelectors,ppPatternData) ) 

#define IKeywordDetectorOemAdapter_ParseDetectionResultData(This,UserModelData,Result,KeywordId,LangId,pIsUserMatch,KeywordStartPerformanceCounterValue,KeywordEndPerformanceCounterValue)	\
    ( (This)->lpVtbl -> ParseDetectionResultData(This,UserModelData,Result,KeywordId,LangId,pIsUserMatch,KeywordStartPerformanceCounterValue,KeywordEndPerformanceCounterValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKeywordDetectorOemAdapter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_keyworddetectoroemadapter_0000_0001 */
/* [local] */ 

DEFINE_GUID(CLSID_KeywordDetectorOemAdapter, 0x76882aa2, 0x2e80, 0x48f1, 0xa1, 0x4e, 0x4d, 0xb1, 0xfa, 0xc1, 0xf8, 0x49);


extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


