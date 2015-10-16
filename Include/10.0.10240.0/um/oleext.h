

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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __oleext_h__
#define __oleext_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPropertySetContainer_FWD_DEFINED__
#define __IPropertySetContainer_FWD_DEFINED__
typedef interface IPropertySetContainer IPropertySetContainer;

#endif 	/* __IPropertySetContainer_FWD_DEFINED__ */


#ifndef __INotifyReplica_FWD_DEFINED__
#define __INotifyReplica_FWD_DEFINED__
typedef interface INotifyReplica INotifyReplica;

#endif 	/* __INotifyReplica_FWD_DEFINED__ */


#ifndef __IReconcilableObject_FWD_DEFINED__
#define __IReconcilableObject_FWD_DEFINED__
typedef interface IReconcilableObject IReconcilableObject;

#endif 	/* __IReconcilableObject_FWD_DEFINED__ */


#ifndef __IReconcileInitiator_FWD_DEFINED__
#define __IReconcileInitiator_FWD_DEFINED__
typedef interface IReconcileInitiator IReconcileInitiator;

#endif 	/* __IReconcileInitiator_FWD_DEFINED__ */


#ifndef __IDifferencing_FWD_DEFINED__
#define __IDifferencing_FWD_DEFINED__
typedef interface IDifferencing IDifferencing;

#endif 	/* __IDifferencing_FWD_DEFINED__ */


#ifndef __IMultiplePropertyAccess_FWD_DEFINED__
#define __IMultiplePropertyAccess_FWD_DEFINED__
typedef interface IMultiplePropertyAccess IMultiplePropertyAccess;

#endif 	/* __IMultiplePropertyAccess_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "propidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPropertySetContainer_INTERFACE_DEFINED__
#define __IPropertySetContainer_INTERFACE_DEFINED__

