/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UdecxTraceEnums.h

Abstract:
    Generated trace enums

Environment:
    kernel mode only

--*/

#ifndef _UDECXTRACEENUMS_H_
#define _UDECXTRACEENUMS_H_

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
// CUSTOM_TYPE(UDECX_USB_DEVICE_SPEED, ItemEnum(_UDECX_USB_DEVICE_SPEED));
// CUSTOM_TYPE(UDECX_ENDPOINT_TYPE, ItemEnum(_UDECX_ENDPOINT_TYPE));
// CUSTOM_TYPE(UDECX_ENDPOINTS_CONFIGURE_TYPE, ItemEnum(_UDECX_ENDPOINTS_CONFIGURE_TYPE));
// CUSTOM_TYPE(UDECX_USB_DEVICE_WAKE_SETTING, ItemEnum(_UDECX_USB_DEVICE_WAKE_SETTING));
// CUSTOM_TYPE(UDECX_USB_DEVICE_FUNCTION_POWER, ItemEnum(_UDECX_USB_DEVICE_FUNCTION_POWER));
// CUSTOM_TYPE(UDECX_WDF_DEVICE_RESET_ACTION, ItemEnum(_UDECX_WDF_DEVICE_RESET_ACTION));
// end_wpp

WDF_EXTERN_C_END

#endif // _UDECXTRACEENUMS_H_

