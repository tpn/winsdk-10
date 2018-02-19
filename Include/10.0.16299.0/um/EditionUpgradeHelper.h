

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

#ifndef __editionupgradehelper_h__
#define __editionupgradehelper_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IEditionUpgradeHelper_FWD_DEFINED__
#define __IEditionUpgradeHelper_FWD_DEFINED__
typedef interface IEditionUpgradeHelper IEditionUpgradeHelper;

#endif 	/* __IEditionUpgradeHelper_FWD_DEFINED__ */


#ifndef __IEditionUpgradeBroker_FWD_DEFINED__
#define __IEditionUpgradeBroker_FWD_DEFINED__
typedef interface IEditionUpgradeBroker IEditionUpgradeBroker;

#endif 	/* __IEditionUpgradeBroker_FWD_DEFINED__ */


#ifndef __EditionUpgradeHelper_FWD_DEFINED__
#define __EditionUpgradeHelper_FWD_DEFINED__

#ifdef __cplusplus
typedef class EditionUpgradeHelper EditionUpgradeHelper;
#else
typedef struct EditionUpgradeHelper EditionUpgradeHelper;
#endif /* __cplusplus */

#endif 	/* __EditionUpgradeHelper_FWD_DEFINED__ */


#ifndef __EditionUpgradeBroker_FWD_DEFINED__
#define __EditionUpgradeBroker_FWD_DEFINED__

#ifdef __cplusplus
typedef class EditionUpgradeBroker EditionUpgradeBroker;
#else
typedef struct EditionUpgradeBroker EditionUpgradeBroker;
#endif /* __cplusplus */

#endif 	/* __EditionUpgradeBroker_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_editionupgradehelper_0000_0000 */
/* [local] */ 

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0000_v0_0_s_ifspec;

#ifndef __IEditionUpgradeHelper_INTERFACE_DEFINED__
#define __IEditionUpgradeHelper_INTERFACE_DEFINED__

/* interface IEditionUpgradeHelper */
/* [uuid][object] */ 


