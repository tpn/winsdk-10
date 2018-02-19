/* Header file automatically generated from windows.ui.core.animationmetrics.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0206 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Eui2Ecore2Eanimationmetrics_h__
#define __windows2Eui2Ecore2Eanimationmetrics_h__
#ifndef __windows2Eui2Ecore2Eanimationmetrics_p_h__
#define __windows2Eui2Ecore2Eanimationmetrics_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#if !defined(_MSC_VER) || (_MSC_VER >= 1910)
#define MIDL_CONST_ID constexpr const
#else
#define MIDL_CONST_ID const __declspec(selectany)
#endif


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    interface IAnimationDescription;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription ABI::Windows::UI::Core::AnimationMetrics::IAnimationDescription

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    interface IAnimationDescriptionFactory;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory ABI::Windows::UI::Core::AnimationMetrics::IAnimationDescriptionFactory

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    interface IOpacityAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation ABI::Windows::UI::Core::AnimationMetrics::IOpacityAnimation

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    interface IPropertyAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    interface IScaleAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation ABI::Windows::UI::Core::AnimationMetrics::IScaleAnimation

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE
#define DEF___FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb6799d3-9f1a-5a4e-a940-945f1ab8c4fe"))
IIterator<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> : IIterator_impl<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Core.AnimationMetrics.IPropertyAnimation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t;
#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*>
//#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE */


#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE
#define DEF___FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c75f1bd1-a3c1-5881-9da0-1ecdb8e51bc3"))
IIterable<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> : IIterable_impl<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Core.AnimationMetrics.IPropertyAnimation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t;
#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*>
//#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE */


#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE
#define DEF___FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3a6ed95d-6a50-5ead-a4c6-09f8babc632c"))
IVectorView<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> : IVectorView_impl<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Core.AnimationMetrics.IPropertyAnimation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*> __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t;
#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*>
//#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Core::AnimationMetrics::IPropertyAnimation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_USE */


#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_float_USE
#define DEF___FIReference_1_float_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("719cc2ba-3e76-5def-9f1a-38d85a145ea8"))
IReference<float> : IReference_impl<float> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Single>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<float> __FIReference_1_float_t;
#define __FIReference_1_float ABI::Windows::Foundation::__FIReference_1_float_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_float ABI::Windows::Foundation::IReference<FLOAT>
//#define __FIReference_1_float_t ABI::Windows::Foundation::IReference<FLOAT>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_float_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    
                    typedef enum AnimationEffect : int AnimationEffect;
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    
                    typedef enum AnimationEffectTarget : int AnimationEffectTarget;
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    
                    typedef enum PropertyAnimationType : int PropertyAnimationType;
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    class AnimationDescription;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    class OpacityAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    class PropertyAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    class ScaleAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    class TranslationAnimation;
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */













/*
 *
 * Struct Windows.UI.Core.AnimationMetrics.AnimationEffect
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [v1_enum, contract] */
                    enum AnimationEffect : int
                    {
                        AnimationEffect_Expand = 0,
                        AnimationEffect_Collapse = 1,
                        AnimationEffect_Reposition = 2,
                        AnimationEffect_FadeIn = 3,
                        AnimationEffect_FadeOut = 4,
                        AnimationEffect_AddToList = 5,
                        AnimationEffect_DeleteFromList = 6,
                        AnimationEffect_AddToGrid = 7,
                        AnimationEffect_DeleteFromGrid = 8,
                        AnimationEffect_AddToSearchGrid = 9,
                        AnimationEffect_DeleteFromSearchGrid = 10,
                        AnimationEffect_AddToSearchList = 11,
                        AnimationEffect_DeleteFromSearchList = 12,
                        AnimationEffect_ShowEdgeUI = 13,
                        AnimationEffect_ShowPanel = 14,
                        AnimationEffect_HideEdgeUI = 15,
                        AnimationEffect_HidePanel = 16,
                        AnimationEffect_ShowPopup = 17,
                        AnimationEffect_HidePopup = 18,
                        AnimationEffect_PointerDown = 19,
                        AnimationEffect_PointerUp = 20,
                        AnimationEffect_DragSourceStart = 21,
                        AnimationEffect_DragSourceEnd = 22,
                        AnimationEffect_TransitionContent = 23,
                        AnimationEffect_Reveal = 24,
                        AnimationEffect_Hide = 25,
                        AnimationEffect_DragBetweenEnter = 26,
                        AnimationEffect_DragBetweenLeave = 27,
                        AnimationEffect_SwipeSelect = 28,
                        AnimationEffect_SwipeDeselect = 29,
                        AnimationEffect_SwipeReveal = 30,
                        AnimationEffect_EnterPage = 31,
                        AnimationEffect_TransitionPage = 32,
                        AnimationEffect_CrossFade = 33,
                        AnimationEffect_Peek = 34,
                        AnimationEffect_UpdateBadge = 35,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.AnimationMetrics.AnimationEffectTarget
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [v1_enum, contract] */
                    enum AnimationEffectTarget : int
                    {
                        AnimationEffectTarget_Primary = 0,
                        AnimationEffectTarget_Added = 1,
                        AnimationEffectTarget_Affected = 2,
                        AnimationEffectTarget_Background = 3,
                        AnimationEffectTarget_Content = 4,
                        AnimationEffectTarget_Deleted = 5,
                        AnimationEffectTarget_Deselected = 6,
                        AnimationEffectTarget_DragSource = 7,
                        AnimationEffectTarget_Hidden = 8,
                        AnimationEffectTarget_Incoming = 9,
                        AnimationEffectTarget_Outgoing = 10,
                        AnimationEffectTarget_Outline = 11,
                        AnimationEffectTarget_Remaining = 12,
                        AnimationEffectTarget_Revealed = 13,
                        AnimationEffectTarget_RowIn = 14,
                        AnimationEffectTarget_RowOut = 15,
                        AnimationEffectTarget_Selected = 16,
                        AnimationEffectTarget_Selection = 17,
                        AnimationEffectTarget_Shown = 18,
                        AnimationEffectTarget_Tapped = 19,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.AnimationMetrics.PropertyAnimationType
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [v1_enum, contract] */
                    enum PropertyAnimationType : int
                    {
                        PropertyAnimationType_Scale = 0,
                        PropertyAnimationType_Translation = 1,
                        PropertyAnimationType_Opacity = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IAnimationDescription
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.AnimationDescription
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IAnimationDescription[] = L"Windows.UI.Core.AnimationMetrics.IAnimationDescription";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [object, uuid("7D11A549-BE3D-41DE-B081-05C149962F9B"), exclusiveto, contract] */
                    MIDL_INTERFACE("7D11A549-BE3D-41DE-B081-05C149962F9B")
                    IAnimationDescription : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Animations(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StaggerDelay(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StaggerDelayFactor(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DelayLimit(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ZOrder(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAnimationDescription=_uuidof(IAnimationDescription);
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.AnimationDescription
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory[] = L"Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [object, uuid("C6E27ABE-C1FB-48B5-9271-ECC70AC86EF0"), exclusiveto, contract] */
                    MIDL_INTERFACE("C6E27ABE-C1FB-48B5-9271-ECC70AC86EF0")
                    IAnimationDescriptionFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::UI::Core::AnimationMetrics::AnimationEffect effect,
                            /* [in] */ABI::Windows::UI::Core::AnimationMetrics::AnimationEffectTarget target,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::AnimationMetrics::IAnimationDescription * * animation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAnimationDescriptionFactory=_uuidof(IAnimationDescriptionFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IOpacityAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.OpacityAnimation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IOpacityAnimation[] = L"Windows.UI.Core.AnimationMetrics.IOpacityAnimation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [object, uuid("803AABE5-EE7E-455F-84E9-2506AFB8D2B4"), exclusiveto, contract] */
                    MIDL_INTERFACE("803AABE5-EE7E-455F-84E9-2506AFB8D2B4")
                    IOpacityAnimation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialOpacity(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FinalOpacity(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IOpacityAnimation=_uuidof(IOpacityAnimation);
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IPropertyAnimation[] = L"Windows.UI.Core.AnimationMetrics.IPropertyAnimation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [object, uuid("3A01B4DA-4D8C-411E-B615-1ADE683A9903"), contract] */
                    MIDL_INTERFACE("3A01B4DA-4D8C-411E-B615-1ADE683A9903")
                    IPropertyAnimation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Core::AnimationMetrics::PropertyAnimationType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Delay(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Duration(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control1(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Control2(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPropertyAnimation=_uuidof(IPropertyAnimation);
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IScaleAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.ScaleAnimation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IScaleAnimation[] = L"Windows.UI.Core.AnimationMetrics.IScaleAnimation";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                namespace AnimationMetrics {
                    /* [object, uuid("023552C7-71AB-428C-9C9F-D31780964995"), exclusiveto, contract] */
                    MIDL_INTERFACE("023552C7-71AB-428C-9C9F-D31780964995")
                    IScaleAnimation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialScaleX(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InitialScaleY(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FinalScaleX(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FinalScaleY(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NormalizedOrigin(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IScaleAnimation=_uuidof(IScaleAnimation);
                    
                } /* Windows */
            } /* UI */
        } /* Core */
    } /* AnimationMetrics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.AnimationDescription
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory interface starting with version 1.0 of the Windows.UI.Core.AnimationMetrics.AnimationMetricsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IAnimationDescription ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_AnimationDescription_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_AnimationDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_AnimationDescription[] = L"Windows.UI.Core.AnimationMetrics.AnimationDescription";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.OpacityAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IOpacityAnimation ** Default Interface **
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_OpacityAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_OpacityAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_OpacityAnimation[] = L"Windows.UI.Core.AnimationMetrics.OpacityAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.PropertyAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_PropertyAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_PropertyAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_PropertyAnimation[] = L"Windows.UI.Core.AnimationMetrics.PropertyAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.ScaleAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IScaleAnimation ** Default Interface **
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_ScaleAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_ScaleAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_ScaleAnimation[] = L"Windows.UI.Core.AnimationMetrics.ScaleAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.TranslationAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_TranslationAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_TranslationAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_TranslationAnimation[] = L"Windows.UI.Core.AnimationMetrics.TranslationAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription;

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory;

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation;

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation;

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation;

#endif // ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;

typedef struct __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl;

interface __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__

#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;

typedef  struct __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl;

interface __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__

#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;

typedef struct __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
            /* [in] */ __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl;

interface __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation_INTERFACE_DEFINED__

#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_float_INTERFACE_DEFINED__)
#define ____FIReference_1_float_INTERFACE_DEFINED__

typedef interface __FIReference_1_float __FIReference_1_float;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_float;

typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, /* [retval][out] */ __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;

interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_float_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_float_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_float_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_float_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_float_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_float_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_float_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_float_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect;


typedef enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget;


typedef enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType;






















/*
 *
 * Struct Windows.UI.Core.AnimationMetrics.AnimationEffect
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect
{
    AnimationEffect_Expand = 0,
    AnimationEffect_Collapse = 1,
    AnimationEffect_Reposition = 2,
    AnimationEffect_FadeIn = 3,
    AnimationEffect_FadeOut = 4,
    AnimationEffect_AddToList = 5,
    AnimationEffect_DeleteFromList = 6,
    AnimationEffect_AddToGrid = 7,
    AnimationEffect_DeleteFromGrid = 8,
    AnimationEffect_AddToSearchGrid = 9,
    AnimationEffect_DeleteFromSearchGrid = 10,
    AnimationEffect_AddToSearchList = 11,
    AnimationEffect_DeleteFromSearchList = 12,
    AnimationEffect_ShowEdgeUI = 13,
    AnimationEffect_ShowPanel = 14,
    AnimationEffect_HideEdgeUI = 15,
    AnimationEffect_HidePanel = 16,
    AnimationEffect_ShowPopup = 17,
    AnimationEffect_HidePopup = 18,
    AnimationEffect_PointerDown = 19,
    AnimationEffect_PointerUp = 20,
    AnimationEffect_DragSourceStart = 21,
    AnimationEffect_DragSourceEnd = 22,
    AnimationEffect_TransitionContent = 23,
    AnimationEffect_Reveal = 24,
    AnimationEffect_Hide = 25,
    AnimationEffect_DragBetweenEnter = 26,
    AnimationEffect_DragBetweenLeave = 27,
    AnimationEffect_SwipeSelect = 28,
    AnimationEffect_SwipeDeselect = 29,
    AnimationEffect_SwipeReveal = 30,
    AnimationEffect_EnterPage = 31,
    AnimationEffect_TransitionPage = 32,
    AnimationEffect_CrossFade = 33,
    AnimationEffect_Peek = 34,
    AnimationEffect_UpdateBadge = 35,
};
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.AnimationMetrics.AnimationEffectTarget
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget
{
    AnimationEffectTarget_Primary = 0,
    AnimationEffectTarget_Added = 1,
    AnimationEffectTarget_Affected = 2,
    AnimationEffectTarget_Background = 3,
    AnimationEffectTarget_Content = 4,
    AnimationEffectTarget_Deleted = 5,
    AnimationEffectTarget_Deselected = 6,
    AnimationEffectTarget_DragSource = 7,
    AnimationEffectTarget_Hidden = 8,
    AnimationEffectTarget_Incoming = 9,
    AnimationEffectTarget_Outgoing = 10,
    AnimationEffectTarget_Outline = 11,
    AnimationEffectTarget_Remaining = 12,
    AnimationEffectTarget_Revealed = 13,
    AnimationEffectTarget_RowIn = 14,
    AnimationEffectTarget_RowOut = 15,
    AnimationEffectTarget_Selected = 16,
    AnimationEffectTarget_Selection = 17,
    AnimationEffectTarget_Shown = 18,
    AnimationEffectTarget_Tapped = 19,
};
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Core.AnimationMetrics.PropertyAnimationType
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */

#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType
{
    PropertyAnimationType_Scale = 0,
    PropertyAnimationType_Translation = 1,
    PropertyAnimationType_Opacity = 2,
};
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IAnimationDescription
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.AnimationDescription
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IAnimationDescription[] = L"Windows.UI.Core.AnimationMetrics.IAnimationDescription";
/* [object, uuid("7D11A549-BE3D-41DE-B081-05C149962F9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Animations )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StaggerDelay )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StaggerDelayFactor )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DelayLimit )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ZOrder )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionVtbl;

interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_get_Animations(This,value) \
    ( (This)->lpVtbl->get_Animations(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_get_StaggerDelay(This,value) \
    ( (This)->lpVtbl->get_StaggerDelay(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_get_StaggerDelayFactor(This,value) \
    ( (This)->lpVtbl->get_StaggerDelayFactor(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_get_DelayLimit(This,value) \
    ( (This)->lpVtbl->get_DelayLimit(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_get_ZOrder(This,value) \
    ( (This)->lpVtbl->get_ZOrder(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.AnimationDescription
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory[] = L"Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory";
/* [object, uuid("C6E27ABE-C1FB-48B5-9271-ECC70AC86EF0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect effect,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget target,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * * animation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactoryVtbl;

interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_CreateInstance(This,effect,target,animation) \
    ( (This)->lpVtbl->CreateInstance(This,effect,target,animation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IOpacityAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.OpacityAnimation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IOpacityAnimation[] = L"Windows.UI.Core.AnimationMetrics.IOpacityAnimation";
/* [object, uuid("803AABE5-EE7E-455F-84E9-2506AFB8D2B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialOpacity )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FinalOpacity )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimationVtbl;

interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_get_InitialOpacity(This,value) \
    ( (This)->lpVtbl->get_InitialOpacity(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_get_FinalOpacity(This,value) \
    ( (This)->lpVtbl->get_FinalOpacity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IPropertyAnimation[] = L"Windows.UI.Core.AnimationMetrics.IPropertyAnimation";
/* [object, uuid("3A01B4DA-4D8C-411E-B615-1ADE683A9903"), contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control1 )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Control2 )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimationVtbl;

interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_get_Delay(This,value) \
    ( (This)->lpVtbl->get_Delay(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_get_Duration(This,value) \
    ( (This)->lpVtbl->get_Duration(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_get_Control1(This,value) \
    ( (This)->lpVtbl->get_Control1(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_get_Control2(This,value) \
    ( (This)->lpVtbl->get_Control2(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Core.AnimationMetrics.IScaleAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Core.AnimationMetrics.ScaleAnimation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IScaleAnimation[] = L"Windows.UI.Core.AnimationMetrics.IScaleAnimation";
/* [object, uuid("023552C7-71AB-428C-9C9F-D31780964995"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialScaleX )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InitialScaleY )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_float * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FinalScaleX )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FinalScaleY )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NormalizedOrigin )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimationVtbl;

interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_get_InitialScaleX(This,value) \
    ( (This)->lpVtbl->get_InitialScaleX(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_get_InitialScaleY(This,value) \
    ( (This)->lpVtbl->get_InitialScaleY(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_get_FinalScaleX(This,value) \
    ( (This)->lpVtbl->get_FinalScaleX(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_get_FinalScaleY(This,value) \
    ( (This)->lpVtbl->get_FinalScaleY(This,value) )

#define __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_get_NormalizedOrigin(This,value) \
    ( (This)->lpVtbl->get_NormalizedOrigin(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation;
#endif /* !defined(____x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.AnimationDescription
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory interface starting with version 1.0 of the Windows.UI.Core.AnimationMetrics.AnimationMetricsContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IAnimationDescription ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_AnimationDescription_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_AnimationDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_AnimationDescription[] = L"Windows.UI.Core.AnimationMetrics.AnimationDescription";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.OpacityAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IOpacityAnimation ** Default Interface **
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_OpacityAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_OpacityAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_OpacityAnimation[] = L"Windows.UI.Core.AnimationMetrics.OpacityAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.PropertyAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_PropertyAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_PropertyAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_PropertyAnimation[] = L"Windows.UI.Core.AnimationMetrics.PropertyAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.ScaleAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IScaleAnimation ** Default Interface **
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_ScaleAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_ScaleAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_ScaleAnimation[] = L"Windows.UI.Core.AnimationMetrics.ScaleAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Core.AnimationMetrics.TranslationAnimation
 *
 * Introduced to Windows.UI.Core.AnimationMetrics.AnimationMetricsContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Core.AnimationMetrics.IPropertyAnimation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_TranslationAnimation_DEFINED
#define RUNTIMECLASS_Windows_UI_Core_AnimationMetrics_TranslationAnimation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_TranslationAnimation[] = L"Windows.UI.Core.AnimationMetrics.TranslationAnimation";
#endif
#endif // WINDOWS_UI_CORE_ANIMATIONMETRICS_ANIMATIONMETRICSCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Ecore2Eanimationmetrics_p_h__

#endif // __windows2Eui2Ecore2Eanimationmetrics_h__
