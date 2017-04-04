

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

#ifndef __windows2Eglobalization2Efonts_h__
#define __windows2Eglobalization2Efonts_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                interface ILanguageFont;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                interface ILanguageFontGroup;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                interface ILanguageFontGroupFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.UI.Text.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui2Etext_h__)
#include <Windows.UI.Text.h>
#endif // !defined(__windows2Eui2Etext_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;

#endif



#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Globalization {
namespace Fonts {
class LanguageFont;
} /*Fonts*/
} /*Globalization*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Globalization {
namespace Fonts {
class LanguageFontGroup;
} /*Fonts*/
} /*Globalization*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFont[] = L"Windows.Globalization.Fonts.ILanguageFont";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum FontStretch FontStretch;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum FontStyle FontStyle;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef struct FontWeight FontWeight;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif






extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::Fonts::ILanguageFont */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace Fonts {
                    
                    MIDL_INTERFACE("B12E5C3A-B76D-459B-BEEB-901151CD77D1")
                    ILanguageFont : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontFamily( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontWeight( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Text::FontWeight *weight) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontStretch( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Text::FontStretch *stretch) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontStyle( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Text::FontStyle *style) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ScaleFactor( 
                            /* [out][retval] */ __RPC__out DOUBLE *scale) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILanguageFont = __uuidof(ILanguageFont);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontFamily )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontWeight )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight *weight);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontStretch )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch *stretch);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontStyle )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle *style);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
            /* [out][retval] */ __RPC__out DOUBLE *scale);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl;

    interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontFamily(This,value)	\
    ( (This)->lpVtbl -> get_FontFamily(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontWeight(This,weight)	\
    ( (This)->lpVtbl -> get_FontWeight(This,weight) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontStretch(This,stretch)	\
    ( (This)->lpVtbl -> get_FontStretch(This,stretch) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontStyle(This,style)	\
    ( (This)->lpVtbl -> get_FontStyle(This,style) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_ScaleFactor(This,scale)	\
    ( (This)->lpVtbl -> get_ScaleFactor(This,scale) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroup[] = L"Windows.Globalization.Fonts.ILanguageFontGroup";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::Fonts::ILanguageFontGroup */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace Fonts {
                    
                    MIDL_INTERFACE("F33A7FC3-3A5C-4AEA-B9FF-B39FB242F7F6")
                    ILanguageFontGroup : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UITextFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UIHeadingFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UITitleFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UICaptionFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_UINotificationHeadingFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TraditionalDocumentFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ModernDocumentFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentHeadingFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FixedWidthTextFont( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentAlternate1Font( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentAlternate2Font( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILanguageFontGroup = __uuidof(ILanguageFontGroup);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UITextFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UIHeadingFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UITitleFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UICaptionFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_UINotificationHeadingFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TraditionalDocumentFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ModernDocumentFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentHeadingFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FixedWidthTextFont )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentAlternate1Font )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentAlternate2Font )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl;

    interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UITextFont(This,value)	\
    ( (This)->lpVtbl -> get_UITextFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UIHeadingFont(This,value)	\
    ( (This)->lpVtbl -> get_UIHeadingFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UITitleFont(This,value)	\
    ( (This)->lpVtbl -> get_UITitleFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UICaptionFont(This,value)	\
    ( (This)->lpVtbl -> get_UICaptionFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UINotificationHeadingFont(This,value)	\
    ( (This)->lpVtbl -> get_UINotificationHeadingFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_TraditionalDocumentFont(This,value)	\
    ( (This)->lpVtbl -> get_TraditionalDocumentFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_ModernDocumentFont(This,value)	\
    ( (This)->lpVtbl -> get_ModernDocumentFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_DocumentHeadingFont(This,value)	\
    ( (This)->lpVtbl -> get_DocumentHeadingFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_FixedWidthTextFont(This,value)	\
    ( (This)->lpVtbl -> get_FixedWidthTextFont(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_DocumentAlternate1Font(This,value)	\
    ( (This)->lpVtbl -> get_DocumentAlternate1Font(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_DocumentAlternate2Font(This,value)	\
    ( (This)->lpVtbl -> get_DocumentAlternate2Font(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroupFactory[] = L"Windows.Globalization.Fonts.ILanguageFontGroupFactory";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::Fonts::ILanguageFontGroupFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace Fonts {
                    
                    MIDL_INTERFACE("FCAEAC67-4E77-49C7-B856-DDE934FC735B")
                    ILanguageFontGroupFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateLanguageFontGroup( 
                            /* [in] */ __RPC__in HSTRING languageTag,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFontGroup **recommendedFonts) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ILanguageFontGroupFactory = __uuidof(ILanguageFontGroupFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateLanguageFontGroup )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
            /* [in] */ __RPC__in HSTRING languageTag,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup **recommendedFonts);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl;

    interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_CreateLanguageFontGroup(This,languageTag,recommendedFonts)	\
    ( (This)->lpVtbl -> CreateLanguageFontGroup(This,languageTag,recommendedFonts) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFont_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFont_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFont[] = L"Windows.Globalization.Fonts.LanguageFont";
#endif
#ifndef RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFontGroup_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFontGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFontGroup[] = L"Windows.Globalization.Fonts.LanguageFontGroup";
#endif


/* interface __MIDL_itf_windows2Eglobalization2Efonts_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Efonts_0000_0003_v0_0_s_ifspec;

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


