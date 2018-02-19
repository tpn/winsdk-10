//+-----------------------------------------------------------------------
//
// Copyright (c) 1990-1999 Microsoft Corporation
//
// File:        KERBCON.H
//
// Contents:    Microsoft Kerberos constants
//
//
// History:     25 Feb 92   RichardW    Compiled from other files
//
//------------------------------------------------------------------------

#ifndef __KERBCON_H__
#define __KERBCON_H__

#if _MSC_VER > 1000
#pragma once
#endif

// begin_ntsecapi

// Revision of the Kerberos Protocol.  MS uses Version 5, Revision 6

#define KERBEROS_VERSION    5
#define KERBEROS_REVISION   6



// Encryption Types:
// These encryption types are supported by the default MS KERBSUPP DLL
// as crypto systems.  Values over 127 are local values, and may be changed
// without notice.

#define KERB_ETYPE_NULL             0
#define KERB_ETYPE_DES_CBC_CRC      1
#define KERB_ETYPE_DES_CBC_MD4      2
#define KERB_ETYPE_DES_CBC_MD5      3
#define KERB_ETYPE_AES128_CTS_HMAC_SHA1_96    17
#define KERB_ETYPE_AES256_CTS_HMAC_SHA1_96    18

// end_ntsecapi

#define KERB_ETYPE_OLD_RC4_MD4          128
#define KERB_ETYPE_OLD_RC4_PLAIN        129
#define KERB_ETYPE_OLD_RC4_LM           130
#define KERB_ETYPE_OLD_RC4_SHA          131
#define KERB_ETYPE_OLD_DES_PLAIN        132

// begin_ntsecapi

#define KERB_ETYPE_RC4_MD4          -128    // FFFFFF80
#define KERB_ETYPE_RC4_PLAIN2       -129
#define KERB_ETYPE_RC4_LM           -130
#define KERB_ETYPE_RC4_SHA          -131
#define KERB_ETYPE_DES_PLAIN        -132
#define KERB_ETYPE_RC4_HMAC_OLD     -133    // FFFFFF7B
#define KERB_ETYPE_RC4_PLAIN_OLD    -134
#define KERB_ETYPE_RC4_HMAC_OLD_EXP -135
#define KERB_ETYPE_RC4_PLAIN_OLD_EXP -136
#define KERB_ETYPE_RC4_PLAIN        -140
#define KERB_ETYPE_RC4_PLAIN_EXP    -141

//
// used internally by userapi.cxx
//

#define KERB_ETYPE_AES128_CTS_HMAC_SHA1_96_PLAIN    -148
#define KERB_ETYPE_AES256_CTS_HMAC_SHA1_96_PLAIN    -149

//
// Microsoft-specific value for sending the NTOWF back to the client via AS_REP.
//
#define KERB_ETYPE_NTLM_HASH                        -150

//
// Pkinit encryption types
//


#define KERB_ETYPE_DSA_SHA1_CMS                             9
#define KERB_ETYPE_RSA_MD5_CMS                              10
#define KERB_ETYPE_RSA_SHA1_CMS                             11
#define KERB_ETYPE_RC2_CBC_ENV                              12
#define KERB_ETYPE_RSA_ENV                                  13
#define KERB_ETYPE_RSA_ES_OEAP_ENV                          14
#define KERB_ETYPE_DES_EDE3_CBC_ENV                         15


//
// Deprecated
//

#define KERB_ETYPE_DSA_SIGN                                8
#define KERB_ETYPE_RSA_PRIV                                9
#define KERB_ETYPE_RSA_PUB                                 10
#define KERB_ETYPE_RSA_PUB_MD5                             11
#define KERB_ETYPE_RSA_PUB_SHA1                            12
#define KERB_ETYPE_PKCS7_PUB                               13

#if(_WIN32_WINNT >= 0x0502)
//
// Unsupported but defined types
//

#define KERB_ETYPE_DES3_CBC_MD5                             5
#define KERB_ETYPE_DES3_CBC_SHA1                            7
#define KERB_ETYPE_DES3_CBC_SHA1_KD                        16
#endif

