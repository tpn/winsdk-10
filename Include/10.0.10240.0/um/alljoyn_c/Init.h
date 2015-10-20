/**
 * @file
 * Functions required to startup and cleanup AllJoyn.
 */

/******************************************************************************
 * Copyright AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 ******************************************************************************/
#ifndef _ALLJOYN_C_INIT_H
#define _ALLJOYN_C_INIT_H

#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/Status.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This must be called prior to instantiating or using any AllJoyn
 * functionality.
 *
 * alljoyn_shutdown must be called for each invocation of alljoyn_init.
 *
 * @return
 *  - #ER_OK on success
 *  - error code indicating failure otherwise
 */
extern AJ_API QStatus AJ_CALL alljoyn_init(void);

/**
 * Call this to release any resources acquired in alljoyn_init().  No AllJoyn
 * functionality may be used after calling this.
 *
 * alljoyn_shutdown must be called for each invocation of alljoyn_init.
 * alljoyn_shutdown must not be called without a prior alljoyn_init call.
 *
 * @return
 *  - #ER_OK on success
 *  - error code indicating failure otherwise
 */
extern AJ_API QStatus AJ_CALL alljoyn_shutdown(void);

#ifdef DOXYGEN_DOC

/**
 * This must be called before using any AllJoyn router functionality.
 *
 * For an application that is a routing node (either standalone or bundled), the
 * complete initialization sequence is:
 * @code
 * alljoyn_init();
 * alljoyn_routerinit();
 * @endcode
 *
 * alljoyn_routershutdown must be called for each invocation of alljoyn_routerinit.
 *
 * @return
 *  - #ER_OK on success
 *  - error code indicating failure otherwise
 */
extern AJ_API QStatus AJ_CALL alljoyn_routerinit(void);

/**
 * Call this to release any resources acquired in alljoyn_routerinit().
 *
 * For an application that is a routing node (either standalone or bundled), the
 * complete shutdown sequence is:
 * @code
 * alljoyn_routershutdown();
 * alljoyn_shutdown();
 * @endcode
 *
 * alljoyn_routershutdown must be called for each invocation of alljoyn_routerinit.
 * alljoyn_routershutdown must not be called without a prior alljoyn_routerinit call.
 *
 * @return
 *  - #ER_OK on success
 *  - error code indicating failure otherwise
 */
extern AJ_API QStatus AJ_CALL alljoyn_routershutdown(void);

#else

/*
 * For usage, see the docs above for alljoyn_routerinit() and
 * alljoyn_routershutdown().
 *
 * The macro magic here is to allow compilation with or without router support.
 *
 * When router support is not compiled in, alljoyn_routerinit is not used and
 * there is no undefined reference to AllJoynRouterInit.  When router support is
 * compiled in, alljoyn_routerinit is used and the reference to
 * AllJoynRouterInit is contained in the router library.
 */
extern AJ_API QStatus AJ_CALL AllJoynRouterInit(void);
#define alljoyn_routerinit AllJoynRouterInit
extern AJ_API QStatus AJ_CALL AllJoynRouterShutdown(void);
#define alljoyn_routershutdown AllJoynRouterShutdown

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
