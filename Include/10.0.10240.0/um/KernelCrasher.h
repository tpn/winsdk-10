//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#include <stdlib.h>
#include <SaverShared.h>

typedef enum _CRASHER_EXCEPTION_CODE
{
    Unspecified                 = 0x1000F000,
    BlankScreen                 = 0x1000F002,
    Input                       = 0x1000F003,
    Watchdog                    = 0x1000F004,
    StartNotVisible             = 0x1000F005,
    NavigationModel             = 0x1000F006,
    OutOfMemory                 = 0x1000F007,
    Graphics                    = 0x1000F008,
    NavServerTimeout            = 0x1000F009,
    ChromeProcessCrash          = 0x1000F00A,
    NotificationDismissal       = 0x1000F00B,
    SpeechDismissal             = 0x1000F00C,
    CallDismissal               = 0x1000F00D,
    AppBarDismissal             = 0x1000F00E, 
    RilAdaptationCrash          = 0x1000F00F,
    AppListUnreachable          = 0x1000F010,    
    ReportNotificationFailure   = 0x1000F011,    
    UnexpectedShutdown          = 0x1000F012,
    RPCFailure                  = 0x1000F013,
    AuxiliaryFullDump           = 0x1000F014,
    AccountProvSvcInitFailure   = 0x1000F015,
    MtbfCommandTimeout          = 0x1000F100,
    MtbfCommandHang             = 0x1000F101,
    MtbfPassBugCheck            = 0x1000F102,
    MtbfIOError                 = 0x1000F103,
    RenderThreadHang            = 0x1000F200,
    RenderMobileUIOOM           = 0x1000F201,
    DeviceUpdateUnspecified     = 0x1000F300,
    AudioDriverHang             = 0x1000F400,
    BatteryPullOut              = 0x1000F500,
    MediaCoreTestHang           = 0x1000F600,
    ResourceManagement          = 0x1000F700,
    CaptureService              = 0x1000F800,
    WaitForShellReady           = 0x1000F900,
    NonResponsiveProcess        = 0xC0000194,
    SickApplication             = 0x66888866
} CRASHER_EXCEPTION_CODE;

#ifndef __FUNCTION__
#define __FUNCTION__ "UnknownFunction"
#endif

//
// Redirect the old function name GenerateKernelBugCheck to the new macro
// so we don't break them and they also get new functionality.
//
#define GenerateKernelBugCheck GENERATE_KERNEL_BUG_CHECK

#define GENERATE_KERNEL_BUG_CHECK( \
            code, \
            dwParameter1, \
            dwParameter2, \
            dwParameter3, \
            dwParameter4 \
        ) \
        GenerateKernelBugCheckEx( \
            code, \
            dwParameter1, \
            dwParameter2, \
            dwParameter3, \
            dwParameter4, \
            _T(__FUNCTION__), \
            _T(#code) \
        )

///<summary>
/// Bugcheck the system. Intended purpose is to cause a kernel bugcheck
/// and generate a kernel (or full physical, if configured correctly)
/// memory dump.
///</summary>
///<param name="code">CRASHER_EXCEPTION_CODE to use as bugcheck code</param>
///<param name="dwParameter1">first parameter to bugcheck</param>
///<param name="dwParameter2">second  parameter to bugcheck</param>
///<param name="dwParameter3">third parameter to bugcheck</param>
///<param name="dwParameter4">fourth parameter to bugcheck</param>
///<param name="pszCallingFunctionName">name of the function calling the method. Typically __FUNCTION__.</param>
///<param name="pszBugcheckCodeFriendlyName">friendly name for the bugcheck code</param>
///<remarks>
/// If this call returns, something went wrong (e.g., driver not
/// installed).
/// Note this function accepts DWORDs but KeBugCheckEx actually
/// users ULONG_PTRs. We cast to make this cleaner for the user
/// (sharing CrashProcess and CrashSystem error codes), which is safe
/// on all 32- and 64-bit systems.
///</remarks>
__inline HRESULT GenerateKernelBugCheckEx(
    CRASHER_EXCEPTION_CODE code,
    DWORD dwParameter1,
    DWORD dwParameter2,
    DWORD dwParameter3,
    DWORD dwParameter4,
    const TCHAR* pszCallingFunctionName,
    const TCHAR* pszBugcheckCodeFriendlyName
    )
{
    HRESULT hr;
    HANDLE hDriver = INVALID_HANDLE_VALUE;
    SAVER_CRASH_SYSTEM_REQUEST request;
    BOOL fSuccess;
    DWORD dwCode = (DWORD)code;
    TCHAR pszModuleName[MAX_PATH] = _T("\0");
    TCHAR pszDrive[_MAX_DRIVE];
    TCHAR pszDir[_MAX_DIR];
    TCHAR pszFilename[_MAX_FNAME];
    TCHAR pszExtension[_MAX_EXT];

    GetModuleFileName(NULL, pszModuleName, _countof(pszModuleName));
    _tsplitpath_s(
        pszModuleName,
        pszDrive,
        _countof(pszDrive),
        pszDir,
        _countof(pszDir),
        pszFilename,
        _countof(pszFilename),
        pszExtension,
        _countof(pszExtension));
    _stprintf_s(pszModuleName, _countof(pszModuleName), _T("%s%s"), pszFilename, pszExtension);

    // pack up parameters
    request.Size = sizeof (SAVER_CRASH_SYSTEM_REQUEST);
    _tcsncpy_s(request.CallingFunctionName, _countof(request.CallingFunctionName), pszCallingFunctionName, _TRUNCATE);
    _tcsncpy_s(request.CallingModuleName, _countof(request.CallingModuleName), pszModuleName, _TRUNCATE);
    _tcsncpy_s(request.PrimaryBugcheckCodeFriendlyName, _countof(request.PrimaryBugcheckCodeFriendlyName), pszBugcheckCodeFriendlyName, _TRUNCATE);
    request.BugCheckCodes[0] = (ULONG_PTR)dwCode;
    request.BugCheckCodes[1] = (ULONG_PTR)dwParameter1;
    request.BugCheckCodes[2] = (ULONG_PTR)dwParameter2;
    request.BugCheckCodes[3] = (ULONG_PTR)dwParameter3;
    request.BugCheckCodes[4] = (ULONG_PTR)dwParameter4;

    // open handle to driver
    hDriver = CreateFileW(SV_USR_NAME, GENERIC_READ|GENERIC_WRITE, 0, 0, OPEN_EXISTING, 0, 0);
    if (hDriver == INVALID_HANDLE_VALUE)
    {
        hr = HRESULT_FROM_WIN32(GetLastError());
        goto Error;
    }

    // don't need any output after crashing (which shouldn't even return)
    fSuccess = DeviceIoControl(
        hDriver,
        SAVER_CRASH_SYSTEM_IOCTL,
        &request,
        sizeof(request),
        NULL,
        0,
        NULL,
        NULL);

    // if execution has made it this far, something went wrong even if
    // the IOCTL return success
    hr = fSuccess ? E_FAIL : HRESULT_FROM_WIN32(GetLastError());

Error:
    if (hDriver != INVALID_HANDLE_VALUE)
    {
        CloseHandle(hDriver); 
    }

    return hr;
}
