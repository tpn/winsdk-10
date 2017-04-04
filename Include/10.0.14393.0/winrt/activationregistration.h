

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

#ifndef __activationregistration_h__
#define __activationregistration_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IActivatableClassRegistration;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDllServerActivatableClassRegistration;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IExeServerActivatableClassRegistration;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CFoundation_CIExeServerRegistration_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIExeServerRegistration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIExeServerRegistration __x_ABI_CWindows_CFoundation_CIExeServerRegistration;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IExeServerRegistration;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CFoundation_CIExeServerRegistration_FWD_DEFINED__ */


/* header files for imported files */
#include "Inspectable.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_activationregistration_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

interface IInspectable;


/* interface __MIDL_itf_activationregistration_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration2Eidl_0000_0412 */




/* interface __MIDL_itf_activationregistration2Eidl_0000_0412 */




extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0412_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0412_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration_0000_0001 */
/* [local] */ 

#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; }
};
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define ____FIKeyValuePair_2_HSTRING_IInspectable_FWD_DEFINED__
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */


/* interface __MIDL_itf_activationregistration_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration2Eidl_0000_0413 */




/* interface __MIDL_itf_activationregistration2Eidl_0000_0413 */




extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0413_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0413_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; }
};
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_FWD_DEFINED__
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */


/* interface __MIDL_itf_activationregistration_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration2Eidl_0000_0414 */




/* interface __MIDL_itf_activationregistration2Eidl_0000_0414 */




extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0414_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0414_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration_0000_0003 */
/* [local] */ 

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; }
};
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_FWD_DEFINED__
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */


/* interface __MIDL_itf_activationregistration_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration2Eidl_0000_0415 */




/* interface __MIDL_itf_activationregistration2Eidl_0000_0415 */




extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0415_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration2Eidl_0000_0415_v0_0_s_ifspec;

/* interface __MIDL_itf_activationregistration_0000_0004 */
/* [local] */ 

#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; }
};
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define ____FIMapView_2_HSTRING_IInspectable_FWD_DEFINED__
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */
//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (c) Microsoft Corporation. All rights reserved.
//
//--------------------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif
#pragma warning(push)
#pragma warning(disable:4668) 
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)

