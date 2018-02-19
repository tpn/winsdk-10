

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


#ifndef __manipulations_h__
#define __manipulations_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___IManipulationEvents_FWD_DEFINED__
#define ___IManipulationEvents_FWD_DEFINED__
typedef interface _IManipulationEvents _IManipulationEvents;

#endif 	/* ___IManipulationEvents_FWD_DEFINED__ */


#ifndef __IInertiaProcessor_FWD_DEFINED__
#define __IInertiaProcessor_FWD_DEFINED__
typedef interface IInertiaProcessor IInertiaProcessor;

#endif 	/* __IInertiaProcessor_FWD_DEFINED__ */


#ifndef __IManipulationProcessor_FWD_DEFINED__
#define __IManipulationProcessor_FWD_DEFINED__
typedef interface IManipulationProcessor IManipulationProcessor;

#endif 	/* __IManipulationProcessor_FWD_DEFINED__ */


#ifndef __InertiaProcessor_FWD_DEFINED__
#define __InertiaProcessor_FWD_DEFINED__

#ifdef __cplusplus
typedef class InertiaProcessor InertiaProcessor;
#else
typedef struct InertiaProcessor InertiaProcessor;
#endif /* __cplusplus */

#endif 	/* __InertiaProcessor_FWD_DEFINED__ */


#ifndef __ManipulationProcessor_FWD_DEFINED__
#define __ManipulationProcessor_FWD_DEFINED__

#ifdef __cplusplus
typedef class ManipulationProcessor ManipulationProcessor;
#else
typedef struct ManipulationProcessor ManipulationProcessor;
#endif /* __cplusplus */

#endif 	/* __ManipulationProcessor_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_manipulations_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef /* [v1_enum] */ 
enum MANIPULATION_PROCESSOR_MANIPULATIONS
    {
        MANIPULATION_NONE	= 0,
        MANIPULATION_TRANSLATE_X	= 0x1,
        MANIPULATION_TRANSLATE_Y	= 0x2,
        MANIPULATION_SCALE	= 0x4,
        MANIPULATION_ROTATE	= 0x8,
        MANIPULATION_ALL	= 0xf
    } 	MANIPULATION_PROCESSOR_MANIPULATIONS;

DEFINE_ENUM_FLAG_OPERATORS(MANIPULATION_PROCESSOR_MANIPULATIONS)
// Floating point constants.
DECLSPEC_SELECTANY extern const float POSITIVE_INFINITY = ((float)(1e308 * 10));
DECLSPEC_SELECTANY extern const float NEGATIVE_INFINITY = ((float)(-1e308 * 10));
DECLSPEC_SELECTANY extern const float NaN = ((float)((1e308 * 10)*0.));
typedef unsigned long MANIPULATOR_ID;



extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0000_v0_0_s_ifspec;


#ifndef __ManipulationsLib_LIBRARY_DEFINED__
#define __ManipulationsLib_LIBRARY_DEFINED__

