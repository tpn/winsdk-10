

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

#ifndef __tvratings_h__
#define __tvratings_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IXDSToRat_FWD_DEFINED__
#define __IXDSToRat_FWD_DEFINED__
typedef interface IXDSToRat IXDSToRat;

#endif 	/* __IXDSToRat_FWD_DEFINED__ */


#ifndef __IEvalRat_FWD_DEFINED__
#define __IEvalRat_FWD_DEFINED__
typedef interface IEvalRat IEvalRat;

#endif 	/* __IEvalRat_FWD_DEFINED__ */


#ifndef __XDSToRat_FWD_DEFINED__
#define __XDSToRat_FWD_DEFINED__

#ifdef __cplusplus
typedef class XDSToRat XDSToRat;
#else
typedef struct XDSToRat XDSToRat;
#endif /* __cplusplus */

#endif 	/* __XDSToRat_FWD_DEFINED__ */


#ifndef __EvalRat_FWD_DEFINED__
#define __EvalRat_FWD_DEFINED__

#ifdef __cplusplus
typedef class EvalRat EvalRat;
#else
typedef struct EvalRat EvalRat;
#endif /* __cplusplus */

#endif 	/* __EvalRat_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_tvratings_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma region Desktop Family
#pragma endregion
typedef 
enum EnTvRat_System
    {
        MPAA	= 0,
        US_TV	= 1,
        Canadian_English	= 2,
        Canadian_French	= 3,
        Reserved4	= 4,
        System5	= 5,
        System6	= 6,
        Reserved7	= 7,
        PBDA	= 8,
        AgeBased	= 9,
        TvRat_kSystems	= 10,
        TvRat_SystemDontKnow	= 255
    } 	EnTvRat_System;

typedef 
enum EnTvRat_GenericLevel
    {
        TvRat_0	= 0,
        TvRat_1	= 1,
        TvRat_2	= 2,
        TvRat_3	= 3,
        TvRat_4	= 4,
        TvRat_5	= 5,
        TvRat_6	= 6,
        TvRat_7	= 7,
        TvRat_8	= 8,
        TvRat_9	= 9,
        TvRat_10	= 10,
        TvRat_11	= 11,
        TvRat_12	= 12,
        TvRat_13	= 13,
        TvRat_14	= 14,
        TvRat_15	= 15,
        TvRat_16	= 16,
        TvRat_17	= 17,
        TvRat_18	= 18,
        TvRat_19	= 19,
        TvRat_20	= 20,
        TvRat_21	= 21,
        TvRat_kLevels	= 22,
        TvRat_Unblock	= -1,
        TvRat_LevelDontKnow	= 255
    } 	EnTvRat_GenericLevel;

typedef 
enum EnTvRat_MPAA
    {
        MPAA_NotApplicable	= TvRat_0,
        MPAA_G	= TvRat_1,
        MPAA_PG	= TvRat_2,
        MPAA_PG13	= TvRat_3,
        MPAA_R	= TvRat_4,
        MPAA_NC17	= TvRat_5,
        MPAA_X	= TvRat_6,
        MPAA_NotRated	= TvRat_7
    } 	EnTvRat_MPAA;

typedef 
enum EnTvRat_US_TV
    {
        US_TV_None	= TvRat_0,
        US_TV_Y	= TvRat_1,
        US_TV_Y7	= TvRat_2,
        US_TV_G	= TvRat_3,
        US_TV_PG	= TvRat_4,
        US_TV_14	= TvRat_5,
        US_TV_MA	= TvRat_6,
        US_TV_None7	= TvRat_7
    } 	EnTvRat_US_TV;

typedef 
enum EnTvRat_CAE_TV
    {
        CAE_TV_Exempt	= TvRat_0,
        CAE_TV_C	= TvRat_1,
        CAE_TV_C8	= TvRat_2,
        CAE_TV_G	= TvRat_3,
        CAE_TV_PG	= TvRat_4,
        CAE_TV_14	= TvRat_5,
        CAE_TV_18	= TvRat_6,
        CAE_TV_Reserved	= TvRat_7
    } 	EnTvRat_CAE_TV;

typedef 
enum EnTvRat_CAF_TV
    {
        CAF_TV_Exempt	= TvRat_0,
        CAF_TV_G	= TvRat_1,
        CAF_TV_8	= TvRat_2,
        CAF_TV_13	= TvRat_3,
        CAF_TV_16	= TvRat_4,
        CAF_TV_18	= TvRat_5,
        CAF_TV_Reserved6	= TvRat_6,
        CAF_TV_Reserved	= TvRat_7
    } 	EnTvRat_CAF_TV;

