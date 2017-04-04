/*++

Copyright (c) 2008  Microsoft Corporation

Module Name:

    apiset.h

Abstract:

    This module contains definitions related to the management of API namespaces.

Author:

    Arun Kishan (arunki) 14-Sep-2008

--*/

#ifndef _API_SET_H_
#define _API_SET_H_

//
// API set interface definitions.
//

#define API_SET_OVERRIDE(X)             X##Implementation
#define API_SET_LEGACY_OVERRIDE_DEF(X)  X = API_SET_OVERRIDE(X)
#define API_SET_OVERRIDE_DEF(X)         API_SET_LEGACY_OVERRIDE_DEF(X) PRIVATE

#ifdef _API_SET_HOST

#undef API_SET_LIBRARY

#define API_SET_LIBRARY(X)

#undef API_SET
#undef API_SET_PRIVATE
#undef API_SET_BY_ORDINAL
#undef API_SET_BY_ORDINAL_PRIVATE

#undef API_SET_LEGACY
#undef API_SET_LEGACY_PRIVATE
#undef API_SET_LEGACY_BY_ORDINAL
#undef API_SET_LEGACY_BY_ORDINAL_PRIVATE

#define API_SET(X)                                  X PRIVATE
#define API_SET_PRIVATE(X)                          X PRIVATE
#define API_SET_BY_ORDINAL(X,O,PO)                  X @##O NONAME PRIVATE
#define API_SET_BY_ORDINAL_PRIVATE(X,O,PO)          X @##O NONAME PRIVATE

#define API_SET_LEGACY(X,L)                         X PRIVATE
#define API_SET_LEGACY_PRIVATE(X,L)                 X PRIVATE
#define API_SET_LEGACY_BY_ORDINAL(X,L,O,PO)         X @##O NONAME PRIVATE
#define API_SET_LEGACY_BY_ORDINAL_PRIVATE(X,L,O,PO) X @##O NONAME PRIVATE

#else

#ifndef _API_SET_LEGACY_TARGET

#define API_SET(X)                                  X
#define API_SET_PRIVATE(X)                          X PRIVATE
#define API_SET_BY_ORDINAL(X,O,PO)                  X @##O NONAME
#define API_SET_BY_ORDINAL_PRIVATE(X,O,PO)          X @##O NONAME PRIVATE

#define API_SET_LEGACY(X,L)                         X
#define API_SET_LEGACY_PRIVATE(X,L)                 X PRIVATE
#define API_SET_LEGACY_BY_ORDINAL(X,L,O,PO)         X @##O NONAME
#define API_SET_LEGACY_BY_ORDINAL_PRIVATE(X,L,O,PO) X @##O NONAME PRIVATE

#else

#define API_SET(X)                                  X = _API_SET_LEGACY_TARGET##.##X
#define API_SET_PRIVATE(X)                          X = _API_SET_LEGACY_TARGET##.##X PRIVATE
#define API_SET_BY_ORDINAL(X,O,PO)                  X = _API_SET_LEGACY_TARGET##.##PO @##O NONAME
#define API_SET_BY_ORDINAL_PRIVATE(X,O,PO)          X = _API_SET_LEGACY_TARGET##.##PO @##O NONAME PRIVATE

#define API_SET_LEGACY(X,L)                         X = L##.##X
#define API_SET_LEGACY_PRIVATE(X,L)                 X = L##.##X PRIVATE
#define API_SET_LEGACY_BY_ORDINAL(X,L,O,PO)         X = L##.##PO @##O NONAME
#define API_SET_LEGACY_BY_ORDINAL_PRIVATE(X,L,O,PO) X = L##.##PO @##O NONAME PRIVATE

#endif // _API_SET_LEGACY_TARGET

#define API_SET_LIBRARY(X)              LIBRARY X

#endif // _API_SET_HOST

#endif // _API_SET_H_
