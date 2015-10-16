/*++

Copyright (c) 2009  Microsoft Corporation.  All rights reserved.

Module Name:

    ntassert.h

Abstract:

    Defines DbgRaiseAssertionFailure, and the NT_ASSERT and NT_VERIFY macros.

    Specializations of NT_ASSERT include:

        NT_ASSERT_ASSUME(_exp) - In addition to the runtime assert in DBG code,
           this ensures that static analysis tools use _exp as a hint in both
           DBG and non-DBG analysis contexts to give more accurate results.
           _exp may not reference symbols defined in only in DBG.
           Unlike NT_VERIFY, _exp is not evaluated at runtime in non-DBG.

        NT_ASSERT_NOASSUME(_exp) - A runtime assert for DBG code, and static
           analysis tools will use _exp as a hint in DBG analysis only.
           _exp may reference symbols only defined in DBG.

    Examples of when to use which one:
        NT_ASSERT_ASSUME - Use this if the condition can never happen due to
           factors that are not obvious to static analysis tools.
           Good uses include assertions about how complex data structures are
           constructed or usage of private functions.
        NT_ASSERT_NOASSUME - Use this when you want runtime testing of the
           assertion as well as static analysis validation that the code is
           is robust. Also use this if the expression cannot be compiled in
           non-DBG builds (e.g. due to use of DBG-only symbols).

    Note that normally platform-specific definitions like
    DbgRaiseAssertionFailure would go to platform-specific subheaders (nti386_x,
    etc.), they are placed here instead for convenience.

--*/

#pragma once
#include <sal.h>

// begin_wdm begin_winnt begin_ntminiport

#ifdef __cplusplus
extern "C" {
#endif

//
// Assert exception.
//

#if !defined(_DBGRAISEASSERTIONFAILURE_) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#define _DBGRAISEASSERTIONFAILURE_

#if defined(_PREFAST_)

__analysis_noreturn
FORCEINLINE
VOID
DbgRaiseAssertionFailure (
    VOID
    );

#endif

#if defined(_AMD64_)

#if defined(_M_AMD64)

VOID
__int2c (
    VOID
    );

#pragma intrinsic(__int2c)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __int2c()

#endif // !defined(_PREFAST_)

#endif // defined(_M_AMD64)

#elif defined(_X86_)

#if defined(_M_IX86)

#if _MSC_FULL_VER >= 140030222

VOID
__int2c (
    VOID
    );

#pragma intrinsic(__int2c)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __int2c()

#endif // !defined(_PREFAST_)

#else // _MSC_FULL_VER >= 140030222

#pragma warning( push )
#pragma warning( disable : 4793 )

#if !defined(_PREFAST_)

__analysis_noreturn
FORCEINLINE
VOID
DbgRaiseAssertionFailure (
    VOID
    )

{
    __asm int 0x2c
}

#endif // !defined(_PREFAST_)

#pragma warning( pop )

#endif // _MSC_FULL_VER >= 140030222

#endif // defined(_M_IX86)

#elif defined(_IA64_)

#if defined(_M_IA64)

void
__break(
    _In_ int StIIM
    );

#pragma intrinsic (__break)

#define BREAK_DEBUG_BASE    0x080000
#define ASSERT_BREAKPOINT         (BREAK_DEBUG_BASE+3)  // Cause a STATUS_ASSERTION_FAILURE exception to be raised.

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __break(ASSERT_BREAKPOINT)

#endif // !defined(_PREFAST_)

#endif // defined(_M_IA64)

#elif defined(_ARM64_)

#if defined(_M_ARM64)

void
__break(
    _In_ int Code
    );

#pragma intrinsic (__break)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __break(0xf001)

#endif // !defined(_PREFAST_)

#endif // defined(_M_ARM64)

#elif defined(_ARM_)

#if defined(_M_ARM)

VOID
__emit(
    const unsigned __int32 opcode
    );

#pragma intrinsic(__emit)

#if !defined(_PREFAST_)

#define DbgRaiseAssertionFailure() __emit(0xdefc)     // THUMB_ASSERT

#endif // !defined(_PREFAST_)

#endif // defined(_M_ARM)

#endif // _AMD64_, _X86_, _IA64_, _ARM64_, _ARM_
#endif // !defined(_DBGRAISEASSERTIONFAILURE_) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#ifdef __cplusplus
}
#endif

// end_wdm end_winnt end_ntminiport

// begin_wdm begin_ntminiport

#if _MSC_VER >= 1300

#if defined(_PREFAST_)
// _Analysis_assume_ will never result in any code generation for _exp,
// so using it will not have runtime impact, even if _exp has side effects.
#define NT_ANALYSIS_ASSUME(_exp) _Analysis_assume_(_exp)
#else // _PREFAST_

