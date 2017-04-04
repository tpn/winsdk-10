

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __corprof_h__
#define __corprof_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICorProfilerCallback_FWD_DEFINED__
#define __ICorProfilerCallback_FWD_DEFINED__
typedef interface ICorProfilerCallback ICorProfilerCallback;
#endif 	/* __ICorProfilerCallback_FWD_DEFINED__ */


#ifndef __ICorProfilerCallback2_FWD_DEFINED__
#define __ICorProfilerCallback2_FWD_DEFINED__
typedef interface ICorProfilerCallback2 ICorProfilerCallback2;
#endif 	/* __ICorProfilerCallback2_FWD_DEFINED__ */


#ifndef __ICorProfilerInfo_FWD_DEFINED__
#define __ICorProfilerInfo_FWD_DEFINED__
typedef interface ICorProfilerInfo ICorProfilerInfo;
#endif 	/* __ICorProfilerInfo_FWD_DEFINED__ */


#ifndef __ICorProfilerInfo2_FWD_DEFINED__
#define __ICorProfilerInfo2_FWD_DEFINED__
typedef interface ICorProfilerInfo2 ICorProfilerInfo2;
#endif 	/* __ICorProfilerInfo2_FWD_DEFINED__ */


#ifndef __ICorProfilerObjectEnum_FWD_DEFINED__
#define __ICorProfilerObjectEnum_FWD_DEFINED__
typedef interface ICorProfilerObjectEnum ICorProfilerObjectEnum;
#endif 	/* __ICorProfilerObjectEnum_FWD_DEFINED__ */


#ifndef __IMethodMalloc_FWD_DEFINED__
#define __IMethodMalloc_FWD_DEFINED__
typedef interface IMethodMalloc IMethodMalloc;
#endif 	/* __IMethodMalloc_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_corprof_0000 */
/* [local] */ 

#define PROFILER_REGKEY_ROOT            L"software\\microsoft\\.NETFramework\\Profilers"
#define PROFILER_REGVALUE_HELPSTRING    L"HelpString"
#define PROFILER_REGVALUE_PROFID        L"ProfilerID"
#define CorDB_CONTROL_Profiling         "Cor_Enable_Profiling"
#define CorDB_CONTROL_ProfilingL       L"Cor_Enable_Profiling"
#if 0
typedef LONG32 mdToken;

typedef mdToken mdModule;

typedef mdToken mdTypeDef;

typedef mdToken mdMethodDef;

typedef mdToken mdFieldDef;

typedef ULONG CorElementType;


#endif
typedef const BYTE *LPCBYTE;

typedef BYTE *LPBYTE;

#ifndef _COR_IL_MAP
#define _COR_IL_MAP
typedef struct _COR_IL_MAP
    {
    ULONG32 oldOffset;
    ULONG32 newOffset;
    BOOL fAccurate;
    } 	COR_IL_MAP;

#endif //_COR_IL_MAP
#ifndef _COR_DEBUG_IL_TO_NATIVE_MAP_
#define _COR_DEBUG_IL_TO_NATIVE_MAP_
typedef 
enum CorDebugIlToNativeMappingTypes
    {	NO_MAPPING	= -1,
	PROLOG	= -2,
	EPILOG	= -3
    } 	CorDebugIlToNativeMappingTypes;

typedef struct COR_DEBUG_IL_TO_NATIVE_MAP
    {
    ULONG32 ilOffset;
    ULONG32 nativeStartOffset;
    ULONG32 nativeEndOffset;
    } 	COR_DEBUG_IL_TO_NATIVE_MAP;

#endif // _COR_DEBUG_IL_TO_NATIVE_MAP_
#ifndef _COR_FIELD_OFFSET_
#define _COR_FIELD_OFFSET_
typedef struct _COR_FIELD_OFFSET
    {
    mdFieldDef ridOfField;
    ULONG ulOffset;
    } 	COR_FIELD_OFFSET;

#endif // _COR_FIELD_OFFSET_
typedef UINT_PTR ProcessID;

typedef UINT_PTR AssemblyID;

typedef UINT_PTR AppDomainID;

typedef UINT_PTR ModuleID;

typedef UINT_PTR ClassID;

typedef UINT_PTR ThreadID;

typedef UINT_PTR ContextID;

typedef UINT_PTR FunctionID;

typedef UINT_PTR ObjectID;

typedef UINT_PTR GCHandleID;

typedef UINT_PTR __stdcall __stdcall FunctionIDMapper( 
    FunctionID funcId,
    BOOL *pbHookFunction);

typedef 
enum _COR_PRF_SNAPSHOT_INFO
    {	COR_PRF_SNAPSHOT_DEFAULT	= 0,
	COR_PRF_SNAPSHOT_REGISTER_CONTEXT	= 0x1
    } 	COR_PRF_SNAPSHOT_INFO;

typedef UINT_PTR COR_PRF_FRAME_INFO;

typedef struct _COR_PRF_FUNCTION_ARGUMENT_RANGE
    {
    UINT_PTR startAddress;
    ULONG length;
    } 	COR_PRF_FUNCTION_ARGUMENT_RANGE;

typedef struct _COR_PRF_FUNCTION_ARGUMENT_INFO
    {
    ULONG numRanges;
    ULONG totalArgumentSize;
    COR_PRF_FUNCTION_ARGUMENT_RANGE ranges[ 1 ];
    } 	COR_PRF_FUNCTION_ARGUMENT_INFO;

typedef struct _COR_PRF_CODE_INFO
    {
    UINT_PTR startAddress;
    SIZE_T size;
    } 	COR_PRF_CODE_INFO;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_corprof_0000_0001
    {	COR_PRF_FIELD_NOT_A_STATIC	= 0,
	COR_PRF_FIELD_APP_DOMAIN_STATIC	= 0x1,
	COR_PRF_FIELD_THREAD_STATIC	= 0x2,
	COR_PRF_FIELD_CONTEXT_STATIC	= 0x4,
	COR_PRF_FIELD_RVA_STATIC	= 0x8
    } 	COR_PRF_STATIC_TYPE;

typedef void FunctionEnter( 
    FunctionID funcID);

typedef void FunctionLeave( 
    FunctionID funcID);

typedef void FunctionTailcall( 
    FunctionID funcID);

typedef void FunctionEnter2( 
    FunctionID funcId,
    UINT_PTR clientData,
    COR_PRF_FRAME_INFO func,
    COR_PRF_FUNCTION_ARGUMENT_INFO *argumentInfo);

typedef void FunctionLeave2( 
    FunctionID funcId,
    UINT_PTR clientData,
    COR_PRF_FRAME_INFO func,
    COR_PRF_FUNCTION_ARGUMENT_RANGE *retvalRange);

typedef void FunctionTailcall2( 
    FunctionID funcId,
    UINT_PTR clientData,
    COR_PRF_FRAME_INFO func);

typedef HRESULT __stdcall __stdcall StackSnapshotCallback( 
    FunctionID funcId,
    UINT_PTR ip,
    COR_PRF_FRAME_INFO frameInfo,
    ULONG32 contextSize,
    BYTE context[  ],
    void *clientData);

typedef /* [public] */ 
enum __MIDL___MIDL_itf_corprof_0000_0002
    {	COR_PRF_MONITOR_NONE	= 0,
	COR_PRF_MONITOR_FUNCTION_UNLOADS	= 0x1,
	COR_PRF_MONITOR_CLASS_LOADS	= 0x2,
	COR_PRF_MONITOR_MODULE_LOADS	= 0x4,
	COR_PRF_MONITOR_ASSEMBLY_LOADS	= 0x8,
	COR_PRF_MONITOR_APPDOMAIN_LOADS	= 0x10,
	COR_PRF_MONITOR_JIT_COMPILATION	= 0x20,
	COR_PRF_MONITOR_EXCEPTIONS	= 0x40,
	COR_PRF_MONITOR_GC	= 0x80,
	COR_PRF_MONITOR_OBJECT_ALLOCATED	= 0x100,
	COR_PRF_MONITOR_THREADS	= 0x200,
	COR_PRF_MONITOR_REMOTING	= 0x400,
	COR_PRF_MONITOR_CODE_TRANSITIONS	= 0x800,
	COR_PRF_MONITOR_ENTERLEAVE	= 0x1000,
	COR_PRF_MONITOR_CCW	= 0x2000,
	COR_PRF_MONITOR_REMOTING_COOKIE	= 0x4000 | COR_PRF_MONITOR_REMOTING,
	COR_PRF_MONITOR_REMOTING_ASYNC	= 0x8000 | COR_PRF_MONITOR_REMOTING,
	COR_PRF_MONITOR_SUSPENDS	= 0x10000,
	COR_PRF_MONITOR_CACHE_SEARCHES	= 0x20000,
	COR_PRF_MONITOR_CLR_EXCEPTIONS	= 0x1000000,
	COR_PRF_MONITOR_ALL	= 0x107ffff,
	COR_PRF_ENABLE_REJIT	= 0x40000,
	COR_PRF_ENABLE_INPROC_DEBUGGING	= 0x80000,
	COR_PRF_ENABLE_JIT_MAPS	= 0x100000,
	COR_PRF_DISABLE_INLINING	= 0x200000,
	COR_PRF_DISABLE_OPTIMIZATIONS	= 0x400000,
	COR_PRF_ENABLE_OBJECT_ALLOCATED	= 0x800000,
	COR_PRF_ENABLE_FUNCTION_ARGS	= 0x2000000,
	COR_PRF_ENABLE_FUNCTION_RETVAL	= 0x4000000,
	COR_PRF_ENABLE_FRAME_INFO	= 0x8000000,
	COR_PRF_ENABLE_STACK_SNAPSHOT	= 0x10000000,
	COR_PRF_USE_PROFILE_IMAGES	= 0x20000000,
	COR_PRF_ALL	= 0x3fffffff,
	COR_PRF_MONITOR_IMMUTABLE	= COR_PRF_MONITOR_CODE_TRANSITIONS | COR_PRF_MONITOR_REMOTING | COR_PRF_MONITOR_REMOTING_COOKIE | COR_PRF_MONITOR_REMOTING_ASYNC | COR_PRF_MONITOR_GC | COR_PRF_ENABLE_REJIT | COR_PRF_ENABLE_INPROC_DEBUGGING | COR_PRF_ENABLE_JIT_MAPS | COR_PRF_DISABLE_OPTIMIZATIONS | COR_PRF_DISABLE_INLINING | COR_PRF_ENABLE_OBJECT_ALLOCATED | COR_PRF_ENABLE_FUNCTION_ARGS | COR_PRF_ENABLE_FUNCTION_RETVAL | COR_PRF_ENABLE_FRAME_INFO | COR_PRF_ENABLE_STACK_SNAPSHOT | COR_PRF_USE_PROFILE_IMAGES
    } 	COR_PRF_MONITOR;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_corprof_0000_0003
    {	PROFILER_PARENT_UNKNOWN	= 0xfffffffd,
	PROFILER_GLOBAL_CLASS	= 0xfffffffe,
	PROFILER_GLOBAL_MODULE	= 0xffffffff
    } 	COR_PRF_MISC;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_corprof_0000_0004
    {	COR_PRF_CACHED_FUNCTION_FOUND	= 0,
	COR_PRF_CACHED_FUNCTION_NOT_FOUND	= COR_PRF_CACHED_FUNCTION_FOUND + 1
    } 	COR_PRF_JIT_CACHE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_corprof_0000_0005
    {	COR_PRF_TRANSITION_CALL	= 0,
	COR_PRF_TRANSITION_RETURN	= COR_PRF_TRANSITION_CALL + 1
    } 	COR_PRF_TRANSITION_REASON;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_corprof_0000_0006
    {	COR_PRF_SUSPEND_OTHER	= 0,
	COR_PRF_SUSPEND_FOR_GC	= 1,
	COR_PRF_SUSPEND_FOR_APPDOMAIN_SHUTDOWN	= 2,
	COR_PRF_SUSPEND_FOR_CODE_PITCHING	= 3,
	COR_PRF_SUSPEND_FOR_SHUTDOWN	= 4,
	COR_PRF_SUSPEND_FOR_INPROC_DEBUGGER	= 6,
	COR_PRF_SUSPEND_FOR_GC_PREP	= 7
    } 	COR_PRF_SUSPEND_REASON;









extern RPC_IF_HANDLE __MIDL_itf_corprof_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corprof_0000_v0_0_s_ifspec;

#ifndef __ICorProfilerCallback_INTERFACE_DEFINED__
#define __ICorProfilerCallback_INTERFACE_DEFINED__