//
// In use types
//

#define KERB_ETYPE_DES_CBC_MD5_NT                          20
#define KERB_ETYPE_RC4_HMAC_NT                             23
#define KERB_ETYPE_RC4_HMAC_NT_EXP                         24

// Checksum algorithms.
// These algorithms are keyed internally for our use.

#define KERB_CHECKSUM_NONE  0
#define KERB_CHECKSUM_CRC32         1
#define KERB_CHECKSUM_MD4           2
#define KERB_CHECKSUM_KRB_DES_MAC   4
#if (_WIN32_WINNT >= 0x0501)
#define KERB_CHECKSUM_KRB_DES_MAC_K 5
#endif
#define KERB_CHECKSUM_MD5           7
#define KERB_CHECKSUM_MD5_DES       8

#define KERB_CHECKSUM_SHA1_NEW      14           // defined in RFC3961
#define KERB_CHECKSUM_HMAC_SHA1_96_AES128  15
#define KERB_CHECKSUM_HMAC_SHA1_96_AES256  16

#define KERB_CHECKSUM_LM            -130
#define KERB_CHECKSUM_SHA1          -131
#define KERB_CHECKSUM_REAL_CRC32    -132
#define KERB_CHECKSUM_DES_MAC       -133
#define KERB_CHECKSUM_DES_MAC_MD5   -134
#define KERB_CHECKSUM_MD25          -135
#define KERB_CHECKSUM_RC4_MD5       -136
#define KERB_CHECKSUM_MD5_HMAC      -137                // used by netlogon
#define KERB_CHECKSUM_HMAC_MD5      -138                // used by Kerberos

//
// used internally by userapi.cxx
//

#define KERB_CHECKSUM_HMAC_SHA1_96_AES128_Ki -150
#define KERB_CHECKSUM_HMAC_SHA1_96_AES256_Ki -151

#define AUTH_REQ_ALLOW_FORWARDABLE      0x00000001
#define AUTH_REQ_ALLOW_PROXIABLE        0x00000002
#define AUTH_REQ_ALLOW_POSTDATE         0x00000004
#define AUTH_REQ_ALLOW_RENEWABLE        0x00000008
#define AUTH_REQ_ALLOW_NOADDRESS        0x00000010
#define AUTH_REQ_ALLOW_ENC_TKT_IN_SKEY  0x00000020
#define AUTH_REQ_ALLOW_VALIDATE         0x00000040
#define AUTH_REQ_VALIDATE_CLIENT        0x00000080
#define AUTH_REQ_OK_AS_DELEGATE         0x00000100
#define AUTH_REQ_PREAUTH_REQUIRED       0x00000200
#define AUTH_REQ_TRANSITIVE_TRUST       0x00000400
#if(_WIN32_WINNT >= 0x0502)
#define AUTH_REQ_ALLOW_S4U_DELEGATE     0x00000800
#endif


#define AUTH_REQ_PER_USER_FLAGS         (AUTH_REQ_ALLOW_FORWARDABLE | \
                                         AUTH_REQ_ALLOW_PROXIABLE | \
                                         AUTH_REQ_ALLOW_POSTDATE | \
                                         AUTH_REQ_ALLOW_RENEWABLE | \
                                         AUTH_REQ_ALLOW_VALIDATE )
//
// Ticket Flags:
//

#define KERB_TICKET_FLAGS_reserved          0x80000000
#define KERB_TICKET_FLAGS_forwardable       0x40000000
#define KERB_TICKET_FLAGS_forwarded         0x20000000
#define KERB_TICKET_FLAGS_proxiable         0x10000000
#define KERB_TICKET_FLAGS_proxy             0x08000000
#define KERB_TICKET_FLAGS_may_postdate      0x04000000
#define KERB_TICKET_FLAGS_postdated         0x02000000
#define KERB_TICKET_FLAGS_invalid           0x01000000
#define KERB_TICKET_FLAGS_renewable         0x00800000
#define KERB_TICKET_FLAGS_initial           0x00400000
#define KERB_TICKET_FLAGS_pre_authent       0x00200000
#define KERB_TICKET_FLAGS_hw_authent        0x00100000
#define KERB_TICKET_FLAGS_ok_as_delegate    0x00040000
#define KERB_TICKET_FLAGS_name_canonicalize 0x00010000
#if (_WIN32_WINNT == 0x0501)
#define KERB_TICKET_FLAGS_cname_in_pa_data  0x00040000
#endif
#define KERB_TICKET_FLAGS_enc_pa_rep        0x00010000
#define KERB_TICKET_FLAGS_reserved1         0x00000001

