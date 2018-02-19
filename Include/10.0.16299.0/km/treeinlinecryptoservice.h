/*++

Copyright (C) Microsoft. All rights reserved.

Module Name:

    TrEEInlineCryptoService.h

Abstract:

    This module contains definitions used by the OS to invoke Inline Crypto Engine operations via a Trusted Execution Environment.    

--*/

#pragma once

//
// Inline Crypto Service
// {C28F7046-F72E-4F23-B061-E50421C5404C}
//

DEFINE_GUID(GUID_TREE_INLINE_CRYPTO_SERVICE, 
    0xc28f7046, 0xf72e, 0x4f23, 0xb0, 0x61, 0xe5, 0x4, 0x21, 0xc5, 0x40, 0x4c);

//
// Defines the expected value of the Inline Crypto secure service major version
//

#define INLINE_CRYPTO_SERVICE_MAJOR_VERSION              1

//
// Defines the minimum expected value of the Inline Crypto secure service minor version
//

#define INLINE_CRYPTO_SERVICE_MINOR_VERSION_MIN          0
    
//
// Inline Crypto function code
//

#define INLINE_CRYPTO_FUNCTION_PROGRAM_KEY               0
#define INLINE_CRYPTO_FUNCTION_ENABLE                    1

//
// Various structures required for the Inline Crypto Operation
//

typedef enum _INLINE_CRYPTO_DATA_UNIT_SIZE {
    InlineCryptoDataUnitSizeInvalid = 0x00,
    InlineCryptoDataUnitSize512   = 0x01,
    InlineCryptoDataUnitSize1024  = 0x02,
    InlineCryptoDataUnitSize2048  = 0x04,
    InlineCryptoDataUnitSize4096  = 0x08,
    InlineCryptoDataUnitSize8192  = 0x10,
    InlineCryptoDataUnitSize16384 = 0x20,
    InlineCryptoDataUnitSize32768 = 0x40,
    InlineCryptoDataUnitSize65536 = 0x80,
} INLINE_CRYPTO_DATA_UNIT_SIZE, *PINLINE_CRYPTO_DATA_UNIT_SIZE;

//
// Input structure for INLINE_CRYPTO_FUNCTION_PROGRAM_KEY
// 

typedef struct _INLINE_CRYPTO_PROGRAM_KEY_IN {
    
    //
    // Key Table Index
    //

    ULONG KeyIndex;
    
    //
    // The Crypto Capability Index as reported by the Inline Crypto Engine
    //

    ULONG CryptoCapabilityIndex;
    
    //
    // The chosen Data Unit Size bitmask value
    //
    
    INLINE_CRYPTO_DATA_UNIT_SIZE DataUnitSize;
    
    //
    // Size of the Key, in bytes. Should correspond to the key size
    // that's reported by the crypto capability index that's passed in
    // above.
    //
    
    ULONG KeySize;
    
    //
    // Physical and Virtual Addresses for the key 
    //
    
    PVOID KeyVirtualAddress;
    PHYSICAL_ADDRESS KeyPhysicalAddress;
    
} INLINE_CRYPTO_PROGRAM_KEY_IN, *PINLINE_CRYPTO_PROGRAM_KEY_IN;

//
// Output structure for INLINE_CRYPTO_FUNCTION_PROGRAM_KEY
// 

typedef struct _INLINE_CRYPTO_PROGRAM_KEY_OUT {
    
    //
    // Status of the program key operation
    //
    
    NTSTATUS Status;

} INLINE_CRYPTO_PROGRAM_KEY_OUT, *PINLINE_CRYPTO_PROGRAM_KEY_OUT;