/* interface ICorProfilerCallback */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICorProfilerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("176FBED1-A55C-4796-98CA-A9DA0EF883E7")
    ICorProfilerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IUnknown *pICorProfilerInfoUnk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppDomainCreationStarted( 
            /* [in] */ AppDomainID appDomainId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppDomainCreationFinished( 
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppDomainShutdownStarted( 
            /* [in] */ AppDomainID appDomainId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AppDomainShutdownFinished( 
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssemblyLoadStarted( 
            /* [in] */ AssemblyID assemblyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssemblyLoadFinished( 
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssemblyUnloadStarted( 
            /* [in] */ AssemblyID assemblyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AssemblyUnloadFinished( 
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ModuleLoadStarted( 
            /* [in] */ ModuleID moduleId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ModuleLoadFinished( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ModuleUnloadStarted( 
            /* [in] */ ModuleID moduleId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ModuleUnloadFinished( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ModuleAttachedToAssembly( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ AssemblyID AssemblyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClassLoadStarted( 
            /* [in] */ ClassID classId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClassLoadFinished( 
            /* [in] */ ClassID classId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClassUnloadStarted( 
            /* [in] */ ClassID classId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClassUnloadFinished( 
            /* [in] */ ClassID classId,
            /* [in] */ HRESULT hrStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FunctionUnloadStarted( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JITCompilationStarted( 
            /* [in] */ FunctionID functionId,
            /* [in] */ BOOL fIsSafeToBlock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JITCompilationFinished( 
            /* [in] */ FunctionID functionId,
            /* [in] */ HRESULT hrStatus,
            /* [in] */ BOOL fIsSafeToBlock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JITCachedFunctionSearchStarted( 
            /* [in] */ FunctionID functionId,
            /* [out] */ BOOL *pbUseCachedFunction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JITCachedFunctionSearchFinished( 
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_JIT_CACHE result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JITFunctionPitched( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE JITInlining( 
            /* [in] */ FunctionID callerId,
            /* [in] */ FunctionID calleeId,
            /* [out] */ BOOL *pfShouldInline) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThreadCreated( 
            /* [in] */ ThreadID threadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThreadDestroyed( 
            /* [in] */ ThreadID threadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ThreadAssignedToOSThread( 
            /* [in] */ ThreadID managedThreadId,
            /* [in] */ DWORD osThreadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingClientInvocationStarted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingClientSendingMessage( 
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingClientReceivingReply( 
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingClientInvocationFinished( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingServerReceivingMessage( 
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingServerInvocationStarted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingServerInvocationReturned( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemotingServerSendingReply( 
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnmanagedToManagedTransition( 
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_TRANSITION_REASON reason) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ManagedToUnmanagedTransition( 
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_TRANSITION_REASON reason) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeSuspendStarted( 
            /* [in] */ COR_PRF_SUSPEND_REASON suspendReason) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeSuspendFinished( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeSuspendAborted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeResumeStarted( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeResumeFinished( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeThreadSuspended( 
            /* [in] */ ThreadID threadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RuntimeThreadResumed( 
            /* [in] */ ThreadID threadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MovedReferences( 
            /* [in] */ ULONG cMovedObjectIDRanges,
            /* [size_is][in] */ ObjectID oldObjectIDRangeStart[  ],
            /* [size_is][in] */ ObjectID newObjectIDRangeStart[  ],
            /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectAllocated( 
            /* [in] */ ObjectID objectId,
            /* [in] */ ClassID classId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectsAllocatedByClass( 
            /* [in] */ ULONG cClassCount,
            /* [size_is][in] */ ClassID classIds[  ],
            /* [size_is][in] */ ULONG cObjects[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectReferences( 
            /* [in] */ ObjectID objectId,
            /* [in] */ ClassID classId,
            /* [in] */ ULONG cObjectRefs,
            /* [size_is][in] */ ObjectID objectRefIds[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RootReferences( 
            /* [in] */ ULONG cRootRefs,
            /* [size_is][in] */ ObjectID rootRefIds[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionThrown( 
            /* [in] */ ObjectID thrownObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionSearchFunctionEnter( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionSearchFunctionLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionSearchFilterEnter( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionSearchFilterLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionSearchCatcherFound( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionOSHandlerEnter( 
            /* [in] */ UINT_PTR __unused) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionOSHandlerLeave( 
            /* [in] */ UINT_PTR __unused) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionUnwindFunctionEnter( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionUnwindFunctionLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionUnwindFinallyEnter( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionUnwindFinallyLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionCatcherEnter( 
            /* [in] */ FunctionID functionId,
            /* [in] */ ObjectID objectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionCatcherLeave( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE COMClassicVTableCreated( 
            /* [in] */ ClassID wrappedClassId,
            /* [in] */ REFGUID implementedIID,
            /* [in] */ void *pVTable,
            /* [in] */ ULONG cSlots) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE COMClassicVTableDestroyed( 
            /* [in] */ ClassID wrappedClassId,
            /* [in] */ REFGUID implementedIID,
            /* [in] */ void *pVTable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionCLRCatcherFound( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExceptionCLRCatcherExecute( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICorProfilerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICorProfilerCallback * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICorProfilerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ICorProfilerCallback * This,
            /* [in] */ IUnknown *pICorProfilerInfoUnk);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainCreationStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ AppDomainID appDomainId);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainCreationFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainShutdownStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ AppDomainID appDomainId);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainShutdownFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyLoadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ AssemblyID assemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyLoadFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyUnloadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ AssemblyID assemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyUnloadFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleLoadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ ModuleID moduleId);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleLoadFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleUnloadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ ModuleID moduleId);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleUnloadFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleAttachedToAssembly )( 
            ICorProfilerCallback * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ AssemblyID AssemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *ClassLoadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ ClassID classId);
        
        HRESULT ( STDMETHODCALLTYPE *ClassLoadFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ ClassID classId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ClassUnloadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ ClassID classId);
        
        HRESULT ( STDMETHODCALLTYPE *ClassUnloadFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ ClassID classId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *FunctionUnloadStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *JITCompilationStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ BOOL fIsSafeToBlock);
        
        HRESULT ( STDMETHODCALLTYPE *JITCompilationFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ HRESULT hrStatus,
            /* [in] */ BOOL fIsSafeToBlock);
        
        HRESULT ( STDMETHODCALLTYPE *JITCachedFunctionSearchStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [out] */ BOOL *pbUseCachedFunction);
        
        HRESULT ( STDMETHODCALLTYPE *JITCachedFunctionSearchFinished )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_JIT_CACHE result);
        
        HRESULT ( STDMETHODCALLTYPE *JITFunctionPitched )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *JITInlining )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID callerId,
            /* [in] */ FunctionID calleeId,
            /* [out] */ BOOL *pfShouldInline);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadCreated )( 
            ICorProfilerCallback * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadDestroyed )( 
            ICorProfilerCallback * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadAssignedToOSThread )( 
            ICorProfilerCallback * This,
            /* [in] */ ThreadID managedThreadId,
            /* [in] */ DWORD osThreadId);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientInvocationStarted )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientSendingMessage )( 
            ICorProfilerCallback * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientReceivingReply )( 
            ICorProfilerCallback * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientInvocationFinished )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerReceivingMessage )( 
            ICorProfilerCallback * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerInvocationStarted )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerInvocationReturned )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerSendingReply )( 
            ICorProfilerCallback * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *UnmanagedToManagedTransition )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_TRANSITION_REASON reason);
        
        HRESULT ( STDMETHODCALLTYPE *ManagedToUnmanagedTransition )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_TRANSITION_REASON reason);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeSuspendStarted )( 
            ICorProfilerCallback * This,
            /* [in] */ COR_PRF_SUSPEND_REASON suspendReason);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeSuspendFinished )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeSuspendAborted )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeResumeStarted )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeResumeFinished )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeThreadSuspended )( 
            ICorProfilerCallback * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeThreadResumed )( 
            ICorProfilerCallback * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *MovedReferences )( 
            ICorProfilerCallback * This,
            /* [in] */ ULONG cMovedObjectIDRanges,
            /* [size_is][in] */ ObjectID oldObjectIDRangeStart[  ],
            /* [size_is][in] */ ObjectID newObjectIDRangeStart[  ],
            /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectAllocated )( 
            ICorProfilerCallback * This,
            /* [in] */ ObjectID objectId,
            /* [in] */ ClassID classId);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectsAllocatedByClass )( 
            ICorProfilerCallback * This,
            /* [in] */ ULONG cClassCount,
            /* [size_is][in] */ ClassID classIds[  ],
            /* [size_is][in] */ ULONG cObjects[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectReferences )( 
            ICorProfilerCallback * This,
            /* [in] */ ObjectID objectId,
            /* [in] */ ClassID classId,
            /* [in] */ ULONG cObjectRefs,
            /* [size_is][in] */ ObjectID objectRefIds[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *RootReferences )( 
            ICorProfilerCallback * This,
            /* [in] */ ULONG cRootRefs,
            /* [size_is][in] */ ObjectID rootRefIds[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionThrown )( 
            ICorProfilerCallback * This,
            /* [in] */ ObjectID thrownObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFunctionEnter )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFunctionLeave )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFilterEnter )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFilterLeave )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchCatcherFound )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionOSHandlerEnter )( 
            ICorProfilerCallback * This,
            /* [in] */ UINT_PTR __unused);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionOSHandlerLeave )( 
            ICorProfilerCallback * This,
            /* [in] */ UINT_PTR __unused);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFunctionEnter )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFunctionLeave )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFinallyEnter )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFinallyLeave )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCatcherEnter )( 
            ICorProfilerCallback * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ ObjectID objectId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCatcherLeave )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *COMClassicVTableCreated )( 
            ICorProfilerCallback * This,
            /* [in] */ ClassID wrappedClassId,
            /* [in] */ REFGUID implementedIID,
            /* [in] */ void *pVTable,
            /* [in] */ ULONG cSlots);
        
        HRESULT ( STDMETHODCALLTYPE *COMClassicVTableDestroyed )( 
            ICorProfilerCallback * This,
            /* [in] */ ClassID wrappedClassId,
            /* [in] */ REFGUID implementedIID,
            /* [in] */ void *pVTable);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCLRCatcherFound )( 
            ICorProfilerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCLRCatcherExecute )( 
            ICorProfilerCallback * This);
        
        END_INTERFACE
    } ICorProfilerCallbackVtbl;

    interface ICorProfilerCallback
    {
        CONST_VTBL struct ICorProfilerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICorProfilerCallback_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICorProfilerCallback_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICorProfilerCallback_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICorProfilerCallback_Initialize(This,pICorProfilerInfoUnk)	\
    (This)->lpVtbl -> Initialize(This,pICorProfilerInfoUnk)

#define ICorProfilerCallback_Shutdown(This)	\
    (This)->lpVtbl -> Shutdown(This)

#define ICorProfilerCallback_AppDomainCreationStarted(This,appDomainId)	\
    (This)->lpVtbl -> AppDomainCreationStarted(This,appDomainId)

#define ICorProfilerCallback_AppDomainCreationFinished(This,appDomainId,hrStatus)	\
    (This)->lpVtbl -> AppDomainCreationFinished(This,appDomainId,hrStatus)

#define ICorProfilerCallback_AppDomainShutdownStarted(This,appDomainId)	\
    (This)->lpVtbl -> AppDomainShutdownStarted(This,appDomainId)

#define ICorProfilerCallback_AppDomainShutdownFinished(This,appDomainId,hrStatus)	\
    (This)->lpVtbl -> AppDomainShutdownFinished(This,appDomainId,hrStatus)

#define ICorProfilerCallback_AssemblyLoadStarted(This,assemblyId)	\
    (This)->lpVtbl -> AssemblyLoadStarted(This,assemblyId)

#define ICorProfilerCallback_AssemblyLoadFinished(This,assemblyId,hrStatus)	\
    (This)->lpVtbl -> AssemblyLoadFinished(This,assemblyId,hrStatus)

#define ICorProfilerCallback_AssemblyUnloadStarted(This,assemblyId)	\
    (This)->lpVtbl -> AssemblyUnloadStarted(This,assemblyId)

#define ICorProfilerCallback_AssemblyUnloadFinished(This,assemblyId,hrStatus)	\
    (This)->lpVtbl -> AssemblyUnloadFinished(This,assemblyId,hrStatus)

#define ICorProfilerCallback_ModuleLoadStarted(This,moduleId)	\
    (This)->lpVtbl -> ModuleLoadStarted(This,moduleId)

#define ICorProfilerCallback_ModuleLoadFinished(This,moduleId,hrStatus)	\
    (This)->lpVtbl -> ModuleLoadFinished(This,moduleId,hrStatus)

#define ICorProfilerCallback_ModuleUnloadStarted(This,moduleId)	\
    (This)->lpVtbl -> ModuleUnloadStarted(This,moduleId)

#define ICorProfilerCallback_ModuleUnloadFinished(This,moduleId,hrStatus)	\
    (This)->lpVtbl -> ModuleUnloadFinished(This,moduleId,hrStatus)

#define ICorProfilerCallback_ModuleAttachedToAssembly(This,moduleId,AssemblyId)	\
    (This)->lpVtbl -> ModuleAttachedToAssembly(This,moduleId,AssemblyId)

#define ICorProfilerCallback_ClassLoadStarted(This,classId)	\
    (This)->lpVtbl -> ClassLoadStarted(This,classId)

#define ICorProfilerCallback_ClassLoadFinished(This,classId,hrStatus)	\
    (This)->lpVtbl -> ClassLoadFinished(This,classId,hrStatus)

#define ICorProfilerCallback_ClassUnloadStarted(This,classId)	\
    (This)->lpVtbl -> ClassUnloadStarted(This,classId)

#define ICorProfilerCallback_ClassUnloadFinished(This,classId,hrStatus)	\
    (This)->lpVtbl -> ClassUnloadFinished(This,classId,hrStatus)

#define ICorProfilerCallback_FunctionUnloadStarted(This,functionId)	\
    (This)->lpVtbl -> FunctionUnloadStarted(This,functionId)

#define ICorProfilerCallback_JITCompilationStarted(This,functionId,fIsSafeToBlock)	\
    (This)->lpVtbl -> JITCompilationStarted(This,functionId,fIsSafeToBlock)

#define ICorProfilerCallback_JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)	\
    (This)->lpVtbl -> JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)

#define ICorProfilerCallback_JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)	\
    (This)->lpVtbl -> JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)

#define ICorProfilerCallback_JITCachedFunctionSearchFinished(This,functionId,result)	\
    (This)->lpVtbl -> JITCachedFunctionSearchFinished(This,functionId,result)

#define ICorProfilerCallback_JITFunctionPitched(This,functionId)	\
    (This)->lpVtbl -> JITFunctionPitched(This,functionId)

#define ICorProfilerCallback_JITInlining(This,callerId,calleeId,pfShouldInline)	\
    (This)->lpVtbl -> JITInlining(This,callerId,calleeId,pfShouldInline)

#define ICorProfilerCallback_ThreadCreated(This,threadId)	\
    (This)->lpVtbl -> ThreadCreated(This,threadId)

#define ICorProfilerCallback_ThreadDestroyed(This,threadId)	\
    (This)->lpVtbl -> ThreadDestroyed(This,threadId)

#define ICorProfilerCallback_ThreadAssignedToOSThread(This,managedThreadId,osThreadId)	\
    (This)->lpVtbl -> ThreadAssignedToOSThread(This,managedThreadId,osThreadId)

#define ICorProfilerCallback_RemotingClientInvocationStarted(This)	\
    (This)->lpVtbl -> RemotingClientInvocationStarted(This)

#define ICorProfilerCallback_RemotingClientSendingMessage(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingClientSendingMessage(This,pCookie,fIsAsync)

#define ICorProfilerCallback_RemotingClientReceivingReply(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingClientReceivingReply(This,pCookie,fIsAsync)

#define ICorProfilerCallback_RemotingClientInvocationFinished(This)	\
    (This)->lpVtbl -> RemotingClientInvocationFinished(This)

#define ICorProfilerCallback_RemotingServerReceivingMessage(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingServerReceivingMessage(This,pCookie,fIsAsync)

#define ICorProfilerCallback_RemotingServerInvocationStarted(This)	\
    (This)->lpVtbl -> RemotingServerInvocationStarted(This)

#define ICorProfilerCallback_RemotingServerInvocationReturned(This)	\
    (This)->lpVtbl -> RemotingServerInvocationReturned(This)

#define ICorProfilerCallback_RemotingServerSendingReply(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingServerSendingReply(This,pCookie,fIsAsync)

#define ICorProfilerCallback_UnmanagedToManagedTransition(This,functionId,reason)	\
    (This)->lpVtbl -> UnmanagedToManagedTransition(This,functionId,reason)

#define ICorProfilerCallback_ManagedToUnmanagedTransition(This,functionId,reason)	\
    (This)->lpVtbl -> ManagedToUnmanagedTransition(This,functionId,reason)

#define ICorProfilerCallback_RuntimeSuspendStarted(This,suspendReason)	\
    (This)->lpVtbl -> RuntimeSuspendStarted(This,suspendReason)

#define ICorProfilerCallback_RuntimeSuspendFinished(This)	\
    (This)->lpVtbl -> RuntimeSuspendFinished(This)

#define ICorProfilerCallback_RuntimeSuspendAborted(This)	\
    (This)->lpVtbl -> RuntimeSuspendAborted(This)

#define ICorProfilerCallback_RuntimeResumeStarted(This)	\
    (This)->lpVtbl -> RuntimeResumeStarted(This)

#define ICorProfilerCallback_RuntimeResumeFinished(This)	\
    (This)->lpVtbl -> RuntimeResumeFinished(This)

#define ICorProfilerCallback_RuntimeThreadSuspended(This,threadId)	\
    (This)->lpVtbl -> RuntimeThreadSuspended(This,threadId)

#define ICorProfilerCallback_RuntimeThreadResumed(This,threadId)	\
    (This)->lpVtbl -> RuntimeThreadResumed(This,threadId)

#define ICorProfilerCallback_MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)	\
    (This)->lpVtbl -> MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)

#define ICorProfilerCallback_ObjectAllocated(This,objectId,classId)	\
    (This)->lpVtbl -> ObjectAllocated(This,objectId,classId)

#define ICorProfilerCallback_ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)	\
    (This)->lpVtbl -> ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)

#define ICorProfilerCallback_ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)	\
    (This)->lpVtbl -> ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)

#define ICorProfilerCallback_RootReferences(This,cRootRefs,rootRefIds)	\
    (This)->lpVtbl -> RootReferences(This,cRootRefs,rootRefIds)

#define ICorProfilerCallback_ExceptionThrown(This,thrownObjectId)	\
    (This)->lpVtbl -> ExceptionThrown(This,thrownObjectId)

#define ICorProfilerCallback_ExceptionSearchFunctionEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionSearchFunctionEnter(This,functionId)

#define ICorProfilerCallback_ExceptionSearchFunctionLeave(This)	\
    (This)->lpVtbl -> ExceptionSearchFunctionLeave(This)

#define ICorProfilerCallback_ExceptionSearchFilterEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionSearchFilterEnter(This,functionId)

#define ICorProfilerCallback_ExceptionSearchFilterLeave(This)	\
    (This)->lpVtbl -> ExceptionSearchFilterLeave(This)

#define ICorProfilerCallback_ExceptionSearchCatcherFound(This,functionId)	\
    (This)->lpVtbl -> ExceptionSearchCatcherFound(This,functionId)

#define ICorProfilerCallback_ExceptionOSHandlerEnter(This,__unused)	\
    (This)->lpVtbl -> ExceptionOSHandlerEnter(This,__unused)

#define ICorProfilerCallback_ExceptionOSHandlerLeave(This,__unused)	\
    (This)->lpVtbl -> ExceptionOSHandlerLeave(This,__unused)

#define ICorProfilerCallback_ExceptionUnwindFunctionEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionUnwindFunctionEnter(This,functionId)

#define ICorProfilerCallback_ExceptionUnwindFunctionLeave(This)	\
    (This)->lpVtbl -> ExceptionUnwindFunctionLeave(This)

#define ICorProfilerCallback_ExceptionUnwindFinallyEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionUnwindFinallyEnter(This,functionId)

#define ICorProfilerCallback_ExceptionUnwindFinallyLeave(This)	\
    (This)->lpVtbl -> ExceptionUnwindFinallyLeave(This)

#define ICorProfilerCallback_ExceptionCatcherEnter(This,functionId,objectId)	\
    (This)->lpVtbl -> ExceptionCatcherEnter(This,functionId,objectId)

#define ICorProfilerCallback_ExceptionCatcherLeave(This)	\
    (This)->lpVtbl -> ExceptionCatcherLeave(This)

#define ICorProfilerCallback_COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)	\
    (This)->lpVtbl -> COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)

#define ICorProfilerCallback_COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)	\
    (This)->lpVtbl -> COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)

#define ICorProfilerCallback_ExceptionCLRCatcherFound(This)	\
    (This)->lpVtbl -> ExceptionCLRCatcherFound(This)

#define ICorProfilerCallback_ExceptionCLRCatcherExecute(This)	\
    (This)->lpVtbl -> ExceptionCLRCatcherExecute(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICorProfilerCallback_Initialize_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ IUnknown *pICorProfilerInfoUnk);


void __RPC_STUB ICorProfilerCallback_Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_Shutdown_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_Shutdown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AppDomainCreationStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AppDomainID appDomainId);


void __RPC_STUB ICorProfilerCallback_AppDomainCreationStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AppDomainCreationFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AppDomainID appDomainId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_AppDomainCreationFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AppDomainShutdownStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AppDomainID appDomainId);


void __RPC_STUB ICorProfilerCallback_AppDomainShutdownStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AppDomainShutdownFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AppDomainID appDomainId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_AppDomainShutdownFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AssemblyLoadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AssemblyID assemblyId);


void __RPC_STUB ICorProfilerCallback_AssemblyLoadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AssemblyLoadFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AssemblyID assemblyId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_AssemblyLoadFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AssemblyUnloadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AssemblyID assemblyId);


void __RPC_STUB ICorProfilerCallback_AssemblyUnloadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_AssemblyUnloadFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ AssemblyID assemblyId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_AssemblyUnloadFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ModuleLoadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ModuleID moduleId);


void __RPC_STUB ICorProfilerCallback_ModuleLoadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ModuleLoadFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_ModuleLoadFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ModuleUnloadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ModuleID moduleId);


void __RPC_STUB ICorProfilerCallback_ModuleUnloadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ModuleUnloadFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_ModuleUnloadFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ModuleAttachedToAssembly_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ AssemblyID AssemblyId);


void __RPC_STUB ICorProfilerCallback_ModuleAttachedToAssembly_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ClassLoadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ClassID classId);


void __RPC_STUB ICorProfilerCallback_ClassLoadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ClassLoadFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ClassID classId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_ClassLoadFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ClassUnloadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ClassID classId);


void __RPC_STUB ICorProfilerCallback_ClassUnloadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ClassUnloadFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ClassID classId,
    /* [in] */ HRESULT hrStatus);


void __RPC_STUB ICorProfilerCallback_ClassUnloadFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_FunctionUnloadStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_FunctionUnloadStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_JITCompilationStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ BOOL fIsSafeToBlock);


void __RPC_STUB ICorProfilerCallback_JITCompilationStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_JITCompilationFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ HRESULT hrStatus,
    /* [in] */ BOOL fIsSafeToBlock);


void __RPC_STUB ICorProfilerCallback_JITCompilationFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_JITCachedFunctionSearchStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [out] */ BOOL *pbUseCachedFunction);


void __RPC_STUB ICorProfilerCallback_JITCachedFunctionSearchStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_JITCachedFunctionSearchFinished_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ COR_PRF_JIT_CACHE result);


void __RPC_STUB ICorProfilerCallback_JITCachedFunctionSearchFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_JITFunctionPitched_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_JITFunctionPitched_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_JITInlining_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID callerId,
    /* [in] */ FunctionID calleeId,
    /* [out] */ BOOL *pfShouldInline);


