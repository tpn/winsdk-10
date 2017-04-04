

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

#ifndef __windows2Eapplicationmodel2Edatatransfer2Esharetarget_h__
#define __windows2Eapplicationmodel2Edatatransfer2Esharetarget_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace ShareTarget {
                    interface IQuickLink;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace ShareTarget {
                    interface IShareOperation;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace DataTransfer {
                namespace ShareTarget {
                    interface IShareOperation2;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.DataTransfer.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3105 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3105 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3105_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<String>"; }
};
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define ____FIIterator_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3106 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3106 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3106_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<String>"; }
};
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define ____FIIterable_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3107 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3107 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3107_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<String>"; }
};
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define ____FIVectorView_1_HSTRING_FWD_DEFINED__
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3108 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0004 */
/* [local] */ 

#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<String>"; }
};
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define ____FIVector_1_HSTRING_FWD_DEFINED__
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_HSTRING_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eapplicationmodel2Edatatransfer_h__)
#include <Windows.ApplicationModel.DataTransfer.h>
#endif // !defined(__windows2Eapplicationmodel2Edatatransfer_h__)
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace DataTransfer {
class DataPackageView;
} /*DataTransfer*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Streams {
class RandomAccessStreamReference;
} /*Streams*/
} /*Storage*/
} /*Windows*/
}
#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace DataTransfer {
namespace ShareTarget {
class QuickLink;
} /*ShareTarget*/
} /*DataTransfer*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace DataTransfer {
namespace ShareTarget {
class ShareOperation;
} /*ShareTarget*/
} /*DataTransfer*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ShareTarget_IQuickLink[] = L"Windows.ApplicationModel.DataTransfer.ShareTarget.IQuickLink";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0004 */
/* [local] */ 









extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace DataTransfer {
                    namespace ShareTarget {
                        
                        MIDL_INTERFACE("603E4308-F0BE-4ADC-ACC9-8B27AB9CF556")
                        IQuickLink : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Title( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Thumbnail( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference **value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Thumbnail( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference *value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Id( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SupportedDataFormats( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SupportedFileTypes( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IQuickLink = __uuidof(IQuickLink);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLinkVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Id )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedDataFormats )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SupportedFileTypes )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLinkVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLinkVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_get_Title(This,value)	\
    ( (This)->lpVtbl -> get_Title(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_put_Title(This,value)	\
    ( (This)->lpVtbl -> put_Title(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_get_Thumbnail(This,value)	\
    ( (This)->lpVtbl -> get_Thumbnail(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_put_Thumbnail(This,value)	\
    ( (This)->lpVtbl -> put_Thumbnail(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_get_Id(This,value)	\
    ( (This)->lpVtbl -> get_Id(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_put_Id(This,value)	\
    ( (This)->lpVtbl -> put_Id(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_get_SupportedDataFormats(This,value)	\
    ( (This)->lpVtbl -> get_SupportedDataFormats(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_get_SupportedFileTypes(This,value)	\
    ( (This)->lpVtbl -> get_SupportedFileTypes(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0005 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation[] = L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0005_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace DataTransfer {
                    namespace ShareTarget {
                        
                        MIDL_INTERFACE("2246BAB8-D0F8-41C1-A82A-4137DB6504FB")
                        IShareOperation : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Data( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::ApplicationModel::DataTransfer::IDataPackageView **value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_QuickLinkId( 
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE RemoveThisQuickLink( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ReportStarted( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ReportDataRetrieved( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ReportSubmittedBackgroundTask( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ReportCompletedWithQuickLink( 
                                /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink *quicklink) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ReportCompleted( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ReportError( 
                                /* [in] */ __RPC__in HSTRING value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IShareOperation = __uuidof(IShareOperation);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_QuickLinkId )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveThisQuickLink )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReportStarted )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReportDataRetrieved )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReportSubmittedBackgroundTask )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReportCompletedWithQuickLink )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink *quicklink);
        
        HRESULT ( STDMETHODCALLTYPE *ReportCompleted )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReportError )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation * This,
            /* [in] */ __RPC__in HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperationVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_get_Data(This,value)	\
    ( (This)->lpVtbl -> get_Data(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_get_QuickLinkId(This,value)	\
    ( (This)->lpVtbl -> get_QuickLinkId(This,value) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_RemoveThisQuickLink(This)	\
    ( (This)->lpVtbl -> RemoveThisQuickLink(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_ReportStarted(This)	\
    ( (This)->lpVtbl -> ReportStarted(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_ReportDataRetrieved(This)	\
    ( (This)->lpVtbl -> ReportDataRetrieved(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_ReportSubmittedBackgroundTask(This)	\
    ( (This)->lpVtbl -> ReportSubmittedBackgroundTask(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_ReportCompletedWithQuickLink(This,quicklink)	\
    ( (This)->lpVtbl -> ReportCompletedWithQuickLink(This,quicklink) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_ReportCompleted(This)	\
    ( (This)->lpVtbl -> ReportCompleted(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_ReportError(This,value)	\
    ( (This)->lpVtbl -> ReportError(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0006 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_DataTransfer_ShareTarget_IShareOperation2[] = L"Windows.ApplicationModel.DataTransfer.ShareTarget.IShareOperation2";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace DataTransfer {
                    namespace ShareTarget {
                        
                        MIDL_INTERFACE("0FFB97C1-9778-4A09-8E5B-CB5E482D0555")
                        IShareOperation2 : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE DismissUI( void) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IShareOperation2 = __uuidof(IShareOperation2);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *DismissUI )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 * This);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_DismissUI(This)	\
    ( (This)->lpVtbl -> DismissUI(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0007 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTarget_QuickLink_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTarget_QuickLink_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareTarget_QuickLink[] = L"Windows.ApplicationModel.DataTransfer.ShareTarget.QuickLink";
#endif
#ifndef RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTarget_ShareOperation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_DataTransfer_ShareTarget_ShareOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_DataTransfer_ShareTarget_ShareOperation[] = L"Windows.ApplicationModel.DataTransfer.ShareTarget.ShareOperation";
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Edatatransfer2Esharetarget_0000_0007_v0_0_s_ifspec;

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


