

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

#ifndef __shobjidl_core_h__
#define __shobjidl_core_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IExecuteCommand_FWD_DEFINED__
#define __IExecuteCommand_FWD_DEFINED__
typedef interface IExecuteCommand IExecuteCommand;

#endif 	/* __IExecuteCommand_FWD_DEFINED__ */


#ifndef __IProfferService_FWD_DEFINED__
#define __IProfferService_FWD_DEFINED__
typedef interface IProfferService IProfferService;

#endif 	/* __IProfferService_FWD_DEFINED__ */


#ifndef __IShellItem_FWD_DEFINED__
#define __IShellItem_FWD_DEFINED__
typedef interface IShellItem IShellItem;

#endif 	/* __IShellItem_FWD_DEFINED__ */


#ifndef __IShellItem2_FWD_DEFINED__
#define __IShellItem2_FWD_DEFINED__
typedef interface IShellItem2 IShellItem2;

#endif 	/* __IShellItem2_FWD_DEFINED__ */


#ifndef __IShellItemImageFactory_FWD_DEFINED__
#define __IShellItemImageFactory_FWD_DEFINED__
typedef interface IShellItemImageFactory IShellItemImageFactory;

#endif 	/* __IShellItemImageFactory_FWD_DEFINED__ */


#ifndef __IShellLinkW_FWD_DEFINED__
#define __IShellLinkW_FWD_DEFINED__
typedef interface IShellLinkW IShellLinkW;

#endif 	/* __IShellLinkW_FWD_DEFINED__ */


#ifndef __IQueryContinue_FWD_DEFINED__
#define __IQueryContinue_FWD_DEFINED__
typedef interface IQueryContinue IQueryContinue;

#endif 	/* __IQueryContinue_FWD_DEFINED__ */


#ifndef __IPackageExecutionStateChangeNotification_FWD_DEFINED__
#define __IPackageExecutionStateChangeNotification_FWD_DEFINED__
typedef interface IPackageExecutionStateChangeNotification IPackageExecutionStateChangeNotification;

#endif 	/* __IPackageExecutionStateChangeNotification_FWD_DEFINED__ */


#ifndef __IApplicationDesignModeSettings_FWD_DEFINED__
#define __IApplicationDesignModeSettings_FWD_DEFINED__
typedef interface IApplicationDesignModeSettings IApplicationDesignModeSettings;

#endif 	/* __IApplicationDesignModeSettings_FWD_DEFINED__ */


#ifndef __IApplicationDesignModeSettings2_FWD_DEFINED__
#define __IApplicationDesignModeSettings2_FWD_DEFINED__
typedef interface IApplicationDesignModeSettings2 IApplicationDesignModeSettings2;

#endif 	/* __IApplicationDesignModeSettings2_FWD_DEFINED__ */


#ifndef __IInitializeWithWindow_FWD_DEFINED__
#define __IInitializeWithWindow_FWD_DEFINED__
typedef interface IInitializeWithWindow IInitializeWithWindow;

#endif 	/* __IInitializeWithWindow_FWD_DEFINED__ */


#ifndef __ShellItem_FWD_DEFINED__
#define __ShellItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class ShellItem ShellItem;
#else
typedef struct ShellItem ShellItem;
#endif /* __cplusplus */

#endif 	/* __ShellItem_FWD_DEFINED__ */


#ifndef __ApplicationDesignModeSettings_FWD_DEFINED__
#define __ApplicationDesignModeSettings_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationDesignModeSettings ApplicationDesignModeSettings;
#else
typedef struct ApplicationDesignModeSettings ApplicationDesignModeSettings;
#endif /* __cplusplus */

#endif 	/* __ApplicationDesignModeSettings_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "shtypes.h"
#include "propsys.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IExecuteCommand_INTERFACE_DEFINED__
#define __IExecuteCommand_INTERFACE_DEFINED__

/* interface IExecuteCommand */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IExecuteCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7F9185B0-CB92-43c5-80A9-92277A4F7B54")
    IExecuteCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetKeyState( 
            /* [in] */ DWORD grfKeyState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetParameters( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszParameters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ POINT pt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowWindow( 
            /* [in] */ int nShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNoShowUI( 
            /* [in] */ BOOL fNoShowUI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDirectory( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszDirectory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExecuteCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IExecuteCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IExecuteCommand * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetKeyState )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ DWORD grfKeyState);
        
        HRESULT ( STDMETHODCALLTYPE *SetParameters )( 
            __RPC__in IExecuteCommand * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszParameters);
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ POINT pt);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowWindow )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ int nShow);
        
        HRESULT ( STDMETHODCALLTYPE *SetNoShowUI )( 
            __RPC__in IExecuteCommand * This,
            /* [in] */ BOOL fNoShowUI);
        
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )( 
            __RPC__in IExecuteCommand * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDirectory);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            __RPC__in IExecuteCommand * This);
        
        END_INTERFACE
    } IExecuteCommandVtbl;

    interface IExecuteCommand
    {
        CONST_VTBL struct IExecuteCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExecuteCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExecuteCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExecuteCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExecuteCommand_SetKeyState(This,grfKeyState)	\
    ( (This)->lpVtbl -> SetKeyState(This,grfKeyState) ) 

#define IExecuteCommand_SetParameters(This,pszParameters)	\
    ( (This)->lpVtbl -> SetParameters(This,pszParameters) ) 

#define IExecuteCommand_SetPosition(This,pt)	\
    ( (This)->lpVtbl -> SetPosition(This,pt) ) 

#define IExecuteCommand_SetShowWindow(This,nShow)	\
    ( (This)->lpVtbl -> SetShowWindow(This,nShow) ) 

#define IExecuteCommand_SetNoShowUI(This,fNoShowUI)	\
    ( (This)->lpVtbl -> SetNoShowUI(This,fNoShowUI) ) 

#define IExecuteCommand_SetDirectory(This,pszDirectory)	\
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectory) ) 