// end_ntsecapi

//
// Policy
//
#define KERBDEF_MAX_TICKET      10      // hours
#define KERBDEF_MAX_RENEW       7       // days
#define KERBDEF_MAX_SERVICE     600     // minutes
#define KERBDEF_MAX_CLOCK       5       // minutes
#define KERBDEF_VALIDATE        1       // yes



#define KDC_AUDIT_AS_SUCCESS            0x1
#define KDC_AUDIT_AS_FAILURE            0x2
#define KDC_AUDIT_TGS_SUCCESS           0x4
#define KDC_AUDIT_TGS_FAILURE           0x8
#define KDC_AUDIT_MAP_SUCCESS           0x10
#define KDC_AUDIT_MAP_FAILURE           0x20


#define KDC_MAKE_STATE(AuthFlag, AuditFlag) (((AuditFlag) << 16) | ((AuthFlag) & 0xffff))
#define KDC_AUTH_STATE(StateFlags) ((StateFlags) & 0xffff)
#define KDC_AUDIT_STATE(StateFlags) ((StateFlags) >> 16)


// begin_ntsecapi


#if (_WIN32_WINNT >= 0x0501)
//
// Name types
//

#define KRB_NT_UNKNOWN   0                // Name type not known
#define KRB_NT_PRINCIPAL 1                // Just the name of the principal as in DCE, or for users
#define KRB_NT_PRINCIPAL_AND_ID -131      // Name of the principal and its SID.
#define KRB_NT_SRV_INST  2                // Service and other unique instance (krbtgt)
#define KRB_NT_SRV_INST_AND_ID -132       // SPN and SID
#define KRB_NT_SRV_HST   3                // Service with host name as instance (telnet, rcommands)
#define KRB_NT_SRV_XHST  4                // Service with host as remaining components
#define KRB_NT_UID       5                // Unique ID
#define KRB_NT_ENTERPRISE_PRINCIPAL 10    // UPN **ONLY**
#define KRB_NT_WELLKNOWN 11               // Well-known principal names
#define KRB_NT_ENT_PRINCIPAL_AND_ID -130  // UPN and SID

//
// MS extensions, negative according to the RFC
//

#define KRB_NT_MS_PRINCIPAL         -128        // NT4 style name

#define KRB_NT_MS_PRINCIPAL_AND_ID  -129        // nt4 style name with sid

#define KRB_NT_MS_BRANCH_ID         -133        // Branch ID

#define KERB_IS_MS_PRINCIPAL(_x_) (((_x_) <= KRB_NT_MS_PRINCIPAL) || ((_x_) >= KRB_NT_ENTERPRISE_PRINCIPAL))
#endif

#if (_WIN32_WINNT >= 0x0600)
#define KRB_NT_X500_PRINCIPAL 6           // Encoded X.500 Distingished name [RFC 2253]
#endif

#define KRB_WELLKNOWN_STRING L"WELLKNOWN"
#define KRB_ANONYMOUS_STRING L"ANONYMOUS"

// end_ntsecapi

//
// Structure used to store GSS checksum
//

typedef struct _KERB_GSS_CHECKSUM 
{
    ULONG BindLength;
    ULONG BindHash[4];
    ULONG GssFlags;
    USHORT Delegation;
    USHORT DelegationLength;
    UCHAR DelegationInfo[ANYSIZE_ARRAY];
} KERB_GSS_CHECKSUM, *PKERB_GSS_CHECKSUM;

