/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UcmTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _UCMTRACEENUMS_H_
#define _UCMTRACEENUMS_H_

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
// CUSTOM_TYPE(UCM_TYPEC_OPERATING_MODE, ItemEnum(_UCM_TYPEC_OPERATING_MODE));
// CUSTOM_TYPE(UCM_TYPEC_PARTNER, ItemEnum(_UCM_TYPEC_PARTNER));
// CUSTOM_TYPE(UCM_TYPEC_CURRENT, ItemEnum(_UCM_TYPEC_CURRENT));
// CUSTOM_TYPE(UCM_POWER_ROLE, ItemEnum(_UCM_POWER_ROLE));
// CUSTOM_TYPE(UCM_DATA_ROLE, ItemEnum(_UCM_DATA_ROLE));
// CUSTOM_TYPE(UCM_PD_CONN_STATE, ItemEnum(_UCM_PD_CONN_STATE));
// CUSTOM_TYPE(UCM_CHARGING_STATE, ItemEnum(_UCM_CHARGING_STATE));
// end_wpp

WDF_EXTERN_C_END

#endif // _UCMTRACEENUMS_H_

