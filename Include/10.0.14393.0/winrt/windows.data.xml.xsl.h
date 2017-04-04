

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

#ifndef __windows2Edata2Exml2Exsl_h__
#define __windows2Edata2Exml2Exsl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    interface IXsltProcessor;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    interface IXsltProcessor2;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    interface IXsltProcessorFactory;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Data.Xml.Dom.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Edata2Exml2Edom_h__)
#include <Windows.Data.Xml.Dom.h>
#endif // !defined(__windows2Edata2Exml2Edom_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Data {
namespace Xml {
namespace Dom {
class XmlDocument;
} /*Dom*/
} /*Xml*/
} /*Data*/
} /*Windows*/
}
#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Data {
namespace Xml {
namespace Xsl {
class XsltProcessor;
} /*Xsl*/
} /*Xml*/
} /*Data*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor[] = L"Windows.Data.Xml.Xsl.IXsltProcessor";
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0000 */
/* [local] */ 








extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Xml::Xsl::IXsltProcessor */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Xml {
                    namespace Xsl {
                        
                        MIDL_INTERFACE("7B64703F-550C-48C6-A90F-93A5B964518F")
                        IXsltProcessor : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE TransformToString( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode *inputNode,
                                /* [out][retval] */ __RPC__deref_out_opt HSTRING *output) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IXsltProcessor = __uuidof(IXsltProcessor);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *TransformToString )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode *inputNode,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *output);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl;

    interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_TransformToString(This,inputNode,output)	\
    ( (This)->lpVtbl -> TransformToString(This,inputNode,output) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor2[] = L"Windows.Data.Xml.Xsl.IXsltProcessor2";
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Xml::Xsl::IXsltProcessor2 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Xml {
                    namespace Xsl {
                        
                        MIDL_INTERFACE("8DA45C56-97A5-44CB-A8BE-27D86280C70A")
                        IXsltProcessor2 : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE TransformToDocument( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode *inputNode,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocument **output) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IXsltProcessor2 = __uuidof(IXsltProcessor2);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *TransformToDocument )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode *inputNode,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument **output);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl;

    interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_TransformToDocument(This,inputNode,output)	\
    ( (This)->lpVtbl -> TransformToDocument(This,inputNode,output) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessorFactory[] = L"Windows.Data.Xml.Xsl.IXsltProcessorFactory";
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Xml::Xsl::IXsltProcessorFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Xml {
                    namespace Xsl {
                        
                        MIDL_INTERFACE("274146C0-9A51-4663-BF30-0EF742146F20")
                        IXsltProcessorFactory : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlDocument *document,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Data::Xml::Xsl::IXsltProcessor **xsltProcessor) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IXsltProcessorFactory = __uuidof(IXsltProcessorFactory);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )( 
            __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument *document,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor **xsltProcessor);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl;

    interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_CreateInstance(This,document,xsltProcessor)	\
    ( (This)->lpVtbl -> CreateInstance(This,document,xsltProcessor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Data_Xml_Xsl_XsltProcessor_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Xsl_XsltProcessor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Xsl_XsltProcessor[] = L"Windows.Data.Xml.Xsl.XsltProcessor";
#endif


/* interface __MIDL_itf_windows2Edata2Exml2Exsl_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Exml2Exsl_0000_0003_v0_0_s_ifspec;

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