#define GSS_C_DELEG_FLAG                              0x01
#define GSS_C_MUTUAL_FLAG                             0x02
#define GSS_C_REPLAY_FLAG                             0x04
#define GSS_C_SEQUENCE_FLAG                           0x08
#define GSS_C_CONF_FLAG                               0x10
#define GSS_C_INTEG_FLAG                              0x20
#define GSS_C_ANON_FLAG                               0x40
#define GSS_C_DCE_STYLE                             0x1000
#define GSS_C_IDENTIFY_FLAG                         0x2000
#define GSS_C_EXTENDED_ERROR_FLAG                   0x4000

#define GSS_CHECKSUM_TYPE       0x8003
#define GSS_CHECKSUM_SIZE       24

// This was added due to sizeof() byte alignment issues on
// the KREB_GSS_CHECKSUM structure.
#define GSS_DELEGATE_CHECKSUM_SIZE 28

//
// Default flags for use in ticket requests
//

#define KERB_DEFAULT_TICKET_FLAGS (KERB_KDC_OPTIONS_forwardable | \
                                        KERB_KDC_OPTIONS_renewable | \
                                        KERB_KDC_OPTIONS_renewable_ok | \
                                        KERB_KDC_OPTIONS_name_canonicalize )

//
// These flags don't have to be in the TGT in order to be honored.  Reg.
// configurable.
//

#define KERB_ADDITIONAL_KDC_OPTIONS     (KERB_KDC_OPTIONS_name_canonicalize)

/** constants **/

#define CKSUMTYPE_KG_CB         0x8003

#define KG_TOK_CTX_AP_REQ       0x0100
#define KG_TOK_CTX_AP_REP       0x0200
#define KG_TOK_CTX_ERROR        0x0300
#define KG_TOK_SIGN_MSG         0x0101
#define KG_TOK_SEAL_MSG         0x0201
#define KG_TOK_MIC_MSG          0x0101
#define KG_TOK_WRAP_MSG         0x0201
#define KG_TOK_DEL_CTX          0x0102
#define KG_TOK_MIC_MSG_NEW      0x0404
#define KG_TOK_WRAP_MSG_NEW     0x0504
#define KG_TOK_DEL_CTX_NEW      0x0405
#define KG_TOK_CTX_TGT_REQ      0x0400
#define KG_TOK_CTX_TGT_REP      0x0401
#define KG_TOK_CTX_AS_REQ       0x0500
#define KG_TOK_CTX_AS_REP       0x0600

//
// Types for AP error data
//

#define KERB_AP_ERR_TYPE_NTSTATUS             1
#define KERB_AP_ERR_TYPE_SKEW_RECOVERY        2
#define KERB_ERR_TYPE_EXTENDED                3 // obselete

//
// SALT flags for encryption, from rfc1510 update 3des enctype
//

#define KERB_ENC_TIMESTAMP_SALT         1
#define KERB_TICKET_SALT                2
#define KERB_AS_REP_SALT                3
#define KERB_TGS_REQ_SESSKEY_SALT       4
#define KERB_TGS_REQ_SUBKEY_SALT        5
#define KERB_TGS_REQ_AP_REQ_AUTH_CKSUM_SALT     6
#define KERB_TGS_REQ_AP_REQ_AUTH_SALT   7
#define KERB_TGS_REP_SALT               8
#define KERB_TGS_REP_SUBKEY_SALT        9
#define KERB_AP_REQ_AUTH_CKSUM_SALT     10
#define KERB_AP_REQ_AUTH_SALT           11
#define KERB_AP_REP_SALT                12
#define KERB_PRIV_SALT                  13
#define KERB_CRED_SALT                  14
#define KERB_SAFE_SALT                  15
#define KERB_NON_KERB_SALT              16
#define KERB_NON_KERB_CKSUM_SALT        17
#define KERB_KERB_ERROR_SALT            18
#define KERB_KDC_ISSUED_CKSUM_SALT      19
#define KERB_MANDATORY_TKT_EXT_CKSUM_SALT       20
#define KERB_AUTH_DATA_TKT_EXT_CKSUM_SALT       21