/* library ManipulationsLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ManipulationsLib;

#ifndef ___IManipulationEvents_INTERFACE_DEFINED__
#define ___IManipulationEvents_INTERFACE_DEFINED__

/* interface _IManipulationEvents */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID__IManipulationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4f62c8da-9c53-4b22-93df-927a862bbb03")
    _IManipulationEvents : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ManipulationStarted( 
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ManipulationDelta( 
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT translationDeltaX,
            /* [in] */ FLOAT translationDeltaY,
            /* [in] */ FLOAT scaleDelta,
            /* [in] */ FLOAT expansionDelta,
            /* [in] */ FLOAT rotationDelta,
            /* [in] */ FLOAT cumulativeTranslationX,
            /* [in] */ FLOAT cumulativeTranslationY,
            /* [in] */ FLOAT cumulativeScale,
            /* [in] */ FLOAT cumulativeExpansion,
            /* [in] */ FLOAT cumulativeRotation) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ManipulationCompleted( 
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT cumulativeTranslationX,
            /* [in] */ FLOAT cumulativeTranslationY,
            /* [in] */ FLOAT cumulativeScale,
            /* [in] */ FLOAT cumulativeExpansion,
            /* [in] */ FLOAT cumulativeRotation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _IManipulationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in _IManipulationEvents * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in _IManipulationEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in _IManipulationEvents * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ManipulationStarted )( 
            __RPC__in _IManipulationEvents * This,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ManipulationDelta )( 
            __RPC__in _IManipulationEvents * This,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT translationDeltaX,
            /* [in] */ FLOAT translationDeltaY,
            /* [in] */ FLOAT scaleDelta,
            /* [in] */ FLOAT expansionDelta,
            /* [in] */ FLOAT rotationDelta,
            /* [in] */ FLOAT cumulativeTranslationX,
            /* [in] */ FLOAT cumulativeTranslationY,
            /* [in] */ FLOAT cumulativeScale,
            /* [in] */ FLOAT cumulativeExpansion,
            /* [in] */ FLOAT cumulativeRotation);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ManipulationCompleted )( 
            __RPC__in _IManipulationEvents * This,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ FLOAT cumulativeTranslationX,
            /* [in] */ FLOAT cumulativeTranslationY,
            /* [in] */ FLOAT cumulativeScale,
            /* [in] */ FLOAT cumulativeExpansion,
            /* [in] */ FLOAT cumulativeRotation);
        
        END_INTERFACE
    } _IManipulationEventsVtbl;

    interface _IManipulationEvents
    {
        CONST_VTBL struct _IManipulationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IManipulationEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IManipulationEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IManipulationEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IManipulationEvents_ManipulationStarted(This,x,y)	\
    ( (This)->lpVtbl -> ManipulationStarted(This,x,y) ) 

#define _IManipulationEvents_ManipulationDelta(This,x,y,translationDeltaX,translationDeltaY,scaleDelta,expansionDelta,rotationDelta,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation)	\
    ( (This)->lpVtbl -> ManipulationDelta(This,x,y,translationDeltaX,translationDeltaY,scaleDelta,expansionDelta,rotationDelta,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) ) 

#define _IManipulationEvents_ManipulationCompleted(This,x,y,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation)	\
    ( (This)->lpVtbl -> ManipulationCompleted(This,x,y,cumulativeTranslationX,cumulativeTranslationY,cumulativeScale,cumulativeExpansion,cumulativeRotation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___IManipulationEvents_INTERFACE_DEFINED__ */


#ifndef __IInertiaProcessor_INTERFACE_DEFINED__
#define __IInertiaProcessor_INTERFACE_DEFINED__

/* interface IInertiaProcessor */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IInertiaProcessor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18b00c6d-c5ee-41b1-90a9-9d4a929095ad")
    IInertiaProcessor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE get_InitialOriginX( 
            /* [out] */ __RPC__out FLOAT *x) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialOriginX( 
            /* [in] */ FLOAT x) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialOriginY( 
            /* [out] */ __RPC__out FLOAT *y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialOriginY( 
            /* [in] */ FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialVelocityX( 
            /* [out] */ __RPC__out FLOAT *x) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialVelocityX( 
            /* [in] */ FLOAT x) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialVelocityY( 
            /* [out] */ __RPC__out FLOAT *y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialVelocityY( 
            /* [in] */ FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialAngularVelocity( 
            /* [out] */ __RPC__out FLOAT *velocity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialAngularVelocity( 
            /* [in] */ FLOAT velocity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialExpansionVelocity( 
            /* [out] */ __RPC__out FLOAT *velocity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialExpansionVelocity( 
            /* [in] */ FLOAT velocity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialRadius( 
            /* [out] */ __RPC__out FLOAT *radius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialRadius( 
            /* [in] */ FLOAT radius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_BoundaryLeft( 
            /* [out] */ __RPC__out FLOAT *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_BoundaryLeft( 
            /* [in] */ FLOAT left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_BoundaryTop( 
            /* [out] */ __RPC__out FLOAT *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_BoundaryTop( 
            /* [in] */ FLOAT top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_BoundaryRight( 
            /* [out] */ __RPC__out FLOAT *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_BoundaryRight( 
            /* [in] */ FLOAT right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_BoundaryBottom( 
            /* [out] */ __RPC__out FLOAT *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_BoundaryBottom( 
            /* [in] */ FLOAT bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_ElasticMarginLeft( 
            /* [out] */ __RPC__out FLOAT *left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_ElasticMarginLeft( 
            /* [in] */ FLOAT left) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_ElasticMarginTop( 
            /* [out] */ __RPC__out FLOAT *top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_ElasticMarginTop( 
            /* [in] */ FLOAT top) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_ElasticMarginRight( 
            /* [out] */ __RPC__out FLOAT *right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_ElasticMarginRight( 
            /* [in] */ FLOAT right) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_ElasticMarginBottom( 
            /* [out] */ __RPC__out FLOAT *bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_ElasticMarginBottom( 
            /* [in] */ FLOAT bottom) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_DesiredDisplacement( 
            /* [out] */ __RPC__out FLOAT *displacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_DesiredDisplacement( 
            /* [in] */ FLOAT displacement) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_DesiredRotation( 
            /* [out] */ __RPC__out FLOAT *rotation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_DesiredRotation( 
            /* [in] */ FLOAT rotation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_DesiredExpansion( 
            /* [out] */ __RPC__out FLOAT *expansion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_DesiredExpansion( 
            /* [in] */ FLOAT expansion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_DesiredDeceleration( 
            /* [out] */ __RPC__out FLOAT *deceleration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_DesiredDeceleration( 
            /* [in] */ FLOAT deceleration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_DesiredAngularDeceleration( 
            /* [out] */ __RPC__out FLOAT *deceleration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_DesiredAngularDeceleration( 
            /* [in] */ FLOAT deceleration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_DesiredExpansionDeceleration( 
            /* [out] */ __RPC__out FLOAT *deceleration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_DesiredExpansionDeceleration( 
            /* [in] */ FLOAT deceleration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_InitialTimestamp( 
            /* [out] */ __RPC__out DWORD *timestamp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_InitialTimestamp( 
            /* [in] */ DWORD timestamp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Process( 
            /* [out] */ __RPC__out BOOL *completed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessTime( 
            /* [in] */ DWORD timestamp,
            /* [out] */ __RPC__out BOOL *completed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Complete( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompleteTime( 
            /* [in] */ DWORD timestamp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInertiaProcessorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInertiaProcessor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInertiaProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialOriginX )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *x);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialOriginX )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT x);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialOriginY )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *y);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialOriginY )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT y);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialVelocityX )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *x);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialVelocityX )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT x);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialVelocityY )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *y);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialVelocityY )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT y);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialAngularVelocity )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *velocity);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialAngularVelocity )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT velocity);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialExpansionVelocity )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *velocity);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialExpansionVelocity )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT velocity);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialRadius )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *radius);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialRadius )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT radius);
        
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryLeft )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *left);
        
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryLeft )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT left);
        
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryTop )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *top);
        
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryTop )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT top);
        
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryRight )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *right);
        
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryRight )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT right);
        
        HRESULT ( STDMETHODCALLTYPE *get_BoundaryBottom )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *put_BoundaryBottom )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT bottom);
        
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginLeft )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *left);
        
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginLeft )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT left);
        
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginTop )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *top);
        
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginTop )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT top);
        
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginRight )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *right);
        
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginRight )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT right);
        
        HRESULT ( STDMETHODCALLTYPE *get_ElasticMarginBottom )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *bottom);
        
        HRESULT ( STDMETHODCALLTYPE *put_ElasticMarginBottom )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT bottom);
        
        HRESULT ( STDMETHODCALLTYPE *get_DesiredDisplacement )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *displacement);
        
        HRESULT ( STDMETHODCALLTYPE *put_DesiredDisplacement )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT displacement);
        
        HRESULT ( STDMETHODCALLTYPE *get_DesiredRotation )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *rotation);
        
        HRESULT ( STDMETHODCALLTYPE *put_DesiredRotation )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT rotation);
        
        HRESULT ( STDMETHODCALLTYPE *get_DesiredExpansion )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *expansion);
        
        HRESULT ( STDMETHODCALLTYPE *put_DesiredExpansion )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT expansion);
        
        HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *deceleration);
        
        HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT deceleration);
        
        HRESULT ( STDMETHODCALLTYPE *get_DesiredAngularDeceleration )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *deceleration);
        
        HRESULT ( STDMETHODCALLTYPE *put_DesiredAngularDeceleration )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT deceleration);
        
        HRESULT ( STDMETHODCALLTYPE *get_DesiredExpansionDeceleration )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out FLOAT *deceleration);
        
        HRESULT ( STDMETHODCALLTYPE *put_DesiredExpansionDeceleration )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ FLOAT deceleration);
        
        HRESULT ( STDMETHODCALLTYPE *get_InitialTimestamp )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out DWORD *timestamp);
        
        HRESULT ( STDMETHODCALLTYPE *put_InitialTimestamp )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ DWORD timestamp);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IInertiaProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *Process )( 
            __RPC__in IInertiaProcessor * This,
            /* [out] */ __RPC__out BOOL *completed);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessTime )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ DWORD timestamp,
            /* [out] */ __RPC__out BOOL *completed);
        
        HRESULT ( STDMETHODCALLTYPE *Complete )( 
            __RPC__in IInertiaProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *CompleteTime )( 
            __RPC__in IInertiaProcessor * This,
            /* [in] */ DWORD timestamp);
        
        END_INTERFACE
    } IInertiaProcessorVtbl;

    interface IInertiaProcessor
    {
        CONST_VTBL struct IInertiaProcessorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInertiaProcessor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInertiaProcessor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInertiaProcessor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInertiaProcessor_get_InitialOriginX(This,x)	\
    ( (This)->lpVtbl -> get_InitialOriginX(This,x) ) 

#define IInertiaProcessor_put_InitialOriginX(This,x)	\
    ( (This)->lpVtbl -> put_InitialOriginX(This,x) ) 

#define IInertiaProcessor_get_InitialOriginY(This,y)	\
    ( (This)->lpVtbl -> get_InitialOriginY(This,y) ) 

#define IInertiaProcessor_put_InitialOriginY(This,y)	\
    ( (This)->lpVtbl -> put_InitialOriginY(This,y) ) 

#define IInertiaProcessor_get_InitialVelocityX(This,x)	\
    ( (This)->lpVtbl -> get_InitialVelocityX(This,x) ) 

#define IInertiaProcessor_put_InitialVelocityX(This,x)	\
    ( (This)->lpVtbl -> put_InitialVelocityX(This,x) ) 

#define IInertiaProcessor_get_InitialVelocityY(This,y)	\
    ( (This)->lpVtbl -> get_InitialVelocityY(This,y) ) 

#define IInertiaProcessor_put_InitialVelocityY(This,y)	\
    ( (This)->lpVtbl -> put_InitialVelocityY(This,y) ) 

#define IInertiaProcessor_get_InitialAngularVelocity(This,velocity)	\
    ( (This)->lpVtbl -> get_InitialAngularVelocity(This,velocity) ) 

#define IInertiaProcessor_put_InitialAngularVelocity(This,velocity)	\
    ( (This)->lpVtbl -> put_InitialAngularVelocity(This,velocity) ) 

#define IInertiaProcessor_get_InitialExpansionVelocity(This,velocity)	\
    ( (This)->lpVtbl -> get_InitialExpansionVelocity(This,velocity) ) 

#define IInertiaProcessor_put_InitialExpansionVelocity(This,velocity)	\
    ( (This)->lpVtbl -> put_InitialExpansionVelocity(This,velocity) ) 

#define IInertiaProcessor_get_InitialRadius(This,radius)	\
    ( (This)->lpVtbl -> get_InitialRadius(This,radius) ) 

#define IInertiaProcessor_put_InitialRadius(This,radius)	\
    ( (This)->lpVtbl -> put_InitialRadius(This,radius) ) 

#define IInertiaProcessor_get_BoundaryLeft(This,left)	\
    ( (This)->lpVtbl -> get_BoundaryLeft(This,left) ) 

#define IInertiaProcessor_put_BoundaryLeft(This,left)	\
    ( (This)->lpVtbl -> put_BoundaryLeft(This,left) ) 

#define IInertiaProcessor_get_BoundaryTop(This,top)	\
    ( (This)->lpVtbl -> get_BoundaryTop(This,top) ) 

#define IInertiaProcessor_put_BoundaryTop(This,top)	\
    ( (This)->lpVtbl -> put_BoundaryTop(This,top) ) 

#define IInertiaProcessor_get_BoundaryRight(This,right)	\
    ( (This)->lpVtbl -> get_BoundaryRight(This,right) ) 

#define IInertiaProcessor_put_BoundaryRight(This,right)	\
    ( (This)->lpVtbl -> put_BoundaryRight(This,right) ) 

#define IInertiaProcessor_get_BoundaryBottom(This,bottom)	\
    ( (This)->lpVtbl -> get_BoundaryBottom(This,bottom) ) 

#define IInertiaProcessor_put_BoundaryBottom(This,bottom)	\
    ( (This)->lpVtbl -> put_BoundaryBottom(This,bottom) ) 

#define IInertiaProcessor_get_ElasticMarginLeft(This,left)	\
    ( (This)->lpVtbl -> get_ElasticMarginLeft(This,left) ) 

#define IInertiaProcessor_put_ElasticMarginLeft(This,left)	\
    ( (This)->lpVtbl -> put_ElasticMarginLeft(This,left) ) 

#define IInertiaProcessor_get_ElasticMarginTop(This,top)	\
    ( (This)->lpVtbl -> get_ElasticMarginTop(This,top) ) 

#define IInertiaProcessor_put_ElasticMarginTop(This,top)	\
    ( (This)->lpVtbl -> put_ElasticMarginTop(This,top) ) 

#define IInertiaProcessor_get_ElasticMarginRight(This,right)	\
    ( (This)->lpVtbl -> get_ElasticMarginRight(This,right) ) 

#define IInertiaProcessor_put_ElasticMarginRight(This,right)	\
    ( (This)->lpVtbl -> put_ElasticMarginRight(This,right) ) 

#define IInertiaProcessor_get_ElasticMarginBottom(This,bottom)	\
    ( (This)->lpVtbl -> get_ElasticMarginBottom(This,bottom) ) 

#define IInertiaProcessor_put_ElasticMarginBottom(This,bottom)	\
    ( (This)->lpVtbl -> put_ElasticMarginBottom(This,bottom) ) 

#define IInertiaProcessor_get_DesiredDisplacement(This,displacement)	\
    ( (This)->lpVtbl -> get_DesiredDisplacement(This,displacement) ) 

#define IInertiaProcessor_put_DesiredDisplacement(This,displacement)	\
    ( (This)->lpVtbl -> put_DesiredDisplacement(This,displacement) ) 

#define IInertiaProcessor_get_DesiredRotation(This,rotation)	\
    ( (This)->lpVtbl -> get_DesiredRotation(This,rotation) ) 

#define IInertiaProcessor_put_DesiredRotation(This,rotation)	\
    ( (This)->lpVtbl -> put_DesiredRotation(This,rotation) ) 

#define IInertiaProcessor_get_DesiredExpansion(This,expansion)	\
    ( (This)->lpVtbl -> get_DesiredExpansion(This,expansion) ) 

#define IInertiaProcessor_put_DesiredExpansion(This,expansion)	\
    ( (This)->lpVtbl -> put_DesiredExpansion(This,expansion) ) 

#define IInertiaProcessor_get_DesiredDeceleration(This,deceleration)	\
    ( (This)->lpVtbl -> get_DesiredDeceleration(This,deceleration) ) 

#define IInertiaProcessor_put_DesiredDeceleration(This,deceleration)	\
    ( (This)->lpVtbl -> put_DesiredDeceleration(This,deceleration) ) 

#define IInertiaProcessor_get_DesiredAngularDeceleration(This,deceleration)	\
    ( (This)->lpVtbl -> get_DesiredAngularDeceleration(This,deceleration) ) 

#define IInertiaProcessor_put_DesiredAngularDeceleration(This,deceleration)	\
    ( (This)->lpVtbl -> put_DesiredAngularDeceleration(This,deceleration) ) 

#define IInertiaProcessor_get_DesiredExpansionDeceleration(This,deceleration)	\
    ( (This)->lpVtbl -> get_DesiredExpansionDeceleration(This,deceleration) ) 

#define IInertiaProcessor_put_DesiredExpansionDeceleration(This,deceleration)	\
    ( (This)->lpVtbl -> put_DesiredExpansionDeceleration(This,deceleration) ) 

#define IInertiaProcessor_get_InitialTimestamp(This,timestamp)	\
    ( (This)->lpVtbl -> get_InitialTimestamp(This,timestamp) ) 

#define IInertiaProcessor_put_InitialTimestamp(This,timestamp)	\
    ( (This)->lpVtbl -> put_InitialTimestamp(This,timestamp) ) 

#define IInertiaProcessor_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IInertiaProcessor_Process(This,completed)	\
    ( (This)->lpVtbl -> Process(This,completed) ) 

#define IInertiaProcessor_ProcessTime(This,timestamp,completed)	\
    ( (This)->lpVtbl -> ProcessTime(This,timestamp,completed) ) 

#define IInertiaProcessor_Complete(This)	\
    ( (This)->lpVtbl -> Complete(This) ) 

#define IInertiaProcessor_CompleteTime(This,timestamp)	\
    ( (This)->lpVtbl -> CompleteTime(This,timestamp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInertiaProcessor_INTERFACE_DEFINED__ */


#ifndef __IManipulationProcessor_INTERFACE_DEFINED__
#define __IManipulationProcessor_INTERFACE_DEFINED__

/* interface IManipulationProcessor */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IManipulationProcessor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A22AC519-8300-48a0-BEF4-F1BE8737DBA4")
    IManipulationProcessor : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE get_SupportedManipulations( 
            /* [out] */ __RPC__out MANIPULATION_PROCESSOR_MANIPULATIONS *manipulations) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_SupportedManipulations( 
            /* [in] */ MANIPULATION_PROCESSOR_MANIPULATIONS manipulations) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_PivotPointX( 
            /* [out] */ __RPC__out FLOAT *pivotPointX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_PivotPointX( 
            /* [in] */ FLOAT pivotPointX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_PivotPointY( 
            /* [out] */ __RPC__out FLOAT *pivotPointY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_PivotPointY( 
            /* [in] */ FLOAT pivotPointY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_PivotRadius( 
            /* [out] */ __RPC__out FLOAT *pivotRadius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_PivotRadius( 
            /* [in] */ FLOAT pivotRadius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompleteManipulation( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessDown( 
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessMove( 
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessUp( 
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessDownWithTime( 
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ DWORD timestamp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessMoveWithTime( 
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ DWORD timestamp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessUpWithTime( 
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ DWORD timestamp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVelocityX( 
            /* [out] */ __RPC__out FLOAT *velocityX) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVelocityY( 
            /* [out] */ __RPC__out FLOAT *velocityY) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExpansionVelocity( 
            /* [out] */ __RPC__out FLOAT *expansionVelocity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAngularVelocity( 
            /* [out] */ __RPC__out FLOAT *angularVelocity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_MinimumScaleRotateRadius( 
            /* [out] */ __RPC__out FLOAT *minRadius) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE put_MinimumScaleRotateRadius( 
            /* [in] */ FLOAT minRadius) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IManipulationProcessorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IManipulationProcessor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IManipulationProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *get_SupportedManipulations )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out MANIPULATION_PROCESSOR_MANIPULATIONS *manipulations);
        
        HRESULT ( STDMETHODCALLTYPE *put_SupportedManipulations )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATION_PROCESSOR_MANIPULATIONS manipulations);
        
        HRESULT ( STDMETHODCALLTYPE *get_PivotPointX )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *pivotPointX);
        
        HRESULT ( STDMETHODCALLTYPE *put_PivotPointX )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ FLOAT pivotPointX);
        
        HRESULT ( STDMETHODCALLTYPE *get_PivotPointY )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *pivotPointY);
        
        HRESULT ( STDMETHODCALLTYPE *put_PivotPointY )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ FLOAT pivotPointY);
        
        HRESULT ( STDMETHODCALLTYPE *get_PivotRadius )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *pivotRadius);
        
        HRESULT ( STDMETHODCALLTYPE *put_PivotRadius )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ FLOAT pivotRadius);
        
        HRESULT ( STDMETHODCALLTYPE *CompleteManipulation )( 
            __RPC__in IManipulationProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessDown )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessMove )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessUp )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessDownWithTime )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ DWORD timestamp);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessMoveWithTime )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ DWORD timestamp);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessUpWithTime )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ MANIPULATOR_ID manipulatorId,
            /* [in] */ FLOAT x,
            /* [in] */ FLOAT y,
            /* [in] */ DWORD timestamp);
        
        HRESULT ( STDMETHODCALLTYPE *GetVelocityX )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *velocityX);
        
        HRESULT ( STDMETHODCALLTYPE *GetVelocityY )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *velocityY);
        
        HRESULT ( STDMETHODCALLTYPE *GetExpansionVelocity )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *expansionVelocity);
        
        HRESULT ( STDMETHODCALLTYPE *GetAngularVelocity )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *angularVelocity);
        
        HRESULT ( STDMETHODCALLTYPE *get_MinimumScaleRotateRadius )( 
            __RPC__in IManipulationProcessor * This,
            /* [out] */ __RPC__out FLOAT *minRadius);
        
        HRESULT ( STDMETHODCALLTYPE *put_MinimumScaleRotateRadius )( 
            __RPC__in IManipulationProcessor * This,
            /* [in] */ FLOAT minRadius);
        
        END_INTERFACE
    } IManipulationProcessorVtbl;

    interface IManipulationProcessor
    {
        CONST_VTBL struct IManipulationProcessorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IManipulationProcessor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IManipulationProcessor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IManipulationProcessor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IManipulationProcessor_get_SupportedManipulations(This,manipulations)	\
    ( (This)->lpVtbl -> get_SupportedManipulations(This,manipulations) ) 

#define IManipulationProcessor_put_SupportedManipulations(This,manipulations)	\
    ( (This)->lpVtbl -> put_SupportedManipulations(This,manipulations) ) 

#define IManipulationProcessor_get_PivotPointX(This,pivotPointX)	\
    ( (This)->lpVtbl -> get_PivotPointX(This,pivotPointX) ) 

#define IManipulationProcessor_put_PivotPointX(This,pivotPointX)	\
    ( (This)->lpVtbl -> put_PivotPointX(This,pivotPointX) ) 

#define IManipulationProcessor_get_PivotPointY(This,pivotPointY)	\
    ( (This)->lpVtbl -> get_PivotPointY(This,pivotPointY) ) 

#define IManipulationProcessor_put_PivotPointY(This,pivotPointY)	\
    ( (This)->lpVtbl -> put_PivotPointY(This,pivotPointY) ) 

#define IManipulationProcessor_get_PivotRadius(This,pivotRadius)	\
    ( (This)->lpVtbl -> get_PivotRadius(This,pivotRadius) ) 

#define IManipulationProcessor_put_PivotRadius(This,pivotRadius)	\
    ( (This)->lpVtbl -> put_PivotRadius(This,pivotRadius) ) 

#define IManipulationProcessor_CompleteManipulation(This)	\
    ( (This)->lpVtbl -> CompleteManipulation(This) ) 

#define IManipulationProcessor_ProcessDown(This,manipulatorId,x,y)	\
    ( (This)->lpVtbl -> ProcessDown(This,manipulatorId,x,y) ) 

#define IManipulationProcessor_ProcessMove(This,manipulatorId,x,y)	\
    ( (This)->lpVtbl -> ProcessMove(This,manipulatorId,x,y) ) 

#define IManipulationProcessor_ProcessUp(This,manipulatorId,x,y)	\
    ( (This)->lpVtbl -> ProcessUp(This,manipulatorId,x,y) ) 

#define IManipulationProcessor_ProcessDownWithTime(This,manipulatorId,x,y,timestamp)	\
    ( (This)->lpVtbl -> ProcessDownWithTime(This,manipulatorId,x,y,timestamp) ) 

#define IManipulationProcessor_ProcessMoveWithTime(This,manipulatorId,x,y,timestamp)	\
    ( (This)->lpVtbl -> ProcessMoveWithTime(This,manipulatorId,x,y,timestamp) ) 

#define IManipulationProcessor_ProcessUpWithTime(This,manipulatorId,x,y,timestamp)	\
    ( (This)->lpVtbl -> ProcessUpWithTime(This,manipulatorId,x,y,timestamp) ) 

#define IManipulationProcessor_GetVelocityX(This,velocityX)	\
    ( (This)->lpVtbl -> GetVelocityX(This,velocityX) ) 

#define IManipulationProcessor_GetVelocityY(This,velocityY)	\
    ( (This)->lpVtbl -> GetVelocityY(This,velocityY) ) 

#define IManipulationProcessor_GetExpansionVelocity(This,expansionVelocity)	\
    ( (This)->lpVtbl -> GetExpansionVelocity(This,expansionVelocity) ) 

#define IManipulationProcessor_GetAngularVelocity(This,angularVelocity)	\
    ( (This)->lpVtbl -> GetAngularVelocity(This,angularVelocity) ) 

#define IManipulationProcessor_get_MinimumScaleRotateRadius(This,minRadius)	\
    ( (This)->lpVtbl -> get_MinimumScaleRotateRadius(This,minRadius) ) 

#define IManipulationProcessor_put_MinimumScaleRotateRadius(This,minRadius)	\
    ( (This)->lpVtbl -> put_MinimumScaleRotateRadius(This,minRadius) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IManipulationProcessor_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_InertiaProcessor;

#ifdef __cplusplus

class DECLSPEC_UUID("abb27087-4ce0-4e58-a0cb-e24df96814be")
InertiaProcessor;
#endif

EXTERN_C const CLSID CLSID_ManipulationProcessor;

#ifdef __cplusplus

class DECLSPEC_UUID("597D4FB0-47FD-4aff-89B9-C6CFAE8CF08E")
ManipulationProcessor;
#endif
#endif /* __ManipulationsLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_manipulations_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_manipulations_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