typedef 
enum BfEnTvRat_GenericAttributes
    {
        BfAttrNone	= 0,
        BfIsBlocked	= 1,
        BfIsAttr_1	= 2,
        BfIsAttr_2	= 4,
        BfIsAttr_3	= 8,
        BfIsAttr_4	= 16,
        BfIsAttr_5	= 32,
        BfIsAttr_6	= 64,
        BfIsAttr_7	= 128,
        BfValidAttrSubmask	= 255
    } 	BfEnTvRat_GenericAttributes;

typedef 
enum BfEnTvRat_Attributes_US_TV
    {
        US_TV_IsBlocked	= BfIsBlocked,
        US_TV_IsViolent	= BfIsAttr_1,
        US_TV_IsSexualSituation	= BfIsAttr_2,
        US_TV_IsAdultLanguage	= BfIsAttr_3,
        US_TV_IsSexuallySuggestiveDialog	= BfIsAttr_4,
        US_TV_ValidAttrSubmask	= 31
    } 	BfEnTvRat_Attributes_US_TV;

typedef 
enum BfEnTvRat_Attributes_MPAA
    {
        MPAA_IsBlocked	= BfIsBlocked,
        MPAA_ValidAttrSubmask	= 1
    } 	BfEnTvRat_Attributes_MPAA;

typedef 
enum BfEnTvRat_Attributes_CAE_TV
    {
        CAE_IsBlocked	= BfIsBlocked,
        CAE_ValidAttrSubmask	= 1
    } 	BfEnTvRat_Attributes_CAE_TV;

typedef 
enum BfEnTvRat_Attributes_CAF_TV
    {
        CAF_IsBlocked	= BfIsBlocked,
        CAF_ValidAttrSubmask	= 1
    } 	BfEnTvRat_Attributes_CAF_TV;

#pragma region Desktop Family
#pragma endregion
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0000_v0_0_s_ifspec;

#ifndef __IXDSToRat_INTERFACE_DEFINED__
#define __IXDSToRat_INTERFACE_DEFINED__