void __RPC_STUB ICorProfilerCallback_JITInlining_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ThreadCreated_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ThreadID threadId);


void __RPC_STUB ICorProfilerCallback_ThreadCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ThreadDestroyed_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ThreadID threadId);


void __RPC_STUB ICorProfilerCallback_ThreadDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ThreadAssignedToOSThread_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ThreadID managedThreadId,
    /* [in] */ DWORD osThreadId);


void __RPC_STUB ICorProfilerCallback_ThreadAssignedToOSThread_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingClientInvocationStarted_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RemotingClientInvocationStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingClientSendingMessage_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ GUID *pCookie,
    /* [in] */ BOOL fIsAsync);


void __RPC_STUB ICorProfilerCallback_RemotingClientSendingMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingClientReceivingReply_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ GUID *pCookie,
    /* [in] */ BOOL fIsAsync);


void __RPC_STUB ICorProfilerCallback_RemotingClientReceivingReply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingClientInvocationFinished_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RemotingClientInvocationFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingServerReceivingMessage_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ GUID *pCookie,
    /* [in] */ BOOL fIsAsync);


void __RPC_STUB ICorProfilerCallback_RemotingServerReceivingMessage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingServerInvocationStarted_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RemotingServerInvocationStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingServerInvocationReturned_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RemotingServerInvocationReturned_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RemotingServerSendingReply_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ GUID *pCookie,
    /* [in] */ BOOL fIsAsync);


void __RPC_STUB ICorProfilerCallback_RemotingServerSendingReply_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_UnmanagedToManagedTransition_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ COR_PRF_TRANSITION_REASON reason);


void __RPC_STUB ICorProfilerCallback_UnmanagedToManagedTransition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ManagedToUnmanagedTransition_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ COR_PRF_TRANSITION_REASON reason);


void __RPC_STUB ICorProfilerCallback_ManagedToUnmanagedTransition_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeSuspendStarted_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ COR_PRF_SUSPEND_REASON suspendReason);


void __RPC_STUB ICorProfilerCallback_RuntimeSuspendStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeSuspendFinished_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RuntimeSuspendFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeSuspendAborted_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RuntimeSuspendAborted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeResumeStarted_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RuntimeResumeStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeResumeFinished_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_RuntimeResumeFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeThreadSuspended_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ThreadID threadId);


void __RPC_STUB ICorProfilerCallback_RuntimeThreadSuspended_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RuntimeThreadResumed_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ThreadID threadId);


void __RPC_STUB ICorProfilerCallback_RuntimeThreadResumed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_MovedReferences_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ULONG cMovedObjectIDRanges,
    /* [size_is][in] */ ObjectID oldObjectIDRangeStart[  ],
    /* [size_is][in] */ ObjectID newObjectIDRangeStart[  ],
    /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]);


void __RPC_STUB ICorProfilerCallback_MovedReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ObjectAllocated_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ObjectID objectId,
    /* [in] */ ClassID classId);


void __RPC_STUB ICorProfilerCallback_ObjectAllocated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ObjectsAllocatedByClass_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ULONG cClassCount,
    /* [size_is][in] */ ClassID classIds[  ],
    /* [size_is][in] */ ULONG cObjects[  ]);


void __RPC_STUB ICorProfilerCallback_ObjectsAllocatedByClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ObjectReferences_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ObjectID objectId,
    /* [in] */ ClassID classId,
    /* [in] */ ULONG cObjectRefs,
    /* [size_is][in] */ ObjectID objectRefIds[  ]);


void __RPC_STUB ICorProfilerCallback_ObjectReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_RootReferences_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ULONG cRootRefs,
    /* [size_is][in] */ ObjectID rootRefIds[  ]);


void __RPC_STUB ICorProfilerCallback_RootReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionThrown_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ObjectID thrownObjectId);


void __RPC_STUB ICorProfilerCallback_ExceptionThrown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionSearchFunctionEnter_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_ExceptionSearchFunctionEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionSearchFunctionLeave_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionSearchFunctionLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionSearchFilterEnter_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_ExceptionSearchFilterEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionSearchFilterLeave_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionSearchFilterLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionSearchCatcherFound_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_ExceptionSearchCatcherFound_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionOSHandlerEnter_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ UINT_PTR __unused);


void __RPC_STUB ICorProfilerCallback_ExceptionOSHandlerEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionOSHandlerLeave_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ UINT_PTR __unused);


void __RPC_STUB ICorProfilerCallback_ExceptionOSHandlerLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionUnwindFunctionEnter_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_ExceptionUnwindFunctionEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionUnwindFunctionLeave_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionUnwindFunctionLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionUnwindFinallyEnter_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerCallback_ExceptionUnwindFinallyEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionUnwindFinallyLeave_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionUnwindFinallyLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionCatcherEnter_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ ObjectID objectId);


void __RPC_STUB ICorProfilerCallback_ExceptionCatcherEnter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionCatcherLeave_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionCatcherLeave_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_COMClassicVTableCreated_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ClassID wrappedClassId,
    /* [in] */ REFGUID implementedIID,
    /* [in] */ void *pVTable,
    /* [in] */ ULONG cSlots);


void __RPC_STUB ICorProfilerCallback_COMClassicVTableCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_COMClassicVTableDestroyed_Proxy( 
    ICorProfilerCallback * This,
    /* [in] */ ClassID wrappedClassId,
    /* [in] */ REFGUID implementedIID,
    /* [in] */ void *pVTable);


void __RPC_STUB ICorProfilerCallback_COMClassicVTableDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionCLRCatcherFound_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionCLRCatcherFound_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback_ExceptionCLRCatcherExecute_Proxy( 
    ICorProfilerCallback * This);


void __RPC_STUB ICorProfilerCallback_ExceptionCLRCatcherExecute_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICorProfilerCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_corprof_0011 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_corprof_0011_0001
    {	COR_PRF_GC_ROOT_STACK	= 1,
	COR_PRF_GC_ROOT_FINALIZER	= 2,
	COR_PRF_GC_ROOT_HANDLE	= 3,
	COR_PRF_GC_ROOT_OTHER	= 0
    } 	COR_PRF_GC_ROOT_KIND;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_corprof_0011_0002
    {	COR_PRF_GC_ROOT_PINNING	= 0x1,
	COR_PRF_GC_ROOT_WEAKREF	= 0x2,
	COR_PRF_GC_ROOT_INTERIOR	= 0x4,
	COR_PRF_GC_ROOT_REFCOUNTED	= 0x8
    } 	COR_PRF_GC_ROOT_FLAGS;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_corprof_0011_0003
    {	COR_PRF_FINALIZER_CRITICAL	= 0x1
    } 	COR_PRF_FINALIZER_FLAGS;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_corprof_0011_0004
    {	COR_PRF_GC_GEN_0	= 0,
	COR_PRF_GC_GEN_1	= 1,
	COR_PRF_GC_GEN_2	= 2,
	COR_PRF_GC_LARGE_OBJECT_HEAP	= 3
    } 	COR_PRF_GC_GENERATION;

typedef struct COR_PRF_GC_GENERATION_RANGE
    {
    COR_PRF_GC_GENERATION generation;
    ObjectID rangeStart;
    UINT_PTR rangeLength;
    UINT_PTR rangeLengthReserved;
    } 	COR_PRF_GC_GENERATION_RANGE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_corprof_0011_0005
    {	COR_PRF_CLAUSE_NONE	= 0,
	COR_PRF_CLAUSE_FILTER	= 1,
	COR_PRF_CLAUSE_CATCH	= 2,
	COR_PRF_CLAUSE_FINALLY	= 3
    } 	COR_PRF_CLAUSE_TYPE;

typedef struct COR_PRF_EX_CLAUSE_INFO
    {
    COR_PRF_CLAUSE_TYPE clauseType;
    UINT_PTR programCounter;
    UINT_PTR framePointer;
    UINT_PTR shadowStackPointer;
    } 	COR_PRF_EX_CLAUSE_INFO;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_corprof_0011_0006
    {	COR_PRF_GC_INDUCED	= 1,
	COR_PRF_GC_OTHER	= 0
    } 	COR_PRF_GC_REASON;



extern RPC_IF_HANDLE __MIDL_itf_corprof_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_corprof_0011_v0_0_s_ifspec;

#ifndef __ICorProfilerCallback2_INTERFACE_DEFINED__
#define __ICorProfilerCallback2_INTERFACE_DEFINED__

