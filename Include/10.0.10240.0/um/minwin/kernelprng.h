//
//  kernelprng.h Header file for kernel PRNG infrastructure
//
//  Copyright (c) Microsoft Corporation, all rights reserved.
//

#pragma once


#ifdef __cplusplus
extern "C"
{
#endif

//
// SystemPrng
//
// This is the API to the primary PRNG of the system.
// It is only available in kernel mode.
//
// Return value: FALSE if error/failure, !=FALSE if okay.
// 
// The return type 'BOOL' is a windows user-mode type, which
// is not normally used in kernel mode.
// It was interited from the randlib library, which was originally
// a user-mode library. We realized the problem only after Win7
// shipped, so we can't change it any more.
// If your compile fails on the BOOL type
// you can include <windef.h>
//

BOOL
SystemPrng( _Out_writes_bytes_( cbRandomData )    PUCHAR 		pbRandomData,
            _In_                            SIZE_T		cbRandomData );

#ifdef __cplusplus
}
#endif