#define KERB_USAGE_ACCEPTOR_SEAL        22 
#define KERB_USAGE_ACCEPTOR_SIGN        23 
#define KERB_USAGE_INITIATOR_SEAL       24 
#define KERB_USAGE_INITIATOR_SIGN       25 

#define KERB_USAGE_S4U_PADATA           26
#define KERB_USAGE_S4U_PADATA_REPLY     27

#define KERB_USAGE_GSS_FINISHED         41


#define KERB_KEY_USAGE_FAST_REQ_CHKSUM        50
#define KERB_KEY_USAGE_FAST_ENC               51
#define KERB_KEY_USAGE_FAST_REP               52
#define KERB_KEY_USAGE_FAST_FINISHED          53
#define KERB_KEY_USAGE_ENC_CHALLENGE_CLIENT   54
#define KERB_KEY_USAGE_ENC_CHALLENGE_KDC      55
#define KERB_KEY_USAGE_AS_REQ                 56

#define KERB_KEY_USAGE_FRESHNESS              60

#define KERB_SALT_TICKET_ARMOR            "ticketarmor"
#define KERB_SALT_SUBKEY_ARMOR            "subkeyarmor"
#define KERB_SALT_CLIENT_CHALLENGE_ARMOR  "clientchallengearmor"
#define KERB_SALT_CHALLENGE_LONG_TERM     "challengelongterm"
#define KERB_SALT_KDC_CHALLENGE_ARMOR     "kdcchallengearmor"
#define KERB_SALT_STRENGTHENKEY           "strengthenkey"
#define KERB_SALT_REPLYKEY                "replykey"
#define KERB_SALT_EXPLICIT_ARMOR          "explicitarmor"
#define KERB_SALT_TGS_ARMOR               "tgsarmor"

//
// Types for extended errors
//

#define TD_DH_PARAMETERS_TYPE                  109
#define TD_MUST_USE_USER2USER                 -128
#define TD_EXTENDED_ERROR                     -129

//
// Message types
//

#define KRB_AS_REQ      10      // Request for initial authentication
#define KRB_AS_REP      11      // Response to  KRB_AS_REQ request
#define KRB_TGS_REQ     12      // Request for authentication based on TGT
#define KRB_TGS_REP     13      // Response to KRB_TGS_REQ request
#define KRB_AP_REQ      14      // application request to server
#define KRB_AP_REP      15      // Response to KRB_AP_REQ_MUTUAL
#define KRB_TGT_REQ     16      // Request for TGT for user-to-user
#define KRB_TGT_REP     17      // Reply to TGT request
#define KRB_SAFE        20      // Safe (checksummed) application message
#define KRB_PRIV        21      // Private (encrypted) application message
#define KRB_CRED        22      // Private (encrypted) message to forward
                                // credentials
#define KRB_ERROR       30      // Error response


//
// Pre-auth data types