/* interface ICorProfilerCallback2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICorProfilerCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A8CC829-CCF2-49fe-BBAE-0F022228071A")
    ICorProfilerCallback2 : public ICorProfilerCallback
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ThreadNameChanged( 
            /* [in] */ ThreadID threadId,
            /* [in] */ ULONG cchName,
            /* [in] */ WCHAR name[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GarbageCollectionStarted( 
            /* [in] */ int cGenerations,
            /* [length_is][size_is][in] */ BOOL generationCollected[  ],
            /* [in] */ COR_PRF_GC_REASON reason) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SurvivingReferences( 
            /* [in] */ ULONG cSurvivingObjectIDRanges,
            /* [size_is][in] */ ObjectID objectIDRangeStart[  ],
            /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GarbageCollectionFinished( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FinalizeableObjectQueued( 
            /* [in] */ DWORD finalizerFlags,
            /* [in] */ ObjectID objectID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RootReferences2( 
            /* [in] */ ULONG cRootRefs,
            /* [size_is][in] */ ObjectID rootRefIds[  ],
            /* [size_is][in] */ COR_PRF_GC_ROOT_KIND rootKinds[  ],
            /* [size_is][in] */ COR_PRF_GC_ROOT_FLAGS rootFlags[  ],
            /* [size_is][in] */ UINT_PTR rootIds[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleCreated( 
            /* [in] */ GCHandleID handleId,
            /* [in] */ ObjectID initialObjectId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleDestroyed( 
            /* [in] */ GCHandleID handleId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICorProfilerCallback2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICorProfilerCallback2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICorProfilerCallback2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            ICorProfilerCallback2 * This,
            /* [in] */ IUnknown *pICorProfilerInfoUnk);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainCreationStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AppDomainID appDomainId);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainCreationFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainShutdownStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AppDomainID appDomainId);
        
        HRESULT ( STDMETHODCALLTYPE *AppDomainShutdownFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyLoadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AssemblyID assemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyLoadFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyUnloadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AssemblyID assemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *AssemblyUnloadFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleLoadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ModuleID moduleId);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleLoadFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleUnloadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ModuleID moduleId);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleUnloadFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ModuleAttachedToAssembly )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ AssemblyID AssemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *ClassLoadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ClassID classId);
        
        HRESULT ( STDMETHODCALLTYPE *ClassLoadFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *ClassUnloadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ClassID classId);
        
        HRESULT ( STDMETHODCALLTYPE *ClassUnloadFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ HRESULT hrStatus);
        
        HRESULT ( STDMETHODCALLTYPE *FunctionUnloadStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *JITCompilationStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ BOOL fIsSafeToBlock);
        
        HRESULT ( STDMETHODCALLTYPE *JITCompilationFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ HRESULT hrStatus,
            /* [in] */ BOOL fIsSafeToBlock);
        
        HRESULT ( STDMETHODCALLTYPE *JITCachedFunctionSearchStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [out] */ BOOL *pbUseCachedFunction);
        
        HRESULT ( STDMETHODCALLTYPE *JITCachedFunctionSearchFinished )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_JIT_CACHE result);
        
        HRESULT ( STDMETHODCALLTYPE *JITFunctionPitched )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *JITInlining )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID callerId,
            /* [in] */ FunctionID calleeId,
            /* [out] */ BOOL *pfShouldInline);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadCreated )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadDestroyed )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadAssignedToOSThread )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ThreadID managedThreadId,
            /* [in] */ DWORD osThreadId);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientInvocationStarted )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientSendingMessage )( 
            ICorProfilerCallback2 * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientReceivingReply )( 
            ICorProfilerCallback2 * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingClientInvocationFinished )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerReceivingMessage )( 
            ICorProfilerCallback2 * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerInvocationStarted )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerInvocationReturned )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemotingServerSendingReply )( 
            ICorProfilerCallback2 * This,
            /* [in] */ GUID *pCookie,
            /* [in] */ BOOL fIsAsync);
        
        HRESULT ( STDMETHODCALLTYPE *UnmanagedToManagedTransition )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_TRANSITION_REASON reason);
        
        HRESULT ( STDMETHODCALLTYPE *ManagedToUnmanagedTransition )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ COR_PRF_TRANSITION_REASON reason);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeSuspendStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ COR_PRF_SUSPEND_REASON suspendReason);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeSuspendFinished )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeSuspendAborted )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeResumeStarted )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeResumeFinished )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeThreadSuspended )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *RuntimeThreadResumed )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ThreadID threadId);
        
        HRESULT ( STDMETHODCALLTYPE *MovedReferences )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ULONG cMovedObjectIDRanges,
            /* [size_is][in] */ ObjectID oldObjectIDRangeStart[  ],
            /* [size_is][in] */ ObjectID newObjectIDRangeStart[  ],
            /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectAllocated )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ObjectID objectId,
            /* [in] */ ClassID classId);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectsAllocatedByClass )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ULONG cClassCount,
            /* [size_is][in] */ ClassID classIds[  ],
            /* [size_is][in] */ ULONG cObjects[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ObjectReferences )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ObjectID objectId,
            /* [in] */ ClassID classId,
            /* [in] */ ULONG cObjectRefs,
            /* [size_is][in] */ ObjectID objectRefIds[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *RootReferences )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ULONG cRootRefs,
            /* [size_is][in] */ ObjectID rootRefIds[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionThrown )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ObjectID thrownObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFunctionEnter )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFunctionLeave )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFilterEnter )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchFilterLeave )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionSearchCatcherFound )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionOSHandlerEnter )( 
            ICorProfilerCallback2 * This,
            /* [in] */ UINT_PTR __unused);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionOSHandlerLeave )( 
            ICorProfilerCallback2 * This,
            /* [in] */ UINT_PTR __unused);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFunctionEnter )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFunctionLeave )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFinallyEnter )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionUnwindFinallyLeave )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCatcherEnter )( 
            ICorProfilerCallback2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ ObjectID objectId);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCatcherLeave )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *COMClassicVTableCreated )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ClassID wrappedClassId,
            /* [in] */ REFGUID implementedIID,
            /* [in] */ void *pVTable,
            /* [in] */ ULONG cSlots);
        
        HRESULT ( STDMETHODCALLTYPE *COMClassicVTableDestroyed )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ClassID wrappedClassId,
            /* [in] */ REFGUID implementedIID,
            /* [in] */ void *pVTable);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCLRCatcherFound )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ExceptionCLRCatcherExecute )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ThreadNameChanged )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ThreadID threadId,
            /* [in] */ ULONG cchName,
            /* [in] */ WCHAR name[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GarbageCollectionStarted )( 
            ICorProfilerCallback2 * This,
            /* [in] */ int cGenerations,
            /* [length_is][size_is][in] */ BOOL generationCollected[  ],
            /* [in] */ COR_PRF_GC_REASON reason);
        
        HRESULT ( STDMETHODCALLTYPE *SurvivingReferences )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ULONG cSurvivingObjectIDRanges,
            /* [size_is][in] */ ObjectID objectIDRangeStart[  ],
            /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GarbageCollectionFinished )( 
            ICorProfilerCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *FinalizeableObjectQueued )( 
            ICorProfilerCallback2 * This,
            /* [in] */ DWORD finalizerFlags,
            /* [in] */ ObjectID objectID);
        
        HRESULT ( STDMETHODCALLTYPE *RootReferences2 )( 
            ICorProfilerCallback2 * This,
            /* [in] */ ULONG cRootRefs,
            /* [size_is][in] */ ObjectID rootRefIds[  ],
            /* [size_is][in] */ COR_PRF_GC_ROOT_KIND rootKinds[  ],
            /* [size_is][in] */ COR_PRF_GC_ROOT_FLAGS rootFlags[  ],
            /* [size_is][in] */ UINT_PTR rootIds[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *HandleCreated )( 
            ICorProfilerCallback2 * This,
            /* [in] */ GCHandleID handleId,
            /* [in] */ ObjectID initialObjectId);
        
        HRESULT ( STDMETHODCALLTYPE *HandleDestroyed )( 
            ICorProfilerCallback2 * This,
            /* [in] */ GCHandleID handleId);
        
        END_INTERFACE
    } ICorProfilerCallback2Vtbl;

    interface ICorProfilerCallback2
    {
        CONST_VTBL struct ICorProfilerCallback2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICorProfilerCallback2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICorProfilerCallback2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICorProfilerCallback2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICorProfilerCallback2_Initialize(This,pICorProfilerInfoUnk)	\
    (This)->lpVtbl -> Initialize(This,pICorProfilerInfoUnk)

#define ICorProfilerCallback2_Shutdown(This)	\
    (This)->lpVtbl -> Shutdown(This)

#define ICorProfilerCallback2_AppDomainCreationStarted(This,appDomainId)	\
    (This)->lpVtbl -> AppDomainCreationStarted(This,appDomainId)

#define ICorProfilerCallback2_AppDomainCreationFinished(This,appDomainId,hrStatus)	\
    (This)->lpVtbl -> AppDomainCreationFinished(This,appDomainId,hrStatus)

#define ICorProfilerCallback2_AppDomainShutdownStarted(This,appDomainId)	\
    (This)->lpVtbl -> AppDomainShutdownStarted(This,appDomainId)

#define ICorProfilerCallback2_AppDomainShutdownFinished(This,appDomainId,hrStatus)	\
    (This)->lpVtbl -> AppDomainShutdownFinished(This,appDomainId,hrStatus)

#define ICorProfilerCallback2_AssemblyLoadStarted(This,assemblyId)	\
    (This)->lpVtbl -> AssemblyLoadStarted(This,assemblyId)

#define ICorProfilerCallback2_AssemblyLoadFinished(This,assemblyId,hrStatus)	\
    (This)->lpVtbl -> AssemblyLoadFinished(This,assemblyId,hrStatus)

#define ICorProfilerCallback2_AssemblyUnloadStarted(This,assemblyId)	\
    (This)->lpVtbl -> AssemblyUnloadStarted(This,assemblyId)

#define ICorProfilerCallback2_AssemblyUnloadFinished(This,assemblyId,hrStatus)	\
    (This)->lpVtbl -> AssemblyUnloadFinished(This,assemblyId,hrStatus)

#define ICorProfilerCallback2_ModuleLoadStarted(This,moduleId)	\
    (This)->lpVtbl -> ModuleLoadStarted(This,moduleId)

#define ICorProfilerCallback2_ModuleLoadFinished(This,moduleId,hrStatus)	\
    (This)->lpVtbl -> ModuleLoadFinished(This,moduleId,hrStatus)

#define ICorProfilerCallback2_ModuleUnloadStarted(This,moduleId)	\
    (This)->lpVtbl -> ModuleUnloadStarted(This,moduleId)

#define ICorProfilerCallback2_ModuleUnloadFinished(This,moduleId,hrStatus)	\
    (This)->lpVtbl -> ModuleUnloadFinished(This,moduleId,hrStatus)

#define ICorProfilerCallback2_ModuleAttachedToAssembly(This,moduleId,AssemblyId)	\
    (This)->lpVtbl -> ModuleAttachedToAssembly(This,moduleId,AssemblyId)

#define ICorProfilerCallback2_ClassLoadStarted(This,classId)	\
    (This)->lpVtbl -> ClassLoadStarted(This,classId)

#define ICorProfilerCallback2_ClassLoadFinished(This,classId,hrStatus)	\
    (This)->lpVtbl -> ClassLoadFinished(This,classId,hrStatus)

#define ICorProfilerCallback2_ClassUnloadStarted(This,classId)	\
    (This)->lpVtbl -> ClassUnloadStarted(This,classId)

#define ICorProfilerCallback2_ClassUnloadFinished(This,classId,hrStatus)	\
    (This)->lpVtbl -> ClassUnloadFinished(This,classId,hrStatus)

#define ICorProfilerCallback2_FunctionUnloadStarted(This,functionId)	\
    (This)->lpVtbl -> FunctionUnloadStarted(This,functionId)

#define ICorProfilerCallback2_JITCompilationStarted(This,functionId,fIsSafeToBlock)	\
    (This)->lpVtbl -> JITCompilationStarted(This,functionId,fIsSafeToBlock)

#define ICorProfilerCallback2_JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)	\
    (This)->lpVtbl -> JITCompilationFinished(This,functionId,hrStatus,fIsSafeToBlock)

#define ICorProfilerCallback2_JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)	\
    (This)->lpVtbl -> JITCachedFunctionSearchStarted(This,functionId,pbUseCachedFunction)

#define ICorProfilerCallback2_JITCachedFunctionSearchFinished(This,functionId,result)	\
    (This)->lpVtbl -> JITCachedFunctionSearchFinished(This,functionId,result)

#define ICorProfilerCallback2_JITFunctionPitched(This,functionId)	\
    (This)->lpVtbl -> JITFunctionPitched(This,functionId)

#define ICorProfilerCallback2_JITInlining(This,callerId,calleeId,pfShouldInline)	\
    (This)->lpVtbl -> JITInlining(This,callerId,calleeId,pfShouldInline)

#define ICorProfilerCallback2_ThreadCreated(This,threadId)	\
    (This)->lpVtbl -> ThreadCreated(This,threadId)

#define ICorProfilerCallback2_ThreadDestroyed(This,threadId)	\
    (This)->lpVtbl -> ThreadDestroyed(This,threadId)

#define ICorProfilerCallback2_ThreadAssignedToOSThread(This,managedThreadId,osThreadId)	\
    (This)->lpVtbl -> ThreadAssignedToOSThread(This,managedThreadId,osThreadId)

#define ICorProfilerCallback2_RemotingClientInvocationStarted(This)	\
    (This)->lpVtbl -> RemotingClientInvocationStarted(This)

#define ICorProfilerCallback2_RemotingClientSendingMessage(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingClientSendingMessage(This,pCookie,fIsAsync)

#define ICorProfilerCallback2_RemotingClientReceivingReply(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingClientReceivingReply(This,pCookie,fIsAsync)

#define ICorProfilerCallback2_RemotingClientInvocationFinished(This)	\
    (This)->lpVtbl -> RemotingClientInvocationFinished(This)

#define ICorProfilerCallback2_RemotingServerReceivingMessage(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingServerReceivingMessage(This,pCookie,fIsAsync)

#define ICorProfilerCallback2_RemotingServerInvocationStarted(This)	\
    (This)->lpVtbl -> RemotingServerInvocationStarted(This)

#define ICorProfilerCallback2_RemotingServerInvocationReturned(This)	\
    (This)->lpVtbl -> RemotingServerInvocationReturned(This)

#define ICorProfilerCallback2_RemotingServerSendingReply(This,pCookie,fIsAsync)	\
    (This)->lpVtbl -> RemotingServerSendingReply(This,pCookie,fIsAsync)

#define ICorProfilerCallback2_UnmanagedToManagedTransition(This,functionId,reason)	\
    (This)->lpVtbl -> UnmanagedToManagedTransition(This,functionId,reason)

#define ICorProfilerCallback2_ManagedToUnmanagedTransition(This,functionId,reason)	\
    (This)->lpVtbl -> ManagedToUnmanagedTransition(This,functionId,reason)

#define ICorProfilerCallback2_RuntimeSuspendStarted(This,suspendReason)	\
    (This)->lpVtbl -> RuntimeSuspendStarted(This,suspendReason)

#define ICorProfilerCallback2_RuntimeSuspendFinished(This)	\
    (This)->lpVtbl -> RuntimeSuspendFinished(This)

#define ICorProfilerCallback2_RuntimeSuspendAborted(This)	\
    (This)->lpVtbl -> RuntimeSuspendAborted(This)

#define ICorProfilerCallback2_RuntimeResumeStarted(This)	\
    (This)->lpVtbl -> RuntimeResumeStarted(This)

#define ICorProfilerCallback2_RuntimeResumeFinished(This)	\
    (This)->lpVtbl -> RuntimeResumeFinished(This)

#define ICorProfilerCallback2_RuntimeThreadSuspended(This,threadId)	\
    (This)->lpVtbl -> RuntimeThreadSuspended(This,threadId)

#define ICorProfilerCallback2_RuntimeThreadResumed(This,threadId)	\
    (This)->lpVtbl -> RuntimeThreadResumed(This,threadId)

#define ICorProfilerCallback2_MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)	\
    (This)->lpVtbl -> MovedReferences(This,cMovedObjectIDRanges,oldObjectIDRangeStart,newObjectIDRangeStart,cObjectIDRangeLength)

#define ICorProfilerCallback2_ObjectAllocated(This,objectId,classId)	\
    (This)->lpVtbl -> ObjectAllocated(This,objectId,classId)

#define ICorProfilerCallback2_ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)	\
    (This)->lpVtbl -> ObjectsAllocatedByClass(This,cClassCount,classIds,cObjects)

#define ICorProfilerCallback2_ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)	\
    (This)->lpVtbl -> ObjectReferences(This,objectId,classId,cObjectRefs,objectRefIds)

#define ICorProfilerCallback2_RootReferences(This,cRootRefs,rootRefIds)	\
    (This)->lpVtbl -> RootReferences(This,cRootRefs,rootRefIds)

#define ICorProfilerCallback2_ExceptionThrown(This,thrownObjectId)	\
    (This)->lpVtbl -> ExceptionThrown(This,thrownObjectId)

#define ICorProfilerCallback2_ExceptionSearchFunctionEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionSearchFunctionEnter(This,functionId)

#define ICorProfilerCallback2_ExceptionSearchFunctionLeave(This)	\
    (This)->lpVtbl -> ExceptionSearchFunctionLeave(This)

#define ICorProfilerCallback2_ExceptionSearchFilterEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionSearchFilterEnter(This,functionId)

#define ICorProfilerCallback2_ExceptionSearchFilterLeave(This)	\
    (This)->lpVtbl -> ExceptionSearchFilterLeave(This)

#define ICorProfilerCallback2_ExceptionSearchCatcherFound(This,functionId)	\
    (This)->lpVtbl -> ExceptionSearchCatcherFound(This,functionId)

#define ICorProfilerCallback2_ExceptionOSHandlerEnter(This,__unused)	\
    (This)->lpVtbl -> ExceptionOSHandlerEnter(This,__unused)

#define ICorProfilerCallback2_ExceptionOSHandlerLeave(This,__unused)	\
    (This)->lpVtbl -> ExceptionOSHandlerLeave(This,__unused)

#define ICorProfilerCallback2_ExceptionUnwindFunctionEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionUnwindFunctionEnter(This,functionId)

#define ICorProfilerCallback2_ExceptionUnwindFunctionLeave(This)	\
    (This)->lpVtbl -> ExceptionUnwindFunctionLeave(This)

#define ICorProfilerCallback2_ExceptionUnwindFinallyEnter(This,functionId)	\
    (This)->lpVtbl -> ExceptionUnwindFinallyEnter(This,functionId)

#define ICorProfilerCallback2_ExceptionUnwindFinallyLeave(This)	\
    (This)->lpVtbl -> ExceptionUnwindFinallyLeave(This)

#define ICorProfilerCallback2_ExceptionCatcherEnter(This,functionId,objectId)	\
    (This)->lpVtbl -> ExceptionCatcherEnter(This,functionId,objectId)

#define ICorProfilerCallback2_ExceptionCatcherLeave(This)	\
    (This)->lpVtbl -> ExceptionCatcherLeave(This)

#define ICorProfilerCallback2_COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)	\
    (This)->lpVtbl -> COMClassicVTableCreated(This,wrappedClassId,implementedIID,pVTable,cSlots)

#define ICorProfilerCallback2_COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)	\
    (This)->lpVtbl -> COMClassicVTableDestroyed(This,wrappedClassId,implementedIID,pVTable)

#define ICorProfilerCallback2_ExceptionCLRCatcherFound(This)	\
    (This)->lpVtbl -> ExceptionCLRCatcherFound(This)

#define ICorProfilerCallback2_ExceptionCLRCatcherExecute(This)	\
    (This)->lpVtbl -> ExceptionCLRCatcherExecute(This)


#define ICorProfilerCallback2_ThreadNameChanged(This,threadId,cchName,name)	\
    (This)->lpVtbl -> ThreadNameChanged(This,threadId,cchName,name)

#define ICorProfilerCallback2_GarbageCollectionStarted(This,cGenerations,generationCollected,reason)	\
    (This)->lpVtbl -> GarbageCollectionStarted(This,cGenerations,generationCollected,reason)

#define ICorProfilerCallback2_SurvivingReferences(This,cSurvivingObjectIDRanges,objectIDRangeStart,cObjectIDRangeLength)	\
    (This)->lpVtbl -> SurvivingReferences(This,cSurvivingObjectIDRanges,objectIDRangeStart,cObjectIDRangeLength)

#define ICorProfilerCallback2_GarbageCollectionFinished(This)	\
    (This)->lpVtbl -> GarbageCollectionFinished(This)

#define ICorProfilerCallback2_FinalizeableObjectQueued(This,finalizerFlags,objectID)	\
    (This)->lpVtbl -> FinalizeableObjectQueued(This,finalizerFlags,objectID)

#define ICorProfilerCallback2_RootReferences2(This,cRootRefs,rootRefIds,rootKinds,rootFlags,rootIds)	\
    (This)->lpVtbl -> RootReferences2(This,cRootRefs,rootRefIds,rootKinds,rootFlags,rootIds)

#define ICorProfilerCallback2_HandleCreated(This,handleId,initialObjectId)	\
    (This)->lpVtbl -> HandleCreated(This,handleId,initialObjectId)

#define ICorProfilerCallback2_HandleDestroyed(This,handleId)	\
    (This)->lpVtbl -> HandleDestroyed(This,handleId)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_ThreadNameChanged_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ ThreadID threadId,
    /* [in] */ ULONG cchName,
    /* [in] */ WCHAR name[  ]);