EXTERN_C const IID IID_IEditionUpgradeHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3E9E342-5DEB-43B6-849E-6913B85D503A")
    IEditionUpgradeHelper : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CanUpgrade( 
            /* [out] */ __RPC__out BOOL *isAllowed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateOperatingSystem( 
            /* [string][in] */ __RPC__in_string LPCWSTR contentId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProductKeyUI( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOsProductContentId( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *contentId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGenuineLocalStatus( 
            /* [out] */ __RPC__out BOOL *isGenuine) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEditionUpgradeHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEditionUpgradeHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEditionUpgradeHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEditionUpgradeHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanUpgrade )( 
            __RPC__in IEditionUpgradeHelper * This,
            /* [out] */ __RPC__out BOOL *isAllowed);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateOperatingSystem )( 
            __RPC__in IEditionUpgradeHelper * This,
            /* [string][in] */ __RPC__in_string LPCWSTR contentId);
        
        HRESULT ( STDMETHODCALLTYPE *ShowProductKeyUI )( 
            __RPC__in IEditionUpgradeHelper * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetOsProductContentId )( 
            __RPC__in IEditionUpgradeHelper * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *contentId);
        
        HRESULT ( STDMETHODCALLTYPE *GetGenuineLocalStatus )( 
            __RPC__in IEditionUpgradeHelper * This,
            /* [out] */ __RPC__out BOOL *isGenuine);
        
        END_INTERFACE
    } IEditionUpgradeHelperVtbl;

    interface IEditionUpgradeHelper
    {
        CONST_VTBL struct IEditionUpgradeHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEditionUpgradeHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEditionUpgradeHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEditionUpgradeHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEditionUpgradeHelper_CanUpgrade(This,isAllowed)	\
    ( (This)->lpVtbl -> CanUpgrade(This,isAllowed) ) 

#define IEditionUpgradeHelper_UpdateOperatingSystem(This,contentId)	\
    ( (This)->lpVtbl -> UpdateOperatingSystem(This,contentId) ) 

#define IEditionUpgradeHelper_ShowProductKeyUI(This)	\
    ( (This)->lpVtbl -> ShowProductKeyUI(This) ) 

#define IEditionUpgradeHelper_GetOsProductContentId(This,contentId)	\
    ( (This)->lpVtbl -> GetOsProductContentId(This,contentId) ) 

#define IEditionUpgradeHelper_GetGenuineLocalStatus(This,isGenuine)	\
    ( (This)->lpVtbl -> GetGenuineLocalStatus(This,isGenuine) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEditionUpgradeHelper_INTERFACE_DEFINED__ */


#ifndef __IEditionUpgradeBroker_INTERFACE_DEFINED__
#define __IEditionUpgradeBroker_INTERFACE_DEFINED__

/* interface IEditionUpgradeBroker */
/* [unique][helpstring][oleautomation][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEditionUpgradeBroker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF19CBCF-9455-4937-B872-6B7929A460AF")
    IEditionUpgradeBroker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeParentWindow( 
            /* [in] */ OLE_HANDLE parentHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateOperatingSystem( 
            /* [string][in] */ __RPC__in_string BSTR parameter) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowProductKeyUI( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanUpgrade( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEditionUpgradeBrokerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEditionUpgradeBroker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEditionUpgradeBroker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEditionUpgradeBroker * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeParentWindow )( 
            __RPC__in IEditionUpgradeBroker * This,
            /* [in] */ OLE_HANDLE parentHandle);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateOperatingSystem )( 
            __RPC__in IEditionUpgradeBroker * This,
            /* [string][in] */ __RPC__in_string BSTR parameter);
        
        HRESULT ( STDMETHODCALLTYPE *ShowProductKeyUI )( 
            __RPC__in IEditionUpgradeBroker * This);
        
        HRESULT ( STDMETHODCALLTYPE *CanUpgrade )( 
            __RPC__in IEditionUpgradeBroker * This);
        
        END_INTERFACE
    } IEditionUpgradeBrokerVtbl;

    interface IEditionUpgradeBroker
    {
        CONST_VTBL struct IEditionUpgradeBrokerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEditionUpgradeBroker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEditionUpgradeBroker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEditionUpgradeBroker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEditionUpgradeBroker_InitializeParentWindow(This,parentHandle)	\
    ( (This)->lpVtbl -> InitializeParentWindow(This,parentHandle) ) 

#define IEditionUpgradeBroker_UpdateOperatingSystem(This,parameter)	\
    ( (This)->lpVtbl -> UpdateOperatingSystem(This,parameter) ) 

#define IEditionUpgradeBroker_ShowProductKeyUI(This)	\
    ( (This)->lpVtbl -> ShowProductKeyUI(This) ) 

#define IEditionUpgradeBroker_CanUpgrade(This)	\
    ( (This)->lpVtbl -> CanUpgrade(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEditionUpgradeBroker_INTERFACE_DEFINED__ */



#ifndef __EditionUpgradeHelperLib_LIBRARY_DEFINED__
#define __EditionUpgradeHelperLib_LIBRARY_DEFINED__

/* library EditionUpgradeHelperLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_EditionUpgradeHelperLib;

EXTERN_C const CLSID CLSID_EditionUpgradeHelper;

#ifdef __cplusplus

class DECLSPEC_UUID("01776DF3-B9AF-4E50-9B1C-56E93116D704")
EditionUpgradeHelper;
#endif

EXTERN_C const CLSID CLSID_EditionUpgradeBroker;

#ifdef __cplusplus

class DECLSPEC_UUID("C4270827-4F39-45DF-9288-12FF6B85A921")
EditionUpgradeBroker;
#endif
#endif /* __EditionUpgradeHelperLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_editionupgradehelper_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_editionupgradehelper_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


