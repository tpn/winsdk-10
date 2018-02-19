

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

#ifndef __cmgruri_h__
#define __cmgruri_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConfigManager2URI_FWD_DEFINED__
#define __IConfigManager2URI_FWD_DEFINED__
typedef interface IConfigManager2URI IConfigManager2URI;

#endif 	/* __IConfigManager2URI_FWD_DEFINED__ */


#ifndef __IConfigManager2MutableURI_FWD_DEFINED__
#define __IConfigManager2MutableURI_FWD_DEFINED__
typedef interface IConfigManager2MutableURI IConfigManager2MutableURI;

#endif 	/* __IConfigManager2MutableURI_FWD_DEFINED__ */


#ifndef __ICSPURITranslator_FWD_DEFINED__
#define __ICSPURITranslator_FWD_DEFINED__
typedef interface ICSPURITranslator ICSPURITranslator;

#endif 	/* __ICSPURITranslator_FWD_DEFINED__ */


#ifndef __IConfigManager2URI2_FWD_DEFINED__
#define __IConfigManager2URI2_FWD_DEFINED__
typedef interface IConfigManager2URI2 IConfigManager2URI2;

#endif 	/* __IConfigManager2URI2_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cmgruri_0000_0000 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0000_v0_0_s_ifspec;

#ifndef __IConfigManager2URI_INTERFACE_DEFINED__
#define __IConfigManager2URI_INTERFACE_DEFINED__

/* interface IConfigManager2URI */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager2URI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E34E5896-40B2-45c4-A9C0-8A9601C3B0A6")
    IConfigManager2URI : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE IsAbsoluteURI( 
            /* [out] */ __RPC__out BOOL *pfIsAbsolute) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HasQuery( 
            /* [out] */ __RPC__out BOOL *pfHasQuery) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromString( 
            /* [string][in] */ __RPC__in_string const wchar_t *pwszURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeFromStream( 
            /* [in] */ __RPC__in_opt ISequentialStream *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveToStream( 
            /* [in] */ __RPC__in_opt ISequentialStream *pStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCanonicalRelativeURI( 
            /* [in] */ DWORD idwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRelURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRelativeURI( 
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **pURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SplitURI( 
            /* [in] */ DWORD idwSegSplit,
            /* [in] */ BOOL fIncludeQuery,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt IConfigManager2URI **pURI1,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt IConfigManager2URI **pURI2) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSegment( 
            /* [in] */ DWORD idwSegIndex,
            /* [string][out] */ __RPC__deref_out_opt_string const wchar_t **pwszSegment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSegmentCopy( 
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrSegment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI2,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out int *pnCompare) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindLastCommonSegment( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out DWORD *dwCommonSegIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetJoinedSegments( 
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ wchar_t wchJoin,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrJoined) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetQueryValue( 
            /* [string][in] */ __RPC__in_string const wchar_t *pwszName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSegmentCount( 
            /* [out] */ __RPC__out DWORD *pcdwSegments) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2MutableURI **ppMutableURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out DWORD *pdwHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendSegmentToCopy( 
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendRelativeURIToCopy( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pRelativeURI,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigManager2URIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigManager2URI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigManager2URI * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsAbsoluteURI )( 
            __RPC__in IConfigManager2URI * This,
            /* [out] */ __RPC__out BOOL *pfIsAbsolute);
        
        HRESULT ( STDMETHODCALLTYPE *HasQuery )( 
            __RPC__in IConfigManager2URI * This,
            /* [out] */ __RPC__out BOOL *pfHasQuery);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromString )( 
            __RPC__in IConfigManager2URI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszURI);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromStream )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *SaveToStream )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalRelativeURI )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRelURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetRelativeURI )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **pURI);
        
        HRESULT ( STDMETHODCALLTYPE *SplitURI )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ DWORD idwSegSplit,
            /* [in] */ BOOL fIncludeQuery,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt IConfigManager2URI **pURI1,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt IConfigManager2URI **pURI2);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegment )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [string][out] */ __RPC__deref_out_opt_string const wchar_t **pwszSegment);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCopy )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrSegment);
        
        HRESULT ( STDMETHODCALLTYPE *CompareURI )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI2,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out int *pnCompare);
        
        HRESULT ( STDMETHODCALLTYPE *FindLastCommonSegment )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out DWORD *dwCommonSegIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetJoinedSegments )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ wchar_t wchJoin,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrJoined);
        
        HRESULT ( STDMETHODCALLTYPE *GetQueryValue )( 
            __RPC__in IConfigManager2URI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCount )( 
            __RPC__in IConfigManager2URI * This,
            /* [out] */ __RPC__out DWORD *pcdwSegments);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2MutableURI **ppMutableURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out DWORD *pdwHash);
        
        HRESULT ( STDMETHODCALLTYPE *AppendSegmentToCopy )( 
            __RPC__in IConfigManager2URI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRelativeURIToCopy )( 
            __RPC__in IConfigManager2URI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pRelativeURI,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        END_INTERFACE
    } IConfigManager2URIVtbl;

    interface IConfigManager2URI
    {
        CONST_VTBL struct IConfigManager2URIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager2URI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager2URI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager2URI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager2URI_IsAbsoluteURI(This,pfIsAbsolute)	\
    ( (This)->lpVtbl -> IsAbsoluteURI(This,pfIsAbsolute) ) 

#define IConfigManager2URI_HasQuery(This,pfHasQuery)	\
    ( (This)->lpVtbl -> HasQuery(This,pfHasQuery) ) 

#define IConfigManager2URI_InitializeFromString(This,pwszURI)	\
    ( (This)->lpVtbl -> InitializeFromString(This,pwszURI) ) 

#define IConfigManager2URI_InitializeFromStream(This,pStream)	\
    ( (This)->lpVtbl -> InitializeFromStream(This,pStream) ) 

#define IConfigManager2URI_SaveToStream(This,pStream)	\
    ( (This)->lpVtbl -> SaveToStream(This,pStream) ) 

#define IConfigManager2URI_GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI)	\
    ( (This)->lpVtbl -> GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI) ) 

