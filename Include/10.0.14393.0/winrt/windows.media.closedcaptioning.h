

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

#ifndef __windows2Emedia2Eclosedcaptioning_h__
#define __windows2Emedia2Eclosedcaptioning_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ClosedCaptioning {
                interface IClosedCaptionPropertiesStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.UI.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui_h__)
#include <Windows.UI.h>
#endif // !defined(__windows2Eui_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle;


#endif /* end if !defined(__cplusplus) */


#endif

#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor
    {
        ClosedCaptionColor_Default	= 0,
        ClosedCaptionColor_White	= 1,
        ClosedCaptionColor_Black	= 2,
        ClosedCaptionColor_Red	= 3,
        ClosedCaptionColor_Green	= 4,
        ClosedCaptionColor_Blue	= 5,
        ClosedCaptionColor_Yellow	= 6,
        ClosedCaptionColor_Magenta	= 7,
        ClosedCaptionColor_Cyan	= 8
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect
    {
        ClosedCaptionEdgeEffect_Default	= 0,
        ClosedCaptionEdgeEffect_None	= 1,
        ClosedCaptionEdgeEffect_Raised	= 2,
        ClosedCaptionEdgeEffect_Depressed	= 3,
        ClosedCaptionEdgeEffect_Uniform	= 4,
        ClosedCaptionEdgeEffect_DropShadow	= 5
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity
    {
        ClosedCaptionOpacity_Default	= 0,
        ClosedCaptionOpacity_OneHundredPercent	= 1,
        ClosedCaptionOpacity_SeventyFivePercent	= 2,
        ClosedCaptionOpacity_TwentyFivePercent	= 3,
        ClosedCaptionOpacity_ZeroPercent	= 4
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize
    {
        ClosedCaptionSize_Default	= 0,
        ClosedCaptionSize_FiftyPercent	= 1,
        ClosedCaptionSize_OneHundredPercent	= 2,
        ClosedCaptionSize_OneHundredFiftyPercent	= 3,
        ClosedCaptionSize_TwoHundredPercent	= 4
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle
    {
        ClosedCaptionStyle_Default	= 0,
        ClosedCaptionStyle_MonospacedWithSerifs	= 1,
        ClosedCaptionStyle_ProportionalWithSerifs	= 2,
        ClosedCaptionStyle_MonospacedWithoutSerifs	= 3,
        ClosedCaptionStyle_ProportionalWithoutSerifs	= 4,
        ClosedCaptionStyle_Casual	= 5,
        ClosedCaptionStyle_Cursive	= 6,
        ClosedCaptionStyle_SmallCapitals	= 7
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics[] = L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics";
#endif /* !defined(____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0000 */
/* [local] */ 

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ClosedCaptioning {
                
                typedef enum ClosedCaptionColor ClosedCaptionColor;
                
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
        namespace Media {
            namespace ClosedCaptioning {
                
                typedef enum ClosedCaptionEdgeEffect ClosedCaptionEdgeEffect;
                
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
        namespace Media {
            namespace ClosedCaptioning {
                
                typedef enum ClosedCaptionOpacity ClosedCaptionOpacity;
                
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
        namespace Media {
            namespace ClosedCaptioning {
                
                typedef enum ClosedCaptionSize ClosedCaptionSize;
                
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
        namespace Media {
            namespace ClosedCaptioning {
                
                typedef enum ClosedCaptionStyle ClosedCaptionStyle;
                
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
        namespace Media {
            namespace ClosedCaptioning {
                
                /* [v1_enum] */ 
                enum ClosedCaptionColor
                    {
                        ClosedCaptionColor_Default	= 0,
                        ClosedCaptionColor_White	= 1,
                        ClosedCaptionColor_Black	= 2,
                        ClosedCaptionColor_Red	= 3,
                        ClosedCaptionColor_Green	= 4,
                        ClosedCaptionColor_Blue	= 5,
                        ClosedCaptionColor_Yellow	= 6,
                        ClosedCaptionColor_Magenta	= 7,
                        ClosedCaptionColor_Cyan	= 8
                    } ;
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
        namespace Media {
            namespace ClosedCaptioning {
                
                /* [v1_enum] */ 
                enum ClosedCaptionEdgeEffect
                    {
                        ClosedCaptionEdgeEffect_Default	= 0,
                        ClosedCaptionEdgeEffect_None	= 1,
                        ClosedCaptionEdgeEffect_Raised	= 2,
                        ClosedCaptionEdgeEffect_Depressed	= 3,
                        ClosedCaptionEdgeEffect_Uniform	= 4,
                        ClosedCaptionEdgeEffect_DropShadow	= 5
                    } ;
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
        namespace Media {
            namespace ClosedCaptioning {
                
                /* [v1_enum] */ 
                enum ClosedCaptionOpacity
                    {
                        ClosedCaptionOpacity_Default	= 0,
                        ClosedCaptionOpacity_OneHundredPercent	= 1,
                        ClosedCaptionOpacity_SeventyFivePercent	= 2,
                        ClosedCaptionOpacity_TwentyFivePercent	= 3,
                        ClosedCaptionOpacity_ZeroPercent	= 4
                    } ;
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
        namespace Media {
            namespace ClosedCaptioning {
                
                /* [v1_enum] */ 
                enum ClosedCaptionSize
                    {
                        ClosedCaptionSize_Default	= 0,
                        ClosedCaptionSize_FiftyPercent	= 1,
                        ClosedCaptionSize_OneHundredPercent	= 2,
                        ClosedCaptionSize_OneHundredFiftyPercent	= 3,
                        ClosedCaptionSize_TwoHundredPercent	= 4
                    } ;
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
        namespace Media {
            namespace ClosedCaptioning {
                
                /* [v1_enum] */ 
                enum ClosedCaptionStyle
                    {
                        ClosedCaptionStyle_Default	= 0,
                        ClosedCaptionStyle_MonospacedWithSerifs	= 1,
                        ClosedCaptionStyle_ProportionalWithSerifs	= 2,
                        ClosedCaptionStyle_MonospacedWithoutSerifs	= 3,
                        ClosedCaptionStyle_ProportionalWithoutSerifs	= 4,
                        ClosedCaptionStyle_Casual	= 5,
                        ClosedCaptionStyle_Cursive	= 6,
                        ClosedCaptionStyle_SmallCapitals	= 7
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                namespace ClosedCaptioning {
                    
                    MIDL_INTERFACE("10AA1F84-CC30-4141-B503-5272289E0C20")
                    IClosedCaptionPropertiesStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionColor *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ComputedFontColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontOpacity( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionSize *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontStyle( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionStyle *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FontEffect( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionColor *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ComputedBackgroundColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundOpacity( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegionColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionColor *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ComputedRegionColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RegionOpacity( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Media::ClosedCaptioning::ClosedCaptionOpacity *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IClosedCaptionPropertiesStatics = __uuidof(IClosedCaptionPropertiesStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontColor )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComputedFontColor )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontOpacity )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionSize *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontStyle )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionStyle *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FontEffect )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionEdgeEffect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComputedBackgroundColor )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundOpacity )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegionColor )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionColor *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ComputedRegionColor )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RegionOpacity )( 
            __RPC__in __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CClosedCaptioning_CClosedCaptionOpacity *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_FontColor(This,value)	\
    ( (This)->lpVtbl -> get_FontColor(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_ComputedFontColor(This,value)	\
    ( (This)->lpVtbl -> get_ComputedFontColor(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_FontOpacity(This,value)	\
    ( (This)->lpVtbl -> get_FontOpacity(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_FontSize(This,value)	\
    ( (This)->lpVtbl -> get_FontSize(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_FontStyle(This,value)	\
    ( (This)->lpVtbl -> get_FontStyle(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_FontEffect(This,value)	\
    ( (This)->lpVtbl -> get_FontEffect(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_BackgroundColor(This,value)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_ComputedBackgroundColor(This,value)	\
    ( (This)->lpVtbl -> get_ComputedBackgroundColor(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_BackgroundOpacity(This,value)	\
    ( (This)->lpVtbl -> get_BackgroundOpacity(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_RegionColor(This,value)	\
    ( (This)->lpVtbl -> get_RegionColor(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_ComputedRegionColor(This,value)	\
    ( (This)->lpVtbl -> get_ComputedRegionColor(This,value) ) 

#define __x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_get_RegionOpacity(This,value)	\
    ( (This)->lpVtbl -> get_RegionOpacity(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CClosedCaptioning_CIClosedCaptionPropertiesStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0001 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Media_ClosedCaptioning_ClosedCaptionProperties_DEFINED
#define RUNTIMECLASS_Windows_Media_ClosedCaptioning_ClosedCaptionProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ClosedCaptioning_ClosedCaptionProperties[] = L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties";
#endif


/* interface __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eclosedcaptioning_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


