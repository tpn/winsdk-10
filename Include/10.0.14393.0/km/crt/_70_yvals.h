
/* yvals.h values header for Microsoft C/C++ */
#pragma once
#ifndef _YVALS
#define _YVALS

#include <crtdefs.h>

#ifdef  _MSC_VER
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#define _CPPLIB_VER	403

#if defined(MRTDLL) && (_MSC_VER >= 1400)
// process-global is the default for code built with /clr or /clr:oldSyntax.
// appdomain-global is the default for code built with /clr:pure.
// Code in MSVCM is built with /clr, but is used by user code built with /clr:pure
// so it must conform to the expectations of /clr:pure clients.
// Use __PURE_APPDOMAIN_GLOBAL when a global needs to be appdomain-global for pure
// clients and process-global for mixed clients.
#define __PURE_APPDOMAIN_GLOBAL   __declspec(appdomain)
#else
#define __PURE_APPDOMAIN_GLOBAL
#endif

#if defined (_M_CEE_PURE)
#define __CLR_OR_THIS_CALL  __clrcall
#else
#define __CLR_OR_THIS_CALL
#endif

#if defined (_M_CEE_PURE)
#define __CLRCALL_OR_CDECL __clrcall
#else
#define __CLRCALL_OR_CDECL __cdecl
#endif

/*
TEMP: Because the m<>n thunks don't currently correctly call copy constructors
we force all SCL code to be inline here
*/
// Remove this once stdhpp integrates from VS - also fix crtdefs.h
#if defined(_M_CEE) && !defined(_STATIC_CPPLIB)
#error "_STATIC_CPPLIB required for _M_CEE"
#endif

		/* NAMING PROPERTIES */
#define _WIN32_C_LIB	1

		/* THREAD AND LOCALE CONTROL */
#define _MULTI_THREAD	1	/* nontrivial locks if multithreaded */
#define _IOSTREAM_OP_LOCKS	1	/* lock iostream operations */
#define _GLOBAL_LOCALE	0	/* 0 for per-thread locales, 1 for shared */

		/* THREAD-LOCAL STORAGE */
#define _COMPILER_TLS	1	/* 1 if compiler supports TLS directly */
 #if _MULTI_THREAD
  #define _TLS_QUAL	__declspec(thread)	/* TLS qualifier, if any */

 #else /* _MULTI_THREAD */
  #define _TLS_QUAL
 #endif /* _MULTI_THREAD */

 #ifndef _HAS_EXCEPTIONS
  #define  _HAS_EXCEPTIONS  1	/* predefine as 0 to disable exceptions */
#else
      #error defining "_HAS_EXCEPTIONS" is not supported
 #endif /* _HAS_EXCEPTIONS */

 #ifndef _HAS_NAMESPACE
  #define  _HAS_NAMESPACE  1	/* predefine as 0 to disable exceptions */
 #endif /* _HAS_NAMESPACE */

#ifndef _HAS_IMMUTABLE_SETS
 #define _HAS_IMMUTABLE_SETS 0
#endif /* _HAS_IMMUTABLE_SETS */

#ifndef _HAS_STRICT_CONFORMANCE
 #define _HAS_STRICT_CONFORMANCE 0
#endif /* _HAS_STRICT_CONFORMANCE */

#define _GLOBAL_USING	1

// Force iterator debugging off for STATIC CPPLIB variants for now.

#if defined (_STATIC_CPPLIB)
#define _HAS_ITERATOR_DEBUGGING 0
#endif

#if !defined (_HAS_ITERATOR_DEBUGGING)
    #if defined(_DEBUG) || defined(_SYSCRT_DEBUG)
		#define _HAS_ITERATOR_DEBUGGING	1	/* for range checks, etc. */
	#else
		#define _HAS_ITERATOR_DEBUGGING	0
	#endif	/* defined (_DEBUG) */
#else
	#if !defined (_DEBUG) && !defined (_SYSCRT_DEBUG) && _HAS_ITERATOR_DEBUGGING != 0
		#include <crtwrn.h>
		#pragma _CRT_WARNING( _NO_ITERATOR_DEBUGGING )
		#undef _HAS_ITERATOR_DEBUGGING
		#define _HAS_ITERATOR_DEBUGGING 0
	#endif
#endif /* !defined (_HAS_ITERATOR_DEBUGGING) */

#include <stlshared.h>

/*
TEMP: Because object sizes change with iterator debugging, 
we force all SCL code to be inline here
*/
#if !(_HAS_ITERATOR_DEBUGGING) && !defined(_STATIC_CPPLIB) && (defined(_DEBUG) || defined(_SYSCRT_DEBUG))
#define _STATIC_CPPLIB
#endif

/* _SECURE_CRT definitions */

