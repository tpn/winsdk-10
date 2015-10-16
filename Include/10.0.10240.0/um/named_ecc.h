/*++

Copyright (c) 2012  Microsoft Corporation

Module Name:

    named_ecc.w

Abstract:

    This header contains the public defines for the algorithms implemented 
    in the Microsoft Generic ECC software primitive provider.

Author:

    Dan Shumow (danshu)     June 2011 

Revision History:

    Dylan D'Silva (ddsilva) Jan 2012 - Ported from public\common\oak\inc\special_ecc.h in Tango.

--*/

#pragma once

#define BCRYPT_ECDSA_NAMED_CURVE_P192_1_ALGORITHM   L"ECDSA_NAMED_P192_1"
#define BCRYPT_ECDH_NAMED_CURVE_P192_1_ALGORITHM    L"ECDH_NAMED_P192_1"

#define BCRYPT_KDF_NULL                             L"NULL_KDF"

#define MS_GENERIC_ECC_PRIMITVE_PROVIDER            L"Microsoft Generic ECC Software Provider"

#define BCRYPT_ECDSA_PUBLIC_NAMED_CURVE_P192_1_MAGIC    0x31534557  //WES1
#define BCRYPT_ECDSA_PRIVATE_NAMED_CURVE_P192_1_MAGIC   0x32534557  //WES1

#define BCRYPT_ECDH_PUBLIC_NAMED_CURVE_P192_1_MAGIC     0x314B4557  //WEK1
#define BCRYPT_ECDH_PRIVATE_NAMED_CURVE_P192_1_MAGIC    0x324B4557  //WEK1

#define NCRYPT_ECDSA_NAMED_CURVE_P192_1_ALGORITHM   BCRYPT_ECDSA_NAMED_CURVE_P192_1_ALGORITHM
#define NCRYPT_ECDH_NAMED_CURVE_P192_1_ALGORITHM    BCRYPT_ECDH_NAMED_CURVE_P192_1_ALGORITHM