void __RPC_STUB ICorProfilerCallback2_ThreadNameChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_GarbageCollectionStarted_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ int cGenerations,
    /* [length_is][size_is][in] */ BOOL generationCollected[  ],
    /* [in] */ COR_PRF_GC_REASON reason);


void __RPC_STUB ICorProfilerCallback2_GarbageCollectionStarted_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_SurvivingReferences_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ ULONG cSurvivingObjectIDRanges,
    /* [size_is][in] */ ObjectID objectIDRangeStart[  ],
    /* [size_is][in] */ ULONG cObjectIDRangeLength[  ]);


void __RPC_STUB ICorProfilerCallback2_SurvivingReferences_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_GarbageCollectionFinished_Proxy( 
    ICorProfilerCallback2 * This);


void __RPC_STUB ICorProfilerCallback2_GarbageCollectionFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_FinalizeableObjectQueued_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ DWORD finalizerFlags,
    /* [in] */ ObjectID objectID);


void __RPC_STUB ICorProfilerCallback2_FinalizeableObjectQueued_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_RootReferences2_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ ULONG cRootRefs,
    /* [size_is][in] */ ObjectID rootRefIds[  ],
    /* [size_is][in] */ COR_PRF_GC_ROOT_KIND rootKinds[  ],
    /* [size_is][in] */ COR_PRF_GC_ROOT_FLAGS rootFlags[  ],
    /* [size_is][in] */ UINT_PTR rootIds[  ]);


void __RPC_STUB ICorProfilerCallback2_RootReferences2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_HandleCreated_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ GCHandleID handleId,
    /* [in] */ ObjectID initialObjectId);


void __RPC_STUB ICorProfilerCallback2_HandleCreated_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerCallback2_HandleDestroyed_Proxy( 
    ICorProfilerCallback2 * This,
    /* [in] */ GCHandleID handleId);


void __RPC_STUB ICorProfilerCallback2_HandleDestroyed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICorProfilerCallback2_INTERFACE_DEFINED__ */


#ifndef __ICorProfilerInfo_INTERFACE_DEFINED__
#define __ICorProfilerInfo_INTERFACE_DEFINED__

/* interface ICorProfilerInfo */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICorProfilerInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("28B5557D-3F3F-48b4-90B2-5F9EEA2F6C48")
    ICorProfilerInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetClassFromObject( 
            /* [in] */ ObjectID objectId,
            /* [out] */ ClassID *pClassId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClassFromToken( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdTypeDef typeDef,
            /* [out] */ ClassID *pClassId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodeInfo( 
            /* [in] */ FunctionID functionId,
            /* [out] */ LPCBYTE *pStart,
            /* [out] */ ULONG *pcSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEventMask( 
            /* [out] */ DWORD *pdwEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunctionFromIP( 
            /* [in] */ LPCBYTE ip,
            /* [out] */ FunctionID *pFunctionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunctionFromToken( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdToken token,
            /* [out] */ FunctionID *pFunctionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHandleFromThread( 
            /* [in] */ ThreadID threadId,
            /* [out] */ HANDLE *phThread) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectSize( 
            /* [in] */ ObjectID objectId,
            /* [out] */ ULONG *pcSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsArrayClass( 
            /* [in] */ ClassID classId,
            /* [out] */ CorElementType *pBaseElemType,
            /* [out] */ ClassID *pBaseClassId,
            /* [out] */ ULONG *pcRank) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThreadInfo( 
            /* [in] */ ThreadID threadId,
            /* [out] */ DWORD *pdwWin32ThreadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentThreadID( 
            /* [out] */ ThreadID *pThreadId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClassIDInfo( 
            /* [in] */ ClassID classId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdTypeDef *pTypeDefToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunctionInfo( 
            /* [in] */ FunctionID functionId,
            /* [out] */ ClassID *pClassId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdToken *pToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEventMask( 
            /* [in] */ DWORD dwEvents) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnterLeaveFunctionHooks( 
            /* [in] */ FunctionEnter *pFuncEnter,
            /* [in] */ FunctionLeave *pFuncLeave,
            /* [in] */ FunctionTailcall *pFuncTailcall) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFunctionIDMapper( 
            /* [in] */ FunctionIDMapper *pFunc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTokenAndMetaDataFromFunction( 
            /* [in] */ FunctionID functionId,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppImport,
            /* [out] */ mdToken *pToken) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetModuleInfo( 
            /* [in] */ ModuleID moduleId,
            /* [out] */ LPCBYTE *ppBaseLoadAddress,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ AssemblyID *pAssemblyId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetModuleMetaData( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ DWORD dwOpenFlags,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetILFunctionBody( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdMethodDef methodId,
            /* [out] */ LPCBYTE *ppMethodHeader,
            /* [out] */ ULONG *pcbMethodSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetILFunctionBodyAllocator( 
            /* [in] */ ModuleID moduleId,
            /* [out] */ IMethodMalloc **ppMalloc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetILFunctionBody( 
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdMethodDef methodid,
            /* [in] */ LPCBYTE pbNewILMethodHeader) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppDomainInfo( 
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ ProcessID *pProcessId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssemblyInfo( 
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ AppDomainID *pAppDomainId,
            /* [out] */ ModuleID *pModuleId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFunctionReJIT( 
            /* [in] */ FunctionID functionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ForceGC( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetILInstrumentedCodeMap( 
            /* [in] */ FunctionID functionId,
            /* [in] */ BOOL fStartJit,
            /* [in] */ ULONG cILMapEntries,
            /* [size_is][in] */ COR_IL_MAP rgILMapEntries[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInprocInspectionInterface( 
            /* [out] */ IUnknown **ppicd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInprocInspectionIThisThread( 
            /* [out] */ IUnknown **ppicd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThreadContext( 
            /* [in] */ ThreadID threadId,
            /* [out] */ ContextID *pContextId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginInprocDebugging( 
            /* [in] */ BOOL fThisThreadOnly,
            /* [out] */ DWORD *pdwProfilerContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndInprocDebugging( 
            /* [in] */ DWORD dwProfilerContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetILToNativeMapping( 
            /* [in] */ FunctionID functionId,
            /* [in] */ ULONG32 cMap,
            /* [out] */ ULONG32 *pcMap,
            /* [length_is][size_is][out] */ COR_DEBUG_IL_TO_NATIVE_MAP map[  ]) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICorProfilerInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICorProfilerInfo * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICorProfilerInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICorProfilerInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassFromObject )( 
            ICorProfilerInfo * This,
            /* [in] */ ObjectID objectId,
            /* [out] */ ClassID *pClassId);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassFromToken )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdTypeDef typeDef,
            /* [out] */ ClassID *pClassId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionID functionId,
            /* [out] */ LPCBYTE *pStart,
            /* [out] */ ULONG *pcSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetEventMask )( 
            ICorProfilerInfo * This,
            /* [out] */ DWORD *pdwEvents);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionFromIP )( 
            ICorProfilerInfo * This,
            /* [in] */ LPCBYTE ip,
            /* [out] */ FunctionID *pFunctionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionFromToken )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdToken token,
            /* [out] */ FunctionID *pFunctionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetHandleFromThread )( 
            ICorProfilerInfo * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ HANDLE *phThread);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectSize )( 
            ICorProfilerInfo * This,
            /* [in] */ ObjectID objectId,
            /* [out] */ ULONG *pcSize);
        
        HRESULT ( STDMETHODCALLTYPE *IsArrayClass )( 
            ICorProfilerInfo * This,
            /* [in] */ ClassID classId,
            /* [out] */ CorElementType *pBaseElemType,
            /* [out] */ ClassID *pBaseClassId,
            /* [out] */ ULONG *pcRank);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ DWORD *pdwWin32ThreadId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadID )( 
            ICorProfilerInfo * This,
            /* [out] */ ThreadID *pThreadId);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassIDInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ ClassID classId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdTypeDef *pTypeDefToken);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionID functionId,
            /* [out] */ ClassID *pClassId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdToken *pToken);
        
        HRESULT ( STDMETHODCALLTYPE *SetEventMask )( 
            ICorProfilerInfo * This,
            /* [in] */ DWORD dwEvents);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionEnter *pFuncEnter,
            /* [in] */ FunctionLeave *pFuncLeave,
            /* [in] */ FunctionTailcall *pFuncTailcall);
        
        HRESULT ( STDMETHODCALLTYPE *SetFunctionIDMapper )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionIDMapper *pFunc);
        
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndMetaDataFromFunction )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppImport,
            /* [out] */ mdToken *pToken);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [out] */ LPCBYTE *ppBaseLoadAddress,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ AssemblyID *pAssemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleMetaData )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ DWORD dwOpenFlags,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetILFunctionBody )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdMethodDef methodId,
            /* [out] */ LPCBYTE *ppMethodHeader,
            /* [out] */ ULONG *pcbMethodSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetILFunctionBodyAllocator )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [out] */ IMethodMalloc **ppMalloc);
        
        HRESULT ( STDMETHODCALLTYPE *SetILFunctionBody )( 
            ICorProfilerInfo * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdMethodDef methodid,
            /* [in] */ LPCBYTE pbNewILMethodHeader);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppDomainInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ ProcessID *pProcessId);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyInfo )( 
            ICorProfilerInfo * This,
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ AppDomainID *pAppDomainId,
            /* [out] */ ModuleID *pModuleId);
        
        HRESULT ( STDMETHODCALLTYPE *SetFunctionReJIT )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ForceGC )( 
            ICorProfilerInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetILInstrumentedCodeMap )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ BOOL fStartJit,
            /* [in] */ ULONG cILMapEntries,
            /* [size_is][in] */ COR_IL_MAP rgILMapEntries[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetInprocInspectionInterface )( 
            ICorProfilerInfo * This,
            /* [out] */ IUnknown **ppicd);
        
        HRESULT ( STDMETHODCALLTYPE *GetInprocInspectionIThisThread )( 
            ICorProfilerInfo * This,
            /* [out] */ IUnknown **ppicd);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )( 
            ICorProfilerInfo * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ ContextID *pContextId);
        
        HRESULT ( STDMETHODCALLTYPE *BeginInprocDebugging )( 
            ICorProfilerInfo * This,
            /* [in] */ BOOL fThisThreadOnly,
            /* [out] */ DWORD *pdwProfilerContext);
        
        HRESULT ( STDMETHODCALLTYPE *EndInprocDebugging )( 
            ICorProfilerInfo * This,
            /* [in] */ DWORD dwProfilerContext);
        
        HRESULT ( STDMETHODCALLTYPE *GetILToNativeMapping )( 
            ICorProfilerInfo * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ ULONG32 cMap,
            /* [out] */ ULONG32 *pcMap,
            /* [length_is][size_is][out] */ COR_DEBUG_IL_TO_NATIVE_MAP map[  ]);
        
        END_INTERFACE
    } ICorProfilerInfoVtbl;

    interface ICorProfilerInfo
    {
        CONST_VTBL struct ICorProfilerInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICorProfilerInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICorProfilerInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICorProfilerInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICorProfilerInfo_GetClassFromObject(This,objectId,pClassId)	\
    (This)->lpVtbl -> GetClassFromObject(This,objectId,pClassId)

#define ICorProfilerInfo_GetClassFromToken(This,moduleId,typeDef,pClassId)	\
    (This)->lpVtbl -> GetClassFromToken(This,moduleId,typeDef,pClassId)

#define ICorProfilerInfo_GetCodeInfo(This,functionId,pStart,pcSize)	\
    (This)->lpVtbl -> GetCodeInfo(This,functionId,pStart,pcSize)

#define ICorProfilerInfo_GetEventMask(This,pdwEvents)	\
    (This)->lpVtbl -> GetEventMask(This,pdwEvents)

#define ICorProfilerInfo_GetFunctionFromIP(This,ip,pFunctionId)	\
    (This)->lpVtbl -> GetFunctionFromIP(This,ip,pFunctionId)

#define ICorProfilerInfo_GetFunctionFromToken(This,moduleId,token,pFunctionId)	\
    (This)->lpVtbl -> GetFunctionFromToken(This,moduleId,token,pFunctionId)

#define ICorProfilerInfo_GetHandleFromThread(This,threadId,phThread)	\
    (This)->lpVtbl -> GetHandleFromThread(This,threadId,phThread)

#define ICorProfilerInfo_GetObjectSize(This,objectId,pcSize)	\
    (This)->lpVtbl -> GetObjectSize(This,objectId,pcSize)

#define ICorProfilerInfo_IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)	\
    (This)->lpVtbl -> IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)

#define ICorProfilerInfo_GetThreadInfo(This,threadId,pdwWin32ThreadId)	\
    (This)->lpVtbl -> GetThreadInfo(This,threadId,pdwWin32ThreadId)

#define ICorProfilerInfo_GetCurrentThreadID(This,pThreadId)	\
    (This)->lpVtbl -> GetCurrentThreadID(This,pThreadId)

#define ICorProfilerInfo_GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)	\
    (This)->lpVtbl -> GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)

#define ICorProfilerInfo_GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)	\
    (This)->lpVtbl -> GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)

#define ICorProfilerInfo_SetEventMask(This,dwEvents)	\
    (This)->lpVtbl -> SetEventMask(This,dwEvents)

#define ICorProfilerInfo_SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)	\
    (This)->lpVtbl -> SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)

#define ICorProfilerInfo_SetFunctionIDMapper(This,pFunc)	\
    (This)->lpVtbl -> SetFunctionIDMapper(This,pFunc)

#define ICorProfilerInfo_GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)	\
    (This)->lpVtbl -> GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)

#define ICorProfilerInfo_GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)	\
    (This)->lpVtbl -> GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)

#define ICorProfilerInfo_GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)	\
    (This)->lpVtbl -> GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)

#define ICorProfilerInfo_GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)	\
    (This)->lpVtbl -> GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)

#define ICorProfilerInfo_GetILFunctionBodyAllocator(This,moduleId,ppMalloc)	\
    (This)->lpVtbl -> GetILFunctionBodyAllocator(This,moduleId,ppMalloc)

#define ICorProfilerInfo_SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)	\
    (This)->lpVtbl -> SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)

#define ICorProfilerInfo_GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)	\
    (This)->lpVtbl -> GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)

#define ICorProfilerInfo_GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)	\
    (This)->lpVtbl -> GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)

#define ICorProfilerInfo_SetFunctionReJIT(This,functionId)	\
    (This)->lpVtbl -> SetFunctionReJIT(This,functionId)

#define ICorProfilerInfo_ForceGC(This)	\
    (This)->lpVtbl -> ForceGC(This)

#define ICorProfilerInfo_SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)	\
    (This)->lpVtbl -> SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)

#define ICorProfilerInfo_GetInprocInspectionInterface(This,ppicd)	\
    (This)->lpVtbl -> GetInprocInspectionInterface(This,ppicd)

#define ICorProfilerInfo_GetInprocInspectionIThisThread(This,ppicd)	\
    (This)->lpVtbl -> GetInprocInspectionIThisThread(This,ppicd)

#define ICorProfilerInfo_GetThreadContext(This,threadId,pContextId)	\
    (This)->lpVtbl -> GetThreadContext(This,threadId,pContextId)

#define ICorProfilerInfo_BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)	\
    (This)->lpVtbl -> BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)

#define ICorProfilerInfo_EndInprocDebugging(This,dwProfilerContext)	\
    (This)->lpVtbl -> EndInprocDebugging(This,dwProfilerContext)

#define ICorProfilerInfo_GetILToNativeMapping(This,functionId,cMap,pcMap,map)	\
    (This)->lpVtbl -> GetILToNativeMapping(This,functionId,cMap,pcMap,map)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetClassFromObject_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ObjectID objectId,
    /* [out] */ ClassID *pClassId);


void __RPC_STUB ICorProfilerInfo_GetClassFromObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetClassFromToken_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ mdTypeDef typeDef,
    /* [out] */ ClassID *pClassId);


void __RPC_STUB ICorProfilerInfo_GetClassFromToken_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetCodeInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionID functionId,
    /* [out] */ LPCBYTE *pStart,
    /* [out] */ ULONG *pcSize);


void __RPC_STUB ICorProfilerInfo_GetCodeInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetEventMask_Proxy( 
    ICorProfilerInfo * This,
    /* [out] */ DWORD *pdwEvents);


void __RPC_STUB ICorProfilerInfo_GetEventMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetFunctionFromIP_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ LPCBYTE ip,
    /* [out] */ FunctionID *pFunctionId);


void __RPC_STUB ICorProfilerInfo_GetFunctionFromIP_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetFunctionFromToken_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ mdToken token,
    /* [out] */ FunctionID *pFunctionId);


void __RPC_STUB ICorProfilerInfo_GetFunctionFromToken_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetHandleFromThread_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ThreadID threadId,
    /* [out] */ HANDLE *phThread);


void __RPC_STUB ICorProfilerInfo_GetHandleFromThread_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetObjectSize_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ObjectID objectId,
    /* [out] */ ULONG *pcSize);


void __RPC_STUB ICorProfilerInfo_GetObjectSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_IsArrayClass_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ClassID classId,
    /* [out] */ CorElementType *pBaseElemType,
    /* [out] */ ClassID *pBaseClassId,
    /* [out] */ ULONG *pcRank);


void __RPC_STUB ICorProfilerInfo_IsArrayClass_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetThreadInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ThreadID threadId,
    /* [out] */ DWORD *pdwWin32ThreadId);


void __RPC_STUB ICorProfilerInfo_GetThreadInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetCurrentThreadID_Proxy( 
    ICorProfilerInfo * This,
    /* [out] */ ThreadID *pThreadId);


void __RPC_STUB ICorProfilerInfo_GetCurrentThreadID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetClassIDInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ClassID classId,
    /* [out] */ ModuleID *pModuleId,
    /* [out] */ mdTypeDef *pTypeDefToken);


void __RPC_STUB ICorProfilerInfo_GetClassIDInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetFunctionInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionID functionId,
    /* [out] */ ClassID *pClassId,
    /* [out] */ ModuleID *pModuleId,
    /* [out] */ mdToken *pToken);


void __RPC_STUB ICorProfilerInfo_GetFunctionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_SetEventMask_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ DWORD dwEvents);


void __RPC_STUB ICorProfilerInfo_SetEventMask_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_SetEnterLeaveFunctionHooks_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionEnter *pFuncEnter,
    /* [in] */ FunctionLeave *pFuncLeave,
    /* [in] */ FunctionTailcall *pFuncTailcall);


void __RPC_STUB ICorProfilerInfo_SetEnterLeaveFunctionHooks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_SetFunctionIDMapper_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionIDMapper *pFunc);


void __RPC_STUB ICorProfilerInfo_SetFunctionIDMapper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetTokenAndMetaDataFromFunction_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ REFIID riid,
    /* [out] */ IUnknown **ppImport,
    /* [out] */ mdToken *pToken);


void __RPC_STUB ICorProfilerInfo_GetTokenAndMetaDataFromFunction_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetModuleInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [out] */ LPCBYTE *ppBaseLoadAddress,
    /* [in] */ ULONG cchName,
    /* [out] */ ULONG *pcchName,
    /* [length_is][size_is][out] */ WCHAR szName[  ],
    /* [out] */ AssemblyID *pAssemblyId);


void __RPC_STUB ICorProfilerInfo_GetModuleInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetModuleMetaData_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ DWORD dwOpenFlags,
    /* [in] */ REFIID riid,
    /* [out] */ IUnknown **ppOut);


void __RPC_STUB ICorProfilerInfo_GetModuleMetaData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetILFunctionBody_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ mdMethodDef methodId,
    /* [out] */ LPCBYTE *ppMethodHeader,
    /* [out] */ ULONG *pcbMethodSize);


void __RPC_STUB ICorProfilerInfo_GetILFunctionBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetILFunctionBodyAllocator_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [out] */ IMethodMalloc **ppMalloc);


void __RPC_STUB ICorProfilerInfo_GetILFunctionBodyAllocator_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_SetILFunctionBody_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ModuleID moduleId,
    /* [in] */ mdMethodDef methodid,
    /* [in] */ LPCBYTE pbNewILMethodHeader);


void __RPC_STUB ICorProfilerInfo_SetILFunctionBody_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetAppDomainInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ AppDomainID appDomainId,
    /* [in] */ ULONG cchName,
    /* [out] */ ULONG *pcchName,
    /* [length_is][size_is][out] */ WCHAR szName[  ],
    /* [out] */ ProcessID *pProcessId);


void __RPC_STUB ICorProfilerInfo_GetAppDomainInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetAssemblyInfo_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ AssemblyID assemblyId,
    /* [in] */ ULONG cchName,
    /* [out] */ ULONG *pcchName,
    /* [length_is][size_is][out] */ WCHAR szName[  ],
    /* [out] */ AppDomainID *pAppDomainId,
    /* [out] */ ModuleID *pModuleId);


void __RPC_STUB ICorProfilerInfo_GetAssemblyInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_SetFunctionReJIT_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionID functionId);


void __RPC_STUB ICorProfilerInfo_SetFunctionReJIT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_ForceGC_Proxy( 
    ICorProfilerInfo * This);


void __RPC_STUB ICorProfilerInfo_ForceGC_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_SetILInstrumentedCodeMap_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ BOOL fStartJit,
    /* [in] */ ULONG cILMapEntries,
    /* [size_is][in] */ COR_IL_MAP rgILMapEntries[  ]);


void __RPC_STUB ICorProfilerInfo_SetILInstrumentedCodeMap_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetInprocInspectionInterface_Proxy( 
    ICorProfilerInfo * This,
    /* [out] */ IUnknown **ppicd);


void __RPC_STUB ICorProfilerInfo_GetInprocInspectionInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetInprocInspectionIThisThread_Proxy( 
    ICorProfilerInfo * This,
    /* [out] */ IUnknown **ppicd);


void __RPC_STUB ICorProfilerInfo_GetInprocInspectionIThisThread_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetThreadContext_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ ThreadID threadId,
    /* [out] */ ContextID *pContextId);


void __RPC_STUB ICorProfilerInfo_GetThreadContext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_BeginInprocDebugging_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ BOOL fThisThreadOnly,
    /* [out] */ DWORD *pdwProfilerContext);


void __RPC_STUB ICorProfilerInfo_BeginInprocDebugging_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_EndInprocDebugging_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ DWORD dwProfilerContext);


void __RPC_STUB ICorProfilerInfo_EndInprocDebugging_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo_GetILToNativeMapping_Proxy( 
    ICorProfilerInfo * This,
    /* [in] */ FunctionID functionId,
    /* [in] */ ULONG32 cMap,
    /* [out] */ ULONG32 *pcMap,
    /* [length_is][size_is][out] */ COR_DEBUG_IL_TO_NATIVE_MAP map[  ]);


void __RPC_STUB ICorProfilerInfo_GetILToNativeMapping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICorProfilerInfo_INTERFACE_DEFINED__ */


#ifndef __ICorProfilerInfo2_INTERFACE_DEFINED__
#define __ICorProfilerInfo2_INTERFACE_DEFINED__

