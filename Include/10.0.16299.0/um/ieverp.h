//
//    Copyright (C) Microsoft.  All rights reserved.
//
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#define VER_USE_OTHER_MAJOR_MINOR_VER

//
// Note:
//  If you find yourself in here updating IE's version number, please also be
//  aware that LATEST_WIN32_IE_VERSION likely needs to be updated as well
//  (root/tools/makefile.def).  This allows individual 'sources' files
//  to pick up the version number change during the build passes.  For
//  bonus points, a new macro constant should be added to sdkddkver.w
//  (base/published) with the other _WIN32_IE_IExx macros.
//

//
// override the majorversion and minorversion (normall defined in ntverp.h)
//
#define VER_PRODUCTMAJORVERSION         11
#define VER_PRODUCTMINORVERSION         00

#define VER_PRODUCTVERSION_W            (0x0B00)
#define VER_PRODUCTVERSION_DW           (0x0B000000 | VER_PRODUCTBUILD)


//
// override product name (normally defined in ntverp.h / common.ver)
//
#ifdef RC_INVOKED
#define VER_PRODUCTNAME_STR L"Internet Explorer"
#else
#define VER_PRODUCTNAME_STR "Internet Explorer"
#endif

#include <ntverp.h>
#undef VER_PRODUCTBUILD
#undef VER_PRODUCTBUILD_QFE
#include <bldnump.h>

// Define IE Specific Version numbers. Only component versions are effected by VER_IE*VERSION defined below. 
// Component versions are specified in the manifest files (inetcore\manifests) using the version attribute.
// Binary versions are still determined using VER_PRODUCT* etc. (defined above and in ntverp.h)


// if USE_IE_COMPONENT_VERSIONS is set the ie versions will be used to calculate manifest/component versions. 
// Otherwise ntverp versions will be used.
// eg. this flag will be removed to RI into win7.

#define USE_IE_COMPONENT_VERSIONS


// These will be used to create build variables $(build.xyz)
// build.IEVersion, build.IEMajorVersion, build.IEMinorVersion, build.IEBuildVersion, build.IEQfeVersion

// IE Package version tracks individual public releases of IE
// Primarily this drives active setup and the about box.  It is the version number
// of the package that doesn't change as individual binaries are revised.
// It should be revised daily during self-host, but be locked down in milestone branches
// Keep a history.

// WIN8 RTM = 0

#define VER_IEPACKAGEVERSION                0

#ifdef USE_IE_COMPONENT_VERSIONS

#define VER_IEMAJORVERSION                  11
#define VER_IEMINORVERSION                  0
#define VER_IEBUILDVERSION                  VER_PRODUCTBUILD
#define VER_IEQFEVERSION                    VER_PRODUCTBUILD_QFE

#else

#define VER_IEMAJORVERSION                  VER_PRODUCTMAJORVERSION
#define VER_IEMINORVERSION                  VER_PRODUCTMINORVERSION
#define VER_IEBUILDVERSION                  VER_PRODUCTBUILD
#define VER_IEQFEVERSION                    VER_PRODUCTBUILD_QFE

#endif


#define VER_IEVERSION                       VER_IEMAJORVERSION,VER_IEMINORVERSION,VER_IEBUILDVERSION,VER_IEQFEVERSION

// VER_IEMAJORVERSION_STRING
// Get the major version number as an ANSI string, e.g "10"
#define VER_IEMAJORVERSION_STRING2(x)       #x
#define VER_IEMAJORVERSION_STRING1(x)       VER_IEMAJORVERSION_STRING2(x)
#define VER_IEMAJORVERSION_STRING           VER_IEMAJORVERSION_STRING1(VER_IEMAJORVERSION)

// VER_IEVERSION_STRING
// Get the major & minor version numbers as an ANSI string, e.g "10.0"
#define VER_IEVERSION_MAJORMINOR2(x,y)      #x "." #y
#define VER_IEVERSION_MAJORMINOR1(x,y)      VER_IEVERSION_MAJORMINOR2(x, y)
#define VER_IEVERSION_STRING                VER_IEVERSION_MAJORMINOR1(VER_IEMAJORVERSION, VER_IEMINORVERSION)

// VER_IEVERSION_STR
// Get the full version number as an ANSI string, e.g "10.0.7600.16385"
#define VER_IEVERSION_STR2(x,y)             VER_IEVERSION_STRING "." VER_BPAD #x "." #y
#define VER_IEVERSION_STR1(x,y)             VER_IEVERSION_STR2(x, y)
#define VER_IEVERSION_STR                   VER_IEVERSION_STR1(VER_IEBUILDVERSION, VER_IEQFEVERSION)



#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion
