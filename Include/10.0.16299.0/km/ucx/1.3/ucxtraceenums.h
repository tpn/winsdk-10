/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UcxTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _UCXTRACEENUMS_H_
#define _UCXTRACEENUMS_H_

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
// CUSTOM_TYPE(UCX_CONTROLLER_PARENT_BUS_TYPE, ItemEnum(_UCX_CONTROLLER_PARENT_BUS_TYPE));
// CUSTOM_TYPE(UCX_CONTROLLER_STATE, ItemEnum(_UCX_CONTROLLER_STATE));
// CUSTOM_TYPE(ENDPOINT_RESET_FLAGS, ItemEnum(_ENDPOINT_RESET_FLAGS));
// CUSTOM_TYPE(CONTROLLER_TYPE, ItemEnum(_CONTROLLER_TYPE));
// CUSTOM_TYPE(TRISTATE, ItemEnum(_TRISTATE));
// end_wpp

WDF_EXTERN_C_END

#endif // _UCXTRACEENUMS_H_


