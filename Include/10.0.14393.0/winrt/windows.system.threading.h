

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

#ifndef __windows2Esystem2Ethreading_h__
#define __windows2Esystem2Ethreading_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface ITimerDestroyedHandler;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface ITimerElapsedHandler;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IWorkItemHandler;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IThreadPoolStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IThreadPoolTimer;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IThreadPoolTimerStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;


#endif /* end if !defined(__cplusplus) */


#endif






#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
namespace Threading {
class ThreadPoolTimer;
} /*Threading*/
} /*System*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions
    {
        WorkItemOptions_None	= 0,
        WorkItemOptions_TimeSliced	= 0x1
    } ;
#endif /* end if !defined(__cplusplus) */

#else
namespace ABI {
namespace Windows {
namespace System {
namespace Threading {
enum WorkItemOptions;
DEFINE_ENUM_FLAG_OPERATORS(WorkItemOptions)
} /*Threading*/
} /*System*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority
    {
        WorkItemPriority_Low	= -1,
        WorkItemPriority_Normal	= 0,
        WorkItemPriority_High	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0000 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                
                typedef enum WorkItemOptions WorkItemOptions;
                
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
        namespace System {
            namespace Threading {
                
                typedef enum WorkItemPriority WorkItemPriority;
                
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
        namespace System {
            namespace Threading {
                
                /* [v1_enum] */ 
                enum WorkItemOptions
                    {
                        WorkItemOptions_None	= 0,
                        WorkItemOptions_TimeSliced	= 0x1
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
        namespace System {
            namespace Threading {
                
