//
//    Copyright (C) Microsoft.  All rights reserved.
//
//
// When adding flags, make sure to add an entry in the appcompat database library:
//     %_NTDRIVE%\%_NTROOT%\windows\appcompat\db\library.xml
//
// Flags are defined under the type "KERNEL"
//

//
// The macro that should be used to check for apphack flags
//

#define APPCOMPATFLAG(_flag)    (NtCurrentPeb()->AppCompatFlags.QuadPart & (_flag))

//
// Application compatibility flags and information
//

#define KACF_OLDGETSHORTPATHNAME                    0x00000001  // Don't be like Win9x: in GetShortPathName(), NT 4
                                                                // did not care if the file existed - it would give
                                                                // the short path name anyway.  This behavior was
                                                                // changed in NT 5 (Win2000) to reflect behavior of
                                                                // Win9x which will fail if the file does not exist.
                                                                // Turning on this flag will give the old behavior
                                                                // for the app.
#define KACF_VERSIONLIE_NOT_USED                    0x00000002  // LEGACY: Replaced by version lie shims
#define KACF_GETDISKFREESPACE                       0x00000008  // Make GetDiskFreeSpace 2G friendly
#define KACF_FTMFROMCURRENTAPT                      0x00000020  // If set, a DCOM Free-Threaded-Marshaled Object has
                                                                // its' stub parked in the apartment that the object is
                                                                // marshaled from instead of the Neutral-Apartment.
                                                                // Having to set this bit indicates a busted App
                                                                // that is not following the rules for FTM objects. The
                                                                // app probably has other subtle problems that NT 4 or
                                                                // Win9x didn't show. Blindly using the ATL wizard to
                                                                // enable using the FTM is usually the source of the bug.

#define KACF_DISALLOWORBINDINGCHANGES               0x00000040  // If set, the process will not be notified of changes
                                                                // in the local machine bindings used by COM.

#define KACF_OLE32VALIDATEPTRS                      0x00000080  // If set, ole32.dll will use the IsBadReadPtr family of
                                                                // functions to verify pointer arguments in the standard COM APIs.
                                                                // This was the default behavior on all platforms prior to Whistler.

#define KACF_DISABLECICERO                          0x00000100  // If set, Cicero support for the current process
                                                                // is disabled.

#define KACF_OLE32ENABLEASYNCDOCFILE                0x00000200
#define KACF_OLE32ENABLELEGACYEXCEPTIONHANDLING     0x00000400 
#define KACF_RPCDISABLENDRCLIENTHARDENING           0x00000800
#define KACF_RPCDISABLENDRMAYBENULL_SIZEIS          0x00001000
#define KACF_DISABLEALLDDEHACK_NOT_USED             0x00002000  // Incorrectly defined: this was actually a User flag
#define KACF_RPCDISABLENDR61_RANGE                  0x00004000
#define KACF_RPC32ENABLELEGACYEXCEPTIONHANDLING     0x00008000

#define KACF_OLE32DOCFILEUSELEGACYNTFSFLAGS         0x00010000  // If set, APIs that open a docfile for writing (StgOpenStorageEx, etc.)
                                                                // will revert to passing FILE_SHARE_WRITE when calling CreateFile, even
                                                                // if the STGM_SHARE_DENY_WRITE flag is specified.

#define KACF_RPCDISABLENDRCONSTIIDCHECK             0x00020000  // If set, NDR will not check that an Interface Pointer returned in a 
                                                                // call has the same IID as was requested by [iid_is].  NB: IID _always_ 
                                                                // checked if /robust was set when compiling the IDL.

#define KACF_USERDISABLEFORWARDERPATCH              0x00040000  // If set, user32 will not patch the forwarders to ntdll for 
                                                                // processes that require the export table be unmodified.

#define KACF_OLE32DISABLENEW_WMPAINT_DISPATCH       0x00100000  // If set, the OLE modal loop's WM_PAINT dispatch behavior 
                                                                // reverts to pre-Vista mode.
#define KACF_ADDRESTRICTEDSIDINCOINITIALIZESECURITY 0x00200000  // If set, combase will allow a restricted process to call into a 
                                                                // non-restricted process for apps that implement some sort of
                                                                // protected view mode in win7.
#define KACF_ALLOCDEBUGINFOFORCRITSECTIONS          0x00400000  // If set, DebugInfo for critical section is allocated
#define KACF_OLEAUT32ENABLEUNSAFELOADTYPELIBRELATIVE 0x00800000  // If set, oleaut32 will use the legacy search logic for relative 
                                                                // type library file names instead of the safe search path when 
                                                                // calling LoadTypeLib."
#define KACF_ALLOWMAXIMIZEDWINDOWGAMMA              0x01000000  // If set, allow maximized windowed DX apps to change gamma ramp.
#define KACF_DONOTADDTOCACHE                        0x80000000  // Apply this empty AppHack flag to prevent an executable from being placed in the cache
