#ifndef _cmoemutil_h_
#define _cmoemutil_h_

#ifdef __cplusplus
extern "C" {
#endif

// also defined in cellularapi.h
#ifndef __cellularapi_h__
#define CELLULAR_ACCESS_STRING_LENGTH 64
#endif

typedef enum _CELLULAR_PDN_TYPE
{
    PDN_TYPE_IPV4 = 0,
    PDN_TYPE_IPV6 = 1,
    PDN_TYPE_IPV4V6 = 2,
    PDN_TYPE_IPV4V6XLAT = 3
} CELLULAR_PDN_TYPE, *PCELLULAR_PDN_TYPE;

BOOL __stdcall ActivateCellularConnection(
    __in_z  const WCHAR* pszHost,
    __out_ecount_z(CELLULAR_ACCESS_STRING_LENGTH) WCHAR* pwszAccessString,
    __out   PCELLULAR_PDN_TYPE pPdnType,
    __out   HANDLE* phConn);

BOOL __stdcall DeactivateCellularConnection(
    __in    HANDLE hConn);

DWORD __stdcall GetConnectionInterfaceIndex(
    __in HANDLE hConn,
    __out ULONG* pulInterfaceIndex);

BOOL __stdcall CmUtilSetWiFiActive(
    __out   HANDLE* phConn);

void __stdcall CmUtilSetWiFiDormant(
    __in    HANDLE hConn);

BOOL __stdcall IsRestrictBackgroundDataAlways();

BOOL __stdcall IsRestrictBackgroundDataNearLimit();

BOOL __stdcall IsRestrictBackgroundDataRoaming();


#ifdef __cplusplus
}
#endif

#endif // _cmoemutil_h_