#if !defined(_STR2WSTR)
#define __STR2WSTR(str)    L##str
#define _STR2WSTR(str)     __STR2WSTR(str)
#endif

#if !defined(__FILEW__)
#define __FILEW__          _STR2WSTR(__FILE__)
#endif

#if !defined(__FUNCTIONW__)
#define __FUNCTIONW__      _STR2WSTR(__FUNCTION__)
#endif

/* _SECURE_SCL switches: default values */

#if !defined (_SECURE_SCL)
#define _SECURE_SCL 0
#endif

#if _SECURE_SCL && !defined(_STATIC_CPPLIB)
#define _STATIC_CPPLIB
#endif

#if !defined (_SECURE_SCL_DEPRECATE)
#define _SECURE_SCL_DEPRECATE 1
#endif

#if !defined (_SECURE_SCL_THROWS)
#define _SECURE_SCL_THROWS 0
#endif

/* _SECURE_SCL switches: helper macros */

#if _SECURE_SCL && _SECURE_SCL_DEPRECATE
#define _SCL_INSECURE_DEPRECATE __declspec(deprecated)
#else
#define _SCL_INSECURE_DEPRECATE
#endif

/*
 * Assert in debug builds.
 * set errno and return
 *
 */
 #if defined(_DEBUG) || defined(_SYSCRT_DEBUG)
#define _SCL_SECURE_INVALID_PARAMETER(expr) ::_invalid_parameter(__STR2WSTR(#expr), __FUNCTIONW__, __FILEW__, __LINE__, 0)
 #else