// NT_ANALYSIS_ASSUME ensures that _exp is parsed in non-analysis compile.
// On DBG, it's guaranteed to be parsed as part of the normal compile, but with
// non-DBG, use __noop to ensure _exp is parseable but without code generation.
#if DBG
#define NT_ANALYSIS_ASSUME(_exp) ((void) 0)
#else // DBG
#define NT_ANALYSIS_ASSUME(_exp) __noop(_exp)
#endif // DBG

#endif // _PREFAST_

// NT_ASSERT_ACTION is the actual assertion action, i.e. raising runtime
// assertion failure. It should be used only by the macro of NT_ASSERT
// and NT_FRE_ASSERT below. 
#define NT_ASSERT_ACTION(_exp) \
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", L#_exp), \
         DbgRaiseAssertionFailure(), FALSE) : \
        TRUE)

#define NT_ASSERTMSG_ACTION(_msg, _exp) \
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", L##_msg), \
         DbgRaiseAssertionFailure(), FALSE) : \
        TRUE)

#define NT_ASSERTMSGW_ACTION(_msg, _exp) \
    ((!(_exp)) ? \
        (__annotation(L"Debug", L"AssertFail", _msg), \
         DbgRaiseAssertionFailure(), FALSE) : \
        TRUE)

#if DBG

#define NT_ASSERT_ASSUME(_exp) \
    (NT_ANALYSIS_ASSUME(_exp), NT_ASSERT_ACTION(_exp))

#define NT_ASSERTMSG_ASSUME(_msg, _exp) \
    (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSG_ACTION(_msg, _exp))

#define NT_ASSERTMSGW_ASSUME(_msg, _exp) \
    (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSGW_ACTION(_msg, _exp))

// For DBG builds, NT_ASSERT_ASSUME and NT_ASSERT_NOASSUME have the same
// behavior. The behavior only differs for non-DBG.
#define NT_ASSERT_NOASSUME     NT_ASSERT_ASSUME
#define NT_ASSERTMSG_NOASSUME  NT_ASSERTMSG_ASSUME
#define NT_ASSERTMSGW_NOASSUME NT_ASSERTMSGW_ASSUME

#define NT_VERIFY     NT_ASSERT
#define NT_VERIFYMSG  NT_ASSERTMSG
#define NT_VERIFYMSGW NT_ASSERTMSGW

#else // DBG

#define NT_ASSERT_ASSUME(_exp)           (NT_ANALYSIS_ASSUME(_exp), 0)
#define NT_ASSERTMSG_ASSUME(_msg, _exp)  (NT_ANALYSIS_ASSUME(_exp), 0)
#define NT_ASSERTMSGW_ASSUME(_msg, _exp) (NT_ANALYSIS_ASSUME(_exp), 0)

#define NT_ASSERT_NOASSUME(_exp)           ((void) 0)
#define NT_ASSERTMSG_NOASSUME(_msg, _exp)  ((void) 0)
#define NT_ASSERTMSGW_NOASSUME(_msg, _exp) ((void) 0)

#define NT_VERIFY(_exp)           (NT_ANALYSIS_ASSUME(_exp), ((_exp) ? TRUE : FALSE))
#define NT_VERIFYMSG(_msg, _exp ) (NT_ANALYSIS_ASSUME(_exp), ((_exp) ? TRUE : FALSE))
#define NT_VERIFYMSGW(_msg, _exp) (NT_ANALYSIS_ASSUME(_exp), ((_exp) ? TRUE : FALSE))

#endif // DBG

// NT_FRE_ASSERT always takes the assertion action whether DBG or non-DBG.
#define NT_FRE_ASSERT(_exp)           (NT_ANALYSIS_ASSUME(_exp), NT_ASSERT_ACTION(_exp))
#define NT_FRE_ASSERTMSG(_msg, _exp)  (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSG_ACTION(_msg, _exp))
#define NT_FRE_ASSERTMSGW(_msg, _exp) (NT_ANALYSIS_ASSUME(_exp), NT_ASSERTMSGW_ACTION(_msg, _exp))

#ifdef NT_ASSERT_ALWAYS_ASSUMES

#define NT_ASSERT     NT_ASSERT_ASSUME
#define NT_ASSERTMSG  NT_ASSERTMSG_ASSUME
#define NT_ASSERTMSGW NT_ASSERTMSGW_ASSUME

#else // NT_ASSERT_ALWAYS_ASSUMES

#define NT_ASSERT     NT_ASSERT_NOASSUME
#define NT_ASSERTMSG  NT_ASSERTMSG_NOASSUME
#define NT_ASSERTMSGW NT_ASSERTMSGW_NOASSUME

#endif // NT_ASSERT_ALWAYS_ASSUMES

#endif // _MSC_VER >= 1300

// end_wdm end_ntminiport

#define WIN_ASSERT      NT_ASSERT
#define WIN_ASSERTMSG   NT_ASSERTMSG
#define WIN_ASSERTMSGW  NT_ASSERTMSGW
#define WIN_VERIFY      NT_VERIFY
#define WIN_VERIFYMSG   NT_ASSERTMSG
#define WIN_VERIFYMSGW  NT_ASSERTMSGW