#define KRB5_PADATA_NONE                0
#define KRB5_PADATA_AP_REQ              1
#define KRB5_PADATA_TGS_REQ             KRB5_PADATA_AP_REQ
#define KRB5_PADATA_ENC_TIMESTAMP       2
#define KRB5_PADATA_PW_SALT             3
#define KRB5_PADATA_ENC_UNIX_TIME       5  /* timestamp encrypted in key */
#define KRB5_PADATA_ENC_SANDIA_SECURID  6  /* SecurId passcode */
#define KRB5_PADATA_SESAME              7  /* Sesame project */
#define KRB5_PADATA_OSF_DCE             8  /* OSF DCE */
#define KRB5_CYBERSAFE_SECUREID         9  /* Cybersafe */
#define KRB5_PADATA_AFS3_SALT           10 /* Cygnus */
#define KRB5_PADATA_ETYPE_INFO          11 /* Etype info for preauth */
#define KRB5_PADATA_SAM_CHALLENGE       12 /* draft challenge system */
#define KRB5_PADATA_SAM_RESPONSE        13 /* draft challenge system response */
#define KRB5_PADATA_PK_AS_REQ_OLD       14 /* pkinit */
#define KRB5_PADATA_PK_AS_REP_OLD       15 /* pkinit */
#define KRB5_PADATA_PK_AS_REQ           16 /* pkinit */
#define KRB5_PADATA_PK_AS_REP           17 /* pkinit */
#define KRB5_PADATA_PK_OCSP_RESPONSE    18 /* pkinit */
#define KRB5_PADATA_ETYPE_INFO2         19 /* replaces pa-etype-info */
#define KRB5_PADATA_REFERRAL_INFO       20 /* referral names for canonicalization */
#define KRB5_PADATA_PAC_REQUEST         128 /* allow client do request or ignore PAC */
#define KRB5_PADATA_FOR_USER            129 /* target client identity */
#define KRB5_PADATA_FOR_X509_USER       130 /* for x509 users */
#define KRB5_PADATA_CHECK_DUPLICATES    131 /* check for account mapping duplicates*/
#define KRB5_PADATA_AS_CHECKSUM         132 /* AS checksum */
#define KRB5_PADATA_PA_FRESHNESS        150 /* pkinit freshness token */
#define KRB5_PADATA_SUPPORTED_ENCTYPES  165 /* server supported encryption types */
#define KRB5_PADATA_PAC_OPTIONS         167 /* PAC option flags */

#define KRB5_PADATA_PA_KEY_LIST_REQ     161 /* Placeholder waiting for IANA number */
#define KRB5_PADATA_PA_KEY_LIST_REP     162 /* Placeholder waiting for IANA number */


#define KRB5_PADATA_PA_FX_COOKIE           133 /* PA-FX-COOKIE */
#define KRB5_PADATA_PA_FX_FAST             136 /* PA-FX-FAST */
#define KRB5_PADATA_PA_FX_ERROR            137 /* PA-FX-ERROR */
#define KRB5_PADATA_PA_ENCRYPTED_CHALLENGE 138 /* PA-ENCRYPTED-CHALLENGE */
#define KRB5_PADATA_PA_REQ_ENC_PA_REP      149 /* PA-REQ-ENC-PA-REP */

#define KRB5_FX_FAST_ARMOR_AP_REQUEST      1   /* Ticket-based Armor */

//
// Authorization data types
//
#define KERB_AUTH_OSF_DCE       64
#define KERB_AUTH_SESAME        65

//
// NT authorization data type definitions
//

#define KERB_AUTH_DATA_PAC                128   // entry id for a PAC in authorization data
#define KERB_AUTH_DATA_ETYPE_NEGOTIATION  129   // for enctype negotiation
#define KERB_AUTH_PROXY_ANNOTATION        139   // entry id for a proxy logon annotation string
#define KERB_AUTH_DATA_TOKEN_RESTRICTIONS 141   // entry id for token restrictions
#define KERB_AUTH_DATA_LOOPBACK           142   // entry id for loopback credentials
#define KERB_AUTH_DATA_AP_OPTIONS         143   // additional options

#define KERB_AUTH_DATA_IF_RELEVANT        1     // entry id for optional auth data
#define KERB_AUTH_DATA_KDC_ISSUED         4     // entry id for data generated & signed by KDC

#define KERB_AUTH_DATA_FX_FAST_ARMOR      71    // AD-fx-fast-armor
#define KERB_AUTH_DATA_FX_FAST_USED       72    // AD-fx-fast-used

//
// Transited realm compression types:
//

#define DOMAIN_X500_COMPRESS            1

//
// Certificate types for PKINIT
//

#define KERB_CERTIFICATE_TYPE_X509      1
#define KERB_CERTIFICATE_TYPE_PGP       2

//
// Signature & seal types used by PKINIT
//