/* interface IPropertySetContainer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPropertySetContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b4ffae60-a7ca-11cd-b58b-00006b829156")
    IPropertySetContainer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropset( 
            /* [in] */ __RPC__in REFGUID rguidName,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt IUnknown **ppvObj) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddPropset( 
            /* [in] */ __RPC__in_opt IPersist *pPropset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeletePropset( 
            /* [in] */ __RPC__in REFGUID rguidName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertySetContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPropertySetContainer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPropertySetContainer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPropertySetContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropset )( 
            __RPC__in IPropertySetContainer * This,
            /* [in] */ __RPC__in REFGUID rguidName,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt IUnknown **ppvObj);
        
        HRESULT ( STDMETHODCALLTYPE *AddPropset )( 
            __RPC__in IPropertySetContainer * This,
            /* [in] */ __RPC__in_opt IPersist *pPropset);
        
        HRESULT ( STDMETHODCALLTYPE *DeletePropset )( 
            __RPC__in IPropertySetContainer * This,
            /* [in] */ __RPC__in REFGUID rguidName);
        
        END_INTERFACE
    } IPropertySetContainerVtbl;

    interface IPropertySetContainer
    {
        CONST_VTBL struct IPropertySetContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertySetContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertySetContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertySetContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertySetContainer_GetPropset(This,rguidName,riid,ppvObj)	\
    ( (This)->lpVtbl -> GetPropset(This,rguidName,riid,ppvObj) ) 

#define IPropertySetContainer_AddPropset(This,pPropset)	\
    ( (This)->lpVtbl -> AddPropset(This,pPropset) ) 

#define IPropertySetContainer_DeletePropset(This,rguidName)	\
    ( (This)->lpVtbl -> DeletePropset(This,rguidName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertySetContainer_INTERFACE_DEFINED__ */


#ifndef __INotifyReplica_INTERFACE_DEFINED__
#define __INotifyReplica_INTERFACE_DEFINED__

/* interface INotifyReplica */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_INotifyReplica;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99180163-DA16-101A-935C-444553540000")
    INotifyReplica : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE YouAreAReplica( 
            /* [in] */ ULONG cOtherReplicas,
            /* [unique][in][size_is][size_is] */ __RPC__in_ecount_full_opt(cOtherReplicas) IMoniker **rgpOtherReplicas) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INotifyReplicaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in INotifyReplica * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in INotifyReplica * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in INotifyReplica * This);
        
        HRESULT ( STDMETHODCALLTYPE *YouAreAReplica )( 
            __RPC__in INotifyReplica * This,
            /* [in] */ ULONG cOtherReplicas,
            /* [unique][in][size_is][size_is] */ __RPC__in_ecount_full_opt(cOtherReplicas) IMoniker **rgpOtherReplicas);
        
        END_INTERFACE
    } INotifyReplicaVtbl;

    interface INotifyReplica
    {
        CONST_VTBL struct INotifyReplicaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INotifyReplica_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INotifyReplica_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INotifyReplica_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INotifyReplica_YouAreAReplica(This,cOtherReplicas,rgpOtherReplicas)	\
    ( (This)->lpVtbl -> YouAreAReplica(This,cOtherReplicas,rgpOtherReplicas) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INotifyReplica_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oleext_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_oleext_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleext_0000_0002_v0_0_s_ifspec;

#ifndef __IReconcilableObject_INTERFACE_DEFINED__
#define __IReconcilableObject_INTERFACE_DEFINED__

/* interface IReconcilableObject */
/* [unique][uuid][object] */ 

typedef 
enum _reconcilef
    {
        RECONCILEF_MAYBOTHERUSER	= 0x1,
        RECONCILEF_FEEDBACKWINDOWVALID	= 0x2,
        RECONCILEF_NORESIDUESOK	= 0x4,
        RECONCILEF_OMITSELFRESIDUE	= 0x8,
        RECONCILEF_RESUMERECONCILIATION	= 0x10,
        RECONCILEF_YOUMAYDOTHEUPDATES	= 0x20,
        RECONCILEF_ONLYYOUWERECHANGED	= 0x40,
        ALL_RECONCILE_FLAGS	= ( ( ( ( ( ( RECONCILEF_MAYBOTHERUSER | RECONCILEF_FEEDBACKWINDOWVALID )  | RECONCILEF_NORESIDUESOK )  | RECONCILEF_OMITSELFRESIDUE )  | RECONCILEF_RESUMERECONCILIATION )  | RECONCILEF_YOUMAYDOTHEUPDATES )  | RECONCILEF_ONLYYOUWERECHANGED ) 
    } 	RECONCILEF;


EXTERN_C const IID IID_IReconcilableObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99180162-DA16-101A-935C-444553540000")
    IReconcilableObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Reconcile( 
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in HWND hwndOwner,
            /* [in] */ __RPC__in HWND hwndProgressFeedback,
            /* [in] */ ULONG cInput,
            /* [size_is][size_is][unique][in] */ __RPC__in_ecount_full_opt(cInput) LPMONIKER *rgpmkOtherInput,
            /* [out] */ __RPC__out LONG *plOutIndex,
            /* [unique][in] */ __RPC__in_opt IStorage *pstgNewResidues,
            /* [unique][in] */ __RPC__in_opt ULONG *pvReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgressFeedbackMaxEstimate( 
            /* [out] */ __RPC__out ULONG *pulProgressMax) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReconcilableObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IReconcilableObject * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IReconcilableObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IReconcilableObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *Reconcile )( 
            __RPC__in IReconcilableObject * This,
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ DWORD dwFlags,
            /* [in] */ __RPC__in HWND hwndOwner,
            /* [in] */ __RPC__in HWND hwndProgressFeedback,
            /* [in] */ ULONG cInput,
            /* [size_is][size_is][unique][in] */ __RPC__in_ecount_full_opt(cInput) LPMONIKER *rgpmkOtherInput,
            /* [out] */ __RPC__out LONG *plOutIndex,
            /* [unique][in] */ __RPC__in_opt IStorage *pstgNewResidues,
            /* [unique][in] */ __RPC__in_opt ULONG *pvReserved);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgressFeedbackMaxEstimate )( 
            __RPC__in IReconcilableObject * This,
            /* [out] */ __RPC__out ULONG *pulProgressMax);
        
        END_INTERFACE
    } IReconcilableObjectVtbl;

    interface IReconcilableObject
    {
        CONST_VTBL struct IReconcilableObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReconcilableObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReconcilableObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReconcilableObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReconcilableObject_Reconcile(This,pInitiator,dwFlags,hwndOwner,hwndProgressFeedback,cInput,rgpmkOtherInput,plOutIndex,pstgNewResidues,pvReserved)	\
    ( (This)->lpVtbl -> Reconcile(This,pInitiator,dwFlags,hwndOwner,hwndProgressFeedback,cInput,rgpmkOtherInput,plOutIndex,pstgNewResidues,pvReserved) ) 

#define IReconcilableObject_GetProgressFeedbackMaxEstimate(This,pulProgressMax)	\
    ( (This)->lpVtbl -> GetProgressFeedbackMaxEstimate(This,pulProgressMax) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReconcilableObject_INTERFACE_DEFINED__ */


#ifndef __Versioning_INTERFACE_DEFINED__
#define __Versioning_INTERFACE_DEFINED__

/* interface Versioning */
/* [unique][uuid] */ 


#pragma pack(4)
typedef GUID VERID;

typedef struct tagVERIDARRAY
    {
    DWORD cVerid;
    /* [size_is] */ GUID verid[ 1 ];
    } 	VERIDARRAY;

typedef struct tagVERBLOCK
    {
    ULONG iveridFirst;
    ULONG iveridMax;
    ULONG cblockPrev;
    /* [size_is] */ ULONG *rgiblockPrev;
    } 	VERBLOCK;

typedef struct tagVERCONNECTIONINFO
    {
    DWORD cBlock;
    /* [size_is] */ VERBLOCK *rgblock;
    } 	VERCONNECTIONINFO;

typedef struct tagVERGRAPH
    {
    VERCONNECTIONINFO blocks;
    VERIDARRAY nodes;
    } 	VERGRAPH;


#pragma pack()


extern RPC_IF_HANDLE Versioning_v0_0_c_ifspec;
extern RPC_IF_HANDLE Versioning_v0_0_s_ifspec;
#endif /* __Versioning_INTERFACE_DEFINED__ */

#ifndef __IReconcileInitiator_INTERFACE_DEFINED__
#define __IReconcileInitiator_INTERFACE_DEFINED__

/* interface IReconcileInitiator */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IReconcileInitiator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99180161-DA16-101A-935C-444553540000")
    IReconcileInitiator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetAbortCallback( 
            /* [unique][in] */ __RPC__in_opt IUnknown *pUnkForAbort) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProgressFeedback( 
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindVersion( 
            /* [in] */ __RPC__in VERID *pverid,
            /* [out] */ __RPC__deref_out_opt IMoniker **ppmk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindVersionFromGraph( 
            /* [in] */ __RPC__in VERGRAPH *pvergraph,
            /* [out] */ __RPC__out VERID *pverid,
            /* [out] */ __RPC__deref_out_opt IMoniker **ppmk) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReconcileInitiatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IReconcileInitiator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IReconcileInitiator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IReconcileInitiator * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAbortCallback )( 
            __RPC__in IReconcileInitiator * This,
            /* [unique][in] */ __RPC__in_opt IUnknown *pUnkForAbort);
        
        HRESULT ( STDMETHODCALLTYPE *SetProgressFeedback )( 
            __RPC__in IReconcileInitiator * This,
            /* [in] */ ULONG ulProgress,
            /* [in] */ ULONG ulProgressMax);
        
        HRESULT ( STDMETHODCALLTYPE *FindVersion )( 
            __RPC__in IReconcileInitiator * This,
            /* [in] */ __RPC__in VERID *pverid,
            /* [out] */ __RPC__deref_out_opt IMoniker **ppmk);
        
        HRESULT ( STDMETHODCALLTYPE *FindVersionFromGraph )( 
            __RPC__in IReconcileInitiator * This,
            /* [in] */ __RPC__in VERGRAPH *pvergraph,
            /* [out] */ __RPC__out VERID *pverid,
            /* [out] */ __RPC__deref_out_opt IMoniker **ppmk);
        
        END_INTERFACE
    } IReconcileInitiatorVtbl;

    interface IReconcileInitiator
    {
        CONST_VTBL struct IReconcileInitiatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReconcileInitiator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReconcileInitiator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReconcileInitiator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReconcileInitiator_SetAbortCallback(This,pUnkForAbort)	\
    ( (This)->lpVtbl -> SetAbortCallback(This,pUnkForAbort) ) 

#define IReconcileInitiator_SetProgressFeedback(This,ulProgress,ulProgressMax)	\
    ( (This)->lpVtbl -> SetProgressFeedback(This,ulProgress,ulProgressMax) ) 

#define IReconcileInitiator_FindVersion(This,pverid,ppmk)	\
    ( (This)->lpVtbl -> FindVersion(This,pverid,ppmk) ) 

#define IReconcileInitiator_FindVersionFromGraph(This,pvergraph,pverid,ppmk)	\
    ( (This)->lpVtbl -> FindVersionFromGraph(This,pvergraph,pverid,ppmk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReconcileInitiator_INTERFACE_DEFINED__ */


#ifndef __IDifferencing_INTERFACE_DEFINED__
#define __IDifferencing_INTERFACE_DEFINED__

/* interface IDifferencing */
/* [unique][uuid][object] */ 

typedef /* [public][public][public][public] */ 
enum __MIDL_IDifferencing_0001
    {
        DIFF_TYPE_Ordinary	= 0,
        DIFF_TYPE_Urgent	= ( DIFF_TYPE_Ordinary + 1 ) 
    } 	DifferenceType;


EXTERN_C const IID IID_IDifferencing;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("994f0af0-2977-11ce-bb80-08002b36b2b0")
    IDifferencing : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SubtractMoniker( 
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in_opt IMoniker *pOtherStg,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ __RPC__inout STGMEDIUM *pStgMedium,
            /* [in] */ DWORD reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubtractVerid( 
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in VERID *pVerid,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ __RPC__inout STGMEDIUM *pStgMedium,
            /* [in] */ DWORD reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SubtractTimeStamp( 
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in FILETIME *pTimeStamp,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ __RPC__inout STGMEDIUM *pStgMedium,
            /* [in] */ DWORD reserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in STGMEDIUM *pStgMedium) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDifferencingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDifferencing * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDifferencing * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDifferencing * This);
        
        HRESULT ( STDMETHODCALLTYPE *SubtractMoniker )( 
            __RPC__in IDifferencing * This,
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in_opt IMoniker *pOtherStg,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ __RPC__inout STGMEDIUM *pStgMedium,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE *SubtractVerid )( 
            __RPC__in IDifferencing * This,
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in VERID *pVerid,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ __RPC__inout STGMEDIUM *pStgMedium,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE *SubtractTimeStamp )( 
            __RPC__in IDifferencing * This,
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in FILETIME *pTimeStamp,
            /* [in] */ DifferenceType diffType,
            /* [out][in] */ __RPC__inout STGMEDIUM *pStgMedium,
            /* [in] */ DWORD reserved);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IDifferencing * This,
            /* [in] */ __RPC__in_opt IReconcileInitiator *pInitiator,
            /* [in] */ __RPC__in STGMEDIUM *pStgMedium);
        
        END_INTERFACE
    } IDifferencingVtbl;

    interface IDifferencing
    {
        CONST_VTBL struct IDifferencingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDifferencing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDifferencing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDifferencing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDifferencing_SubtractMoniker(This,pInitiator,pOtherStg,diffType,pStgMedium,reserved)	\
    ( (This)->lpVtbl -> SubtractMoniker(This,pInitiator,pOtherStg,diffType,pStgMedium,reserved) ) 

#define IDifferencing_SubtractVerid(This,pInitiator,pVerid,diffType,pStgMedium,reserved)	\
    ( (This)->lpVtbl -> SubtractVerid(This,pInitiator,pVerid,diffType,pStgMedium,reserved) ) 

#define IDifferencing_SubtractTimeStamp(This,pInitiator,pTimeStamp,diffType,pStgMedium,reserved)	\
    ( (This)->lpVtbl -> SubtractTimeStamp(This,pInitiator,pTimeStamp,diffType,pStgMedium,reserved) ) 

#define IDifferencing_Add(This,pInitiator,pStgMedium)	\
    ( (This)->lpVtbl -> Add(This,pInitiator,pStgMedium) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDifferencing_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oleext_0000_0006 */
/* [local] */ 

#include <iaccess.h>


extern RPC_IF_HANDLE __MIDL_itf_oleext_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleext_0000_0006_v0_0_s_ifspec;

#ifndef __IMultiplePropertyAccess_INTERFACE_DEFINED__
#define __IMultiplePropertyAccess_INTERFACE_DEFINED__

/* interface IMultiplePropertyAccess */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IMultiplePropertyAccess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec81fede-d432-11ce-9244-0020af6e72db")
    IMultiplePropertyAccess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetIDsOfProperties( 
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [in] */ ULONG cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) HRESULT *rghresult,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgdispid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMultiple( 
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) DISPID *rgdispidMembers,
            /* [in] */ ULONG cMembers,
            /* [in] */ __RPC__in REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][out] */ __RPC__out_ecount_full(cMembers) VARIANT *rgvarValues,
            /* [size_is][out] */ __RPC__out_ecount_full(cMembers) HRESULT *rghresult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PutMultiple( 
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) DISPID *rgdispidMembers,
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) USHORT *rgusFlags,
            /* [in] */ ULONG cMembers,
            /* [in] */ __RPC__in REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) VARIANT *rgvarValues,
            /* [size_is][out] */ __RPC__out_ecount_full(cMembers) HRESULT *rghresult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMultiplePropertyAccessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IMultiplePropertyAccess * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IMultiplePropertyAccess * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IMultiplePropertyAccess * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfProperties )( 
            __RPC__in IMultiplePropertyAccess * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [in] */ ULONG cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) HRESULT *rghresult,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgdispid);
        
        HRESULT ( STDMETHODCALLTYPE *GetMultiple )( 
            __RPC__in IMultiplePropertyAccess * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) DISPID *rgdispidMembers,
            /* [in] */ ULONG cMembers,
            /* [in] */ __RPC__in REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][out] */ __RPC__out_ecount_full(cMembers) VARIANT *rgvarValues,
            /* [size_is][out] */ __RPC__out_ecount_full(cMembers) HRESULT *rghresult);
        
        HRESULT ( STDMETHODCALLTYPE *PutMultiple )( 
            __RPC__in IMultiplePropertyAccess * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) DISPID *rgdispidMembers,
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) USHORT *rgusFlags,
            /* [in] */ ULONG cMembers,
            /* [in] */ __RPC__in REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ BOOL fAtomic,
            /* [size_is][in] */ __RPC__in_ecount_full(cMembers) VARIANT *rgvarValues,
            /* [size_is][out] */ __RPC__out_ecount_full(cMembers) HRESULT *rghresult);
        
        END_INTERFACE
    } IMultiplePropertyAccessVtbl;

    interface IMultiplePropertyAccess
    {
        CONST_VTBL struct IMultiplePropertyAccessVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMultiplePropertyAccess_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMultiplePropertyAccess_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMultiplePropertyAccess_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMultiplePropertyAccess_GetIDsOfProperties(This,riid,rgszNames,cNames,lcid,rghresult,rgdispid)	\
    ( (This)->lpVtbl -> GetIDsOfProperties(This,riid,rgszNames,cNames,lcid,rghresult,rgdispid) ) 

#define IMultiplePropertyAccess_GetMultiple(This,rgdispidMembers,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult)	\
    ( (This)->lpVtbl -> GetMultiple(This,rgdispidMembers,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult) ) 

#define IMultiplePropertyAccess_PutMultiple(This,rgdispidMembers,rgusFlags,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult)	\
    ( (This)->lpVtbl -> PutMultiple(This,rgdispidMembers,rgusFlags,cMembers,riid,lcid,fAtomic,rgvarValues,rghresult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMultiplePropertyAccess_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oleext_0000_0007 */
/* [local] */ 

#if !defined(_TAGFULLPROPSPEC_DEFINED_)
#define _TAGFULLPROPSPEC_DEFINED_
typedef struct tagFULLPROPSPEC
    {
    GUID guidPropSet;
    PROPSPEC psProperty;
    } 	FULLPROPSPEC;

#endif // #if !defined(_TAGFULLPROPSPEC_DEFINED_)


extern RPC_IF_HANDLE __MIDL_itf_oleext_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleext_0000_0007_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HWND_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  STGMEDIUM_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in STGMEDIUM * ); 
unsigned char * __RPC_USER  STGMEDIUM_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * ); 
unsigned char * __RPC_USER  STGMEDIUM_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * ); 
void                      __RPC_USER  STGMEDIUM_UserFree(     __RPC__in unsigned long *, __RPC__in STGMEDIUM * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  STGMEDIUM_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in STGMEDIUM * ); 
unsigned char * __RPC_USER  STGMEDIUM_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * ); 
unsigned char * __RPC_USER  STGMEDIUM_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * ); 
void                      __RPC_USER  STGMEDIUM_UserFree64(     __RPC__in unsigned long *, __RPC__in STGMEDIUM * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