/* interface ICorProfilerInfo2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICorProfilerInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CC0935CD-A518-487d-B0BB-A93214E65478")
    ICorProfilerInfo2 : public ICorProfilerInfo
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DoStackSnapshot( 
            /* [in] */ ThreadID thread,
            /* [in] */ StackSnapshotCallback *callback,
            /* [in] */ ULONG32 infoFlags,
            /* [in] */ void *clientData,
            /* [length_is][size_is][in] */ BYTE context[  ],
            /* [in] */ ULONG32 contextSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetEnterLeaveFunctionHooks2( 
            /* [in] */ FunctionEnter2 *pFuncEnter,
            /* [in] */ FunctionLeave2 *pFuncLeave,
            /* [in] */ FunctionTailcall2 *pFuncTailcall) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunctionInfo2( 
            /* [in] */ FunctionID funcId,
            /* [in] */ COR_PRF_FRAME_INFO frameInfo,
            /* [out] */ ClassID *pClassId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdToken *pToken,
            /* [in] */ ULONG32 cTypeArgs,
            /* [out] */ ULONG32 *pcTypeArgs,
            /* [out] */ ClassID typeArgs[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringLayout( 
            /* [out] */ ULONG *pBufferLengthOffset,
            /* [out] */ ULONG *pStringLengthOffset,
            /* [out] */ ULONG *pBufferOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClassLayout( 
            /* [in] */ ClassID classID,
            /* [out][in] */ COR_FIELD_OFFSET rFieldOffset[  ],
            /* [in] */ ULONG cFieldOffset,
            /* [out] */ ULONG *pcFieldOffset,
            /* [out] */ ULONG *pulClassSize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClassIDInfo2( 
            /* [in] */ ClassID classId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdTypeDef *pTypeDefToken,
            /* [out] */ ClassID *pParentClassId,
            /* [in] */ ULONG32 cNumTypeArgs,
            /* [out] */ ULONG32 *pcNumTypeArgs,
            /* [out] */ ClassID typeArgs[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodeInfo2( 
            /* [in] */ FunctionID functionID,
            /* [in] */ ULONG32 cCodeInfos,
            /* [out] */ ULONG32 *pcCodeInfos,
            /* [length_is][size_is][out] */ COR_PRF_CODE_INFO codeInfos[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClassFromTokenAndTypeArgs( 
            /* [in] */ ModuleID moduleID,
            /* [in] */ mdTypeDef typeDef,
            /* [in] */ ULONG32 cTypeArgs,
            /* [size_is][in] */ ClassID typeArgs[  ],
            /* [out] */ ClassID *pClassID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFunctionFromTokenAndTypeArgs( 
            /* [in] */ ModuleID moduleID,
            /* [in] */ mdMethodDef funcDef,
            /* [in] */ ClassID classId,
            /* [in] */ ULONG32 cTypeArgs,
            /* [size_is][in] */ ClassID typeArgs[  ],
            /* [out] */ FunctionID *pFunctionID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumModuleFrozenObjects( 
            /* [in] */ ModuleID moduleID,
            /* [out] */ ICorProfilerObjectEnum **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetArrayObjectInfo( 
            /* [in] */ ObjectID objectId,
            /* [in] */ ULONG32 cDimensions,
            /* [length_is][size_is][out] */ ULONG32 pDimensionSizes[  ],
            /* [length_is][size_is][out] */ int pDimensionLowerBounds[  ],
            /* [out] */ BYTE **ppData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBoxClassLayout( 
            /* [in] */ ClassID classId,
            /* [out] */ ULONG32 *pBufferOffset) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThreadAppDomain( 
            /* [in] */ ThreadID threadId,
            /* [out] */ AppDomainID *pAppDomainId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRVAStaticAddress( 
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [out] */ void **ppAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAppDomainStaticAddress( 
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [in] */ AppDomainID appDomainId,
            /* [out] */ void **ppAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetThreadStaticAddress( 
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [in] */ ThreadID threadId,
            /* [out] */ void **ppAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContextStaticAddress( 
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [in] */ ContextID contextId,
            /* [out] */ void **ppAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStaticFieldInfo( 
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [out] */ COR_PRF_STATIC_TYPE *pFieldInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGenerationBounds( 
            /* [in] */ ULONG cObjectRanges,
            /* [out] */ ULONG *pcObjectRanges,
            /* [length_is][size_is][out] */ COR_PRF_GC_GENERATION_RANGE ranges[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetObjectGeneration( 
            /* [in] */ ObjectID objectId,
            /* [out] */ COR_PRF_GC_GENERATION_RANGE *range) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNotifiedExceptionClauseInfo( 
            /* [out] */ COR_PRF_EX_CLAUSE_INFO *pinfo) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICorProfilerInfo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICorProfilerInfo2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICorProfilerInfo2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICorProfilerInfo2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassFromObject )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ObjectID objectId,
            /* [out] */ ClassID *pClassId);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassFromToken )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdTypeDef typeDef,
            /* [out] */ ClassID *pClassId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionId,
            /* [out] */ LPCBYTE *pStart,
            /* [out] */ ULONG *pcSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetEventMask )( 
            ICorProfilerInfo2 * This,
            /* [out] */ DWORD *pdwEvents);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionFromIP )( 
            ICorProfilerInfo2 * This,
            /* [in] */ LPCBYTE ip,
            /* [out] */ FunctionID *pFunctionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionFromToken )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdToken token,
            /* [out] */ FunctionID *pFunctionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetHandleFromThread )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ HANDLE *phThread);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectSize )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ObjectID objectId,
            /* [out] */ ULONG *pcSize);
        
        HRESULT ( STDMETHODCALLTYPE *IsArrayClass )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [out] */ CorElementType *pBaseElemType,
            /* [out] */ ClassID *pBaseClassId,
            /* [out] */ ULONG *pcRank);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ DWORD *pdwWin32ThreadId);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentThreadID )( 
            ICorProfilerInfo2 * This,
            /* [out] */ ThreadID *pThreadId);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassIDInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdTypeDef *pTypeDefToken);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionId,
            /* [out] */ ClassID *pClassId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdToken *pToken);
        
        HRESULT ( STDMETHODCALLTYPE *SetEventMask )( 
            ICorProfilerInfo2 * This,
            /* [in] */ DWORD dwEvents);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionEnter *pFuncEnter,
            /* [in] */ FunctionLeave *pFuncLeave,
            /* [in] */ FunctionTailcall *pFuncTailcall);
        
        HRESULT ( STDMETHODCALLTYPE *SetFunctionIDMapper )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionIDMapper *pFunc);
        
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndMetaDataFromFunction )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppImport,
            /* [out] */ mdToken *pToken);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [out] */ LPCBYTE *ppBaseLoadAddress,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ AssemblyID *pAssemblyId);
        
        HRESULT ( STDMETHODCALLTYPE *GetModuleMetaData )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ DWORD dwOpenFlags,
            /* [in] */ REFIID riid,
            /* [out] */ IUnknown **ppOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetILFunctionBody )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdMethodDef methodId,
            /* [out] */ LPCBYTE *ppMethodHeader,
            /* [out] */ ULONG *pcbMethodSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetILFunctionBodyAllocator )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [out] */ IMethodMalloc **ppMalloc);
        
        HRESULT ( STDMETHODCALLTYPE *SetILFunctionBody )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleId,
            /* [in] */ mdMethodDef methodid,
            /* [in] */ LPCBYTE pbNewILMethodHeader);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppDomainInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ AppDomainID appDomainId,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ ProcessID *pProcessId);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ AssemblyID assemblyId,
            /* [in] */ ULONG cchName,
            /* [out] */ ULONG *pcchName,
            /* [length_is][size_is][out] */ WCHAR szName[  ],
            /* [out] */ AppDomainID *pAppDomainId,
            /* [out] */ ModuleID *pModuleId);
        
        HRESULT ( STDMETHODCALLTYPE *SetFunctionReJIT )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionId);
        
        HRESULT ( STDMETHODCALLTYPE *ForceGC )( 
            ICorProfilerInfo2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetILInstrumentedCodeMap )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ BOOL fStartJit,
            /* [in] */ ULONG cILMapEntries,
            /* [size_is][in] */ COR_IL_MAP rgILMapEntries[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetInprocInspectionInterface )( 
            ICorProfilerInfo2 * This,
            /* [out] */ IUnknown **ppicd);
        
        HRESULT ( STDMETHODCALLTYPE *GetInprocInspectionIThisThread )( 
            ICorProfilerInfo2 * This,
            /* [out] */ IUnknown **ppicd);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadContext )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ ContextID *pContextId);
        
        HRESULT ( STDMETHODCALLTYPE *BeginInprocDebugging )( 
            ICorProfilerInfo2 * This,
            /* [in] */ BOOL fThisThreadOnly,
            /* [out] */ DWORD *pdwProfilerContext);
        
        HRESULT ( STDMETHODCALLTYPE *EndInprocDebugging )( 
            ICorProfilerInfo2 * This,
            /* [in] */ DWORD dwProfilerContext);
        
        HRESULT ( STDMETHODCALLTYPE *GetILToNativeMapping )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionId,
            /* [in] */ ULONG32 cMap,
            /* [out] */ ULONG32 *pcMap,
            /* [length_is][size_is][out] */ COR_DEBUG_IL_TO_NATIVE_MAP map[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *DoStackSnapshot )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ThreadID thread,
            /* [in] */ StackSnapshotCallback *callback,
            /* [in] */ ULONG32 infoFlags,
            /* [in] */ void *clientData,
            /* [length_is][size_is][in] */ BYTE context[  ],
            /* [in] */ ULONG32 contextSize);
        
        HRESULT ( STDMETHODCALLTYPE *SetEnterLeaveFunctionHooks2 )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionEnter2 *pFuncEnter,
            /* [in] */ FunctionLeave2 *pFuncLeave,
            /* [in] */ FunctionTailcall2 *pFuncTailcall);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionInfo2 )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID funcId,
            /* [in] */ COR_PRF_FRAME_INFO frameInfo,
            /* [out] */ ClassID *pClassId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdToken *pToken,
            /* [in] */ ULONG32 cTypeArgs,
            /* [out] */ ULONG32 *pcTypeArgs,
            /* [out] */ ClassID typeArgs[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringLayout )( 
            ICorProfilerInfo2 * This,
            /* [out] */ ULONG *pBufferLengthOffset,
            /* [out] */ ULONG *pStringLengthOffset,
            /* [out] */ ULONG *pBufferOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassLayout )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classID,
            /* [out][in] */ COR_FIELD_OFFSET rFieldOffset[  ],
            /* [in] */ ULONG cFieldOffset,
            /* [out] */ ULONG *pcFieldOffset,
            /* [out] */ ULONG *pulClassSize);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassIDInfo2 )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [out] */ ModuleID *pModuleId,
            /* [out] */ mdTypeDef *pTypeDefToken,
            /* [out] */ ClassID *pParentClassId,
            /* [in] */ ULONG32 cNumTypeArgs,
            /* [out] */ ULONG32 *pcNumTypeArgs,
            /* [out] */ ClassID typeArgs[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetCodeInfo2 )( 
            ICorProfilerInfo2 * This,
            /* [in] */ FunctionID functionID,
            /* [in] */ ULONG32 cCodeInfos,
            /* [out] */ ULONG32 *pcCodeInfos,
            /* [length_is][size_is][out] */ COR_PRF_CODE_INFO codeInfos[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetClassFromTokenAndTypeArgs )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleID,
            /* [in] */ mdTypeDef typeDef,
            /* [in] */ ULONG32 cTypeArgs,
            /* [size_is][in] */ ClassID typeArgs[  ],
            /* [out] */ ClassID *pClassID);
        
        HRESULT ( STDMETHODCALLTYPE *GetFunctionFromTokenAndTypeArgs )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleID,
            /* [in] */ mdMethodDef funcDef,
            /* [in] */ ClassID classId,
            /* [in] */ ULONG32 cTypeArgs,
            /* [size_is][in] */ ClassID typeArgs[  ],
            /* [out] */ FunctionID *pFunctionID);
        
        HRESULT ( STDMETHODCALLTYPE *EnumModuleFrozenObjects )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ModuleID moduleID,
            /* [out] */ ICorProfilerObjectEnum **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetArrayObjectInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ObjectID objectId,
            /* [in] */ ULONG32 cDimensions,
            /* [length_is][size_is][out] */ ULONG32 pDimensionSizes[  ],
            /* [length_is][size_is][out] */ int pDimensionLowerBounds[  ],
            /* [out] */ BYTE **ppData);
        
        HRESULT ( STDMETHODCALLTYPE *GetBoxClassLayout )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [out] */ ULONG32 *pBufferOffset);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadAppDomain )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ThreadID threadId,
            /* [out] */ AppDomainID *pAppDomainId);
        
        HRESULT ( STDMETHODCALLTYPE *GetRVAStaticAddress )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [out] */ void **ppAddress);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppDomainStaticAddress )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [in] */ AppDomainID appDomainId,
            /* [out] */ void **ppAddress);
        
        HRESULT ( STDMETHODCALLTYPE *GetThreadStaticAddress )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [in] */ ThreadID threadId,
            /* [out] */ void **ppAddress);
        
        HRESULT ( STDMETHODCALLTYPE *GetContextStaticAddress )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [in] */ ContextID contextId,
            /* [out] */ void **ppAddress);
        
        HRESULT ( STDMETHODCALLTYPE *GetStaticFieldInfo )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ClassID classId,
            /* [in] */ mdFieldDef fieldToken,
            /* [out] */ COR_PRF_STATIC_TYPE *pFieldInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetGenerationBounds )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ULONG cObjectRanges,
            /* [out] */ ULONG *pcObjectRanges,
            /* [length_is][size_is][out] */ COR_PRF_GC_GENERATION_RANGE ranges[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetObjectGeneration )( 
            ICorProfilerInfo2 * This,
            /* [in] */ ObjectID objectId,
            /* [out] */ COR_PRF_GC_GENERATION_RANGE *range);
        
        HRESULT ( STDMETHODCALLTYPE *GetNotifiedExceptionClauseInfo )( 
            ICorProfilerInfo2 * This,
            /* [out] */ COR_PRF_EX_CLAUSE_INFO *pinfo);
        
        END_INTERFACE
    } ICorProfilerInfo2Vtbl;

    interface ICorProfilerInfo2
    {
        CONST_VTBL struct ICorProfilerInfo2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICorProfilerInfo2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICorProfilerInfo2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICorProfilerInfo2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICorProfilerInfo2_GetClassFromObject(This,objectId,pClassId)	\
    (This)->lpVtbl -> GetClassFromObject(This,objectId,pClassId)

#define ICorProfilerInfo2_GetClassFromToken(This,moduleId,typeDef,pClassId)	\
    (This)->lpVtbl -> GetClassFromToken(This,moduleId,typeDef,pClassId)

#define ICorProfilerInfo2_GetCodeInfo(This,functionId,pStart,pcSize)	\
    (This)->lpVtbl -> GetCodeInfo(This,functionId,pStart,pcSize)

#define ICorProfilerInfo2_GetEventMask(This,pdwEvents)	\
    (This)->lpVtbl -> GetEventMask(This,pdwEvents)

#define ICorProfilerInfo2_GetFunctionFromIP(This,ip,pFunctionId)	\
    (This)->lpVtbl -> GetFunctionFromIP(This,ip,pFunctionId)

#define ICorProfilerInfo2_GetFunctionFromToken(This,moduleId,token,pFunctionId)	\
    (This)->lpVtbl -> GetFunctionFromToken(This,moduleId,token,pFunctionId)

#define ICorProfilerInfo2_GetHandleFromThread(This,threadId,phThread)	\
    (This)->lpVtbl -> GetHandleFromThread(This,threadId,phThread)

#define ICorProfilerInfo2_GetObjectSize(This,objectId,pcSize)	\
    (This)->lpVtbl -> GetObjectSize(This,objectId,pcSize)

#define ICorProfilerInfo2_IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)	\
    (This)->lpVtbl -> IsArrayClass(This,classId,pBaseElemType,pBaseClassId,pcRank)

#define ICorProfilerInfo2_GetThreadInfo(This,threadId,pdwWin32ThreadId)	\
    (This)->lpVtbl -> GetThreadInfo(This,threadId,pdwWin32ThreadId)

#define ICorProfilerInfo2_GetCurrentThreadID(This,pThreadId)	\
    (This)->lpVtbl -> GetCurrentThreadID(This,pThreadId)

#define ICorProfilerInfo2_GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)	\
    (This)->lpVtbl -> GetClassIDInfo(This,classId,pModuleId,pTypeDefToken)

#define ICorProfilerInfo2_GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)	\
    (This)->lpVtbl -> GetFunctionInfo(This,functionId,pClassId,pModuleId,pToken)

#define ICorProfilerInfo2_SetEventMask(This,dwEvents)	\
    (This)->lpVtbl -> SetEventMask(This,dwEvents)

#define ICorProfilerInfo2_SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)	\
    (This)->lpVtbl -> SetEnterLeaveFunctionHooks(This,pFuncEnter,pFuncLeave,pFuncTailcall)

#define ICorProfilerInfo2_SetFunctionIDMapper(This,pFunc)	\
    (This)->lpVtbl -> SetFunctionIDMapper(This,pFunc)

#define ICorProfilerInfo2_GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)	\
    (This)->lpVtbl -> GetTokenAndMetaDataFromFunction(This,functionId,riid,ppImport,pToken)

#define ICorProfilerInfo2_GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)	\
    (This)->lpVtbl -> GetModuleInfo(This,moduleId,ppBaseLoadAddress,cchName,pcchName,szName,pAssemblyId)

#define ICorProfilerInfo2_GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)	\
    (This)->lpVtbl -> GetModuleMetaData(This,moduleId,dwOpenFlags,riid,ppOut)

#define ICorProfilerInfo2_GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)	\
    (This)->lpVtbl -> GetILFunctionBody(This,moduleId,methodId,ppMethodHeader,pcbMethodSize)

#define ICorProfilerInfo2_GetILFunctionBodyAllocator(This,moduleId,ppMalloc)	\
    (This)->lpVtbl -> GetILFunctionBodyAllocator(This,moduleId,ppMalloc)

#define ICorProfilerInfo2_SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)	\
    (This)->lpVtbl -> SetILFunctionBody(This,moduleId,methodid,pbNewILMethodHeader)

#define ICorProfilerInfo2_GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)	\
    (This)->lpVtbl -> GetAppDomainInfo(This,appDomainId,cchName,pcchName,szName,pProcessId)

#define ICorProfilerInfo2_GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)	\
    (This)->lpVtbl -> GetAssemblyInfo(This,assemblyId,cchName,pcchName,szName,pAppDomainId,pModuleId)

#define ICorProfilerInfo2_SetFunctionReJIT(This,functionId)	\
    (This)->lpVtbl -> SetFunctionReJIT(This,functionId)

#define ICorProfilerInfo2_ForceGC(This)	\
    (This)->lpVtbl -> ForceGC(This)

#define ICorProfilerInfo2_SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)	\
    (This)->lpVtbl -> SetILInstrumentedCodeMap(This,functionId,fStartJit,cILMapEntries,rgILMapEntries)

#define ICorProfilerInfo2_GetInprocInspectionInterface(This,ppicd)	\
    (This)->lpVtbl -> GetInprocInspectionInterface(This,ppicd)

#define ICorProfilerInfo2_GetInprocInspectionIThisThread(This,ppicd)	\
    (This)->lpVtbl -> GetInprocInspectionIThisThread(This,ppicd)

#define ICorProfilerInfo2_GetThreadContext(This,threadId,pContextId)	\
    (This)->lpVtbl -> GetThreadContext(This,threadId,pContextId)

#define ICorProfilerInfo2_BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)	\
    (This)->lpVtbl -> BeginInprocDebugging(This,fThisThreadOnly,pdwProfilerContext)

#define ICorProfilerInfo2_EndInprocDebugging(This,dwProfilerContext)	\
    (This)->lpVtbl -> EndInprocDebugging(This,dwProfilerContext)

#define ICorProfilerInfo2_GetILToNativeMapping(This,functionId,cMap,pcMap,map)	\
    (This)->lpVtbl -> GetILToNativeMapping(This,functionId,cMap,pcMap,map)


#define ICorProfilerInfo2_DoStackSnapshot(This,thread,callback,infoFlags,clientData,context,contextSize)	\
    (This)->lpVtbl -> DoStackSnapshot(This,thread,callback,infoFlags,clientData,context,contextSize)

#define ICorProfilerInfo2_SetEnterLeaveFunctionHooks2(This,pFuncEnter,pFuncLeave,pFuncTailcall)	\
    (This)->lpVtbl -> SetEnterLeaveFunctionHooks2(This,pFuncEnter,pFuncLeave,pFuncTailcall)

#define ICorProfilerInfo2_GetFunctionInfo2(This,funcId,frameInfo,pClassId,pModuleId,pToken,cTypeArgs,pcTypeArgs,typeArgs)	\
    (This)->lpVtbl -> GetFunctionInfo2(This,funcId,frameInfo,pClassId,pModuleId,pToken,cTypeArgs,pcTypeArgs,typeArgs)

#define ICorProfilerInfo2_GetStringLayout(This,pBufferLengthOffset,pStringLengthOffset,pBufferOffset)	\
    (This)->lpVtbl -> GetStringLayout(This,pBufferLengthOffset,pStringLengthOffset,pBufferOffset)

#define ICorProfilerInfo2_GetClassLayout(This,classID,rFieldOffset,cFieldOffset,pcFieldOffset,pulClassSize)	\
    (This)->lpVtbl -> GetClassLayout(This,classID,rFieldOffset,cFieldOffset,pcFieldOffset,pulClassSize)

#define ICorProfilerInfo2_GetClassIDInfo2(This,classId,pModuleId,pTypeDefToken,pParentClassId,cNumTypeArgs,pcNumTypeArgs,typeArgs)	\
    (This)->lpVtbl -> GetClassIDInfo2(This,classId,pModuleId,pTypeDefToken,pParentClassId,cNumTypeArgs,pcNumTypeArgs,typeArgs)

#define ICorProfilerInfo2_GetCodeInfo2(This,functionID,cCodeInfos,pcCodeInfos,codeInfos)	\
    (This)->lpVtbl -> GetCodeInfo2(This,functionID,cCodeInfos,pcCodeInfos,codeInfos)

#define ICorProfilerInfo2_GetClassFromTokenAndTypeArgs(This,moduleID,typeDef,cTypeArgs,typeArgs,pClassID)	\
    (This)->lpVtbl -> GetClassFromTokenAndTypeArgs(This,moduleID,typeDef,cTypeArgs,typeArgs,pClassID)

#define ICorProfilerInfo2_GetFunctionFromTokenAndTypeArgs(This,moduleID,funcDef,classId,cTypeArgs,typeArgs,pFunctionID)	\
    (This)->lpVtbl -> GetFunctionFromTokenAndTypeArgs(This,moduleID,funcDef,classId,cTypeArgs,typeArgs,pFunctionID)

#define ICorProfilerInfo2_EnumModuleFrozenObjects(This,moduleID,ppEnum)	\
    (This)->lpVtbl -> EnumModuleFrozenObjects(This,moduleID,ppEnum)

#define ICorProfilerInfo2_GetArrayObjectInfo(This,objectId,cDimensions,pDimensionSizes,pDimensionLowerBounds,ppData)	\
    (This)->lpVtbl -> GetArrayObjectInfo(This,objectId,cDimensions,pDimensionSizes,pDimensionLowerBounds,ppData)

#define ICorProfilerInfo2_GetBoxClassLayout(This,classId,pBufferOffset)	\
    (This)->lpVtbl -> GetBoxClassLayout(This,classId,pBufferOffset)

#define ICorProfilerInfo2_GetThreadAppDomain(This,threadId,pAppDomainId)	\
    (This)->lpVtbl -> GetThreadAppDomain(This,threadId,pAppDomainId)

#define ICorProfilerInfo2_GetRVAStaticAddress(This,classId,fieldToken,ppAddress)	\
    (This)->lpVtbl -> GetRVAStaticAddress(This,classId,fieldToken,ppAddress)

#define ICorProfilerInfo2_GetAppDomainStaticAddress(This,classId,fieldToken,appDomainId,ppAddress)	\
    (This)->lpVtbl -> GetAppDomainStaticAddress(This,classId,fieldToken,appDomainId,ppAddress)

#define ICorProfilerInfo2_GetThreadStaticAddress(This,classId,fieldToken,threadId,ppAddress)	\
    (This)->lpVtbl -> GetThreadStaticAddress(This,classId,fieldToken,threadId,ppAddress)

#define ICorProfilerInfo2_GetContextStaticAddress(This,classId,fieldToken,contextId,ppAddress)	\
    (This)->lpVtbl -> GetContextStaticAddress(This,classId,fieldToken,contextId,ppAddress)

#define ICorProfilerInfo2_GetStaticFieldInfo(This,classId,fieldToken,pFieldInfo)	\
    (This)->lpVtbl -> GetStaticFieldInfo(This,classId,fieldToken,pFieldInfo)

#define ICorProfilerInfo2_GetGenerationBounds(This,cObjectRanges,pcObjectRanges,ranges)	\
    (This)->lpVtbl -> GetGenerationBounds(This,cObjectRanges,pcObjectRanges,ranges)

#define ICorProfilerInfo2_GetObjectGeneration(This,objectId,range)	\
    (This)->lpVtbl -> GetObjectGeneration(This,objectId,range)

#define ICorProfilerInfo2_GetNotifiedExceptionClauseInfo(This,pinfo)	\
    (This)->lpVtbl -> GetNotifiedExceptionClauseInfo(This,pinfo)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_DoStackSnapshot_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ThreadID thread,
    /* [in] */ StackSnapshotCallback *callback,
    /* [in] */ ULONG32 infoFlags,
    /* [in] */ void *clientData,
    /* [length_is][size_is][in] */ BYTE context[  ],
    /* [in] */ ULONG32 contextSize);


