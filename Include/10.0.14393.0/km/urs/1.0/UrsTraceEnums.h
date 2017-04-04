/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UrsTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _URSTRACEENUMS_H_
#define _URSTRACEENUMS_H_

#ifndef WDF_EXTERN_C
  #ifdef __cplusplus
    #define WDF_EXTERN_C       extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END   }
  #else
    #define WDF_EXTERN_C
    #define WDF_EXTERN_C_START
    #define WDF_EXTERN_C_END
  #endif
#endif

WDF_EXTERN_C_START

// begin_wpp config
// CUSTOM_TYPE(URS_HOST_INTERFACE_TYPE, ItemEnum(_URS_HOST_INTERFACE_TYPE));
// CUSTOM_TYPE(URS_ROLE, ItemEnum(_URS_ROLE));
// CUSTOM_TYPE(URS_HARDWARE_EVENT, ItemEnum(_URS_HARDWARE_EVENT));
// end_wpp

WDF_EXTERN_C_END

#endif // _URSTRACEENUMS_H_