#define IExecuteCommand_Execute(This)	\
    ( (This)->lpVtbl -> Execute(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExecuteCommand_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0001 */
/* [local] */ 

#define SFGAO_CANCOPY           DROPEFFECT_COPY // Objects can be copied    (0x1)
#define SFGAO_CANMOVE           DROPEFFECT_MOVE // Objects can be moved     (0x2)
#define SFGAO_CANLINK           DROPEFFECT_LINK // Objects can be linked    (0x4)
#define SFGAO_STORAGE           0x00000008L     // supports BindToObject(IID_IStorage)
#define SFGAO_CANRENAME         0x00000010L     // Objects can be renamed
#define SFGAO_CANDELETE         0x00000020L     // Objects can be deleted
#define SFGAO_HASPROPSHEET      0x00000040L     // Objects have property sheets
#define SFGAO_DROPTARGET        0x00000100L     // Objects are drop target
#define SFGAO_CAPABILITYMASK    0x00000177L
#define SFGAO_SYSTEM            0x00001000L     // System object
#define SFGAO_ENCRYPTED         0x00002000L     // Object is encrypted (use alt color)
#define SFGAO_ISSLOW            0x00004000L     // 'Slow' object
#define SFGAO_GHOSTED           0x00008000L     // Ghosted icon
#define SFGAO_LINK              0x00010000L     // Shortcut (link)
#define SFGAO_SHARE             0x00020000L     // Shared
#define SFGAO_READONLY          0x00040000L     // Read-only
#define SFGAO_HIDDEN            0x00080000L     // Hidden object
#define SFGAO_DISPLAYATTRMASK   0x000FC000L
#define SFGAO_FILESYSANCESTOR   0x10000000L     // May contain children with SFGAO_FILESYSTEM
#define SFGAO_FOLDER            0x20000000L     // Support BindToObject(IID_IShellFolder)
#define SFGAO_FILESYSTEM        0x40000000L     // Is a win32 file system object (file/folder/root)
#define SFGAO_HASSUBFOLDER      0x80000000L     // May contain children with SFGAO_FOLDER (may be slow)
#define SFGAO_CONTENTSMASK      0x80000000L
#define SFGAO_VALIDATE          0x01000000L     // Invalidate cached information (may be slow)
#define SFGAO_REMOVABLE         0x02000000L     // Is this removeable media?
#define SFGAO_COMPRESSED        0x04000000L     // Object is compressed (use alt color)
#define SFGAO_BROWSABLE         0x08000000L     // Supports IShellFolder, but only implements CreateViewObject() (non-folder view)
#define SFGAO_NONENUMERATED     0x00100000L     // Is a non-enumerated object (should be hidden)
#define SFGAO_NEWCONTENT        0x00200000L     // Should show bold in explorer tree
#define SFGAO_CANMONIKER        0x00400000L     // Obsolete
#define SFGAO_HASSTORAGE        0x00400000L     // Obsolete
#define SFGAO_STREAM            0x00400000L     // Supports BindToObject(IID_IStream)
#define SFGAO_STORAGEANCESTOR   0x00800000L     // May contain children with SFGAO_STORAGE or SFGAO_STREAM
#define SFGAO_STORAGECAPMASK    0x70C50008L     // For determining storage capabilities, ie for open/save semantics
#define SFGAO_PKEYSFGAOMASK     0x81044000L     // Attributes that are masked out for PKEY_SFGAOFlags because they are considered to cause slow calculations or lack context (SFGAO_VALIDATE | SFGAO_ISSLOW | SFGAO_HASSUBFOLDER and others)
typedef ULONG SFGAOF;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0001_v0_0_s_ifspec;

#ifndef __IProfferService_INTERFACE_DEFINED__
#define __IProfferService_INTERFACE_DEFINED__

/* interface IProfferService */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IProfferService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cb728b20-f786-11ce-92ad-00aa00a74cd0")
    IProfferService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProfferService( 
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in_opt IServiceProvider *psp,
            /* [out] */ __RPC__out DWORD *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RevokeService( 
            /* [in] */ DWORD dwCookie) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProfferServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IProfferService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IProfferService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IProfferService * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProfferService )( 
            __RPC__in IProfferService * This,
            /* [in] */ __RPC__in REFGUID guidService,
            /* [in] */ __RPC__in_opt IServiceProvider *psp,
            /* [out] */ __RPC__out DWORD *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE *RevokeService )( 
            __RPC__in IProfferService * This,
            /* [in] */ DWORD dwCookie);
        
        END_INTERFACE
    } IProfferServiceVtbl;

    interface IProfferService
    {
        CONST_VTBL struct IProfferServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProfferService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IProfferService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProfferService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProfferService_ProfferService(This,guidService,psp,pdwCookie)	\
    ( (This)->lpVtbl -> ProfferService(This,guidService,psp,pdwCookie) ) 

#define IProfferService_RevokeService(This,dwCookie)	\
    ( (This)->lpVtbl -> RevokeService(This,dwCookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProfferService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0002 */
/* [local] */ 

#define SID_SProfferService IID_IProfferService    // nearest service that you can proffer to


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0002_v0_0_s_ifspec;

#ifndef __IShellItem_INTERFACE_DEFINED__
#define __IShellItem_INTERFACE_DEFINED__

/* interface IShellItem */
/* [unique][object][uuid] */ 

typedef /* [v1_enum] */ 
enum _SIGDN
    {
        SIGDN_NORMALDISPLAY	= 0,
        SIGDN_PARENTRELATIVEPARSING	= ( int  )0x80018001,
        SIGDN_DESKTOPABSOLUTEPARSING	= ( int  )0x80028000,
        SIGDN_PARENTRELATIVEEDITING	= ( int  )0x80031001,
        SIGDN_DESKTOPABSOLUTEEDITING	= ( int  )0x8004c000,
        SIGDN_FILESYSPATH	= ( int  )0x80058000,
        SIGDN_URL	= ( int  )0x80068000,
        SIGDN_PARENTRELATIVEFORADDRESSBAR	= ( int  )0x8007c001,
        SIGDN_PARENTRELATIVE	= ( int  )0x80080001,
        SIGDN_PARENTRELATIVEFORUI	= ( int  )0x80094001
    } 	SIGDN;

/* [v1_enum] */ 
enum _SICHINTF
    {
        SICHINT_DISPLAY	= 0,
        SICHINT_ALLFIELDS	= ( int  )0x80000000,
        SICHINT_CANONICAL	= 0x10000000,
        SICHINT_TEST_FILESYSPATH_IF_NOT_EQUAL	= 0x20000000
    } ;
typedef DWORD SICHINTF;




EXTERN_C const IID IID_IShellItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43826d1e-e718-42ee-bc55-a1e261c37bfe")
    IShellItem : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BindToHandler( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDisplayName( 
            /* [in] */ SIGDN sigdnName,
            /* [annotation][string][out] */ 
            _Outptr_result_nullonfailure_  LPWSTR *ppszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            __RPC__in IShellItem * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            __RPC__in IShellItem * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            __RPC__in IShellItem * This,
            /* [in] */ SIGDN sigdnName,
            /* [annotation][string][out] */ 
            _Outptr_result_nullonfailure_  LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IShellItem * This,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            __RPC__in IShellItem * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder);
        
        END_INTERFACE
    } IShellItemVtbl;

    interface IShellItem
    {
        CONST_VTBL struct IShellItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItem_BindToHandler(This,pbc,bhid,riid,ppv)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) ) 

#define IShellItem_GetParent(This,ppsi)	\
    ( (This)->lpVtbl -> GetParent(This,ppsi) ) 

#define IShellItem_GetDisplayName(This,sigdnName,ppszName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) ) 

#define IShellItem_GetAttributes(This,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) ) 

#define IShellItem_Compare(This,psi,hint,piOrder)	\
    ( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItem_INTERFACE_DEFINED__ */


#ifndef __IShellItem2_INTERFACE_DEFINED__
#define __IShellItem2_INTERFACE_DEFINED__

/* interface IShellItem2 */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellItem2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7e9fb0d3-919f-4307-ab2e-9b1860310c93")
    IShellItem2 : public IShellItem
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStore( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreWithCreateObject( 
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in_opt IUnknown *punkCreateObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyStoreForKeys( 
            /* [size_is][in] */ __RPC__in_ecount_full(cKeys) const PROPERTYKEY *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyDescriptionList( 
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Update( 
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCLSID( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out CLSID *pclsid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFileTime( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out FILETIME *pft) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInt32( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out int *pi) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetString( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUInt32( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONG *pui) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUInt64( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONGLONG *pull) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBool( 
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out BOOL *pf) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItem2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItem2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItem2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *BindToHandler )( 
            __RPC__in IShellItem2 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc,
            /* [in] */ __RPC__in REFGUID bhid,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            __RPC__in IShellItem2 * This,
            /* [out] */ __RPC__deref_out_opt IShellItem **ppsi);
        
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ SIGDN sigdnName,
            /* [annotation][string][out] */ 
            _Outptr_result_nullonfailure_  LPWSTR *ppszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ SFGAOF sfgaoMask,
            /* [out] */ __RPC__out SFGAOF *psfgaoAttribs);
        
        HRESULT ( STDMETHODCALLTYPE *Compare )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in_opt IShellItem *psi,
            /* [in] */ SICHINTF hint,
            /* [out] */ __RPC__out int *piOrder);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreWithCreateObject )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in_opt IUnknown *punkCreateObject,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreForKeys )( 
            __RPC__in IShellItem2 * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cKeys) const PROPERTYKEY *rgKeys,
            /* [in] */ UINT cKeys,
            /* [in] */ GETPROPERTYSTOREFLAGS flags,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionList )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY keyType,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *Update )( 
            __RPC__in IShellItem2 * This,
            /* [unique][in] */ __RPC__in_opt IBindCtx *pbc);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out PROPVARIANT *ppropvar);
        
        HRESULT ( STDMETHODCALLTYPE *GetCLSID )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out CLSID *pclsid);
        
        HRESULT ( STDMETHODCALLTYPE *GetFileTime )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out FILETIME *pft);
        
        HRESULT ( STDMETHODCALLTYPE *GetInt32 )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out int *pi);
        
        HRESULT ( STDMETHODCALLTYPE *GetString )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE *GetUInt32 )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONG *pui);
        
        HRESULT ( STDMETHODCALLTYPE *GetUInt64 )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out ULONGLONG *pull);
        
        HRESULT ( STDMETHODCALLTYPE *GetBool )( 
            __RPC__in IShellItem2 * This,
            /* [in] */ __RPC__in REFPROPERTYKEY key,
            /* [out] */ __RPC__out BOOL *pf);
        
        END_INTERFACE
    } IShellItem2Vtbl;

    interface IShellItem2
    {
        CONST_VTBL struct IShellItem2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItem2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItem2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItem2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItem2_BindToHandler(This,pbc,bhid,riid,ppv)	\
    ( (This)->lpVtbl -> BindToHandler(This,pbc,bhid,riid,ppv) ) 

#define IShellItem2_GetParent(This,ppsi)	\
    ( (This)->lpVtbl -> GetParent(This,ppsi) ) 

#define IShellItem2_GetDisplayName(This,sigdnName,ppszName)	\
    ( (This)->lpVtbl -> GetDisplayName(This,sigdnName,ppszName) ) 

#define IShellItem2_GetAttributes(This,sfgaoMask,psfgaoAttribs)	\
    ( (This)->lpVtbl -> GetAttributes(This,sfgaoMask,psfgaoAttribs) ) 

#define IShellItem2_Compare(This,psi,hint,piOrder)	\
    ( (This)->lpVtbl -> Compare(This,psi,hint,piOrder) ) 


#define IShellItem2_GetPropertyStore(This,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,riid,ppv) ) 

#define IShellItem2_GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStoreWithCreateObject(This,flags,punkCreateObject,riid,ppv) ) 

#define IShellItem2_GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) ) 

#define IShellItem2_GetPropertyDescriptionList(This,keyType,riid,ppv)	\
    ( (This)->lpVtbl -> GetPropertyDescriptionList(This,keyType,riid,ppv) ) 

#define IShellItem2_Update(This,pbc)	\
    ( (This)->lpVtbl -> Update(This,pbc) ) 

#define IShellItem2_GetProperty(This,key,ppropvar)	\
    ( (This)->lpVtbl -> GetProperty(This,key,ppropvar) ) 

#define IShellItem2_GetCLSID(This,key,pclsid)	\
    ( (This)->lpVtbl -> GetCLSID(This,key,pclsid) ) 

#define IShellItem2_GetFileTime(This,key,pft)	\
    ( (This)->lpVtbl -> GetFileTime(This,key,pft) ) 

#define IShellItem2_GetInt32(This,key,pi)	\
    ( (This)->lpVtbl -> GetInt32(This,key,pi) ) 

#define IShellItem2_GetString(This,key,ppsz)	\
    ( (This)->lpVtbl -> GetString(This,key,ppsz) ) 

#define IShellItem2_GetUInt32(This,key,pui)	\
    ( (This)->lpVtbl -> GetUInt32(This,key,pui) ) 

#define IShellItem2_GetUInt64(This,key,pull)	\
    ( (This)->lpVtbl -> GetUInt64(This,key,pull) ) 

#define IShellItem2_GetBool(This,key,pf)	\
    ( (This)->lpVtbl -> GetBool(This,key,pf) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItem2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0004 */
/* [local] */ 

/* [v1_enum] */ 
enum _SIIGBF
    {
        SIIGBF_RESIZETOFIT	= 0,
        SIIGBF_BIGGERSIZEOK	= 0x1,
        SIIGBF_MEMORYONLY	= 0x2,
        SIIGBF_ICONONLY	= 0x4,
        SIIGBF_THUMBNAILONLY	= 0x8,
        SIIGBF_INCACHEONLY	= 0x10,
        SIIGBF_CROPTOSQUARE	= 0x20,
        SIIGBF_WIDETHUMBNAILS	= 0x40,
        SIIGBF_ICONBACKGROUND	= 0x80,
        SIIGBF_SCALEUP	= 0x100
    } ;
typedef int SIIGBF;


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0004_v0_0_s_ifspec;

#ifndef __IShellItemImageFactory_INTERFACE_DEFINED__
#define __IShellItemImageFactory_INTERFACE_DEFINED__

/* interface IShellItemImageFactory */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellItemImageFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bcc18b79-ba16-442f-80c4-8a59c30c463b")
    IShellItemImageFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetImage( 
            /* [in] */ SIZE size,
            /* [in] */ SIIGBF flags,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellItemImageFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellItemImageFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellItemImageFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellItemImageFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetImage )( 
            __RPC__in IShellItemImageFactory * This,
            /* [in] */ SIZE size,
            /* [in] */ SIIGBF flags,
            /* [out] */ __RPC__deref_out_opt HBITMAP *phbm);
        
        END_INTERFACE
    } IShellItemImageFactoryVtbl;

    interface IShellItemImageFactory
    {
        CONST_VTBL struct IShellItemImageFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellItemImageFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellItemImageFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellItemImageFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellItemImageFactory_GetImage(This,size,flags,phbm)	\
    ( (This)->lpVtbl -> GetImage(This,size,flags,phbm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellItemImageFactory_INTERFACE_DEFINED__ */


#ifndef __IShellLinkW_INTERFACE_DEFINED__
#define __IShellLinkW_INTERFACE_DEFINED__

/* interface IShellLinkW */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IShellLinkW;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("000214F9-0000-0000-C000-000000000046")
    IShellLinkW : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPath( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAW *pfd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIDList( 
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIDList( 
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDescription( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDescription( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWorkingDirectory( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDir,
            int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetWorkingDirectory( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszDir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArguments( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszArgs,
            /* [in] */ int cch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetArguments( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszArgs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHotkey( 
            /* [out] */ __RPC__out WORD *pwHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHotkey( 
            /* [in] */ WORD wHotkey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShowCmd( 
            /* [out] */ __RPC__out int *piShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetShowCmd( 
            /* [in] */ int iShowCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIconLocation( 
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIconLocation( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszIconPath,
            /* [in] */ int iIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetRelativePath( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszPathRel,
            /* [in] */ DWORD dwReserved) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resolve( 
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPath( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellLinkWVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IShellLinkW * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IShellLinkW * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IShellLinkW * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPath )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszFile,
            /* [in] */ int cch,
            /* [unique][out][in] */ __RPC__inout_opt WIN32_FIND_DATAW *pfd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDList )( 
            __RPC__in IShellLinkW * This,
            /* [out] */ __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetIDList )( 
            __RPC__in IShellLinkW * This,
            /* [unique][in] */ __RPC__in_opt PCIDLIST_ABSOLUTE pidl);
        
        HRESULT ( STDMETHODCALLTYPE *GetDescription )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszName,
            int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetDescription )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetWorkingDirectory )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszDir,
            int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetWorkingDirectory )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszDir);
        
        HRESULT ( STDMETHODCALLTYPE *GetArguments )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszArgs,
            /* [in] */ int cch);
        
        HRESULT ( STDMETHODCALLTYPE *SetArguments )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszArgs);
        
        HRESULT ( STDMETHODCALLTYPE *GetHotkey )( 
            __RPC__in IShellLinkW * This,
            /* [out] */ __RPC__out WORD *pwHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *SetHotkey )( 
            __RPC__in IShellLinkW * This,
            /* [in] */ WORD wHotkey);
        
        HRESULT ( STDMETHODCALLTYPE *GetShowCmd )( 
            __RPC__in IShellLinkW * This,
            /* [out] */ __RPC__out int *piShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *SetShowCmd )( 
            __RPC__in IShellLinkW * This,
            /* [in] */ int iShowCmd);
        
        HRESULT ( STDMETHODCALLTYPE *GetIconLocation )( 
            __RPC__in IShellLinkW * This,
            /* [size_is][string][out] */ __RPC__out_ecount_full_string(cch) LPWSTR pszIconPath,
            /* [in] */ int cch,
            /* [out] */ __RPC__out int *piIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetIconLocation )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszIconPath,
            /* [in] */ int iIcon);
        
        HRESULT ( STDMETHODCALLTYPE *SetRelativePath )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPathRel,
            /* [in] */ DWORD dwReserved);
        
        HRESULT ( STDMETHODCALLTYPE *Resolve )( 
            __RPC__in IShellLinkW * This,
            /* [unique][in] */ __RPC__in_opt HWND hwnd,
            /* [in] */ DWORD fFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetPath )( 
            __RPC__in IShellLinkW * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszFile);
        
        END_INTERFACE
    } IShellLinkWVtbl;

    interface IShellLinkW
    {
        CONST_VTBL struct IShellLinkWVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellLinkW_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellLinkW_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellLinkW_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellLinkW_GetPath(This,pszFile,cch,pfd,fFlags)	\
    ( (This)->lpVtbl -> GetPath(This,pszFile,cch,pfd,fFlags) ) 

#define IShellLinkW_GetIDList(This,ppidl)	\
    ( (This)->lpVtbl -> GetIDList(This,ppidl) ) 

#define IShellLinkW_SetIDList(This,pidl)	\
    ( (This)->lpVtbl -> SetIDList(This,pidl) ) 

#define IShellLinkW_GetDescription(This,pszName,cch)	\
    ( (This)->lpVtbl -> GetDescription(This,pszName,cch) ) 

#define IShellLinkW_SetDescription(This,pszName)	\
    ( (This)->lpVtbl -> SetDescription(This,pszName) ) 

#define IShellLinkW_GetWorkingDirectory(This,pszDir,cch)	\
    ( (This)->lpVtbl -> GetWorkingDirectory(This,pszDir,cch) ) 

#define IShellLinkW_SetWorkingDirectory(This,pszDir)	\
    ( (This)->lpVtbl -> SetWorkingDirectory(This,pszDir) ) 

#define IShellLinkW_GetArguments(This,pszArgs,cch)	\
    ( (This)->lpVtbl -> GetArguments(This,pszArgs,cch) ) 

#define IShellLinkW_SetArguments(This,pszArgs)	\
    ( (This)->lpVtbl -> SetArguments(This,pszArgs) ) 

#define IShellLinkW_GetHotkey(This,pwHotkey)	\
    ( (This)->lpVtbl -> GetHotkey(This,pwHotkey) ) 

#define IShellLinkW_SetHotkey(This,wHotkey)	\
    ( (This)->lpVtbl -> SetHotkey(This,wHotkey) ) 

#define IShellLinkW_GetShowCmd(This,piShowCmd)	\
    ( (This)->lpVtbl -> GetShowCmd(This,piShowCmd) ) 

#define IShellLinkW_SetShowCmd(This,iShowCmd)	\
    ( (This)->lpVtbl -> SetShowCmd(This,iShowCmd) ) 

#define IShellLinkW_GetIconLocation(This,pszIconPath,cch,piIcon)	\
    ( (This)->lpVtbl -> GetIconLocation(This,pszIconPath,cch,piIcon) ) 

#define IShellLinkW_SetIconLocation(This,pszIconPath,iIcon)	\
    ( (This)->lpVtbl -> SetIconLocation(This,pszIconPath,iIcon) ) 

#define IShellLinkW_SetRelativePath(This,pszPathRel,dwReserved)	\
    ( (This)->lpVtbl -> SetRelativePath(This,pszPathRel,dwReserved) ) 

#define IShellLinkW_Resolve(This,hwnd,fFlags)	\
    ( (This)->lpVtbl -> Resolve(This,hwnd,fFlags) ) 

#define IShellLinkW_SetPath(This,pszFile)	\
    ( (This)->lpVtbl -> SetPath(This,pszFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellLinkW_INTERFACE_DEFINED__ */


#ifndef __IQueryContinue_INTERFACE_DEFINED__
#define __IQueryContinue_INTERFACE_DEFINED__

/* interface IQueryContinue */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IQueryContinue;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7307055c-b24a-486b-9f25-163e597a28a9")
    IQueryContinue : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE QueryContinue( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IQueryContinueVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IQueryContinue * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IQueryContinue * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IQueryContinue * This);
        
        HRESULT ( STDMETHODCALLTYPE *QueryContinue )( 
            __RPC__in IQueryContinue * This);
        
        END_INTERFACE
    } IQueryContinueVtbl;

    interface IQueryContinue
    {
        CONST_VTBL struct IQueryContinueVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IQueryContinue_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IQueryContinue_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IQueryContinue_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IQueryContinue_QueryContinue(This)	\
    ( (This)->lpVtbl -> QueryContinue(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IQueryContinue_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0007 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef /* [v1_enum] */ 
enum SHARE_ROLE
    {
        SHARE_ROLE_INVALID	= -1,
        SHARE_ROLE_READER	= 0,
        SHARE_ROLE_CONTRIBUTOR	= 1,
        SHARE_ROLE_CO_OWNER	= 2,
        SHARE_ROLE_OWNER	= 3,
        SHARE_ROLE_CUSTOM	= 4,
        SHARE_ROLE_MIXED	= 5
    } 	SHARE_ROLE;

typedef /* [v1_enum] */ 
enum DEF_SHARE_ID
    {
        DEFSHAREID_USERS	= 1,
        DEFSHAREID_PUBLIC	= 2
    } 	DEF_SHARE_ID;

#endif  // NTDDI_VISTA
#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef /* [v1_enum] */ 
enum PACKAGE_EXECUTION_STATE
    {
        PES_UNKNOWN	= 0,
        PES_RUNNING	= 1,
        PES_SUSPENDING	= 2,
        PES_SUSPENDED	= 3,
        PES_TERMINATED	= 4
    } 	PACKAGE_EXECUTION_STATE;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0007_v0_0_s_ifspec;

#ifndef __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__
#define __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__

/* interface IPackageExecutionStateChangeNotification */
/* [uuid][object] */ 


EXTERN_C const IID IID_IPackageExecutionStateChangeNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1BB12A62-2AD8-432B-8CCF-0C2C52AFCD5B")
    IPackageExecutionStateChangeNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnStateChanged( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszPackageFullName,
            /* [in] */ PACKAGE_EXECUTION_STATE pesNewState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPackageExecutionStateChangeNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPackageExecutionStateChangeNotification * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPackageExecutionStateChangeNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPackageExecutionStateChangeNotification * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnStateChanged )( 
            __RPC__in IPackageExecutionStateChangeNotification * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszPackageFullName,
            /* [in] */ PACKAGE_EXECUTION_STATE pesNewState);
        
        END_INTERFACE
    } IPackageExecutionStateChangeNotificationVtbl;

    interface IPackageExecutionStateChangeNotification
    {
        CONST_VTBL struct IPackageExecutionStateChangeNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPackageExecutionStateChangeNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPackageExecutionStateChangeNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPackageExecutionStateChangeNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPackageExecutionStateChangeNotification_OnStateChanged(This,pszPackageFullName,pesNewState)	\
    ( (This)->lpVtbl -> OnStateChanged(This,pszPackageFullName,pesNewState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPackageExecutionStateChangeNotification_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0008 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_STATE
    {
        AVS_FULLSCREEN_LANDSCAPE	= 0,
        AVS_FILLED	= ( AVS_FULLSCREEN_LANDSCAPE + 1 ) ,
        AVS_SNAPPED	= ( AVS_FILLED + 1 ) ,
        AVS_FULLSCREEN_PORTRAIT	= ( AVS_SNAPPED + 1 ) 
    } 	APPLICATION_VIEW_STATE;

typedef /* [v1_enum] */ 
enum EDGE_GESTURE_KIND
    {
        EGK_TOUCH	= 0,
        EGK_KEYBOARD	= ( EGK_TOUCH + 1 ) ,
        EGK_MOUSE	= ( EGK_KEYBOARD + 1 ) 
    } 	EDGE_GESTURE_KIND;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0008_v0_0_s_ifspec;

#ifndef __IApplicationDesignModeSettings_INTERFACE_DEFINED__
#define __IApplicationDesignModeSettings_INTERFACE_DEFINED__

/* interface IApplicationDesignModeSettings */
/* [uuid][object] */ 


EXTERN_C const IID IID_IApplicationDesignModeSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A3DEE9A-E31D-46D6-8508-BCC597DB3557")
    IApplicationDesignModeSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNativeDisplaySize( 
            /* [in] */ SIZE nativeDisplaySizePixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetScaleFactor( 
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationViewState( 
            /* [in] */ APPLICATION_VIEW_STATE viewState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ComputeApplicationSize( 
            /* [out] */ __RPC__out SIZE *applicationSizePixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsApplicationViewStateSupported( 
            /* [in] */ APPLICATION_VIEW_STATE viewState,
            /* [in] */ SIZE nativeDisplaySizePixels,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor,
            /* [out] */ __RPC__out BOOL *supported) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TriggerEdgeGesture( 
            /* [in] */ EDGE_GESTURE_KIND edgeGestureKind) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationDesignModeSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationDesignModeSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationDesignModeSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNativeDisplaySize )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ SIZE nativeDisplaySizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *SetScaleFactor )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewState )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeApplicationSize )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [out] */ __RPC__out SIZE *applicationSizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *IsApplicationViewStateSupported )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState,
            /* [in] */ SIZE nativeDisplaySizePixels,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor,
            /* [out] */ __RPC__out BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *TriggerEdgeGesture )( 
            __RPC__in IApplicationDesignModeSettings * This,
            /* [in] */ EDGE_GESTURE_KIND edgeGestureKind);
        
        END_INTERFACE
    } IApplicationDesignModeSettingsVtbl;

    interface IApplicationDesignModeSettings
    {
        CONST_VTBL struct IApplicationDesignModeSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationDesignModeSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationDesignModeSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationDesignModeSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationDesignModeSettings_SetNativeDisplaySize(This,nativeDisplaySizePixels)	\
    ( (This)->lpVtbl -> SetNativeDisplaySize(This,nativeDisplaySizePixels) ) 

#define IApplicationDesignModeSettings_SetScaleFactor(This,scaleFactor)	\
    ( (This)->lpVtbl -> SetScaleFactor(This,scaleFactor) ) 

#define IApplicationDesignModeSettings_SetApplicationViewState(This,viewState)	\
    ( (This)->lpVtbl -> SetApplicationViewState(This,viewState) ) 

#define IApplicationDesignModeSettings_ComputeApplicationSize(This,applicationSizePixels)	\
    ( (This)->lpVtbl -> ComputeApplicationSize(This,applicationSizePixels) ) 

#define IApplicationDesignModeSettings_IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported)	\
    ( (This)->lpVtbl -> IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported) ) 

#define IApplicationDesignModeSettings_TriggerEdgeGesture(This,edgeGestureKind)	\
    ( (This)->lpVtbl -> TriggerEdgeGesture(This,edgeGestureKind) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationDesignModeSettings_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0009 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum NATIVE_DISPLAY_ORIENTATION
    {
        NDO_LANDSCAPE	= 0,
        NDO_PORTRAIT	= ( NDO_LANDSCAPE + 1 ) 
    } 	NATIVE_DISPLAY_ORIENTATION;

typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_ORIENTATION
    {
        AVO_LANDSCAPE	= 0,
        AVO_PORTRAIT	= ( AVO_LANDSCAPE + 1 ) 
    } 	APPLICATION_VIEW_ORIENTATION;

typedef /* [v1_enum] */ 
enum ADJACENT_DISPLAY_EDGES
    {
        ADE_NONE	= 0,
        ADE_LEFT	= 0x1,
        ADE_RIGHT	= 0x2
    } 	ADJACENT_DISPLAY_EDGES;

DEFINE_ENUM_FLAG_OPERATORS(ADJACENT_DISPLAY_EDGES)
#if (NTDDI_VERSION >= NTDDI_WINBLUE)
typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_MIN_WIDTH
    {
        AVMW_DEFAULT	= 0,
        AVMW_320	= 1,
        AVMW_500	= 2
    } 	APPLICATION_VIEW_MIN_WIDTH;



extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0009_v0_0_s_ifspec;

#ifndef __IApplicationDesignModeSettings2_INTERFACE_DEFINED__
#define __IApplicationDesignModeSettings2_INTERFACE_DEFINED__

/* interface IApplicationDesignModeSettings2 */
/* [uuid][object] */ 


EXTERN_C const IID IID_IApplicationDesignModeSettings2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("490514E1-675A-4D6E-A58D-E54901B4CA2F")
    IApplicationDesignModeSettings2 : public IApplicationDesignModeSettings
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNativeDisplayOrientation( 
            /* [in] */ NATIVE_DISPLAY_ORIENTATION nativeDisplayOrientation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationViewOrientation( 
            /* [in] */ APPLICATION_VIEW_ORIENTATION viewOrientation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAdjacentDisplayEdges( 
            /* [in] */ ADJACENT_DISPLAY_EDGES adjacentDisplayEdges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetIsOnLockScreen( 
            /* [in] */ BOOL isOnLockScreen) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationViewMinWidth( 
            /* [in] */ APPLICATION_VIEW_MIN_WIDTH viewMinWidth) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationSizeBounds( 
            /* [out] */ __RPC__out SIZE *minApplicationSizePixels,
            /* [out] */ __RPC__out SIZE *maxApplicationSizePixels) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationViewOrientation( 
            /* [in] */ SIZE applicationSizePixels,
            /* [out] */ __RPC__out APPLICATION_VIEW_ORIENTATION *viewOrientation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationDesignModeSettings2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationDesignModeSettings2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationDesignModeSettings2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetNativeDisplaySize )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ SIZE nativeDisplaySizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *SetScaleFactor )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewState )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState);
        
        HRESULT ( STDMETHODCALLTYPE *ComputeApplicationSize )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [out] */ __RPC__out SIZE *applicationSizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *IsApplicationViewStateSupported )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_STATE viewState,
            /* [in] */ SIZE nativeDisplaySizePixels,
            /* [in] */ DEVICE_SCALE_FACTOR scaleFactor,
            /* [out] */ __RPC__out BOOL *supported);
        
        HRESULT ( STDMETHODCALLTYPE *TriggerEdgeGesture )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ EDGE_GESTURE_KIND edgeGestureKind);
        
        HRESULT ( STDMETHODCALLTYPE *SetNativeDisplayOrientation )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ NATIVE_DISPLAY_ORIENTATION nativeDisplayOrientation);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewOrientation )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_ORIENTATION viewOrientation);
        
        HRESULT ( STDMETHODCALLTYPE *SetAdjacentDisplayEdges )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ ADJACENT_DISPLAY_EDGES adjacentDisplayEdges);
        
        HRESULT ( STDMETHODCALLTYPE *SetIsOnLockScreen )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ BOOL isOnLockScreen);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationViewMinWidth )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ APPLICATION_VIEW_MIN_WIDTH viewMinWidth);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationSizeBounds )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [out] */ __RPC__out SIZE *minApplicationSizePixels,
            /* [out] */ __RPC__out SIZE *maxApplicationSizePixels);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationViewOrientation )( 
            __RPC__in IApplicationDesignModeSettings2 * This,
            /* [in] */ SIZE applicationSizePixels,
            /* [out] */ __RPC__out APPLICATION_VIEW_ORIENTATION *viewOrientation);
        
        END_INTERFACE
    } IApplicationDesignModeSettings2Vtbl;

    interface IApplicationDesignModeSettings2
    {
        CONST_VTBL struct IApplicationDesignModeSettings2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationDesignModeSettings2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationDesignModeSettings2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationDesignModeSettings2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationDesignModeSettings2_SetNativeDisplaySize(This,nativeDisplaySizePixels)	\
    ( (This)->lpVtbl -> SetNativeDisplaySize(This,nativeDisplaySizePixels) ) 

#define IApplicationDesignModeSettings2_SetScaleFactor(This,scaleFactor)	\
    ( (This)->lpVtbl -> SetScaleFactor(This,scaleFactor) ) 

#define IApplicationDesignModeSettings2_SetApplicationViewState(This,viewState)	\
    ( (This)->lpVtbl -> SetApplicationViewState(This,viewState) ) 

#define IApplicationDesignModeSettings2_ComputeApplicationSize(This,applicationSizePixels)	\
    ( (This)->lpVtbl -> ComputeApplicationSize(This,applicationSizePixels) ) 

#define IApplicationDesignModeSettings2_IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported)	\
    ( (This)->lpVtbl -> IsApplicationViewStateSupported(This,viewState,nativeDisplaySizePixels,scaleFactor,supported) ) 

#define IApplicationDesignModeSettings2_TriggerEdgeGesture(This,edgeGestureKind)	\
    ( (This)->lpVtbl -> TriggerEdgeGesture(This,edgeGestureKind) ) 


#define IApplicationDesignModeSettings2_SetNativeDisplayOrientation(This,nativeDisplayOrientation)	\
    ( (This)->lpVtbl -> SetNativeDisplayOrientation(This,nativeDisplayOrientation) ) 

#define IApplicationDesignModeSettings2_SetApplicationViewOrientation(This,viewOrientation)	\
    ( (This)->lpVtbl -> SetApplicationViewOrientation(This,viewOrientation) ) 

#define IApplicationDesignModeSettings2_SetAdjacentDisplayEdges(This,adjacentDisplayEdges)	\
    ( (This)->lpVtbl -> SetAdjacentDisplayEdges(This,adjacentDisplayEdges) ) 

#define IApplicationDesignModeSettings2_SetIsOnLockScreen(This,isOnLockScreen)	\
    ( (This)->lpVtbl -> SetIsOnLockScreen(This,isOnLockScreen) ) 

#define IApplicationDesignModeSettings2_SetApplicationViewMinWidth(This,viewMinWidth)	\
    ( (This)->lpVtbl -> SetApplicationViewMinWidth(This,viewMinWidth) ) 

#define IApplicationDesignModeSettings2_GetApplicationSizeBounds(This,minApplicationSizePixels,maxApplicationSizePixels)	\
    ( (This)->lpVtbl -> GetApplicationSizeBounds(This,minApplicationSizePixels,maxApplicationSizePixels) ) 

#define IApplicationDesignModeSettings2_GetApplicationViewOrientation(This,applicationSizePixels,viewOrientation)	\
    ( (This)->lpVtbl -> GetApplicationViewOrientation(This,applicationSizePixels,viewOrientation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationDesignModeSettings2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0010 */
/* [local] */ 

#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)
typedef /* [v1_enum] */ 
enum APPLICATION_VIEW_SIZE_PREFERENCE
    {
        AVSP_DEFAULT	= 0,
        AVSP_USE_LESS	= 1,
        AVSP_USE_HALF	= 2,
        AVSP_USE_MORE	= 3,
        AVSP_USE_MINIMUM	= 4,
        AVSP_USE_NONE	= 5
    } 	APPLICATION_VIEW_SIZE_PREFERENCE;

#endif // NTDDI_WIN8


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0010_v0_0_s_ifspec;

#ifndef __IInitializeWithWindow_INTERFACE_DEFINED__
#define __IInitializeWithWindow_INTERFACE_DEFINED__

/* interface IInitializeWithWindow */
/* [unique][object][uuid] */ 


EXTERN_C const IID IID_IInitializeWithWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3E68D4BD-7135-4D10-8018-9FB6D9F33FA1")
    IInitializeWithWindow : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in HWND hwnd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializeWithWindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IInitializeWithWindow * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IInitializeWithWindow * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IInitializeWithWindow * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IInitializeWithWindow * This,
            /* [in] */ __RPC__in HWND hwnd);
        
        END_INTERFACE
    } IInitializeWithWindowVtbl;

    interface IInitializeWithWindow
    {
        CONST_VTBL struct IInitializeWithWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializeWithWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializeWithWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializeWithWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializeWithWindow_Initialize(This,hwnd)	\
    ( (This)->lpVtbl -> Initialize(This,hwnd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializeWithWindow_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shobjidl_core_0000_0011 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
typedef /* [v1_enum] */ 
enum FLYOUT_PLACEMENT
    {
        FP_DEFAULT	= 0,
        FP_ABOVE	= ( FP_DEFAULT + 1 ) ,
        FP_BELOW	= ( FP_ABOVE + 1 ) ,
        FP_LEFT	= ( FP_BELOW + 1 ) ,
        FP_RIGHT	= ( FP_LEFT + 1 ) 
    } 	FLYOUT_PLACEMENT;

#endif // NTDDI_WINBLUE


extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_core_0000_0011_v0_0_s_ifspec;


#ifndef __ShellCoreObjects_LIBRARY_DEFINED__
#define __ShellCoreObjects_LIBRARY_DEFINED__

/* library ShellCoreObjects */
/* [version][lcid][uuid] */ 


EXTERN_C const IID LIBID_ShellCoreObjects;

EXTERN_C const CLSID CLSID_ShellItem;

#ifdef __cplusplus

class DECLSPEC_UUID("9ac9fbe1-e0a2-4ad6-b4ee-e212013ea917")
ShellItem;
#endif

EXTERN_C const CLSID CLSID_ApplicationDesignModeSettings;

#ifdef __cplusplus

class DECLSPEC_UUID("958a6fb5-dcb2-4faf-aafd-7fb054ad1a3b")
ApplicationDesignModeSettings;
#endif
#endif /* __ShellCoreObjects_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree(     __RPC__in unsigned long *, __RPC__in HBITMAP * ); 

unsigned long             __RPC_USER  HWND_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  PCIDLIST_ABSOLUTE_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PCIDLIST_ABSOLUTE_UserFree(     __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree(     __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  HBITMAP_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * ); 
unsigned char * __RPC_USER  HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * ); 
void                      __RPC_USER  HBITMAP_UserFree64(     __RPC__in unsigned long *, __RPC__in HBITMAP * ); 

unsigned long             __RPC_USER  HWND_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * ); 
unsigned char * __RPC_USER  HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * ); 
void                      __RPC_USER  HWND_UserFree64(     __RPC__in unsigned long *, __RPC__in HWND * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  PCIDLIST_ABSOLUTE_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PCIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PCIDLIST_ABSOLUTE_UserFree64(     __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * ); 

unsigned long             __RPC_USER  PIDLIST_ABSOLUTE_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * ); 
unsigned char * __RPC_USER  PIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * ); 
void                      __RPC_USER  PIDLIST_ABSOLUTE_UserFree64(     __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



