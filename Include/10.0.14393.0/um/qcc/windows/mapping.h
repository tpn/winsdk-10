/**
 * @file
 *
 * Map API names for Win32
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
#ifndef _TOOLCHAIN_QCC_MAPPING_H
#define _TOOLCHAIN_QCC_MAPPING_H

#include <windows.h>
#include <float.h>

/**
 * Map stroll to _strtoi64
 *
 * stroll does not properly map in Windows; this is needed to ensure calls to
 * strtoll(const char *nptr, char **endptr, int base) will compile in Windows.
 */
#define strtoll _strtoi64

/**
 * Map strtoull to _strtoui64
 *
 * strtoull does not properly map in Windows; this is needed to ensure calls to
 * strtoull(const char *nptr, char **endptr, int base) will compile in Windows.
 */
#define strtoull _strtoui64

/**
 * Map strcasecmp to _stricmp
 *
 * strcasecmp does not properly map in Windows; this is needed to ensure calls to
 * strcasecmp(const char *s1, const char *s2) will compile in Windows.
 */
#define strcasecmp _stricmp

/**
 * Map strdup to _strdup
 * strdup does not properly map in Windows; this is needed to ensure calls to
 * strdup(const chat *strSource) will compile in Windows.
 */
#define strdup _strdup

#if _MSC_VER < 1800   /* Versions prior to MSVC 2013 */

/**
 * Map fpclassify to _fpclass
 *
 * fpclassify does not properly map in Windows; this is needed to ensure calls to
 * fpclassify(x) will compile in Windows.
 */
#define fpclassify _fpclass

/** macro representing floating point value that is not-a-number */
#define FP_NAN (_FPCLASS_SNAN | _FPCLASS_QNAN)
/** macro representing floating point value positive or negative zero */
#define FP_ZERO (_FPCLASS_NZ | _FPCLASS_PZ)
/** macro representing floating point value positive or negative infinity */
#define FP_INFINITE (_FPCLASS_NINF | _FPCLASS_PINF)
#else
#ifdef __cplusplus
#include <algorithm>
#endif
#endif

/**
 * Map QCC_ASSERT to _ASSERTE if not already defined.
 *
 * _ASSERTE allows the developer to break into a debugger instead of aborting.
 */
#ifndef QCC_ASSERT

/* <crtdbg.h> keys off of the presence of _DEBUG, not the absence of NDEBUG.
 * Make sure _DEBUG is defined if NDEBUG is not so _ASSERTE is correctly defined
 * for both build variants. This must be done before <crtdbg.h> is included.
 */
#ifndef NDEBUG
#ifndef _DEBUG
#define _DEBUG
#endif
#endif

#include <crtdbg.h>

#define QCC_ASSERT(expr) _ASSERTE(expr)

#endif /* QCC_ASSERT */
/// @endcond

/**
 * @defgroup windows_groupid_names The GroupID names
 * The GroupID names for Universal, Desktop, and Whitelisted Windows Applications. These GroupIDs
 * are used to enforce the Windows app isolation policies.
 */
///@{
/**
 * GroupID name for desktop Windows applications.
 */
#define DESKTOP_APPLICATION           "DesktopApplication"
/**
 * GroupID name for universal Windows applications.
 */
#define UNIVERSAL_WINDOWS_APPLICATION "UniversalWindowsApplication"
/**
 * GroupID name for white listed Windows applications.
 */
#define WHITELISTED_APPLICATION       "WhitelistedApplication"
///@}

#endif