#define KERB_PKINIT_SIGNATURE_ALG               CALG_MD5
#define KERB_PKINIT_EXPORT_SEAL_OID             szOID_RSA_RC2CBC
#define KERB_PKINIT_EXPORT_SEAL_ETYPE           KERB_ETYPE_RC2_CBC_ENV
#define KERB_PKINIT_SEAL_ETYPE                  KERB_ETYPE_DES_EDE3_CBC_ENV
#define KERB_PKINIT_SEAL_OID                    szOID_RSA_DES_EDE3_CBC
#define KERB_PKINIT_SIGNATURE_OID               szOID_RSA_MD5RSA
#define KERB_PKINIT_KDC_CERT_TYPE               szOID_PKIX_KP_SERVER_AUTH
#define KERB_PKINIT_HASH_ALG                    CALG_SHA1

#ifdef szOID_KP_SMARTCARD_LOGON
#define KERB_PKINIT_CLIENT_CERT_TYPE szOID_KP_SMARTCARD_LOGON
#else
#define KERB_PKINIT_CLIENT_CERT_TYPE "1.3.6.1.4.1.311.20.2.2"
#endif

//
// Transport information
//

#define KERB_KDC_PORT                     88
#define KERB_KDC_PORT_STRING              "88"
#define KERB_KDC_PORT_UNICODE_STRING     L"88"
#define KERB_KPASSWD_PORT                 464
#define KERB_KPASSWD_PORT_UNICODE_STRING L"464"

//
// KDC service principal
//

#define KDC_PRINCIPAL_NAME              L"krbtgt"
#define KDC_PRINCIPAL_NAME_A            "krbtgt"
#define KERB_HOST_STRING_A              "host"
#define KERB_HOST_STRING                L"host"
#define KERB_KPASSWD_FIRST_NAME         L"kadmin"
#define KERB_KPASSWD_SECOND_NAME        L"changepw"

#define KDC_FX_FAST_COOKIE_CONSTANT     L"Microsoft"

//
// address types - corresponds to GSS types
//

#define KERB_ADDRTYPE_UNSPEC           0x0
#define KERB_ADDRTYPE_LOCAL            0x1
#define KERB_ADDRTYPE_INET             0x2
#define KERB_ADDRTYPE_DIRECTIONAL      0x3
#define KERB_ADDRTYPE_PUP              0x4
#define KERB_ADDRTYPE_CHAOS            0x5
#define KERB_ADDRTYPE_NS               0x6
#define KERB_ADDRTYPE_NBS              0x7
#define KERB_ADDRTYPE_ECMA             0x8
#define KERB_ADDRTYPE_DATAKIT          0x9
#define KERB_ADDRTYPE_CCITT            0xA
#define KERB_ADDRTYPE_SNA              0xB
#define KERB_ADDRTYPE_DECnet           0xC
#define KERB_ADDRTYPE_DLI              0xD
#define KERB_ADDRTYPE_LAT              0xE
#define KERB_ADDRTYPE_HYLINK           0xF
#define KERB_ADDRTYPE_APPLETALK        0x10
#define KERB_ADDRTYPE_BSC              0x11
#define KERB_ADDRTYPE_DSS              0x12
#define KERB_ADDRTYPE_OSI              0x13
#define KERB_ADDRTYPE_NETBIOS          0x14
#define KERB_ADDRTYPE_X25              0x15
#define KERB_ADDRTYPE_INET6            0x18

//
// max key size in octets
//

#define KERB_MAX_KEY_LENGTH         32

//
// Misc. Flags
//

#define KERB_EXPORT_KEY_FLAG 0x20000000
#define KERB_NO_KEY_VERSION 0

//
// HACK for MAX_UNICODE_STRING, as KerbDuplicateString & others add a NULL
// terminator when doing the duplication
//

#define KERB_MAX_UNICODE_STRING (UNICODE_STRING_MAX_BYTES - sizeof(WCHAR))
#define KERB_MAX_STRING         (UNICODE_STRING_MAX_BYTES - sizeof(CHAR))

#define MAX_NAME_ELEMENTS               20

#define KERB_MAX_CRYPTO_SYSTEMS 20
#define KERB_MAX_CRYPTO_SYSTEMS_SLOWBUFF 100

#define KERB_GSS_EXTS_FINISHED           2

#endif // __KERBCON_H__