                /* [v1_enum] */ 
                enum WorkItemPriority
                    {
                        WorkItemPriority_Low	= -1,
                        WorkItemPriority_Normal	= 0,
                        WorkItemPriority_High	= 1
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Threading::ITimerDestroyedHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Threading {
                    
                    MIDL_INTERFACE("34ED19FA-8384-4EB9-8209-FB5094EEEC35")
                    ITimerDestroyedHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::IThreadPoolTimer *timer) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ITimerDestroyedHandler = __uuidof(ITimerDestroyedHandler);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer *timer);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_Invoke(This,timer)	\
    ( (This)->lpVtbl -> Invoke(This,timer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Threading::ITimerElapsedHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Threading {
                    
                    MIDL_INTERFACE("FAAEA667-FBEB-49CB-ADB2-71184C556E43")
                    ITimerElapsedHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::IThreadPoolTimer *timer) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_ITimerElapsedHandler = __uuidof(ITimerElapsedHandler);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer *timer);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_Invoke(This,timer)	\
    ( (This)->lpVtbl -> Invoke(This,timer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler_INTERFACE_DEFINED__ */


#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Threading::IWorkItemHandler */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Threading {
                    
                    MIDL_INTERFACE("1D1A8B8B-FA66-414F-9CBD-B65FC99D17FA")
                    IWorkItemHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IAsyncAction *operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IWorkItemHandler = __uuidof(IWorkItemHandler);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIAsyncAction *operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_Invoke(This,operation)	\
    ( (This)->lpVtbl -> Invoke(This,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_IThreadPoolStatics[] = L"Windows.System.Threading.IThreadPoolStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Threading::IThreadPoolStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Threading {
                    
                    MIDL_INTERFACE("B6BF67DD-84BD-44F8-AC1C-93EBCB9DBA91")
                    IThreadPoolStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE RunAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::IWorkItemHandler *handler,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE RunWithPriorityAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::IWorkItemHandler *handler,
                            /* [in] */ ABI::Windows::System::Threading::WorkItemPriority priority,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE RunWithPriorityAndOptionsAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::IWorkItemHandler *handler,
                            /* [in] */ ABI::Windows::System::Threading::WorkItemPriority priority,
                            /* [in] */ ABI::Windows::System::Threading::WorkItemOptions options,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IThreadPoolStatics = __uuidof(IThreadPoolStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *RunAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);
        
        HRESULT ( STDMETHODCALLTYPE *RunWithPriorityAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,
            /* [in] */ __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);
        
        HRESULT ( STDMETHODCALLTYPE *RunWithPriorityAndOptionsAsync )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler *handler,
            /* [in] */ __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
            /* [in] */ __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunAsync(This,handler,operation)	\
    ( (This)->lpVtbl -> RunAsync(This,handler,operation) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAsync(This,handler,priority,operation)	\
    ( (This)->lpVtbl -> RunWithPriorityAsync(This,handler,priority,operation) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_RunWithPriorityAndOptionsAsync(This,handler,priority,options,operation)	\
    ( (This)->lpVtbl -> RunWithPriorityAndOptionsAsync(This,handler,priority,options,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0004 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_IThreadPoolTimer[] = L"Windows.System.Threading.IThreadPoolTimer";
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Threading::IThreadPoolTimer */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Threading {
                    
                    MIDL_INTERFACE("594EBE78-55EA-4A88-A50D-3402AE1F9CF2")
                    IThreadPoolTimer : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Period( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::TimeSpan *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Delay( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::TimeSpan *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IThreadPoolTimer = __uuidof(IThreadPoolTimer);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Period )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan *value);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer * This);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_get_Period(This,value)	\
    ( (This)->lpVtbl -> get_Period(This,value) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_get_Delay(This,value)	\
    ( (This)->lpVtbl -> get_Delay(This,value) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0005 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_IThreadPoolTimerStatics[] = L"Windows.System.Threading.IThreadPoolTimerStatics";
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0005_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::System::Threading::IThreadPoolTimerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace System {
                namespace Threading {
                    
                    MIDL_INTERFACE("1A8A9D02-E482-461B-B8C7-8EFAD1CCE590")
                    IThreadPoolTimerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreatePeriodicTimer( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::ITimerElapsedHandler *handler,
                            /* [in] */ ABI::Windows::Foundation::TimeSpan period,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Threading::IThreadPoolTimer **timer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateTimer( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::ITimerElapsedHandler *handler,
                            /* [in] */ ABI::Windows::Foundation::TimeSpan delay,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Threading::IThreadPoolTimer **timer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreatePeriodicTimerWithCompletion( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::ITimerElapsedHandler *handler,
                            /* [in] */ ABI::Windows::Foundation::TimeSpan period,
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::ITimerDestroyedHandler *destroyed,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Threading::IThreadPoolTimer **timer) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateTimerWithCompletion( 
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::ITimerElapsedHandler *handler,
                            /* [in] */ ABI::Windows::Foundation::TimeSpan delay,
                            /* [in] */ __RPC__in_opt ABI::Windows::System::Threading::ITimerDestroyedHandler *destroyed,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::Threading::IThreadPoolTimer **timer) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IThreadPoolTimerStatics = __uuidof(IThreadPoolTimerStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePeriodicTimer )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler *handler,
            /* [in] */ __x_ABI_CWindows_CFoundation_CTimeSpan period,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer **timer);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTimer )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler *handler,
            /* [in] */ __x_ABI_CWindows_CFoundation_CTimeSpan delay,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer **timer);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePeriodicTimerWithCompletion )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler *handler,
            /* [in] */ __x_ABI_CWindows_CFoundation_CTimeSpan period,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler *destroyed,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer **timer);
        
        HRESULT ( STDMETHODCALLTYPE *CreateTimerWithCompletion )( 
            __RPC__in __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerElapsedHandler *handler,
            /* [in] */ __x_ABI_CWindows_CFoundation_CTimeSpan delay,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CITimerDestroyedHandler *destroyed,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimer **timer);
        
        END_INTERFACE
    } __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl;

    interface __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_CreatePeriodicTimer(This,handler,period,timer)	\
    ( (This)->lpVtbl -> CreatePeriodicTimer(This,handler,period,timer) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_CreateTimer(This,handler,delay,timer)	\
    ( (This)->lpVtbl -> CreateTimer(This,handler,delay,timer) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_CreatePeriodicTimerWithCompletion(This,handler,period,destroyed,timer)	\
    ( (This)->lpVtbl -> CreatePeriodicTimerWithCompletion(This,handler,period,destroyed,timer) ) 

#define __x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_CreateTimerWithCompletion(This,handler,delay,destroyed,timer)	\
    ( (This)->lpVtbl -> CreateTimerWithCompletion(This,handler,delay,destroyed,timer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CSystem_CThreading_CIThreadPoolTimerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0006 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_System_Threading_ThreadPool_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_ThreadPool_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_ThreadPool[] = L"Windows.System.Threading.ThreadPool";
#endif
#ifndef RUNTIMECLASS_Windows_System_Threading_ThreadPoolTimer_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_ThreadPoolTimer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_ThreadPoolTimer[] = L"Windows.System.Threading.ThreadPoolTimer";
#endif


/* interface __MIDL_itf_windows2Esystem2Ethreading_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Esystem2Ethreading_0000_0006_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