void __RPC_STUB ICorProfilerInfo2_DoStackSnapshot_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_SetEnterLeaveFunctionHooks2_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ FunctionEnter2 *pFuncEnter,
    /* [in] */ FunctionLeave2 *pFuncLeave,
    /* [in] */ FunctionTailcall2 *pFuncTailcall);


void __RPC_STUB ICorProfilerInfo2_SetEnterLeaveFunctionHooks2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetFunctionInfo2_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ FunctionID funcId,
    /* [in] */ COR_PRF_FRAME_INFO frameInfo,
    /* [out] */ ClassID *pClassId,
    /* [out] */ ModuleID *pModuleId,
    /* [out] */ mdToken *pToken,
    /* [in] */ ULONG32 cTypeArgs,
    /* [out] */ ULONG32 *pcTypeArgs,
    /* [out] */ ClassID typeArgs[  ]);


void __RPC_STUB ICorProfilerInfo2_GetFunctionInfo2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetStringLayout_Proxy( 
    ICorProfilerInfo2 * This,
    /* [out] */ ULONG *pBufferLengthOffset,
    /* [out] */ ULONG *pStringLengthOffset,
    /* [out] */ ULONG *pBufferOffset);


void __RPC_STUB ICorProfilerInfo2_GetStringLayout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetClassLayout_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classID,
    /* [out][in] */ COR_FIELD_OFFSET rFieldOffset[  ],
    /* [in] */ ULONG cFieldOffset,
    /* [out] */ ULONG *pcFieldOffset,
    /* [out] */ ULONG *pulClassSize);


void __RPC_STUB ICorProfilerInfo2_GetClassLayout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetClassIDInfo2_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [out] */ ModuleID *pModuleId,
    /* [out] */ mdTypeDef *pTypeDefToken,
    /* [out] */ ClassID *pParentClassId,
    /* [in] */ ULONG32 cNumTypeArgs,
    /* [out] */ ULONG32 *pcNumTypeArgs,
    /* [out] */ ClassID typeArgs[  ]);


void __RPC_STUB ICorProfilerInfo2_GetClassIDInfo2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetCodeInfo2_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ FunctionID functionID,
    /* [in] */ ULONG32 cCodeInfos,
    /* [out] */ ULONG32 *pcCodeInfos,
    /* [length_is][size_is][out] */ COR_PRF_CODE_INFO codeInfos[  ]);


void __RPC_STUB ICorProfilerInfo2_GetCodeInfo2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetClassFromTokenAndTypeArgs_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ModuleID moduleID,
    /* [in] */ mdTypeDef typeDef,
    /* [in] */ ULONG32 cTypeArgs,
    /* [size_is][in] */ ClassID typeArgs[  ],
    /* [out] */ ClassID *pClassID);


void __RPC_STUB ICorProfilerInfo2_GetClassFromTokenAndTypeArgs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetFunctionFromTokenAndTypeArgs_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ModuleID moduleID,
    /* [in] */ mdMethodDef funcDef,
    /* [in] */ ClassID classId,
    /* [in] */ ULONG32 cTypeArgs,
    /* [size_is][in] */ ClassID typeArgs[  ],
    /* [out] */ FunctionID *pFunctionID);


void __RPC_STUB ICorProfilerInfo2_GetFunctionFromTokenAndTypeArgs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_EnumModuleFrozenObjects_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ModuleID moduleID,
    /* [out] */ ICorProfilerObjectEnum **ppEnum);


void __RPC_STUB ICorProfilerInfo2_EnumModuleFrozenObjects_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetArrayObjectInfo_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ObjectID objectId,
    /* [in] */ ULONG32 cDimensions,
    /* [length_is][size_is][out] */ ULONG32 pDimensionSizes[  ],
    /* [length_is][size_is][out] */ int pDimensionLowerBounds[  ],
    /* [out] */ BYTE **ppData);


void __RPC_STUB ICorProfilerInfo2_GetArrayObjectInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetBoxClassLayout_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [out] */ ULONG32 *pBufferOffset);


void __RPC_STUB ICorProfilerInfo2_GetBoxClassLayout_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetThreadAppDomain_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ThreadID threadId,
    /* [out] */ AppDomainID *pAppDomainId);


void __RPC_STUB ICorProfilerInfo2_GetThreadAppDomain_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetRVAStaticAddress_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [in] */ mdFieldDef fieldToken,
    /* [out] */ void **ppAddress);


void __RPC_STUB ICorProfilerInfo2_GetRVAStaticAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetAppDomainStaticAddress_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [in] */ mdFieldDef fieldToken,
    /* [in] */ AppDomainID appDomainId,
    /* [out] */ void **ppAddress);


void __RPC_STUB ICorProfilerInfo2_GetAppDomainStaticAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetThreadStaticAddress_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [in] */ mdFieldDef fieldToken,
    /* [in] */ ThreadID threadId,
    /* [out] */ void **ppAddress);


void __RPC_STUB ICorProfilerInfo2_GetThreadStaticAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetContextStaticAddress_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [in] */ mdFieldDef fieldToken,
    /* [in] */ ContextID contextId,
    /* [out] */ void **ppAddress);


void __RPC_STUB ICorProfilerInfo2_GetContextStaticAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetStaticFieldInfo_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ClassID classId,
    /* [in] */ mdFieldDef fieldToken,
    /* [out] */ COR_PRF_STATIC_TYPE *pFieldInfo);


void __RPC_STUB ICorProfilerInfo2_GetStaticFieldInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetGenerationBounds_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ULONG cObjectRanges,
    /* [out] */ ULONG *pcObjectRanges,
    /* [length_is][size_is][out] */ COR_PRF_GC_GENERATION_RANGE ranges[  ]);


void __RPC_STUB ICorProfilerInfo2_GetGenerationBounds_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetObjectGeneration_Proxy( 
    ICorProfilerInfo2 * This,
    /* [in] */ ObjectID objectId,
    /* [out] */ COR_PRF_GC_GENERATION_RANGE *range);


void __RPC_STUB ICorProfilerInfo2_GetObjectGeneration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerInfo2_GetNotifiedExceptionClauseInfo_Proxy( 
    ICorProfilerInfo2 * This,
    /* [out] */ COR_PRF_EX_CLAUSE_INFO *pinfo);


void __RPC_STUB ICorProfilerInfo2_GetNotifiedExceptionClauseInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICorProfilerInfo2_INTERFACE_DEFINED__ */


#ifndef __ICorProfilerObjectEnum_INTERFACE_DEFINED__
#define __ICorProfilerObjectEnum_INTERFACE_DEFINED__

/* interface ICorProfilerObjectEnum */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_ICorProfilerObjectEnum;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C6269BD-2D13-4321-AE12-6686365FD6AF")
    ICorProfilerObjectEnum : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ ICorProfilerObjectEnum **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ ULONG *pcelt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ ObjectID objects[  ],
            /* [out] */ ULONG *pceltFetched) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICorProfilerObjectEnumVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICorProfilerObjectEnum * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICorProfilerObjectEnum * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICorProfilerObjectEnum * This);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            ICorProfilerObjectEnum * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ICorProfilerObjectEnum * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ICorProfilerObjectEnum * This,
            /* [out] */ ICorProfilerObjectEnum **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            ICorProfilerObjectEnum * This,
            /* [out] */ ULONG *pcelt);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            ICorProfilerObjectEnum * This,
            /* [in] */ ULONG celt,
            /* [length_is][size_is][out] */ ObjectID objects[  ],
            /* [out] */ ULONG *pceltFetched);
        
        END_INTERFACE
    } ICorProfilerObjectEnumVtbl;

    interface ICorProfilerObjectEnum
    {
        CONST_VTBL struct ICorProfilerObjectEnumVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICorProfilerObjectEnum_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICorProfilerObjectEnum_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICorProfilerObjectEnum_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICorProfilerObjectEnum_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define ICorProfilerObjectEnum_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define ICorProfilerObjectEnum_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#define ICorProfilerObjectEnum_GetCount(This,pcelt)	\
    (This)->lpVtbl -> GetCount(This,pcelt)

#define ICorProfilerObjectEnum_Next(This,celt,objects,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,objects,pceltFetched)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICorProfilerObjectEnum_Skip_Proxy( 
    ICorProfilerObjectEnum * This,
    /* [in] */ ULONG celt);


void __RPC_STUB ICorProfilerObjectEnum_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerObjectEnum_Reset_Proxy( 
    ICorProfilerObjectEnum * This);


void __RPC_STUB ICorProfilerObjectEnum_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerObjectEnum_Clone_Proxy( 
    ICorProfilerObjectEnum * This,
    /* [out] */ ICorProfilerObjectEnum **ppEnum);


void __RPC_STUB ICorProfilerObjectEnum_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerObjectEnum_GetCount_Proxy( 
    ICorProfilerObjectEnum * This,
    /* [out] */ ULONG *pcelt);


void __RPC_STUB ICorProfilerObjectEnum_GetCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICorProfilerObjectEnum_Next_Proxy( 
    ICorProfilerObjectEnum * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ ObjectID objects[  ],
    /* [out] */ ULONG *pceltFetched);


void __RPC_STUB ICorProfilerObjectEnum_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICorProfilerObjectEnum_INTERFACE_DEFINED__ */


#ifndef __IMethodMalloc_INTERFACE_DEFINED__
#define __IMethodMalloc_INTERFACE_DEFINED__

/* interface IMethodMalloc */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IMethodMalloc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A0EFB28B-6EE2-4d7b-B983-A75EF7BEEDB8")
    IMethodMalloc : public IUnknown
    {
    public:
        virtual PVOID STDMETHODCALLTYPE Alloc( 
            /* [in] */ ULONG cb) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMethodMallocVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMethodMalloc * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMethodMalloc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMethodMalloc * This);
        
        PVOID ( STDMETHODCALLTYPE *Alloc )( 
            IMethodMalloc * This,
            /* [in] */ ULONG cb);
        
        END_INTERFACE
    } IMethodMallocVtbl;

    interface IMethodMalloc
    {
        CONST_VTBL struct IMethodMallocVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMethodMalloc_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMethodMalloc_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMethodMalloc_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMethodMalloc_Alloc(This,cb)	\
    (This)->lpVtbl -> Alloc(This,cb)

#endif /* COBJMACROS */


#endif 	/* C style interface */



PVOID STDMETHODCALLTYPE IMethodMalloc_Alloc_Proxy( 
    IMethodMalloc * This,
    /* [in] */ ULONG cb);


void __RPC_STUB IMethodMalloc_Alloc_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMethodMalloc_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