#define IConfigManager2URI_GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI)	\
    ( (This)->lpVtbl -> GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI) ) 

#define IConfigManager2URI_SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2)	\
    ( (This)->lpVtbl -> SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2) ) 

#define IConfigManager2URI_GetSegment(This,idwSegIndex,pwszSegment)	\
    ( (This)->lpVtbl -> GetSegment(This,idwSegIndex,pwszSegment) ) 

#define IConfigManager2URI_GetSegmentCopy(This,idwSegIndex,pbstrSegment)	\
    ( (This)->lpVtbl -> GetSegmentCopy(This,idwSegIndex,pbstrSegment) ) 

#define IConfigManager2URI_CompareURI(This,pURI2,fIgnoreCase,pnCompare)	\
    ( (This)->lpVtbl -> CompareURI(This,pURI2,fIgnoreCase,pnCompare) ) 

#define IConfigManager2URI_FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex)	\
    ( (This)->lpVtbl -> FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex) ) 

#define IConfigManager2URI_GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined)	\
    ( (This)->lpVtbl -> GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined) ) 

#define IConfigManager2URI_GetQueryValue(This,pwszName,pbstrValue)	\
    ( (This)->lpVtbl -> GetQueryValue(This,pwszName,pbstrValue) ) 

#define IConfigManager2URI_GetSegmentCount(This,pcdwSegments)	\
    ( (This)->lpVtbl -> GetSegmentCount(This,pcdwSegments) ) 

#define IConfigManager2URI_Clone(This,fIncludeQuery,ppMutableURI)	\
    ( (This)->lpVtbl -> Clone(This,fIncludeQuery,ppMutableURI) ) 

