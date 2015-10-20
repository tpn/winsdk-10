//
//    Copyright (C) Microsoft.  All rights reserved.
//
// 
// Shared STL version header, included by yvals.h in all STL versions. 
// 




// CRT binaries will not have version tags, use
//  IFSTRIP to ensure CRT does not compile this code

#ifdef _CRTBLD_REAL
#error "CRT should be built against pre-ifstripped headers"
#endif

// WINCRT: detect mismatches between STL versions.  
//   grandfathering in projects that mixed
//   STL70 and STL60
#ifndef WIN_DETECT_STL_MISMATCH
    #if defined(WIN_FORCE_IGNORE_STL_MISMATCH)
        // DISABLE version check for just this compiland        
    #elif defined(_STL60_) || defined(_STL70_)
        #define WIN_DETECT_STL_MISMATCH  "60_or_70"
    #elif defined(_STL100_)
        #define WIN_DETECT_STL_MISMATCH  "100"
    #elif defined(_STL110_)
        #if defined(_MSVCPDLL)
            #define WIN_DETECT_STL_MISMATCH  "110_dll"
        #else
            #define WIN_DETECT_STL_MISMATCH  "110"
        #endif
    #endif
#endif
#if defined(WIN_DETECT_STL_MISMATCH) && (_MSC_FULL_VER >= 160000000)
    #pragma detect_mismatch("WIN_DETECT_STL_MISMATCH", WIN_DETECT_STL_MISMATCH)
#endif


/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
