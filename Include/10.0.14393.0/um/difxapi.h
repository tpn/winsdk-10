#ifndef _INC_DIFXAPI_
#define _INC_DIFXAPI_
/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Abstract:

    Public header file for Windows (Server 2000,XP,Server 2003, Longhorn) Setup and Device Installer Library.

--*/

#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)



//
// Define API decoration for direct importing of DLL references.
//
#if !defined(_DIFXAPI_)
#define WINDIFXAPI DECLSPEC_IMPORT
#else
#define WINDIFXAPI
#endif

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef _DIFXAPI_VERSION_
#define _DIFXAPI_VERSION_ 0x0200
#endif

//
// DIFX specific ERROR CODES
// We have bit 29 set, which is reserved for application-defined error codes and
// does not conflict with system error codes.
// 

#define ERROR_DEPENDENT_APPLICATIONS_EXIST  (APPLICATION_ERROR_MASK|ERROR_SEVERITY_ERROR|0x300)
#define ERROR_NO_DEVICE_ID                  (APPLICATION_ERROR_MASK|ERROR_SEVERITY_ERROR|0x301)

//
//  The driver package is not currently in the driver store
//
#define ERROR_DRIVER_PACKAGE_NOT_IN_STORE   (APPLICATION_ERROR_MASK|ERROR_SEVERITY_ERROR|0x302)
#define ERROR_MISSING_FILE                  (APPLICATION_ERROR_MASK|ERROR_SEVERITY_ERROR|0x303)

//
// Catalog referenced in the INF is invalid or could not be found
//
#define ERROR_INVALID_CATALOG_DATA          (APPLICATION_ERROR_MASK|ERROR_SEVERITY_ERROR|0x304)

//
// Other error codes
//
#ifndef ERROR_NO_SUCH_DEVINST
#define ERROR_NO_SUCH_DEVINST                0xE000020B
#endif

#ifndef ERROR_SIGNATURE_OSATTRIBUTE_MISMATCH
#define ERROR_SIGNATURE_OSATTRIBUTE_MISMATCH 0xE0000244
#endif


//
// Define the FLAGS
//

//
// Flag: DRIVER_PACKAGE_REPAIR
//
// Preinstall: if the driver store entry already exists, overwrite it.
// Install: overwrites existing driver store entry and reinstall driver 
//
#define DRIVER_PACKAGE_REPAIR                           0x00000001

//
// Flag: DRIVER_PACKAGE_SILENT 
//
// The system will not pop-up any UI to user, for example, signing UI. 
// Instead, in cases where a UI would be required to continue the install,
// the function will fail silently and return an appropriate error code.
//
#define DRIVER_PACKAGE_SILENT                           0x00000002

//
// Flag: DRIVER_PACKAGE_FORCE
//
// Install:  Forces an install even if the driver to be installed is not better 
//           than the current one.
// Uninstall: Forces an uninstall disregarding the App to driver reference count.
//
#define DRIVER_PACKAGE_FORCE                            0x00000004

//
// Flag: DRIVER_PACKAGE_ONLY_IF_DEVICE_PRESENT
//
// Preinstall/Install: only preinstalls/installs the driver package if there is 
//                     a device present. 
//
#define DRIVER_PACKAGE_ONLY_IF_DEVICE_PRESENT           0x00000008

//
// Flag: DRIVER_PACKAGE_LEGACY_MODE
//
// By default, DFXLIB requires all driver packages to be signed and that all files referenced
// in the INF for copying to be present. Driver Packages who need this flag to install won't install
// on the latest version of Windows. 
// Unsigned driver packages are accepted, but might be blocked by the OS itself or the unsigned 
// driver dialog might pop-up, depending on the policy settings of the given OS.
//
#define DRIVER_PACKAGE_LEGACY_MODE                      0x00000010

//
// Flag: DRIVER_PACKAGE_DELETE_FILES
//
// Uninstall: Makes a BEST EFFORT to delete all files that were copied during install
// as described by the INF file. Before deleting, the file will be binary compared to
// the file in the driver store. Still, this file could still be needed by another 
// program on the machine. If you decide to use this flag, make sure you understand
// how your files will be used.
//
#define DRIVER_PACKAGE_DELETE_FILES                   0x00000020

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackagePreinstallW(
    _In_  PCWSTR DriverPackageInfPath,
    _In_  DWORD  Flags
    );

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackagePreinstallA(
    _In_  PCSTR  DriverPackageInfPath,
    _In_  DWORD  Flags
    );

#ifdef UNICODE
#define DriverPackagePreinstall DriverPackagePreinstallW
#else
#define DriverPackagePreinstall DriverPackagePreinstallA
#endif

//
// INSTALL Driver Package
//


//
// General info about the installer of the driver package
//
typedef struct
{
    PWSTR pApplicationId;
    PWSTR pDisplayName;
    PWSTR pProductName;
    PWSTR pMfgName;
} INSTALLERINFO_W, * PINSTALLERINFO_W;

typedef const PINSTALLERINFO_W PCINSTALLERINFO_W;

typedef struct
{
    PSTR pApplicationId;
    PSTR pDisplayName;
    PSTR pProductName;
    PSTR pMfgName;
} INSTALLERINFO_A, * PINSTALLERINFO_A;

typedef const PINSTALLERINFO_A PCINSTALLERINFO_A;

#ifdef UNICODE
typedef INSTALLERINFO_W INSTALLERINFO;
typedef PINSTALLERINFO_W PINSTALLERINFO;
typedef PCINSTALLERINFO_W PCINSTALLERINFO;
#else
typedef INSTALLERINFO_A INSTALLERINFO;
typedef PINSTALLERINFO_A PINSTALLERINFO;
typedef PCINSTALLERINFO_A PCINSTALLERINFO;
#endif

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackageInstallW(
    _In_  PCWSTR DriverPackageInfPath,
    _In_  DWORD  Flags,
    _In_opt_ PCINSTALLERINFO_W pInstallerInfo,
    _Out_ BOOL  *pNeedReboot
    );

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackageInstallA(
    _In_  PCSTR  DriverPackageInfPath,
    _In_  DWORD  Flags,
    _In_opt_ PCINSTALLERINFO_A pInstallerInfo,
    _Out_ BOOL  *pNeedReboot
    );

#ifdef UNICODE
#define DriverPackageInstall DriverPackageInstallW
#else
#define DriverPackageInstall DriverPackageInstallA
#endif

//
// Uninstall Driver Package
//

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackageUninstallW(
    _In_  PCWSTR DriverPackageInfPath,
    _In_  DWORD  Flags,
    _In_opt_ PCINSTALLERINFO_W pInstallerInfo,
    _Out_ BOOL  *pNeedReboot
    );

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackageUninstallA(
    _In_  PCSTR  DriverPackageInfPath,
    _In_  DWORD  Flags,
    _In_opt_ PCINSTALLERINFO_A pInstallerInfo,
    _Out_ BOOL  *pNeedReboot
    );

#ifdef UNICODE
#define DriverPackageUninstall DriverPackageUninstallW
#else
#define DriverPackageUninstall DriverPackageUninstallA
#endif

//
// Get Driver Package path
//

_Check_return_
WINDIFXAPI
DWORD 
WINAPI
DriverPackageGetPathW(
    _In_  PCWSTR DriverPackageInfPath,
    _Out_writes_opt_(*pNumOfChars) PWSTR pDestInfPath,
    _Inout_ DWORD *pNumOfChars
    );

_Check_return_
WINDIFXAPI
DWORD
WINAPI
DriverPackageGetPathA(
    _In_  PCSTR DriverPackageInfPath,
    _Out_writes_opt_(*pNumOfChars) PSTR pDestInfPath,
    _Inout_ DWORD * pNumOfChars
    );

#ifdef UNICODE
#define DriverPackageGetPath DriverPackageGetPathW
#else
#define DriverPackageGetPath DriverPackageGetPathA
#endif

typedef enum
{
    DIFXAPI_SUCCESS = 0,    // Successes
    DIFXAPI_INFO    = 1,    // Basic logging information that should always be shown
    DIFXAPI_WARNING = 2,    // Warnings
    DIFXAPI_ERROR   = 3     // Errors
} DIFXAPI_LOG;


typedef __callback void (WINAPI * DIFXLOGCALLBACK_W)(DIFXAPI_LOG Event, DWORD Error, PCWSTR EventDescription, PVOID CallbackContext);
typedef __callback void (WINAPI * DIFXLOGCALLBACK_A)(DIFXAPI_LOG Event, DWORD Error, PCSTR EventDescription, PVOID CallbackContext);

VOID
WINAPI
SetDifxLogCallbackW(
    _In_  DIFXLOGCALLBACK_W LogCallback,
    _In_  PVOID CallbackContext
    );

VOID
WINAPI
SetDifxLogCallbackA(
    _In_  DIFXLOGCALLBACK_A LogCallback,
    _In_  PVOID CallbackContext
    );

#ifdef UNICODE
#define DIFLOGCALLBACK DIFXLOGCALLBACK_W
#define SetDifxLogCallback SetDifxLogCallbackW
#else
#define DIFLOGCALLBACK DIFXLOGCALLBACK_A
#define SetDifxLogCallback SetDifxLogCallbackA
#endif

typedef __callback void (__cdecl* DIFXAPILOGCALLBACK_W)(DIFXAPI_LOG Event, DWORD Error, PCWSTR EventDescription, PVOID CallbackContext);
typedef __callback void (__cdecl* DIFXAPILOGCALLBACK_A)(DIFXAPI_LOG Event, DWORD Error, PCSTR EventDescription, PVOID CallbackContext);

WINDIFXAPI
VOID
WINAPI
DIFXAPISetLogCallbackW(
    _In_opt_ DIFXAPILOGCALLBACK_W LogCallback,
    _In_opt_ PVOID CallbackContext
    );

WINDIFXAPI
VOID
WINAPI
DIFXAPISetLogCallbackA(
    _In_opt_ DIFXAPILOGCALLBACK_A LogCallback,
    _In_opt_ PVOID CallbackContext
    );

#ifdef UNICODE
#define DIFXAPILOGCALLBACK DIFXAPILOGCALLBACK_W
#define DIFXAPISetLogCallback DIFXAPISetLogCallbackW
#else
#define DIFXAPILOGCALLBACK DIFXAPILOGCALLBACK_A
#define DIFXAPISetLogCallback DIFXAPISetLogCallbackA
#endif

#ifdef  __cplusplus
}
#endif


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif //_INC_DIFXAPI_