#if !defined(__cplusplus)
typedef TrustLevel __x_ABI_CWindows_CFoundation_CRegisteredTrustLevel;

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CRegistrationScope
    {
        RegistrationScope_PerMachine	= 0,
        RegistrationScope_PerUser	= ( RegistrationScope_PerMachine + 1 ) ,
        RegistrationScope_InboxApp	= ( RegistrationScope_PerUser + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CRegistrationScope __x_ABI_CWindows_CFoundation_CRegistrationScope;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CActivationType
    {
        ActivationType_InProcess	= 0,
        ActivationType_OutOfProcess	= ( ActivationType_InProcess + 1 ) ,
        ActivationType_RemoteProcess	= ( ActivationType_OutOfProcess + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CActivationType __x_ABI_CWindows_CFoundation_CActivationType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CThreadingType
    {
        ThreadingType_BOTH	= 0,
        ThreadingType_STA	= ( ThreadingType_BOTH + 1 ) ,
        ThreadingType_MTA	= ( ThreadingType_STA + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CThreadingType __x_ABI_CWindows_CFoundation_CThreadingType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CIdentityType
    {
        IdentityType_ActivateAsActivator	= 0,
        IdentityType_RunAs	= ( IdentityType_ActivateAsActivator + 1 ) ,
        IdentityType_ActivateAsPackage	= ( IdentityType_RunAs + 1 ) ,
        IdentityType_SessionVirtual	= ( IdentityType_ActivateAsPackage + 1 ) ,
        IdentityType_SessionUser	= ( IdentityType_SessionVirtual + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CIdentityType __x_ABI_CWindows_CFoundation_CIdentityType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CInstancingType
    {
        InstancingType_SingleInstance	= 0,
        InstancingType_MultipleInstances	= ( InstancingType_SingleInstance + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CInstancingType __x_ABI_CWindows_CFoundation_CInstancingType;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CFoundation_CActivateAsUser
    {
        ActivateAsUser_NotSupported	= 0,
        ActivateAsUser_Supported	= ( ActivateAsUser_NotSupported + 1 ) 
    } ;
#endif /* end if !defined(__cplusplus) */

#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CFoundation_CActivateAsUser __x_ABI_CWindows_CFoundation_CActivateAsUser;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IActivatableClassRegistration[] = L"Windows.Foundation.IActivatableClassRegistration";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_activationregistration_0000_0004 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef TrustLevel RegisteredTrustLevel;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            /* [v1_enum] */ 
            enum RegistrationScope
                {
                    RegistrationScope_PerMachine	= 0,
                    RegistrationScope_PerUser	= ( RegistrationScope_PerMachine + 1 ) ,
                    RegistrationScope_InboxApp	= ( RegistrationScope_PerUser + 1 ) 
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum RegistrationScope RegistrationScope;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            /* [v1_enum] */ 
            enum ActivationType
                {
                    ActivationType_InProcess	= 0,
                    ActivationType_OutOfProcess	= ( ActivationType_InProcess + 1 ) ,
                    ActivationType_RemoteProcess	= ( ActivationType_OutOfProcess + 1 ) 
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum ActivationType ActivationType;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            /* [v1_enum] */ 
            enum ThreadingType
                {
                    ThreadingType_BOTH	= 0,
                    ThreadingType_STA	= ( ThreadingType_BOTH + 1 ) ,
                    ThreadingType_MTA	= ( ThreadingType_STA + 1 ) 
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum ThreadingType ThreadingType;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            /* [v1_enum] */ 
            enum IdentityType
                {
                    IdentityType_ActivateAsActivator	= 0,
                    IdentityType_RunAs	= ( IdentityType_ActivateAsActivator + 1 ) ,
                    IdentityType_ActivateAsPackage	= ( IdentityType_RunAs + 1 ) ,
                    IdentityType_SessionVirtual	= ( IdentityType_ActivateAsPackage + 1 ) ,
                    IdentityType_SessionUser	= ( IdentityType_SessionVirtual + 1 ) 
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum IdentityType IdentityType;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            /* [v1_enum] */ 
            enum InstancingType
                {
                    InstancingType_SingleInstance	= 0,
                    InstancingType_MultipleInstances	= ( InstancingType_SingleInstance + 1 ) 
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum InstancingType InstancingType;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            /* [v1_enum] */ 
            enum ActivateAsUser
                {
                    ActivateAsUser_NotSupported	= 0,
                    ActivateAsUser_Supported	= ( ActivateAsUser_NotSupported + 1 ) 
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef enum ActivateAsUser ActivateAsUser;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration */
/* [object][uuid][unique] */ 



/* interface ABI::Windows::Foundation::IActivatableClassRegistration */
/* [object][uuid][unique] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIActivatableClassRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                
                MIDL_INTERFACE("9BBCAE23-3DD6-49C3-B63C-1C587E7A6A67")
                IActivatableClassRegistration : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActivatableClassId( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *activatableClassID) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ActivationType( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::ActivationType *activationType) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegistrationScope( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::RegistrationScope *registrationScope) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegisteredTrustLevel( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::RegisteredTrustLevel *registeredTrustLevel) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
                        /* [out][retval] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **attributes) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IActivatableClassRegistration = __uuidof(IActivatableClassRegistration);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CIActivatableClassRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *activatableClassID);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ActivationType )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CActivationType *activationType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegistrationScope )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRegistrationScope *registrationScope);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegisteredTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRegisteredTrustLevel *registeredTrustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **attributes);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CIActivatableClassRegistrationVtbl;

    interface __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIActivatableClassRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_get_ActivatableClassId(This,activatableClassID)	\
    ( (This)->lpVtbl -> get_ActivatableClassId(This,activatableClassID) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_get_ActivationType(This,activationType)	\
    ( (This)->lpVtbl -> get_ActivationType(This,activationType) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_get_RegistrationScope(This,registrationScope)	\
    ( (This)->lpVtbl -> get_RegistrationScope(This,registrationScope) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_get_RegisteredTrustLevel(This,registeredTrustLevel)	\
    ( (This)->lpVtbl -> get_RegisteredTrustLevel(This,registeredTrustLevel) ) 

#define __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_get_Attributes(This,attributes)	\
    ( (This)->lpVtbl -> get_Attributes(This,attributes) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CIActivatableClassRegistration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_activationregistration_0000_0005 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IDllServerActivatableClassRegistration[] = L"Windows.Foundation.IDllServerActivatableClassRegistration";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_activationregistration_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0005_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration */
/* [object][uuid][ref] */ 



/* interface ABI::Windows::Foundation::IDllServerActivatableClassRegistration */
/* [object][uuid][ref] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                
                MIDL_INTERFACE("C8AA04F6-66C6-46A3-8FE6-F56BE7DDC091")
                IDllServerActivatableClassRegistration : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DllPath( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *dllPath) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ThreadingType( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::ThreadingType *threadingType) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IDllServerActivatableClassRegistration = __uuidof(IDllServerActivatableClassRegistration);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DllPath )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *dllPath);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ThreadingType )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CThreadingType *threadingType);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistrationVtbl;

    interface __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_get_DllPath(This,dllPath)	\
    ( (This)->lpVtbl -> get_DllPath(This,dllPath) ) 

#define __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_get_ThreadingType(This,threadingType)	\
    ( (This)->lpVtbl -> get_ThreadingType(This,threadingType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_activationregistration_0000_0006 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IExeServerActivatableClassRegistration[] = L"Windows.Foundation.IExeServerActivatableClassRegistration";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_activationregistration_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration */
/* [object][uuid][ref] */ 



/* interface ABI::Windows::Foundation::IExeServerActivatableClassRegistration */
/* [object][uuid][ref] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                
                MIDL_INTERFACE("9308C3C5-C2AC-49D1-A024-660A2BB5D5AC")
                IExeServerActivatableClassRegistration : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ServerRegistration( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IExeServerRegistration **serverRegistration) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IExeServerActivatableClassRegistration = __uuidof(IExeServerActivatableClassRegistration);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerRegistration )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIExeServerRegistration **serverRegistration);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistrationVtbl;

    interface __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_get_ServerRegistration(This,serverRegistration)	\
    ( (This)->lpVtbl -> get_ServerRegistration(This,serverRegistration) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_activationregistration_0000_0007 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CFoundation_CIExeServerRegistration_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IExeServerRegistration[] = L"Windows.Foundation.IExeServerRegistration";
#endif /* !defined(____x_ABI_CWindows_CFoundation_CIExeServerRegistration_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_activationregistration_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0007_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CFoundation_CIExeServerRegistration_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIExeServerRegistration_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CFoundation_CIExeServerRegistration */
/* [object][uuid][unique] */ 



/* interface ABI::Windows::Foundation::IExeServerRegistration */
/* [object][uuid][unique] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIExeServerRegistration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Foundation {
                
                MIDL_INTERFACE("EC734A06-0401-4317-BAC1-3B7E207242E3")
                IExeServerRegistration : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ServerName( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *serverName) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExePath( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *exePath) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CommandLine( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *commandLine) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AppUserModelId( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *appUserModelId) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IdentityType( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::IdentityType *identityType) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Identity( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *identity) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Instancing( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Foundation::InstancingType *instanceType) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Permissions( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *permissions) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IExeServerRegistration = __uuidof(IExeServerRegistration);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CFoundation_CIExeServerRegistrationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerName )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *serverName);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExePath )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *exePath);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommandLine )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *commandLine);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *appUserModelId);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IdentityType )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CIdentityType *identityType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *identity);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Instancing )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CInstancingType *instanceType);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Permissions )( 
            __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *permissions);
        
        END_INTERFACE
    } __x_ABI_CWindows_CFoundation_CIExeServerRegistrationVtbl;

    interface __x_ABI_CWindows_CFoundation_CIExeServerRegistration
    {
        CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIExeServerRegistrationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_ServerName(This,serverName)	\
    ( (This)->lpVtbl -> get_ServerName(This,serverName) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_ExePath(This,exePath)	\
    ( (This)->lpVtbl -> get_ExePath(This,exePath) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_CommandLine(This,commandLine)	\
    ( (This)->lpVtbl -> get_CommandLine(This,commandLine) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_AppUserModelId(This,appUserModelId)	\
    ( (This)->lpVtbl -> get_AppUserModelId(This,appUserModelId) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_IdentityType(This,identityType)	\
    ( (This)->lpVtbl -> get_IdentityType(This,identityType) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_Identity(This,identity)	\
    ( (This)->lpVtbl -> get_Identity(This,identity) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_Instancing(This,instanceType)	\
    ( (This)->lpVtbl -> get_Instancing(This,instanceType) ) 

#define __x_ABI_CWindows_CFoundation_CIExeServerRegistration_get_Permissions(This,permissions)	\
    ( (This)->lpVtbl -> get_Permissions(This,permissions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CFoundation_CIExeServerRegistration_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_activationregistration_0000_0008 */
/* [local] */ 

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
class DllServerActivatableClassRegistration;
} /*Foundation*/
} /*Windows*/
}
#endif

#ifndef RUNTIMECLASS_Windows_Foundation_DllServerActivatableClassRegistration_DEFINED
#define RUNTIMECLASS_Windows_Foundation_DllServerActivatableClassRegistration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_DllServerActivatableClassRegistration[] = L"Windows.Foundation.DllServerActivatableClassRegistration";
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
class ExeServerActivatableClassRegistration;
} /*Foundation*/
} /*Windows*/
}
#endif
#ifndef RUNTIMECLASS_Windows_Foundation_ExeServerActivatableClassRegistration_DEFINED
#define RUNTIMECLASS_Windows_Foundation_ExeServerActivatableClassRegistration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_ExeServerActivatableClassRegistration[] = L"Windows.Foundation.ExeServerActivatableClassRegistration";
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
class ExeServerRegistration;
} /*Foundation*/
} /*Windows*/
}
#endif
#ifndef RUNTIMECLASS_Windows_Foundation_ExeServerRegistration_DEFINED
#define RUNTIMECLASS_Windows_Foundation_ExeServerRegistration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_ExeServerRegistration[] = L"Windows.Foundation.ExeServerRegistration";
#endif


/* interface __MIDL_itf_activationregistration_0000_0008 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_activationregistration_0000_0008_v0_0_s_ifspec;

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


