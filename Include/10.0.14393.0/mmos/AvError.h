//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#ifndef _AVERROR_H_
#define _AVERROR_H_

#if (_MSC_VER >= 1000)
#pragma once
#endif

// set FACILITY_ITF for "user defined" error codes.
// TODO: Is this correct??
// To add a message:
//
// The MessageId is the number of the message.
// Accepted severities are 'Success' and 'Warning'.
//
// Facility should be FACILITY_ITF.
//

// The SymbolicName is the name used in the code to identify the message.
// The text of a message starts the line after 'Language=' and
// ends before a line with only a '.' in column one.
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// Base error code.
//
#define AV_E_BASE                           ((HRESULT)0x80040400L)
#define _AV_E_CODE(code)                     (AV_E_BASE + (code))

//
// The object has not been initialized.
//
#define AV_E_NOTINITIALIZED                 _AV_E_CODE(1)

//
// Not supported.
//
#define AV_E_NOTSUPPORTED                   _AV_E_CODE(2)

//
// Operation has already started.
//
#define AV_E_ALREADYSTARTED                 _AV_E_CODE(3)

//
// This method is not supported.
//
#define AV_E_INVALIDMODE                    _AV_E_CODE(4)

//
// The asynchronous operation was cancelled.
//
#define AV_E_CANCELLED                      _AV_E_CODE(5)

//
// The object has already been initialized.
//
#define AV_E_ALREADYINITIALIZED             _AV_E_CODE(6)

//
// System or device is not powered on.
//
#define AV_E_NOTPOWEREDON                   _AV_E_CODE(7)

//
// Requested resource is unavailable.
//
#define AV_E_NORESOURCE                     _AV_E_CODE(8)

//
// The requested resource is in use.
//
#define AV_E_BUSY                           _AV_E_CODE(9)

//
// The device could not be not opened correctly. (Read it again.)
//
#define AV_E_DEVICE_OPEN_FAILED             _AV_E_CODE(10)

//
// Cannot ReleaseVideoResource on a resource you do not own
//
#define AV_E_RESOURCENOTYOURS               _AV_E_CODE(11)

//
// Operation cannot be completed due to invalid system state.
//
#define AV_E_INVALIDSTATE                   _AV_E_CODE(12)

//
// Source file size is already within limits
//
#define AV_E_TRANSCODENOTREQUIRED           _AV_E_CODE(13)

#endif // _AVERROR_H_
