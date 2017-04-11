                   Microsoft(R) Debugging Tools for Windows(R)
                                    Sample Code
                                      README

Sample Overview

The following samples are included with this SDK.

  adp_ext
  - AutoDumpPlus support extension
  
  assert
  - Shows how to use non-invasive self-attach to get stack traces for
    assertion failures

  dumpstk
  - Demonstrates how to open a dump file and get a stack trace

  exts
  - Sample DbgEng-style debugger extension (using dbgeng.h and wdbgexts.h) 

  extcpp
  - Sample EngExtCpp-style debugger extension

  healer
  - Shows how to monitor an app for compatibility problems and automatically
    correct them

  remmon
  - Example of how to connect to a debugger server and execute a command while
    the server is broken into the debugger

  simplext
  - Sample WdbgExts-style debugger extension (using wdbgexts.h only)


----------
Building the Samples

In order to build these samples with the Windows DDK, you must do the
following:

Install the Debugging Tools for Windows.  The default installation options 
includes installation of the debugger sdk.  It is best to install to a directory 
without a space in the name so as to avoid having to re-copy the samples
directory to another location.  (More on this later.)

Use the Build utility environment window to compile and build these samples.
You must use the version of the Build utility supplied by the latest version
of the Windows WDK.  The Windows WDK includes several different build 
environment windows -- you must use the "Windows Vista and Windows 2008 Server" or 
the "Windows 2003 Server" build environment window, even if you are building 
samples or extensions for use on a different version of Windows.

(Attempting to build the samples in a "Windows 2000" build environment will
cause compilation errors.  Building them in a "Windows XP" build environment
may succeed in some cases, but it is not recommended.  We recommend that you 
should always choose the "Windows 2003 Server" or "Windows Vista and Windows 2008
Server" build environment.)

The header files and libs in this package should replace any existing version
of the header files or libs that are shipped with the Windows WDK or the
Platform SDK.  If you follow the instructions for using the Build utility
which appear in the Windows WKD documentation, you can set your include paths
so that this is done automatically.

The samples will not compile if they are located in a directory path containing
spaces.  If you have installed Debugging Tools for Windows into a path with
spaces, you can work around this limitation by moving or copying the "sdk"
subdirectory to a directory path without spaces.

Use the WDK's setenv.bat script to setup your build environment.

  For example: setenv D:\winddk\3790 fre wnet

This step is only necessary if you are not using the "Windows 2003 Server"
or "Windows Vista and Windows 2008 Server" build environment window.

Set the following two environment variables to point to the debugger's
inc and lib directories:

  set DBGSDK_INC_PATH=D:\dbg\sdk\inc
  set DBGSDK_LIB_PATH=D:\dbg\sdk\lib
  set DBGLIB_LIB_PATH=D:\dbg\sdk\lib

In this example, "D:\dbg\sdk" should be replaced with the actual path on your
computer.


Change directory to the debugging tools samples directory and build.

  build -cZMg