/* interface IXDSToRat */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IXDSToRat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5C5C5B0-3ABC-11D6-B25B-00C04FA0C026")
    IXDSToRat : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ParseXDSBytePair( 
            /* [in] */ BYTE byte1,
            /* [in] */ BYTE byte2,
            /* [out] */ __RPC__out EnTvRat_System *pEnSystem,
            /* [out] */ __RPC__out EnTvRat_GenericLevel *pEnLevel,
            /* [out] */ __RPC__out LONG *plBfEnAttributes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXDSToRatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IXDSToRat * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IXDSToRat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IXDSToRat * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IXDSToRat * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IXDSToRat * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IXDSToRat * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXDSToRat * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Init )( 
            __RPC__in IXDSToRat * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ParseXDSBytePair )( 
            __RPC__in IXDSToRat * This,
            /* [in] */ BYTE byte1,
            /* [in] */ BYTE byte2,
            /* [out] */ __RPC__out EnTvRat_System *pEnSystem,
            /* [out] */ __RPC__out EnTvRat_GenericLevel *pEnLevel,
            /* [out] */ __RPC__out LONG *plBfEnAttributes);
        
        END_INTERFACE
    } IXDSToRatVtbl;

    interface IXDSToRat
    {
        CONST_VTBL struct IXDSToRatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXDSToRat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXDSToRat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXDSToRat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXDSToRat_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXDSToRat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXDSToRat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXDSToRat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXDSToRat_Init(This)	\
    ( (This)->lpVtbl -> Init(This) ) 

#define IXDSToRat_ParseXDSBytePair(This,byte1,byte2,pEnSystem,pEnLevel,plBfEnAttributes)	\
    ( (This)->lpVtbl -> ParseXDSBytePair(This,byte1,byte2,pEnSystem,pEnLevel,plBfEnAttributes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXDSToRat_INTERFACE_DEFINED__ */


#ifndef __IEvalRat_INTERFACE_DEFINED__
#define __IEvalRat_INTERFACE_DEFINED__

/* interface IEvalRat */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IEvalRat;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5C5C5B1-3ABC-11D6-B25B-00C04FA0C026")
    IEvalRat : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlockedRatingAttributes( 
            /* [in] */ EnTvRat_System enSystem,
            /* [in] */ EnTvRat_GenericLevel enLevel,
            /* [retval][out] */ __RPC__out LONG *plbfAttrs) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlockedRatingAttributes( 
            /* [in] */ EnTvRat_System enSystem,
            /* [in] */ EnTvRat_GenericLevel enLevel,
            /* [in] */ LONG lbfAttrs) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BlockUnRated( 
            /* [retval][out] */ __RPC__out BOOL *pfBlockUnRatedShows) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BlockUnRated( 
            /* [in] */ BOOL fBlockUnRatedShows) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MostRestrictiveRating( 
            /* [in] */ EnTvRat_System enSystem1,
            /* [in] */ EnTvRat_GenericLevel enEnLevel1,
            /* [in] */ LONG lbfEnAttr1,
            /* [in] */ EnTvRat_System enSystem2,
            /* [in] */ EnTvRat_GenericLevel enEnLevel2,
            /* [in] */ LONG lbfEnAttr2,
            /* [out] */ __RPC__out EnTvRat_System *penSystem,
            /* [out] */ __RPC__out EnTvRat_GenericLevel *penEnLevel,
            /* [out] */ __RPC__out LONG *plbfEnAttr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TestRating( 
            /* [in] */ EnTvRat_System enShowSystem,
            /* [in] */ EnTvRat_GenericLevel enShowLevel,
            /* [in] */ LONG lbfEnShowAttributes) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEvalRatVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEvalRat * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEvalRat * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEvalRat * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IEvalRat * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IEvalRat * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IEvalRat * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEvalRat * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlockedRatingAttributes )( 
            __RPC__in IEvalRat * This,
            /* [in] */ EnTvRat_System enSystem,
            /* [in] */ EnTvRat_GenericLevel enLevel,
            /* [retval][out] */ __RPC__out LONG *plbfAttrs);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlockedRatingAttributes )( 
            __RPC__in IEvalRat * This,
            /* [in] */ EnTvRat_System enSystem,
            /* [in] */ EnTvRat_GenericLevel enLevel,
            /* [in] */ LONG lbfAttrs);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BlockUnRated )( 
            __RPC__in IEvalRat * This,
            /* [retval][out] */ __RPC__out BOOL *pfBlockUnRatedShows);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BlockUnRated )( 
            __RPC__in IEvalRat * This,
            /* [in] */ BOOL fBlockUnRatedShows);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MostRestrictiveRating )( 
            __RPC__in IEvalRat * This,
            /* [in] */ EnTvRat_System enSystem1,
            /* [in] */ EnTvRat_GenericLevel enEnLevel1,
            /* [in] */ LONG lbfEnAttr1,
            /* [in] */ EnTvRat_System enSystem2,
            /* [in] */ EnTvRat_GenericLevel enEnLevel2,
            /* [in] */ LONG lbfEnAttr2,
            /* [out] */ __RPC__out EnTvRat_System *penSystem,
            /* [out] */ __RPC__out EnTvRat_GenericLevel *penEnLevel,
            /* [out] */ __RPC__out LONG *plbfEnAttr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TestRating )( 
            __RPC__in IEvalRat * This,
            /* [in] */ EnTvRat_System enShowSystem,
            /* [in] */ EnTvRat_GenericLevel enShowLevel,
            /* [in] */ LONG lbfEnShowAttributes);
        
        END_INTERFACE
    } IEvalRatVtbl;

    interface IEvalRat
    {
        CONST_VTBL struct IEvalRatVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEvalRat_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEvalRat_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEvalRat_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEvalRat_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEvalRat_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEvalRat_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEvalRat_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEvalRat_get_BlockedRatingAttributes(This,enSystem,enLevel,plbfAttrs)	\
    ( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfAttrs) ) 

#define IEvalRat_put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs)	\
    ( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) ) 

#define IEvalRat_get_BlockUnRated(This,pfBlockUnRatedShows)	\
    ( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) ) 

#define IEvalRat_put_BlockUnRated(This,fBlockUnRatedShows)	\
    ( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) ) 

#define IEvalRat_MostRestrictiveRating(This,enSystem1,enEnLevel1,lbfEnAttr1,enSystem2,enEnLevel2,lbfEnAttr2,penSystem,penEnLevel,plbfEnAttr)	\
    ( (This)->lpVtbl -> MostRestrictiveRating(This,enSystem1,enEnLevel1,lbfEnAttr1,enSystem2,enEnLevel2,lbfEnAttr2,penSystem,penEnLevel,plbfEnAttr) ) 

#define IEvalRat_TestRating(This,enShowSystem,enShowLevel,lbfEnShowAttributes)	\
    ( (This)->lpVtbl -> TestRating(This,enShowSystem,enShowLevel,lbfEnShowAttributes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEvalRat_INTERFACE_DEFINED__ */



#ifndef __TVRATINGSLib_LIBRARY_DEFINED__
#define __TVRATINGSLib_LIBRARY_DEFINED__

/* library TVRATINGSLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_TVRATINGSLib;

EXTERN_C const CLSID CLSID_XDSToRat;

#ifdef __cplusplus

class DECLSPEC_UUID("C5C5C5F0-3ABC-11D6-B25B-00C04FA0C026")
XDSToRat;
#endif

EXTERN_C const CLSID CLSID_EvalRat;

#ifdef __cplusplus

class DECLSPEC_UUID("C5C5C5F1-3ABC-11D6-B25B-00C04FA0C026")
EvalRat;
#endif
#endif /* __TVRATINGSLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_tvratings_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tvratings_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