#define IConfigManager2URI_GetHash(This,fIgnoreCase,pdwHash)	\
    ( (This)->lpVtbl -> GetHash(This,fIgnoreCase,pdwHash) ) 

#define IConfigManager2URI_AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI) ) 

#define IConfigManager2URI_AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager2URI_INTERFACE_DEFINED__ */


#ifndef __IConfigManager2MutableURI_INTERFACE_DEFINED__
#define __IConfigManager2MutableURI_INTERFACE_DEFINED__

/* interface IConfigManager2MutableURI */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager2MutableURI;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4B965405-F21F-4702-95DD-4E81C3D1BB30")
    IConfigManager2MutableURI : public IConfigManager2URI
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AppendSegment( 
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendRelativeURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [in] */ DWORD idwSegment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceSegment( 
            /* [in] */ DWORD idwSegIndex,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSegment( 
            /* [in] */ DWORD idwSegIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InsertSegment( 
            /* [in] */ DWORD idwInsertBefore,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppendQueryValue( 
            /* [string][in] */ __RPC__in_string const wchar_t *pwszQueryName,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszQueryValue,
            /* [in] */ BOOL fIsEncoded) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateNonMutableURI( 
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigManager2MutableURIVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigManager2MutableURI * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigManager2MutableURI * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsAbsoluteURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [out] */ __RPC__out BOOL *pfIsAbsolute);
        
        HRESULT ( STDMETHODCALLTYPE *HasQuery )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [out] */ __RPC__out BOOL *pfHasQuery);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromString )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszURI);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeFromStream )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *SaveToStream )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pStream);
        
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalRelativeURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrRelURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetRelativeURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **pURI);
        
        HRESULT ( STDMETHODCALLTYPE *SplitURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegSplit,
            /* [in] */ BOOL fIncludeQuery,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt IConfigManager2URI **pURI1,
            /* [unique][out][in] */ __RPC__deref_opt_inout_opt IConfigManager2URI **pURI2);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegment )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [string][out] */ __RPC__deref_out_opt_string const wchar_t **pwszSegment);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCopy )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrSegment);
        
        HRESULT ( STDMETHODCALLTYPE *CompareURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI2,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out int *pnCompare);
        
        HRESULT ( STDMETHODCALLTYPE *FindLastCommonSegment )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out DWORD *dwCommonSegIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetJoinedSegments )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ wchar_t wchJoin,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrJoined);
        
        HRESULT ( STDMETHODCALLTYPE *GetQueryValue )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszName,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetSegmentCount )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [out] */ __RPC__out DWORD *pcdwSegments);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2MutableURI **ppMutableURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ BOOL fIgnoreCase,
            /* [out] */ __RPC__out DWORD *pdwHash);
        
        HRESULT ( STDMETHODCALLTYPE *AppendSegmentToCopy )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRelativeURIToCopy )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pRelativeURI,
            /* [in] */ DWORD dwSegIndex,
            /* [in] */ BOOL fIncludeQuery,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *AppendSegment )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *AppendRelativeURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [in] */ DWORD idwSegment);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceSegment )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteSegment )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwSegIndex);
        
        HRESULT ( STDMETHODCALLTYPE *InsertSegment )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [in] */ DWORD idwInsertBefore,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszSegment,
            /* [in] */ BOOL fSegmentIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *AppendQueryValue )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszQueryName,
            /* [string][in] */ __RPC__in_string const wchar_t *pwszQueryValue,
            /* [in] */ BOOL fIsEncoded);
        
        HRESULT ( STDMETHODCALLTYPE *CreateNonMutableURI )( 
            __RPC__in IConfigManager2MutableURI * This,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        END_INTERFACE
    } IConfigManager2MutableURIVtbl;

    interface IConfigManager2MutableURI
    {
        CONST_VTBL struct IConfigManager2MutableURIVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager2MutableURI_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager2MutableURI_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager2MutableURI_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager2MutableURI_IsAbsoluteURI(This,pfIsAbsolute)	\
    ( (This)->lpVtbl -> IsAbsoluteURI(This,pfIsAbsolute) ) 

#define IConfigManager2MutableURI_HasQuery(This,pfHasQuery)	\
    ( (This)->lpVtbl -> HasQuery(This,pfHasQuery) ) 

#define IConfigManager2MutableURI_InitializeFromString(This,pwszURI)	\
    ( (This)->lpVtbl -> InitializeFromString(This,pwszURI) ) 

#define IConfigManager2MutableURI_InitializeFromStream(This,pStream)	\
    ( (This)->lpVtbl -> InitializeFromStream(This,pStream) ) 

#define IConfigManager2MutableURI_SaveToStream(This,pStream)	\
    ( (This)->lpVtbl -> SaveToStream(This,pStream) ) 

#define IConfigManager2MutableURI_GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI)	\
    ( (This)->lpVtbl -> GetCanonicalRelativeURI(This,idwSegIndex,fIncludeQuery,pbstrRelURI) ) 

#define IConfigManager2MutableURI_GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI)	\
    ( (This)->lpVtbl -> GetRelativeURI(This,dwSegIndex,fIncludeQuery,pURI) ) 

#define IConfigManager2MutableURI_SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2)	\
    ( (This)->lpVtbl -> SplitURI(This,idwSegSplit,fIncludeQuery,pURI1,pURI2) ) 

#define IConfigManager2MutableURI_GetSegment(This,idwSegIndex,pwszSegment)	\
    ( (This)->lpVtbl -> GetSegment(This,idwSegIndex,pwszSegment) ) 

#define IConfigManager2MutableURI_GetSegmentCopy(This,idwSegIndex,pbstrSegment)	\
    ( (This)->lpVtbl -> GetSegmentCopy(This,idwSegIndex,pbstrSegment) ) 

#define IConfigManager2MutableURI_CompareURI(This,pURI2,fIgnoreCase,pnCompare)	\
    ( (This)->lpVtbl -> CompareURI(This,pURI2,fIgnoreCase,pnCompare) ) 

#define IConfigManager2MutableURI_FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex)	\
    ( (This)->lpVtbl -> FindLastCommonSegment(This,pURI,fIgnoreCase,dwCommonSegIndex) ) 

#define IConfigManager2MutableURI_GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined)	\
    ( (This)->lpVtbl -> GetJoinedSegments(This,dwSegIndex,wchJoin,pbstrJoined) ) 

#define IConfigManager2MutableURI_GetQueryValue(This,pwszName,pbstrValue)	\
    ( (This)->lpVtbl -> GetQueryValue(This,pwszName,pbstrValue) ) 

#define IConfigManager2MutableURI_GetSegmentCount(This,pcdwSegments)	\
    ( (This)->lpVtbl -> GetSegmentCount(This,pcdwSegments) ) 

#define IConfigManager2MutableURI_Clone(This,fIncludeQuery,ppMutableURI)	\
    ( (This)->lpVtbl -> Clone(This,fIncludeQuery,ppMutableURI) ) 

#define IConfigManager2MutableURI_GetHash(This,fIgnoreCase,pdwHash)	\
    ( (This)->lpVtbl -> GetHash(This,fIgnoreCase,pdwHash) ) 

#define IConfigManager2MutableURI_AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendSegmentToCopy(This,pwszSegment,fSegmentIsEncoded,fIncludeQuery,ppURI) ) 

#define IConfigManager2MutableURI_AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI)	\
    ( (This)->lpVtbl -> AppendRelativeURIToCopy(This,pRelativeURI,dwSegIndex,fIncludeQuery,ppURI) ) 


#define IConfigManager2MutableURI_AppendSegment(This,pwszSegment,fSegmentIsEncoded)	\
    ( (This)->lpVtbl -> AppendSegment(This,pwszSegment,fSegmentIsEncoded) ) 

#define IConfigManager2MutableURI_AppendRelativeURI(This,pURI,idwSegment)	\
    ( (This)->lpVtbl -> AppendRelativeURI(This,pURI,idwSegment) ) 

#define IConfigManager2MutableURI_ReplaceSegment(This,idwSegIndex,pwszSegment,fSegmentIsEncoded)	\
    ( (This)->lpVtbl -> ReplaceSegment(This,idwSegIndex,pwszSegment,fSegmentIsEncoded) ) 

#define IConfigManager2MutableURI_DeleteSegment(This,idwSegIndex)	\
    ( (This)->lpVtbl -> DeleteSegment(This,idwSegIndex) ) 

#define IConfigManager2MutableURI_InsertSegment(This,idwInsertBefore,pwszSegment,fSegmentIsEncoded)	\
    ( (This)->lpVtbl -> InsertSegment(This,idwInsertBefore,pwszSegment,fSegmentIsEncoded) ) 

#define IConfigManager2MutableURI_AppendQueryValue(This,pwszQueryName,pwszQueryValue,fIsEncoded)	\
    ( (This)->lpVtbl -> AppendQueryValue(This,pwszQueryName,pwszQueryValue,fIsEncoded) ) 

#define IConfigManager2MutableURI_CreateNonMutableURI(This,ppURI)	\
    ( (This)->lpVtbl -> CreateNonMutableURI(This,ppURI) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager2MutableURI_INTERFACE_DEFINED__ */


#ifndef __ICSPURITranslator_INTERFACE_DEFINED__
#define __ICSPURITranslator_INTERFACE_DEFINED__

/* interface ICSPURITranslator */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICSPURITranslator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0190E18E-3A45-4634-BB1F-7A5B0C753DED")
    ICSPURITranslator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TranslateURI( 
            /* [in] */ __RPC__in_opt IConfigManager2MutableURI *puriTranslate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TranslateValue( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriNode,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICSPURITranslatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICSPURITranslator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICSPURITranslator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICSPURITranslator * This);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateURI )( 
            __RPC__in ICSPURITranslator * This,
            /* [in] */ __RPC__in_opt IConfigManager2MutableURI *puriTranslate);
        
        HRESULT ( STDMETHODCALLTYPE *TranslateValue )( 
            __RPC__in ICSPURITranslator * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriNode,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue);
        
        END_INTERFACE
    } ICSPURITranslatorVtbl;

    interface ICSPURITranslator
    {
        CONST_VTBL struct ICSPURITranslatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSPURITranslator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSPURITranslator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSPURITranslator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSPURITranslator_TranslateURI(This,puriTranslate)	\
    ( (This)->lpVtbl -> TranslateURI(This,puriTranslate) ) 

#define ICSPURITranslator_TranslateValue(This,puriNode,pvarValue)	\
    ( (This)->lpVtbl -> TranslateValue(This,puriNode,pvarValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSPURITranslator_INTERFACE_DEFINED__ */


#ifndef __IConfigManager2URI2_INTERFACE_DEFINED__
#define __IConfigManager2URI2_INTERFACE_DEFINED__

/* interface IConfigManager2URI2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager2URI2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E8E62E9D-37FC-47A0-846A-29781DFA97D9")
    IConfigManager2URI2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetOriginalURI( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrOriginalURI) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigManager2URI2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigManager2URI2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigManager2URI2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigManager2URI2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetOriginalURI )( 
            __RPC__in IConfigManager2URI2 * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrOriginalURI);
        
        END_INTERFACE
    } IConfigManager2URI2Vtbl;

    interface IConfigManager2URI2
    {
        CONST_VTBL struct IConfigManager2URI2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager2URI2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager2URI2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager2URI2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager2URI2_GetOriginalURI(This,pbstrOriginalURI)	\
    ( (This)->lpVtbl -> GetOriginalURI(This,pbstrOriginalURI) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager2URI2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_cmgruri_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmgruri_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