#define _SCL_SECURE_INVALID_PARAMETER(expr) ::_invalid_parameter(NULL, NULL, NULL, 0, 0)
 #endif

 #define _SCL_SECURE_INVALID_ARGUMENT					\
	{													\
		_ASSERTE(("SCL Secure Invalid Argument", 0));	\
		_SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT;			\
	}
 #define _SCL_SECURE_OUT_OF_RANGE						\
	{													\
		_ASSERTE(("SCL Secure Out Of Range", 0));		\
		_SCL_SECURE_OUT_OF_RANGE_NO_ASSERT;				\
	}

 #if _SECURE_SCL_THROWS

 #define _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT		_Xinvarg()
 #define _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT			_Xran()

 #else /* _SECURE_SCL_THROWS */

 #define _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT		_SCL_SECURE_INVALID_PARAMETER("invalid argument")
 #define _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT			_SCL_SECURE_INVALID_PARAMETER("out of range")

 #endif /* _SECURE_SCL_THROWS */

 #define _SCL_SECURE_ALWAYS_VALIDATE(cond)				\
	{													\
		if (!(cond))									\
		{												\
			_ASSERTE((#cond, 0));						\
			_SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT;		\
		}												\
	}

 #define _SCL_SECURE_ALWAYS_VALIDATE_RANGE(cond)		\
	{													\
		if (!(cond))									\
		{												\
			_ASSERTE((#cond, 0));						\
			_SCL_SECURE_OUT_OF_RANGE_NO_ASSERT;			\
		}												\
	}

// validation a la Secure CRT
 #define _SCL_SECURE_CRT_VALIDATE(cond, retvalue)		\
	{													\
		if (!(cond))									\
		{												\
			_ASSERTE((#cond, 0));						\
			_SCL_SECURE_INVALID_PARAMETER(cond);		\
			return (retvalue);							\
		}												\
	}

 #if _SECURE_SCL

 #define _SCL_SECURE_VALIDATE(cond)						\
	{													\
		if (!(cond))									\
		{												\
			_ASSERTE((#cond, 0));						\
			_SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT;		\
		}												\
	}

 #define _SCL_SECURE_VALIDATE_RANGE(cond)				\
	{													\
		if (!(cond))									\
		{												\
			_ASSERTE((#cond, 0));						\
			_SCL_SECURE_OUT_OF_RANGE_NO_ASSERT;			\
		}												\
	}
 
 #define _SCL_SECURE_MOVE(func, dst, size, src, count)	func((dst), (size), (src), (count))
 #define _SCL_SECURE_COPY(func, dst, size, src, count)	func((dst), (size), (src), (count))

 #if !defined(_SCL_INSECURE_DEPRECATE)
  #define _SCL_INSECURE_DEPRECATE	__declspec(deprecated)
 #endif

 #else
 
 #define _SCL_SECURE_VALIDATE(cond) 
 #define _SCL_SECURE_VALIDATE_RANGE(cond) 
 
 #define _SCL_SECURE_MOVE(func, dst, size, src, count)	func((dst), (src), (count))
 #define _SCL_SECURE_COPY(func, dst, size, src, count)	func((dst), (src), (count))

 #endif

#include <use_ansi.h>

#ifndef _VC6SP2
 #define _VC6SP2	0 /* define as 1 to fix linker errors with V6.0 SP2 */
#endif /* _VC6SP2 */

/* Define _CRTIMP2 */
 #ifndef _CRTIMP2

   #if defined(_DLL) && !defined(_STATIC_CPPLIB)
    #define _CRTIMP2	__declspec(dllimport)

   #else   /* ndef _DLL && !STATIC_CPPLIB */
    #define _CRTIMP2
   #endif  /* _DLL && !STATIC_CPPLIB */

 #endif  /* _CRTIMP2 */

 #if defined(_DLL) && !defined(_STATIC_CPPLIB) && !defined(_M_CEE_PURE)
  #define _DLL_CPPLIB
 #endif

#if !defined(_CRTDATA2)
    #define _CRTDATA2 _CRTIMP2
#endif


  #define _DEPRECATED	__declspec(deprecated)



		/* NAMESPACE */

 #if defined(__cplusplus)
  #define _STD_BEGIN	namespace std {
  #define _STD_END		}
  #define _STD	::std::

/*
We use the stdext (standard extension) namespace to contain extensions that are not part of the current standard
*/
  #define _STDEXT_BEGIN	    namespace stdext {
  #define _STDEXT_END		}
  #define _STDEXT	        ::stdext::

  #ifdef _STD_USING
   #define _C_STD_BEGIN	namespace std {	/* only if *.c compiled as C++ */
   #define _C_STD_END	}
   #define _CSTD	::std::

  #else /* _STD_USING */
/* #define _GLOBAL_USING	*.h in global namespace, c* imports to std */

   #define _C_STD_BEGIN
   #define _C_STD_END
   #define _CSTD	::
  #endif /* _STD_USING */

  #define _C_LIB_DECL		extern "C" {	/* C has extern "C" linkage */
  #define _END_C_LIB_DECL	}
  #define _EXTERN_C			extern "C" {
  #define _END_EXTERN_C		}

 #else /* __cplusplus */
  #define _STD_BEGIN
  #define _STD_END
  #define _STD

  #define _C_STD_BEGIN
  #define _C_STD_END
  #define _CSTD

  #define _C_LIB_DECL
  #define _END_C_LIB_DECL
  #define _EXTERN_C
  #define _END_EXTERN_C
 #endif /* __cplusplus */

 #define _Restrict	restrict

 #ifdef __cplusplus
_STD_BEGIN
typedef bool _Bool;
_STD_END
 #endif /* __cplusplus */

		/* VC++ COMPILER PARAMETERS */
#define _LONGLONG	__int64
#define _ULONGLONG	unsigned __int64
#define _LLONG_MAX	0x7fffffffffffffff
#define _ULLONG_MAX	0xffffffffffffffff

		/* INTEGER PROPERTIES */
#define _C2			1	/* 0 if not 2's complement */

#define _MAX_EXP_DIG	8	/* for parsing numerics */
#define _MAX_INT_DIG	32
#define _MAX_SIG_DIG	36

typedef _LONGLONG _Longlong;
typedef _ULONGLONG _ULonglong;

		/* STDIO PROPERTIES */
#define _Filet _iobuf

 #ifndef _FPOS_T_DEFINED
  #define _FPOSOFF(fp)	((long)(fp))
 #endif /* _FPOS_T_DEFINED */

#define _IOBASE	_base
#define _IOPTR	_ptr
#define _IOCNT	_cnt

		/* MULTITHREAD PROPERTIES */
		/* LOCK MACROS */
#define _LOCK_LOCALE	0
#define _LOCK_MALLOC	1
#define _LOCK_STREAM	2
#define _LOCK_DEBUG		3
#define _MAX_LOCK		4	/* one more than highest lock number */

 #ifdef __cplusplus
_STD_BEGIN

#if (_MSC_VER < 1400) || defined(_STATIC_MGDLIB)
#define _THISCALL
#else
#define _THISCALL __thiscall
#endif

		// CLASS _Lockit
class _CRTIMP2_PURE _Lockit
	{	// lock while object in existence -- MUST NEST
public:
  #if _MULTI_THREAD


#if defined (_M_CEE_PURE)
	explicit __CLR_OR_THIS_CALL _Lockit()	// set default lock
        : _Locktype(0)
    {
        _Lockit_ctor(this);
    }
	explicit __CLR_OR_THIS_CALL _Lockit(int _Kind)	// set the lock
    {
        _Lockit_ctor(this, _Kind);
    }
	__CLR_OR_THIS_CALL ~_Lockit()	// clear the lock
    {
        _Lockit_dtor(this);
    }
    #else
    explicit _THISCALL _Lockit();	// set default lock
	explicit _THISCALL _Lockit(int);	// set the lock
	_THISCALL ~_Lockit();	// clear the lock
    #endif

private:
    static _MRTIMP2_NPURE_FUNCTION(void) _Lockit_ctor(_Lockit *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Lockit_ctor(_Lockit *, int);
    static _MRTIMP2_NPURE_FUNCTION(void) _Lockit_dtor(_Lockit *);

	__CLR_OR_THIS_CALL _Lockit(const _Lockit&);				// not defined
	_Lockit& __CLR_OR_THIS_CALL operator=(const _Lockit&);	// not defined

	int _Locktype;

  #else /* _MULTI_THREAD */

	explicit _Lockit()
		{	// do nothing
		}

	explicit _Lockit(int)
		{	// do nothing
		}

	~_Lockit()
		{	// do nothing
		}
  #endif /* _MULTI_THREAD */

	};

class _CRTIMP2_PURE _Mutex
	{	// lock under program control
public:

  #if _MULTI_THREAD

    
#if defined (_M_CEE_PURE)
	__CLR_OR_THIS_CALL _Mutex()
    {
        _Mutex_ctor(this);
    }
	__CLR_OR_THIS_CALL ~_Mutex()
    {
        _Mutex_dtor(this);
    }
	void __CLR_OR_THIS_CALL _Lock()
    {
        _Mutex_Lock(this);
    }
	void __CLR_OR_THIS_CALL _Unlock()
    {
        _Mutex_Unlock(this);
    }
    #else
    _THISCALL _Mutex();
	_THISCALL ~_Mutex();
	void _THISCALL _Lock();
	void _THISCALL _Unlock();
    #endif

private:
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_ctor(_Mutex *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_dtor(_Mutex *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_Lock(_Mutex *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Mutex_Unlock(_Mutex *);

	__CLR_OR_THIS_CALL _Mutex(const _Mutex&);				// not defined
	_Mutex& __CLR_OR_THIS_CALL operator=(const _Mutex&);	// not defined
	void *_Mtx;

  #else /* _MULTI_THREAD */
    void _Lock()
		{	// do nothing
		}

	void _Unlock()
		{	// do nothing
		}
  #endif /* _MULTI_THREAD */

	};

class _CRTIMP2_PURE _Init_locks
	{	// initialize mutexes
public:

 #if _MULTI_THREAD
    

#if defined (_M_CEE_PURE)
	__CLR_OR_THIS_CALL _Init_locks()
    {
        _Init_locks_ctor(this);
    }
	__CLR_OR_THIS_CALL ~_Init_locks()
    {
        _Init_locks_dtor(this);
    }
    #else
    _THISCALL _Init_locks();
	_THISCALL ~_Init_locks();
    #endif

private:
    static _MRTIMP2_NPURE_FUNCTION(void) _Init_locks_ctor(_Init_locks *);
    static _MRTIMP2_NPURE_FUNCTION(void) _Init_locks_dtor(_Init_locks *);

 #else /* _MULTI_THREAD */
	_Init_locks()
		{	// do nothing
		}

	~_Init_locks()
		{	// do nothing
		}
 #endif /* _MULTI_THREAD */

	};
_STD_END
 #endif /* __cplusplus */



		/* MISCELLANEOUS MACROS AND TYPES */
_C_STD_BEGIN

#if defined(_M_CEE_PURE) && defined(_STATIC_MGDLIB)
#define _ATEXIT_CALLBACK_CALLING_CONVENTION __clrcall
#else
#define _ATEXIT_CALLBACK_CALLING_CONVENTION __cdecl
#endif

typedef void (_ATEXIT_CALLBACK_CALLING_CONVENTION* _ATEXIT_CALLBACK)(void);

_MRTIMP2_FUNCTION(void) _Atexit(_ATEXIT_CALLBACK);

typedef int _Mbstatet;

#define _ATEXIT_T	void
#define _Mbstinit(x)	mbstate_t x = {0}
_C_STD_END

  #define _EXTERN_TEMPLATE	template
  #define _THROW_BAD_ALLOC	_THROW1(...)

#if defined(__cplusplus)
#if defined(_MANAGED)
class _STL70 { };
class _STLVersionTag { };
#else
class _STL70;
class _STLVersionTag;
#endif
#define _STL_VERSION_DECLARE          , class _STLVersionTag
#define _STL_VERSION_DECLARE_DEFAULT  , class _STLVersionTag = _STL70
#define _STL_VERSION_PASS             , _STLVersionTag
#define _STL_VERSION_FUNCTION         , _STL * = 0 /* for most function */
#define _STL_VERSION_FUNCTION0          _STL * = 0 /* for functions with otherwise 0 parameters */
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif /* _YVALS */


/*
 * Copyright (c) 1992-2004 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
 V4.03:0009 */
// The file \sdpublic\sdk\inc\crt\_70_yvals.h was reviewed by LCA in June 2011 and per license is
//   acceptable for Microsoft use under Dealpoint ID 46582, 201971
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
