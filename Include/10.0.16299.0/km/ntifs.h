/*++ BUILD Version: 0146    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ntifs.h

Abstract:

    This module defines the NT types, constants, and functions that are
    exposed to file system drivers.

Revision History:

--*/

#ifndef _NTIFS_
#define _NTIFS_

#define _NTIFS_INCLUDED_

#ifndef RC_INVOKED
#if _MSC_VER < 1300
#error Compiler version not supported by Windows DDK
#endif
#endif // RC_INVOKED

#ifndef __cplusplus
#pragma warning(disable:4116)       // TYPE_ALIGNMENT generates this - move it
                                    // outside the warning push/pop scope.
#endif

#define NT_INCLUDED
#define _NTMSV1_0_
#define _CTYPE_DISABLE_MACROS

#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning(disable:4115) // named type definition in parentheses
#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int


#include <ntddk.h>
#include <excpt.h>
#include <ntdef.h>
#include <ntnls.h>
#include <ntstatus.h>
#include <bugcodes.h>
#include <ntiologc.h>
#include <winapifamily.h>

//
//  These macros are used to test, set and clear flags respectivly
//

#ifndef FlagOn
#define FlagOn(_F,_SF)        ((_F) & (_SF))
#endif

#ifndef BooleanFlagOn
#define BooleanFlagOn(F,SF)   ((BOOLEAN)(((F) & (SF)) != 0))
#endif

#ifndef SetFlag
#define SetFlag(_F,_SF)       ((_F) |= (_SF))
#endif

#ifndef ClearFlag
#define ClearFlag(_F,_SF)     ((_F) &= ~(_SF))
#endif

//
// Define types that are not exported.
//

typedef struct _BUS_HANDLER *PBUS_HANDLER;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _DEVICE_HANDLER_OBJECT *PDEVICE_HANDLER_OBJECT;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KPROCESS *PKPROCESS ,*PRKPROCESS, *PEPROCESS;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD, *PETHREAD;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _PEB *PPEB;
typedef struct _ACL *PACL;

#ifdef __cplusplus
extern "C" {
#endif

#define PsGetCurrentProcess IoGetCurrentProcess

#if (NTDDI_VERSION >= NTDDI_VISTA)
#if defined(_X86_) || defined(_AMD64_)
extern NTSYSAPI volatile CCHAR KeNumberProcessors;
#else
extern NTSYSAPI CCHAR KeNumberProcessors;
#endif
#elif (NTDDI_VERSION >= NTDDI_WINXP)
extern NTSYSAPI CCHAR KeNumberProcessors;
#else
extern PCCHAR KeNumberProcessors;
#endif

typedef UNICODE_STRING LSA_UNICODE_STRING, *PLSA_UNICODE_STRING;
typedef STRING LSA_STRING, *PLSA_STRING;
typedef OBJECT_ATTRIBUTES LSA_OBJECT_ATTRIBUTES, *PLSA_OBJECT_ATTRIBUTES;

#ifndef SID_IDENTIFIER_AUTHORITY_DEFINED
#define SID_IDENTIFIER_AUTHORITY_DEFINED
typedef struct _SID_IDENTIFIER_AUTHORITY {
    UCHAR Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;
#endif


#ifndef SID_DEFINED
#define SID_DEFINED
typedef struct _SID {
   UCHAR Revision;
   UCHAR SubAuthorityCount;
   SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
#ifdef MIDL_PASS
   [size_is(SubAuthorityCount)] ULONG SubAuthority[*];
#else // MIDL_PASS
   ULONG SubAuthority[ANYSIZE_ARRAY];
#endif // MIDL_PASS
} SID, *PISID;
#endif

#define SID_REVISION                     (1)    // Current revision level
#define SID_MAX_SUB_AUTHORITIES          (15)
#define SID_RECOMMENDED_SUB_AUTHORITIES  (1)    // Will change to around 6

                                                // in a future release.
#ifndef MIDL_PASS
#define SECURITY_MAX_SID_SIZE  \
      (sizeof(SID) - sizeof(ULONG) + (SID_MAX_SUB_AUTHORITIES * sizeof(ULONG)))

#define SECURITY_SID_SIZE(SubAuthorityCount_) (sizeof(SID) - sizeof(ULONG) + \
                                                (SubAuthorityCount_) * sizeof(ULONG))

// 2 (S-)
// 4 (Rev(max: 255)-)
// 15 (
//      If (Auth < 2^32): Auth(max:4294967295)-
//      Else:             0xAuth(max:FFFFFFFFFFFF)-
//    )
// (11 * SID_MAX_SUB_AUTHORITIES) (SubN(max:4294967295)-)
// 1 (NULL character)
// = 187 (assuming SID_MAX_SUB_AUTHORITIES = 15)
#define SECURITY_MAX_SID_STRING_CHARACTERS \
    (2 + 4 + 15 + (11 * SID_MAX_SUB_AUTHORITIES) + 1)

//
// Union which can hold any valid sid.
//

typedef union _SE_SID {
    SID Sid;
    UCHAR Buffer[SECURITY_MAX_SID_SIZE];
} SE_SID, *PSE_SID;

#endif // MIDL_PASS


typedef enum _SID_NAME_USE {
    SidTypeUser = 1,
    SidTypeGroup,
    SidTypeDomain,
    SidTypeAlias,
    SidTypeWellKnownGroup,
    SidTypeDeletedAccount,
    SidTypeInvalid,
    SidTypeUnknown,
    SidTypeComputer,
    SidTypeLabel,
    SidTypeLogonSession
} SID_NAME_USE, *PSID_NAME_USE;

typedef struct _SID_AND_ATTRIBUTES {
#ifdef MIDL_PASS
    PISID Sid;
#else // MIDL_PASS
    PSID Sid;
#endif // MIDL_PASS
    ULONG Attributes;
    } SID_AND_ATTRIBUTES, * PSID_AND_ATTRIBUTES;

typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[ANYSIZE_ARRAY];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;

#define SID_HASH_SIZE 32
typedef ULONG_PTR SID_HASH_ENTRY, *PSID_HASH_ENTRY;

typedef struct _SID_AND_ATTRIBUTES_HASH {
    ULONG SidCount;
    PSID_AND_ATTRIBUTES SidAttr;
    SID_HASH_ENTRY Hash[SID_HASH_SIZE];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;


/////////////////////////////////////////////////////////////////////////////
//                                                                         //
// Universal well-known SIDs                                               //
//                                                                         //
//     Null SID                     S-1-0-0                                //
//     World                        S-1-1-0                                //
//     Local                        S-1-2-0                                //
//     Creator Owner ID             S-1-3-0                                //
//     Creator Group ID             S-1-3-1                                //
//     Creator Owner Server ID      S-1-3-2                                //
//     Creator Group Server ID      S-1-3-3                                //
//                                                                         //
//     (Non-unique IDs)             S-1-4                                  //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////

#define SECURITY_NULL_SID_AUTHORITY         {0,0,0,0,0,0}
#define SECURITY_WORLD_SID_AUTHORITY        {0,0,0,0,0,1}
#define SECURITY_LOCAL_SID_AUTHORITY        {0,0,0,0,0,2}
#define SECURITY_CREATOR_SID_AUTHORITY      {0,0,0,0,0,3}
#define SECURITY_NON_UNIQUE_AUTHORITY       {0,0,0,0,0,4}
#define SECURITY_RESOURCE_MANAGER_AUTHORITY {0,0,0,0,0,9}


#define SECURITY_NULL_RID                 (0x00000000L)
#define SECURITY_WORLD_RID                (0x00000000L)
#define SECURITY_LOCAL_RID                (0x00000000L)
#define SECURITY_LOCAL_LOGON_RID          (0x00000001L)

#define SECURITY_CREATOR_OWNER_RID        (0x00000000L)
#define SECURITY_CREATOR_GROUP_RID        (0x00000001L)

#define SECURITY_CREATOR_OWNER_SERVER_RID (0x00000002L)
#define SECURITY_CREATOR_GROUP_SERVER_RID (0x00000003L)

#define SECURITY_CREATOR_OWNER_RIGHTS_RID (0x00000004L)

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// NT well-known SIDs                                                        //
//                                                                           //
//     NT Authority            S-1-5                                         //
//     Dialup                  S-1-5-1                                       //
//                                                                           //
//     Network                 S-1-5-2                                       //
//     Batch                   S-1-5-3                                       //
//     Interactive             S-1-5-4                                       //
//     (Logon IDs)             S-1-5-5-X-Y                                   //
//     Service                 S-1-5-6                                       //
//     AnonymousLogon          S-1-5-7       (aka null logon session)        //
//     Proxy                   S-1-5-8                                       //
//     Enterprise DC (EDC)     S-1-5-9       (aka domain controller account) //
//     Self                    S-1-5-10      (self RID)                      //
//     Authenticated User      S-1-5-11      (Authenticated user somewhere)  //
//     Restricted Code         S-1-5-12      (Running restricted code)       //
//     Terminal Server         S-1-5-13      (Running on Terminal Server)    //
//     Remote Logon            S-1-5-14      (Remote Interactive Logon)      //
//     This Organization       S-1-5-15                                      //
//                                                                           //
//     IUser                   S-1-5-17
//     Local System            S-1-5-18                                      //
//     Local Service           S-1-5-19                                      //
//     Network Service         S-1-5-20                                      //
//                                                                           //
//     (NT non-unique IDs)     S-1-5-0x15-... (NT Domain Sids)               //
//                                                                           //
//     (Built-in domain)       S-1-5-0x20                                    //
//                                                                           //
//     (Security Package IDs)  S-1-5-0x40                                    //
//     NTLM Authentication     S-1-5-0x40-10                                 //
//     SChannel Authentication S-1-5-0x40-14                                 //
//     Digest Authentication   S-1-5-0x40-21                                 //
//                                                                           //
//     Other Organization      S-1-5-1000    (>=1000 can not be filtered)    //
//                                                                           //
//                                                                           //
// NOTE: the relative identifier values (RIDs) determine which security      //
//       boundaries the SID is allowed to cross.  Before adding new RIDs,    //
//       a determination needs to be made regarding which range they should  //
//       be added to in order to ensure proper "SID filtering"               //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#define SECURITY_NT_AUTHORITY           {0,0,0,0,0,5}   // ntifs

#define SECURITY_DIALUP_RID             (0x00000001L)
#define SECURITY_NETWORK_RID            (0x00000002L)
#define SECURITY_BATCH_RID              (0x00000003L)
#define SECURITY_INTERACTIVE_RID        (0x00000004L)
#define SECURITY_LOGON_IDS_RID          (0x00000005L)
#define SECURITY_LOGON_IDS_RID_COUNT    (3L)
#define SECURITY_SERVICE_RID            (0x00000006L)
#define SECURITY_ANONYMOUS_LOGON_RID    (0x00000007L)
#define SECURITY_PROXY_RID              (0x00000008L)
#define SECURITY_ENTERPRISE_CONTROLLERS_RID (0x00000009L)
#define SECURITY_SERVER_LOGON_RID       SECURITY_ENTERPRISE_CONTROLLERS_RID
#define SECURITY_PRINCIPAL_SELF_RID     (0x0000000AL)
#define SECURITY_AUTHENTICATED_USER_RID (0x0000000BL)
#define SECURITY_RESTRICTED_CODE_RID    (0x0000000CL)
#define SECURITY_TERMINAL_SERVER_RID    (0x0000000DL)
#define SECURITY_REMOTE_LOGON_RID       (0x0000000EL)
#define SECURITY_THIS_ORGANIZATION_RID  (0x0000000FL)
#define SECURITY_IUSER_RID              (0x00000011L)
#define SECURITY_LOCAL_SYSTEM_RID       (0x00000012L)
#define SECURITY_LOCAL_SERVICE_RID      (0x00000013L)
#define SECURITY_NETWORK_SERVICE_RID    (0x00000014L)

#define SECURITY_NT_NON_UNIQUE          (0x00000015L)
#define SECURITY_NT_NON_UNIQUE_SUB_AUTH_COUNT  (3L)

#define SECURITY_ENTERPRISE_READONLY_CONTROLLERS_RID (0x00000016L)

#define SECURITY_BUILTIN_DOMAIN_RID     (0x00000020L)
#define SECURITY_WRITE_RESTRICTED_CODE_RID (0x00000021L)


#define SECURITY_PACKAGE_BASE_RID       (0x00000040L)
#define SECURITY_PACKAGE_RID_COUNT      (2L)
#define SECURITY_PACKAGE_NTLM_RID       (0x0000000AL)
#define SECURITY_PACKAGE_SCHANNEL_RID   (0x0000000EL)
#define SECURITY_PACKAGE_DIGEST_RID     (0x00000015L)

#define SECURITY_CRED_TYPE_BASE_RID             (0x00000041L)
#define SECURITY_CRED_TYPE_RID_COUNT            (2L)
#define SECURITY_CRED_TYPE_THIS_ORG_CERT_RID    (0x00000001L)

#define SECURITY_MIN_BASE_RID           (0x00000050L)

#define SECURITY_SERVICE_ID_BASE_RID    (0x00000050L)
#define SECURITY_SERVICE_ID_RID_COUNT   (6L)

#define SECURITY_RESERVED_ID_BASE_RID   (0x00000051L)

#define SECURITY_APPPOOL_ID_BASE_RID    (0x00000052L)
#define SECURITY_APPPOOL_ID_RID_COUNT   (6L)

#define SECURITY_VIRTUALSERVER_ID_BASE_RID    (0x00000053L)
#define SECURITY_VIRTUALSERVER_ID_RID_COUNT   (6L)

#define SECURITY_USERMODEDRIVERHOST_ID_BASE_RID  (0x00000054L)
#define SECURITY_USERMODEDRIVERHOST_ID_RID_COUNT (6L)

#define SECURITY_CLOUD_INFRASTRUCTURE_SERVICES_ID_BASE_RID  (0x00000055L)
#define SECURITY_CLOUD_INFRASTRUCTURE_SERVICES_ID_RID_COUNT (6L)

#define SECURITY_WMIHOST_ID_BASE_RID  (0x00000056L)
#define SECURITY_WMIHOST_ID_RID_COUNT (6L)

#define SECURITY_TASK_ID_BASE_RID                 (0x00000057L)

#define SECURITY_NFS_ID_BASE_RID        (0x00000058L)

#define SECURITY_COM_ID_BASE_RID        (0x00000059L)

#define SECURITY_WINDOW_MANAGER_BASE_RID     (0x0000005AL)

#define SECURITY_RDV_GFX_BASE_RID       (0x0000005BL)

#define SECURITY_DASHOST_ID_BASE_RID    (0x0000005CL)
#define SECURITY_DASHOST_ID_RID_COUNT   (6L)

#define SECURITY_USERMANAGER_ID_BASE_RID    (0x0000005DL)
#define SECURITY_USERMANAGER_ID_RID_COUNT   (6L)

#define SECURITY_WINRM_ID_BASE_RID      (0x0000005EL)
#define SECURITY_WINRM_ID_RID_COUNT     (6L)

#define SECURITY_CCG_ID_BASE_RID        (0x0000005FL)
#define SECURITY_UMFD_BASE_RID          (0x00000060L)

#define SECURITY_VIRTUALACCOUNT_ID_RID_COUNT   (6L)

#define SECURITY_MAX_BASE_RID           (0x0000006FL)
#define SECURITY_MAX_ALWAYS_FILTERED    (0x000003E7L)
#define SECURITY_MIN_NEVER_FILTERED     (0x000003E8L)

#define SECURITY_OTHER_ORGANIZATION_RID (0x000003E8L)

//
//Service SID type RIDs are in the range 0x50- 0x6F.  Therefore, we are giving  the next available RID to Windows Mobile team.
//
#define SECURITY_WINDOWSMOBILE_ID_BASE_RID (0x00000070L)

//
// Installer Capability Group Sid related. Currently Base RID is same as LOCAL DOMAIN.
//
#define SECURITY_INSTALLER_GROUP_CAPABILITY_BASE (0x20)
#define SECURITY_INSTALLER_GROUP_CAPABILITY_RID_COUNT (9)

// Note: This is because the App Capability Rid is S-1-15-3-1024-...
//       whereas the service group rid is          S-1-5-32-...
//	The number of RIDs from hash (8) are the same for both
#define SECURITY_INSTALLER_CAPABILITY_RID_COUNT (10)

//
//Well-known group for local accounts
//
#define SECURITY_LOCAL_ACCOUNT_RID (0x00000071L)
#define SECURITY_LOCAL_ACCOUNT_AND_ADMIN_RID (0x00000072L)

/////////////////////////////////////////////////////////////////////////////
//                                                                         //
// well-known domain relative sub-authority values (RIDs)...               //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////


#define DOMAIN_GROUP_RID_AUTHORIZATION_DATA_IS_COMPOUNDED       (0x000001F0L)
#define DOMAIN_GROUP_RID_AUTHORIZATION_DATA_CONTAINS_CLAIMS     (0x000001F1L)
#define DOMAIN_GROUP_RID_ENTERPRISE_READONLY_DOMAIN_CONTROLLERS (0x000001F2L)

#define FOREST_USER_RID_MAX            (0x000001F3L)

// Well-known users ...

#define DOMAIN_USER_RID_ADMIN                (0x000001F4L)
#define DOMAIN_USER_RID_GUEST                (0x000001F5L)
#define DOMAIN_USER_RID_KRBTGT               (0x000001F6L)
#define DOMAIN_USER_RID_DEFAULT_ACCOUNT      (0x000001F7L)
#define DOMAIN_USER_RID_WDAG_ACCOUNT         (0x000001F8L)

#define DOMAIN_USER_RID_MAX            (0x000003E7L)


// well-known groups ...

#define DOMAIN_GROUP_RID_ADMINS        (0x00000200L)
#define DOMAIN_GROUP_RID_USERS         (0x00000201L)
#define DOMAIN_GROUP_RID_GUESTS        (0x00000202L)
#define DOMAIN_GROUP_RID_COMPUTERS     (0x00000203L)
#define DOMAIN_GROUP_RID_CONTROLLERS   (0x00000204L)
#define DOMAIN_GROUP_RID_CERT_ADMINS   (0x00000205L)
#define DOMAIN_GROUP_RID_SCHEMA_ADMINS (0x00000206L)
#define DOMAIN_GROUP_RID_ENTERPRISE_ADMINS (0x00000207L)
#define DOMAIN_GROUP_RID_POLICY_ADMINS (0x00000208L)
#define DOMAIN_GROUP_RID_READONLY_CONTROLLERS (0x00000209L)
#define DOMAIN_GROUP_RID_CLONEABLE_CONTROLLERS (0x0000020AL)
#define DOMAIN_GROUP_RID_CDC_RESERVED    (0x0000020CL)
#define DOMAIN_GROUP_RID_PROTECTED_USERS (0x0000020DL)
#define DOMAIN_GROUP_RID_KEY_ADMINS      (0x0000020EL)
#define DOMAIN_GROUP_RID_ENTERPRISE_KEY_ADMINS (0x0000020FL)

// well-known aliases ...

#define DOMAIN_ALIAS_RID_ADMINS                         (0x00000220L)
#define DOMAIN_ALIAS_RID_USERS                          (0x00000221L)
#define DOMAIN_ALIAS_RID_GUESTS                         (0x00000222L)
#define DOMAIN_ALIAS_RID_POWER_USERS                    (0x00000223L)

#define DOMAIN_ALIAS_RID_ACCOUNT_OPS                    (0x00000224L)
#define DOMAIN_ALIAS_RID_SYSTEM_OPS                     (0x00000225L)
#define DOMAIN_ALIAS_RID_PRINT_OPS                      (0x00000226L)
#define DOMAIN_ALIAS_RID_BACKUP_OPS                     (0x00000227L)

#define DOMAIN_ALIAS_RID_REPLICATOR                     (0x00000228L)
#define DOMAIN_ALIAS_RID_RAS_SERVERS                    (0x00000229L)
#define DOMAIN_ALIAS_RID_PREW2KCOMPACCESS               (0x0000022AL)
#define DOMAIN_ALIAS_RID_REMOTE_DESKTOP_USERS           (0x0000022BL)
#define DOMAIN_ALIAS_RID_NETWORK_CONFIGURATION_OPS      (0x0000022CL)
#define DOMAIN_ALIAS_RID_INCOMING_FOREST_TRUST_BUILDERS (0x0000022DL)

#define DOMAIN_ALIAS_RID_MONITORING_USERS               (0x0000022EL)
#define DOMAIN_ALIAS_RID_LOGGING_USERS                  (0x0000022FL)
#define DOMAIN_ALIAS_RID_AUTHORIZATIONACCESS            (0x00000230L)
#define DOMAIN_ALIAS_RID_TS_LICENSE_SERVERS             (0x00000231L)
#define DOMAIN_ALIAS_RID_DCOM_USERS                     (0x00000232L)
#define DOMAIN_ALIAS_RID_IUSERS                         (0x00000238L)
#define DOMAIN_ALIAS_RID_CRYPTO_OPERATORS               (0x00000239L)
#define DOMAIN_ALIAS_RID_CACHEABLE_PRINCIPALS_GROUP     (0x0000023BL)
#define DOMAIN_ALIAS_RID_NON_CACHEABLE_PRINCIPALS_GROUP (0x0000023CL)
#define DOMAIN_ALIAS_RID_EVENT_LOG_READERS_GROUP        (0x0000023DL)
#define DOMAIN_ALIAS_RID_CERTSVC_DCOM_ACCESS_GROUP      (0x0000023EL)
#define DOMAIN_ALIAS_RID_RDS_REMOTE_ACCESS_SERVERS      (0x0000023FL)
#define DOMAIN_ALIAS_RID_RDS_ENDPOINT_SERVERS           (0x00000240L)
#define DOMAIN_ALIAS_RID_RDS_MANAGEMENT_SERVERS         (0x00000241L)
#define DOMAIN_ALIAS_RID_HYPER_V_ADMINS                 (0x00000242L)
#define DOMAIN_ALIAS_RID_ACCESS_CONTROL_ASSISTANCE_OPS  (0x00000243L)
#define DOMAIN_ALIAS_RID_REMOTE_MANAGEMENT_USERS        (0x00000244L)
#define DOMAIN_ALIAS_RID_DEFAULT_ACCOUNT                (0x00000245L)
#define DOMAIN_ALIAS_RID_STORAGE_REPLICA_ADMINS         (0x00000246L)

//
// Application Package Authority.
//

#define SECURITY_APP_PACKAGE_AUTHORITY              {0,0,0,0,0,15}

#define SECURITY_APP_PACKAGE_BASE_RID               (0x00000002L)
#define SECURITY_BUILTIN_APP_PACKAGE_RID_COUNT      (2L)
#define SECURITY_APP_PACKAGE_RID_COUNT              (8L)
#define SECURITY_CAPABILITY_BASE_RID                (0x00000003L)
#define SECURITY_CAPABILITY_APP_RID                 (0x000000400)
#define SECURITY_BUILTIN_CAPABILITY_RID_COUNT       (2L)
#define SECURITY_CAPABILITY_RID_COUNT               (5L)
#define SECURITY_PARENT_PACKAGE_RID_COUNT           (SECURITY_APP_PACKAGE_RID_COUNT)
#define SECURITY_CHILD_PACKAGE_RID_COUNT            (12L)

//
// Built-in Packages.
//

#define SECURITY_BUILTIN_PACKAGE_ANY_PACKAGE        	(0x00000001L)
#define SECURITY_BUILTIN_PACKAGE_ANY_RESTRICTED_PACKAGE (0x00000002L)

//
// Built-in Capabilities.
//

#define SECURITY_CAPABILITY_INTERNET_CLIENT                     (0x00000001L)
#define SECURITY_CAPABILITY_INTERNET_CLIENT_SERVER              (0x00000002L)
#define SECURITY_CAPABILITY_PRIVATE_NETWORK_CLIENT_SERVER       (0x00000003L)
#define SECURITY_CAPABILITY_PICTURES_LIBRARY                    (0x00000004L)
#define SECURITY_CAPABILITY_VIDEOS_LIBRARY                      (0x00000005L)
#define SECURITY_CAPABILITY_MUSIC_LIBRARY                       (0x00000006L)
#define SECURITY_CAPABILITY_DOCUMENTS_LIBRARY                   (0x00000007L)
#define SECURITY_CAPABILITY_ENTERPRISE_AUTHENTICATION           (0x00000008L)
#define SECURITY_CAPABILITY_SHARED_USER_CERTIFICATES            (0x00000009L)
#define SECURITY_CAPABILITY_REMOVABLE_STORAGE                   (0x0000000AL)
#define SECURITY_CAPABILITY_APPOINTMENTS                        (0x0000000BL)
#define SECURITY_CAPABILITY_CONTACTS                            (0x0000000CL)

#define SECURITY_CAPABILITY_INTERNET_EXPLORER                   (0x00001000L)

//
// Mandatory Label Authority.
//

#define SECURITY_MANDATORY_LABEL_AUTHORITY          {0,0,0,0,0,16}
#define SECURITY_MANDATORY_UNTRUSTED_RID            (0x00000000L)
#define SECURITY_MANDATORY_LOW_RID                  (0x00001000L)
#define SECURITY_MANDATORY_MEDIUM_RID               (0x00002000L)
#define SECURITY_MANDATORY_MEDIUM_PLUS_RID          (SECURITY_MANDATORY_MEDIUM_RID + 0x100)
#define SECURITY_MANDATORY_HIGH_RID                 (0x00003000L)
#define SECURITY_MANDATORY_SYSTEM_RID               (0x00004000L)
#define SECURITY_MANDATORY_PROTECTED_PROCESS_RID    (0x00005000L)

//
// SECURITY_MANDATORY_MAXIMUM_USER_RID is the highest RID that
// can be set by a usermode caller.
//

#define SECURITY_MANDATORY_MAXIMUM_USER_RID   SECURITY_MANDATORY_SYSTEM_RID

#define MANDATORY_LEVEL_TO_MANDATORY_RID(IL) (IL * 0x1000)

#define SECURITY_SCOPED_POLICY_ID_AUTHORITY             {0,0,0,0,0,17}

//
// Authentication Authority
//

#define SECURITY_AUTHENTICATION_AUTHORITY                        {0,0,0,0,0,18}
#define SECURITY_AUTHENTICATION_AUTHORITY_RID_COUNT              (1L)
#define SECURITY_AUTHENTICATION_AUTHORITY_ASSERTED_RID           (0x00000001L)
#define SECURITY_AUTHENTICATION_SERVICE_ASSERTED_RID             (0x00000002L)
#define SECURITY_AUTHENTICATION_FRESH_KEY_AUTH_RID               (0x00000003L)
#define SECURITY_AUTHENTICATION_KEY_TRUST_RID                    (0x00000004L)
#define SECURITY_AUTHENTICATION_KEY_PROPERTY_MFA_RID             (0x00000005L)
#define SECURITY_AUTHENTICATION_KEY_PROPERTY_ATTESTATION_RID     (0x00000006L)

//
// Process Trust Authority
//

#define SECURITY_PROCESS_TRUST_AUTHORITY    {0,0,0,0,0,19}
#define SECURITY_PROCESS_TRUST_AUTHORITY_RID_COUNT (2L)

#define SECURITY_PROCESS_PROTECTION_TYPE_FULL_RID           (0x00000400L)
#define SECURITY_PROCESS_PROTECTION_TYPE_LITE_RID           (0x00000200L)
#define SECURITY_PROCESS_PROTECTION_TYPE_NONE_RID           (0x00000000L)

#define SECURITY_PROCESS_PROTECTION_LEVEL_WINTCB_RID        (0x00002000L)
#define SECURITY_PROCESS_PROTECTION_LEVEL_WINDOWS_RID       (0x00001000L)
#define SECURITY_PROCESS_PROTECTION_LEVEL_APP_RID           (0x00000800L)
#define SECURITY_PROCESS_PROTECTION_LEVEL_AUTHENTICODE_RID  (0x00000400L)
#define SECURITY_PROCESS_PROTECTION_LEVEL_NONE_RID          (0x00000000L)

//
// Trusted Installer RIDs
//

#define SECURITY_TRUSTED_INSTALLER_RID1 956008885
#define SECURITY_TRUSTED_INSTALLER_RID2 3418522649
#define SECURITY_TRUSTED_INSTALLER_RID3 1831038044
#define SECURITY_TRUSTED_INSTALLER_RID4 1853292631
#define SECURITY_TRUSTED_INSTALLER_RID5 2271478464



//
// Allocate the System Luid.  The first 1000 LUIDs are reserved.
// Use #999 here (0x3e7 = 999)
//

#define SYSTEM_LUID                     { 0x3e7, 0x0 }
#define ANONYMOUS_LOGON_LUID            { 0x3e6, 0x0 }
#define LOCALSERVICE_LUID               { 0x3e5, 0x0 }
#define NETWORKSERVICE_LUID             { 0x3e4, 0x0 }
#define IUSER_LUID                      { 0x3e3, 0x0 }


//
//  The structure of an ACE is a common ace header followed by ace type
//  specific data.  Pictorally the structure of the common ace header is
//  as follows:
//
//       3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//       1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//      +---------------+-------+-------+---------------+---------------+
//      |            AceSize            |    AceFlags   |     AceType   |
//      +---------------+-------+-------+---------------+---------------+
//
//  AceType denotes the type of the ace, there are some predefined ace
//  types
//
//  AceSize is the size, in bytes, of ace.
//
//  AceFlags are the Ace flags for audit and inheritance, defined shortly.

typedef struct _ACE_HEADER {
    UCHAR AceType;
    UCHAR AceFlags;
    USHORT AceSize;
} ACE_HEADER;
typedef ACE_HEADER *PACE_HEADER;

//
//  The following are the predefined ace types that go into the AceType
//  field of an Ace header.
//

#define ACCESS_MIN_MS_ACE_TYPE                  (0x0)
#define ACCESS_ALLOWED_ACE_TYPE                 (0x0)
#define ACCESS_DENIED_ACE_TYPE                  (0x1)
#define SYSTEM_AUDIT_ACE_TYPE                   (0x2)
#define SYSTEM_ALARM_ACE_TYPE                   (0x3)
#define ACCESS_MAX_MS_V2_ACE_TYPE               (0x3)

#define ACCESS_ALLOWED_COMPOUND_ACE_TYPE        (0x4)
#define ACCESS_MAX_MS_V3_ACE_TYPE               (0x4)

#define ACCESS_MIN_MS_OBJECT_ACE_TYPE           (0x5)
#define ACCESS_ALLOWED_OBJECT_ACE_TYPE          (0x5)
#define ACCESS_DENIED_OBJECT_ACE_TYPE           (0x6)
#define SYSTEM_AUDIT_OBJECT_ACE_TYPE            (0x7)
#define SYSTEM_ALARM_OBJECT_ACE_TYPE            (0x8)
#define ACCESS_MAX_MS_OBJECT_ACE_TYPE           (0x8)

#define ACCESS_MAX_MS_V4_ACE_TYPE               (0x8)
#define ACCESS_MAX_MS_ACE_TYPE                  (0x8)

#define ACCESS_ALLOWED_CALLBACK_ACE_TYPE        (0x9)
#define ACCESS_DENIED_CALLBACK_ACE_TYPE         (0xA)
#define ACCESS_ALLOWED_CALLBACK_OBJECT_ACE_TYPE (0xB)
#define ACCESS_DENIED_CALLBACK_OBJECT_ACE_TYPE  (0xC)
#define SYSTEM_AUDIT_CALLBACK_ACE_TYPE          (0xD)
#define SYSTEM_ALARM_CALLBACK_ACE_TYPE          (0xE)
#define SYSTEM_AUDIT_CALLBACK_OBJECT_ACE_TYPE   (0xF)
#define SYSTEM_ALARM_CALLBACK_OBJECT_ACE_TYPE   (0x10)

#define SYSTEM_MANDATORY_LABEL_ACE_TYPE         (0x11)
#define SYSTEM_RESOURCE_ATTRIBUTE_ACE_TYPE      (0x12)
#define SYSTEM_SCOPED_POLICY_ID_ACE_TYPE        (0x13)
#define SYSTEM_PROCESS_TRUST_LABEL_ACE_TYPE     (0x14)
#define SYSTEM_ACCESS_FILTER_ACE_TYPE           (0x15)
#define ACCESS_MAX_MS_V5_ACE_TYPE               (0x15)

// end_winnt


// begin_winnt

//
//  The following are the inherit flags that go into the AceFlags field
//  of an Ace header.
//

#define OBJECT_INHERIT_ACE                (0x1)
#define CONTAINER_INHERIT_ACE             (0x2)
#define NO_PROPAGATE_INHERIT_ACE          (0x4)
#define INHERIT_ONLY_ACE                  (0x8)
#define INHERITED_ACE                     (0x10)
#define VALID_INHERIT_FLAGS               (0x1F)


//  The following are the currently defined ACE flags that go into the
//  AceFlags field of an ACE header.  Each ACE type has its own set of
//  AceFlags.
//
//

//
//  SYSTEM_AUDIT and SYSTEM_ALARM AceFlags
//
//  These control the signaling of audit and alarms for success or failure.
//
//  SUCCESSFUL_ACCESS_ACE_FLAG - used only with system audit and alarm ACE
//  types to indicate that a message is generated for successful accesses.
//
//  FAILED_ACCESS_ACE_FLAG - used only with system audit and alarm ACE types
//  to indicate that a message is generated for failed accesses.
//

#define SUCCESSFUL_ACCESS_ACE_FLAG       (0x40)
#define FAILED_ACCESS_ACE_FLAG           (0x80)

//
//  SYSTEM_ACCESS_FILTER_ACE AceFlags
//
//  These control the behaviour of SYSTEM_ACCESS_FILTER_ACE .
//
//  TRUST_PROTECTED_FILTER_ACE_FLAG - used only with SYSTEM_FILTERING_ACE_TYPE
//  ACEs to indicate that this ACE may not be deleted/modified except when the,
//  the current Trust Level dominates the one specified in the Ace SID.
//  If this flag is set then the SID in the ACE should be a valid TrustLevelSid.
//

#define TRUST_PROTECTED_FILTER_ACE_FLAG  (0x40)


//
//  We'll define the structure of the predefined ACE types.  Pictorally
//  the structure of the predefined ACE's is as follows:
//
//       3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//       1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//      +---------------+-------+-------+---------------+---------------+
//      |    AceFlags   | Resd  |Inherit|    AceSize    |     AceType   |
//      +---------------+-------+-------+---------------+---------------+
//      |                              Mask                             |
//      +---------------------------------------------------------------+
//      |                                                               |
//      +                                                               +
//      |                                                               |
//      +                              Sid                              +
//      |                                                               |
//      +                                                               +
//      |                                                               |
//      +---------------------------------------------------------------+
//
//  Mask is the access mask associated with the ACE.  This is either the
//  access allowed, access denied, audit, or alarm mask.
//
//  Sid is the Sid associated with the ACE.
//

//  The following are the four predefined ACE types.

//  Examine the AceType field in the Header to determine
//  which structure is appropriate to use for casting.


typedef struct _ACCESS_ALLOWED_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} ACCESS_ALLOWED_ACE;

typedef ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;

typedef struct _ACCESS_DENIED_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} ACCESS_DENIED_ACE;
typedef ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;

typedef struct _SYSTEM_AUDIT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;

typedef struct _SYSTEM_ALARM_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_ALARM_ACE;
typedef SYSTEM_ALARM_ACE *PSYSTEM_ALARM_ACE;

typedef struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
    // Sid followed by CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 structure
} SYSTEM_RESOURCE_ATTRIBUTE_ACE, *PSYSTEM_RESOURCE_ATTRIBUTE_ACE;

typedef struct _SYSTEM_SCOPED_POLICY_ID_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_SCOPED_POLICY_ID_ACE, *PSYSTEM_SCOPED_POLICY_ID_ACE;

typedef struct _SYSTEM_MANDATORY_LABEL_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;

typedef struct _SYSTEM_PROCESS_TRUST_LABEL_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_PROCESS_TRUST_LABEL_ACE, *PSYSTEM_PROCESS_TRUST_LABEL_ACE;

typedef struct _SYSTEM_ACCESS_FILTER_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
    // Filter Condition follows the SID
} SYSTEM_ACCESS_FILTER_ACE, *PSYSTEM_ACCESS_FILTER_ACE;

#define SYSTEM_MANDATORY_LABEL_NO_WRITE_UP         0x1
#define SYSTEM_MANDATORY_LABEL_NO_READ_UP          0x2
#define SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP       0x4

#define SYSTEM_MANDATORY_LABEL_VALID_MASK (SYSTEM_MANDATORY_LABEL_NO_WRITE_UP   | \
                                           SYSTEM_MANDATORY_LABEL_NO_READ_UP    | \
                                           SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP)

// Placeholder value that allows all ranges
#define SYSTEM_PROCESS_TRUST_LABEL_VALID_MASK      0x00ffffff
#define SYSTEM_PROCESS_TRUST_NOCONSTRAINT_MASK     0xffffffff
#define SYSTEM_ACCESS_FILTER_VALID_MASK            0x00ffffff
#define SYSTEM_ACCESS_FILTER_NOCONSTRAINT_MASK     0xffffffff

#define SECURITY_DESCRIPTOR_MIN_LENGTH   (sizeof(SECURITY_DESCRIPTOR))


typedef USHORT SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;

#define SE_OWNER_DEFAULTED               (0x0001)
#define SE_GROUP_DEFAULTED               (0x0002)
#define SE_DACL_PRESENT                  (0x0004)
#define SE_DACL_DEFAULTED                (0x0008)
#define SE_SACL_PRESENT                  (0x0010)
#define SE_SACL_DEFAULTED                (0x0020)
// end_winnt
#define SE_DACL_UNTRUSTED                (0x0040)
#define SE_SERVER_SECURITY               (0x0080)
// begin_winnt
#define SE_DACL_AUTO_INHERIT_REQ         (0x0100)
#define SE_SACL_AUTO_INHERIT_REQ         (0x0200)
#define SE_DACL_AUTO_INHERITED           (0x0400)
#define SE_SACL_AUTO_INHERITED           (0x0800)
#define SE_DACL_PROTECTED                (0x1000)
#define SE_SACL_PROTECTED                (0x2000)
#define SE_RM_CONTROL_VALID              (0x4000)
#define SE_SELF_RELATIVE                 (0x8000)

//
//  Where:
//
//      SE_OWNER_DEFAULTED - This boolean flag, when set, indicates that the
//          SID pointed to by the Owner field was provided by a
//          defaulting mechanism rather than explicitly provided by the
//          original provider of the security descriptor.  This may
//          affect the treatment of the SID with respect to inheritence
//          of an owner.
//
//      SE_GROUP_DEFAULTED - This boolean flag, when set, indicates that the
//          SID in the Group field was provided by a defaulting mechanism
//          rather than explicitly provided by the original provider of
//          the security descriptor.  This may affect the treatment of
//          the SID with respect to inheritence of a primary group.
//
//      SE_DACL_PRESENT - This boolean flag, when set, indicates that the
//          security descriptor contains a discretionary ACL.  If this
//          flag is set and the Dacl field of the SECURITY_DESCRIPTOR is
//          null, then a null ACL is explicitly being specified.
//
//      SE_DACL_DEFAULTED - This boolean flag, when set, indicates that the
//          ACL pointed to by the Dacl field was provided by a defaulting
//          mechanism rather than explicitly provided by the original
//          provider of the security descriptor.  This may affect the
//          treatment of the ACL with respect to inheritence of an ACL.
//          This flag is ignored if the DaclPresent flag is not set.
//
//      SE_SACL_PRESENT - This boolean flag, when set,  indicates that the
//          security descriptor contains a system ACL pointed to by the
//          Sacl field.  If this flag is set and the Sacl field of the
//          SECURITY_DESCRIPTOR is null, then an empty (but present)
//          ACL is being specified.
//
//      SE_SACL_DEFAULTED - This boolean flag, when set, indicates that the
//          ACL pointed to by the Sacl field was provided by a defaulting
//          mechanism rather than explicitly provided by the original
//          provider of the security descriptor.  This may affect the
//          treatment of the ACL with respect to inheritence of an ACL.
//          This flag is ignored if the SaclPresent flag is not set.
//
// end_winnt
//      SE_DACL_TRUSTED - This boolean flag, when set, indicates that the
//          ACL pointed to by the Dacl field was provided by a trusted source
//          and does not require any editing of compound ACEs.  If this flag
//          is not set and a compound ACE is encountered, the system will
//          substitute known valid SIDs for the server SIDs in the ACEs.
//
//      SE_SERVER_SECURITY - This boolean flag, when set, indicates that the
//         caller wishes the system to create a Server ACL based on the
//         input ACL, regardess of its source (explicit or defaulting.
//         This is done by replacing all of the GRANT ACEs with compound
//         ACEs granting the current server.  This flag is only
//         meaningful if the subject is impersonating.
//
// begin_winnt
//      SE_SELF_RELATIVE - This boolean flag, when set, indicates that the
//          security descriptor is in self-relative form.  In this form,
//          all fields of the security descriptor are contiguous in memory
//          and all pointer fields are expressed as offsets from the
//          beginning of the security descriptor.  This form is useful
//          for treating security descriptors as opaque data structures
//          for transmission in communication protocol or for storage on
//          secondary media.
//
//
//
// Pictorially the structure of a security descriptor is as follows:
//
//       3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//       1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//      +---------------------------------------------------------------+
//      |            Control            |Reserved1 (SBZ)|   Revision    |
//      +---------------------------------------------------------------+
//      |                            Owner                              |
//      +---------------------------------------------------------------+
//      |                            Group                              |
//      +---------------------------------------------------------------+
//      |                            Sacl                               |
//      +---------------------------------------------------------------+
//      |                            Dacl                               |
//      +---------------------------------------------------------------+
//
// In general, this data structure should be treated opaquely to ensure future
// compatibility.
//
//

typedef struct _SECURITY_DESCRIPTOR_RELATIVE {
    UCHAR Revision;
    UCHAR Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    ULONG Owner;
    ULONG Group;
    ULONG Sacl;
    ULONG Dacl;
    } SECURITY_DESCRIPTOR_RELATIVE, *PISECURITY_DESCRIPTOR_RELATIVE;

typedef struct _SECURITY_DESCRIPTOR {
   UCHAR Revision;
   UCHAR Sbz1;
   SECURITY_DESCRIPTOR_CONTROL Control;
   PSID Owner;
   PSID Group;
   PACL Sacl;
   PACL Dacl;

   } SECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;

   
typedef struct _SECURITY_OBJECT_AI_PARAMS {
    ULONG Size;             //Set to sizeof(SECURITY_OBJECT_AI_PARAMS)
    ULONG ConstraintMask;
} SECURITY_OBJECT_AI_PARAMS, *PSECURITY_OBJECT_AI_PARAMS;




////////////////////////////////////////////////////////////////////////
//                                                                    //
//               Object Type list for AccessCheckByType               //
//                                                                    //
////////////////////////////////////////////////////////////////////////

typedef struct _OBJECT_TYPE_LIST {
    USHORT Level;
    USHORT Sbz;
    GUID *ObjectType;
} OBJECT_TYPE_LIST, *POBJECT_TYPE_LIST;

//
// DS values for Level
//

#define ACCESS_OBJECT_GUID       0
#define ACCESS_PROPERTY_SET_GUID 1
#define ACCESS_PROPERTY_GUID     2

#define ACCESS_MAX_LEVEL         4

//
// Parameters to NtAccessCheckByTypeAndAditAlarm
//

typedef enum _AUDIT_EVENT_TYPE {
    AuditEventObjectAccess,
    AuditEventDirectoryServiceAccess
} AUDIT_EVENT_TYPE, *PAUDIT_EVENT_TYPE;

#define AUDIT_ALLOW_NO_PRIVILEGE 0x1

//
// DS values for Source and ObjectTypeName
//

#define ACCESS_DS_SOURCE_A "DS"
#define ACCESS_DS_SOURCE_W L"DS"
#define ACCESS_DS_OBJECT_TYPE_NAME_A "Directory Service Object"
#define ACCESS_DS_OBJECT_TYPE_NAME_W L"Directory Service Object"

////////////////////////////////////////////////////////////////////////
//                                                                    //
//               Privilege Related Data Structures                    //
//                                                                    //
////////////////////////////////////////////////////////////////////////



//
// Values for different access granted\denied reasons:
// AccessReasonAceN = AccessReasonAce + N.
// AccessReasonPrivilegeN = AccessReasonPrivilege + N.
//

#define ACCESS_REASON_TYPE_MASK 0x00ff0000
#define ACCESS_REASON_DATA_MASK 0x0000ffff

#define ACCESS_REASON_STAGING_MASK  0x80000000
#define ACCESS_REASON_EXDATA_MASK   0x7f000000

typedef enum _ACCESS_REASON_TYPE{

    AccessReasonNone                    = 0x00000000,   // Indicate no reason for the bit. The bit may not be checked, or just no known reason.

    //
    // The lowest 2 bytes store the index of the ACE that grant/deny this bit.
    // If the corresponding access mask is zero, then it is deny ACE; otherwise,
    // it is allow ACE.
    //
    AccessReasonAllowedAce                  = 0x00010000,   // Granted a permission.
    AccessReasonDeniedAce                   = 0x00020000,   // Denied a permission.

    AccessReasonAllowedParentAce            = 0x00030000,   // Granted a permission from parent ACE
    AccessReasonDeniedParentAce             = 0x00040000,   // Denied a permission from parent ACE

    AccessReasonNotGrantedByCape            = 0x00050000,   // A CAPE didn't grant the permission
    AccessReasonNotGrantedByParentCape      = 0x00060000,   // A CAPE from the parent's SD didn't grant the permission

    AccessReasonNotGrantedToAppContainer    = 0x00070000,   // This is an AppContainer and no ACE granted the permission.

    AccessReasonMissingPrivilege            = 0x00100000,
    AccessReasonFromPrivilege               = 0x00200000,


    AccessReasonIntegrityLevel              = 0x00300000,

    AccessReasonOwnership                   = 0x00400000,

    AccessReasonNullDacl                    = 0x00500000,
    AccessReasonEmptyDacl                   = 0x00600000,

    AccessReasonNoSD                        = 0x00700000,
    AccessReasonNoGrant                     = 0x00800000,   // this access bit is not granted by any ACE.

    AccessReasonTrustLabel                  = 0x00900000,   // The trust label ACE did not grant this access.

    AccessReasonFilterAce                   = 0x00a00000    // The filtering ACE did not grant this access
}
ACCESS_REASON_TYPE;

 //
// Structure to hold access denied\granted reason for every bit of ACCESS_MASK.
// There are 32-bits in ACCESS_MASK and only 27-bits are actually valid on
// return from AccessCheck because MAXIMUM_ALLOWED, GENERIC_READ,
// GENERIC_WRITE, GENERIC_EXECUTE, and GENERIC_ALL are never returned.
//
// The content in Data fields depends on the Access Reason, for example,
// if the reason is AccessReasonAce, the Data will be the ACE ID.
// If there are more than one reason (more than one bit is set), the array size
// of the Data is equal to the number of bits set (or number of reasons).
// The Data could be null for a particular reason.
//

typedef ULONG ACCESS_REASON;

typedef struct _ACCESS_REASONS{
        ACCESS_REASON Data[32];
} ACCESS_REASONS, *PACCESS_REASONS;


/*
The following data structures are defined to consolidate various falvors of
access check functions. In particular for Windows 7, the new access check
function will enable security attribute check, plus returning the reason
for a access check result.

The new access check function based on these data structures will
form the foundation to reimplement other flavors of access check
functions.

*/

//
// Structure to hold pointer to security descriptor and its unique id, which
// can be used for caching access check results.
// (NOTE NOTE) The cache key can be constructed by SecurityDescriptorId, Token and
// PrincipalSelfSid. Watch how GenericMapping affects the cache results.
//
#define SE_SECURITY_DESCRIPTOR_FLAG_NO_OWNER_ACE            0x00000001
#define SE_SECURITY_DESCRIPTOR_FLAG_NO_LABEL_ACE            0x00000002
#define SE_SECURITY_DESCRIPTOR_FLAG_NO_ACCESS_FILTER_ACE    0x00000004
#define SE_SECURITY_DESCRIPTOR_VALID_FLAGS                  0x00000007


typedef struct _SE_SECURITY_DESCRIPTOR
{
    ULONG Size;
    ULONG Flags;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_SECURITY_DESCRIPTOR, *PSE_SECURITY_DESCRIPTOR;

typedef struct _SE_ACCESS_REQUEST
{
    ULONG Size;
    PSE_SECURITY_DESCRIPTOR SeSecurityDescriptor;
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK PreviouslyGrantedAccess;
    PSID PrincipalSelfSid;      // Need to watch how this field affects the cache.
    PGENERIC_MAPPING GenericMapping;
    ULONG ObjectTypeListCount;
    POBJECT_TYPE_LIST ObjectTypeList;
} SE_ACCESS_REQUEST, *PSE_ACCESS_REQUEST;


typedef struct _SE_ACCESS_REPLY
{
    ULONG Size;
    ULONG ResultListCount;  // Indicate the array size of GrantedAccess and AccessStatus, it only can be either 1 or ObjectTypeListCount.
    PACCESS_MASK GrantedAccess;
    PNTSTATUS AccessStatus;
    PACCESS_REASONS AccessReason;
    PPRIVILEGE_SET* Privileges;
} SE_ACCESS_REPLY, *PSE_ACCESS_REPLY;

// end_winnt

typedef enum _SE_AUDIT_OPERATION
{
    AuditPrivilegeObject,
    AuditPrivilegeService,
    AuditAccessCheck,
    AuditOpenObject,
    AuditOpenObjectWithTransaction,
    AuditCloseObject,
    AuditDeleteObject,
    AuditOpenObjectForDelete,
    AuditOpenObjectForDeleteWithTransaction,
    AuditCloseNonObject,
    AuditOpenNonObject,
    AuditObjectReference,
    AuditHandleCreation,
} SE_AUDIT_OPERATION, *PSE_AUDIT_OPERATION;



typedef struct _SE_AUDIT_INFO
{
    ULONG Size;
    AUDIT_EVENT_TYPE AuditType;
    SE_AUDIT_OPERATION AuditOperation;
    ULONG AuditFlags;
    UNICODE_STRING SubsystemName;
    UNICODE_STRING ObjectTypeName;
    UNICODE_STRING ObjectName;
    PVOID HandleId;
    GUID* TransactionId;
    LUID* OperationId;
    BOOLEAN ObjectCreation;
    BOOLEAN GenerateOnClose;
} SE_AUDIT_INFO, *PSE_AUDIT_INFO;



////////////////////////////////////////////////////////////////////
//                                                                //
//           Token Object Definitions                             //
//                                                                //
//                                                                //
////////////////////////////////////////////////////////////////////

// begin_access

//
// Token Specific Access Rights.
//

#define TOKEN_ASSIGN_PRIMARY    (0x0001)
#define TOKEN_DUPLICATE         (0x0002)
#define TOKEN_IMPERSONATE       (0x0004)
#define TOKEN_QUERY             (0x0008)
#define TOKEN_QUERY_SOURCE      (0x0010)
#define TOKEN_ADJUST_PRIVILEGES (0x0020)
#define TOKEN_ADJUST_GROUPS     (0x0040)
#define TOKEN_ADJUST_DEFAULT    (0x0080)
#define TOKEN_ADJUST_SESSIONID  (0x0100)

#define TOKEN_ALL_ACCESS_P (STANDARD_RIGHTS_REQUIRED  |\
                          TOKEN_ASSIGN_PRIMARY      |\
                          TOKEN_DUPLICATE           |\
                          TOKEN_IMPERSONATE         |\
                          TOKEN_QUERY               |\
                          TOKEN_QUERY_SOURCE        |\
                          TOKEN_ADJUST_PRIVILEGES   |\
                          TOKEN_ADJUST_GROUPS       |\
                          TOKEN_ADJUST_DEFAULT )

#if ((defined(_WIN32_WINNT) && (_WIN32_WINNT > 0x0400)) || (!defined(_WIN32_WINNT)))
#define TOKEN_ALL_ACCESS  (TOKEN_ALL_ACCESS_P |\
                          TOKEN_ADJUST_SESSIONID )
#else
#define TOKEN_ALL_ACCESS  (TOKEN_ALL_ACCESS_P)
#endif

#define TOKEN_READ       (STANDARD_RIGHTS_READ      |\
                          TOKEN_QUERY)


#define TOKEN_WRITE      (STANDARD_RIGHTS_WRITE     |\
                          TOKEN_ADJUST_PRIVILEGES   |\
                          TOKEN_ADJUST_GROUPS       |\
                          TOKEN_ADJUST_DEFAULT)

#define TOKEN_EXECUTE    (STANDARD_RIGHTS_EXECUTE)

#define TOKEN_TRUST_CONSTRAINT_MASK    (STANDARD_RIGHTS_READ  | \
                                       TOKEN_QUERY  |\
                                       TOKEN_QUERY_SOURCE )

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define TOKEN_ACCESS_PSEUDO_HANDLE_WIN8 (TOKEN_QUERY | TOKEN_QUERY_SOURCE)

#define TOKEN_ACCESS_PSEUDO_HANDLE TOKEN_ACCESS_PSEUDO_HANDLE_WIN8

#endif
//
// end_access
//
//
// Token Types
//

typedef enum _TOKEN_TYPE {
    TokenPrimary = 1,
    TokenImpersonation
    } TOKEN_TYPE;
typedef TOKEN_TYPE *PTOKEN_TYPE;

//
// Token elevation values describe the relative strength of a given token.
// A full token is a token with all groups and privileges to which the principal
// is authorized.  A limited token is one with some groups or privileges removed.
//

typedef enum _TOKEN_ELEVATION_TYPE {
    TokenElevationTypeDefault = 1,
    TokenElevationTypeFull,
    TokenElevationTypeLimited,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;

//
// Token Information Classes.
//


typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser = 1,
    TokenGroups,
    TokenPrivileges,
    TokenOwner,
    TokenPrimaryGroup,
    TokenDefaultDacl,
    TokenSource,
    TokenType,
    TokenImpersonationLevel,
    TokenStatistics,
    TokenRestrictedSids,
    TokenSessionId,
    TokenGroupsAndPrivileges,
    TokenSessionReference,
    TokenSandBoxInert,
    TokenAuditPolicy,
    TokenOrigin,
    TokenElevationType,
    TokenLinkedToken,
    TokenElevation,
    TokenHasRestrictions,
    TokenAccessInformation,
    TokenVirtualizationAllowed,
    TokenVirtualizationEnabled,
    TokenIntegrityLevel,
    TokenUIAccess,
    TokenMandatoryPolicy,
    TokenLogonSid,
    TokenIsAppContainer,
    TokenCapabilities,
    TokenAppContainerSid,
    TokenAppContainerNumber,
    TokenUserClaimAttributes,
    TokenDeviceClaimAttributes,
    TokenRestrictedUserClaimAttributes,
    TokenRestrictedDeviceClaimAttributes,
    TokenDeviceGroups,
    TokenRestrictedDeviceGroups,
    TokenSecurityAttributes,
    TokenIsRestricted,
    TokenProcessTrustLevel,
    TokenPrivateNameSpace,
    TokenSingletonAttributes,
    TokenBnoIsolation,
    TokenChildProcessFlags,
    MaxTokenInfoClass  // MaxTokenInfoClass should always be the last enum
} TOKEN_INFORMATION_CLASS, *PTOKEN_INFORMATION_CLASS;

//
// Token information class structures
//

typedef struct _TOKEN_USER {
    SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;

#ifndef MIDL_PASS

typedef struct _SE_TOKEN_USER {
    union {
        TOKEN_USER TokenUser;
        SID_AND_ATTRIBUTES User;
    } DUMMYUNIONNAME;

    union {
        SID Sid;
        UCHAR Buffer[SECURITY_MAX_SID_SIZE];
    } DUMMYUNIONNAME2;

} SE_TOKEN_USER , PSE_TOKEN_USER;

#define TOKEN_USER_MAX_SIZE (sizeof(TOKEN_USER) + SECURITY_MAX_SID_SIZE)

#endif


typedef struct _TOKEN_GROUPS {
    ULONG GroupCount;
#ifdef MIDL_PASS
    [size_is(GroupCount)] SID_AND_ATTRIBUTES Groups[*];
#else // MIDL_PASS
    SID_AND_ATTRIBUTES Groups[ANYSIZE_ARRAY];
#endif // MIDL_PASS
} TOKEN_GROUPS, *PTOKEN_GROUPS;

typedef struct _TOKEN_PRIVILEGES {
    ULONG PrivilegeCount;
    LUID_AND_ATTRIBUTES Privileges[ANYSIZE_ARRAY];
} TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES;


typedef struct _TOKEN_OWNER {
    PSID Owner;
} TOKEN_OWNER, *PTOKEN_OWNER;

#ifndef MIDL_PASS
#define TOKEN_OWNER_MAX_SIZE (sizeof(TOKEN_OWNER) + SECURITY_MAX_SID_SIZE)
#endif

typedef struct _TOKEN_PRIMARY_GROUP {
    PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP, *PTOKEN_PRIMARY_GROUP;


typedef struct _TOKEN_DEFAULT_DACL {
    PACL DefaultDacl;
} TOKEN_DEFAULT_DACL, *PTOKEN_DEFAULT_DACL;

typedef struct _TOKEN_USER_CLAIMS {
    PCLAIMS_BLOB UserClaims;
} TOKEN_USER_CLAIMS, *PTOKEN_USER_CLAIMS;

typedef struct _TOKEN_DEVICE_CLAIMS {
    PCLAIMS_BLOB DeviceClaims;
} TOKEN_DEVICE_CLAIMS, *PTOKEN_DEVICE_CLAIMS;

typedef struct _TOKEN_GROUPS_AND_PRIVILEGES {
    ULONG SidCount;
    ULONG SidLength;
    PSID_AND_ATTRIBUTES Sids;
    ULONG RestrictedSidCount;
    ULONG RestrictedSidLength;
    PSID_AND_ATTRIBUTES RestrictedSids;
    ULONG PrivilegeCount;
    ULONG PrivilegeLength;
    PLUID_AND_ATTRIBUTES Privileges;
    LUID AuthenticationId;
} TOKEN_GROUPS_AND_PRIVILEGES, *PTOKEN_GROUPS_AND_PRIVILEGES;

typedef struct _TOKEN_LINKED_TOKEN {
    HANDLE LinkedToken;
} TOKEN_LINKED_TOKEN, *PTOKEN_LINKED_TOKEN;

typedef struct _TOKEN_ELEVATION {
    ULONG TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION;

typedef struct _TOKEN_MANDATORY_LABEL {
    SID_AND_ATTRIBUTES Label;
} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL;

#define TOKEN_MANDATORY_POLICY_OFF             0x0
#define TOKEN_MANDATORY_POLICY_NO_WRITE_UP     0x1
#define TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN 0x2

#define TOKEN_MANDATORY_POLICY_VALID_MASK      (TOKEN_MANDATORY_POLICY_NO_WRITE_UP | \
                                                TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN)

#ifndef MIDL_PASS
#define TOKEN_INTEGRITY_LEVEL_MAX_SIZE ((((ULONG)(sizeof(TOKEN_MANDATORY_LABEL)) + sizeof(PVOID) - 1) & ~(sizeof(PVOID)-1)) + SECURITY_MAX_SID_SIZE)
#endif

typedef struct _TOKEN_MANDATORY_POLICY {
    ULONG Policy;
} TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY;

typedef PVOID PSECURITY_ATTRIBUTES_OPAQUE;

typedef struct _TOKEN_ACCESS_INFORMATION {
    PSID_AND_ATTRIBUTES_HASH SidHash;
    PSID_AND_ATTRIBUTES_HASH RestrictedSidHash;
    PTOKEN_PRIVILEGES Privileges;
    LUID AuthenticationId;
    TOKEN_TYPE TokenType;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    TOKEN_MANDATORY_POLICY MandatoryPolicy;
    ULONG Flags;
    ULONG AppContainerNumber;
    PSID PackageSid;
    PSID_AND_ATTRIBUTES_HASH CapabilitiesHash;
    PSID TrustLevelSid;
    PSECURITY_ATTRIBUTES_OPAQUE SecurityAttributes;
} TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION;

//
// Valid bits for each TOKEN_AUDIT_POLICY policy mask field.
//

#define POLICY_AUDIT_SUBCATEGORY_COUNT (59)

typedef struct _TOKEN_AUDIT_POLICY {
    UCHAR PerUserPolicy[((POLICY_AUDIT_SUBCATEGORY_COUNT) >> 1) + 1];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;

#define TOKEN_SOURCE_LENGTH 8

typedef struct _TOKEN_SOURCE {
    CHAR SourceName[TOKEN_SOURCE_LENGTH];
    LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE;


typedef struct _TOKEN_STATISTICS {
    LUID TokenId;
    LUID AuthenticationId;
    LARGE_INTEGER ExpirationTime;
    TOKEN_TYPE TokenType;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    ULONG DynamicCharged;
    ULONG DynamicAvailable;
    ULONG GroupCount;
    ULONG PrivilegeCount;
    LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;



typedef struct _TOKEN_CONTROL {
    LUID TokenId;
    LUID AuthenticationId;
    LUID ModifiedId;
    TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL;

typedef struct _TOKEN_ORIGIN {
    LUID OriginatingLogonSession ;
} TOKEN_ORIGIN, * PTOKEN_ORIGIN ;


typedef enum _MANDATORY_LEVEL {
    MandatoryLevelUntrusted = 0,
    MandatoryLevelLow,
    MandatoryLevelMedium,
    MandatoryLevelHigh,
    MandatoryLevelSystem,
    MandatoryLevelSecureProcess,
    MandatoryLevelCount
} MANDATORY_LEVEL, *PMANDATORY_LEVEL;

typedef struct _TOKEN_APPCONTAINER_INFORMATION {
    PSID TokenAppContainer;
} TOKEN_APPCONTAINER_INFORMATION, *PTOKEN_APPCONTAINER_INFORMATION;

#ifndef MIDL_PASS
#define TOKEN_APPCONTAINER_SID_MAX_SIZE (sizeof(TOKEN_APPCONTAINER_INFORMATION) + SECURITY_MAX_SID_SIZE)
#endif

typedef struct _TOKEN_SID_INFORMATION {
    PSID Sid;
} TOKEN_SID_INFORMATION, *PTOKEN_SID_INFORMATION;

typedef struct _TOKEN_BNO_ISOLATION_INFORMATION {
    PWSTR       IsolationPrefix;
    BOOLEAN     IsolationEnabled;
} TOKEN_BNO_ISOLATION_INFORMATION, *PTOKEN_BNO_ISOLATION_INFORMATION;

//
//  *** Claim Security attributes ***
//
//      These #defines and data structures (almost) exactly mirror
//      the Token_XXX definitions (except for PWSTR/PUNICODE changes)
//      in ntseapi.w as well as AUTHZ_XXX in authz.w. 
//      Keep them in sync. 
//
//
//  Security attribute data types ...
//

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_INVALID   0x00

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_INT64     0x01
#define CLAIM_SECURITY_ATTRIBUTE_TYPE_UINT64    0x02

//
//  Case insensitive attribute value string by default.
//  Unless the flag CLAIM_SECURITY_ATTRIBUTE_VALUE_CASE_SENSITIVE
//  is set indicating otherwise.
//

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_STRING    0x03

//
//  Fully-qualified binary name.
//

typedef struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE {
    ULONG64             Version;
    PWSTR               Name;
} CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE, *PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE;

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_FQBN      0x04

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_SID       0x05

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_BOOLEAN   0x06


typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
    PVOID   pValue;         //  Pointer is BYTE aligned.
    ULONG   ValueLength;    //  In bytes
} CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE,
    *PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;

#define CLAIM_SECURITY_ATTRIBUTE_TYPE_OCTET_STRING  0x10

//
// Attribute Flags
//

//
//  Attribute must not be inherited across process spawns.
//

#define CLAIM_SECURITY_ATTRIBUTE_NON_INHERITABLE      0x0001


//
//  Attribute value is compared in a case sensitive way. It is valid with string value
//  or composite type containing string value. For other types of value, this flag
//  will be ignored. Currently, it is valid with the two types:
//  CLAIM_SECURITY_ATTRIBUTE_TYPE_STRING and CLAIM_SECURITY_ATTRIBUTE_TYPE_FQBN.
//
#define CLAIM_SECURITY_ATTRIBUTE_VALUE_CASE_SENSITIVE         0x0002

//
// Attribute is considered only for Deny Aces.
//

#define CLAIM_SECURITY_ATTRIBUTE_USE_FOR_DENY_ONLY 0x0004

//
// Attribute is disabled by default.
//

#define CLAIM_SECURITY_ATTRIBUTE_DISABLED_BY_DEFAULT 0x0008

// 
// Attribute is disabled.
//

#define CLAIM_SECURITY_ATTRIBUTE_DISABLED 0x0010

//
// Attribute is mandatory.
//

#define CLAIM_SECURITY_ATTRIBUTE_MANDATORY 0x0020


#define CLAIM_SECURITY_ATTRIBUTE_VALID_FLAGS   (    \
                        CLAIM_SECURITY_ATTRIBUTE_NON_INHERITABLE       |  \
                        CLAIM_SECURITY_ATTRIBUTE_VALUE_CASE_SENSITIVE  |  \
                        CLAIM_SECURITY_ATTRIBUTE_USE_FOR_DENY_ONLY     |  \
                        CLAIM_SECURITY_ATTRIBUTE_DISABLED_BY_DEFAULT   |  \
                        CLAIM_SECURITY_ATTRIBUTE_DISABLED              |  \
                        CLAIM_SECURITY_ATTRIBUTE_MANDATORY )


//
// Reserve upper 16 bits for custom flags. These should be preserved but not
// validated as they do not affect security in any way.
//
#define CLAIM_SECURITY_ATTRIBUTE_CUSTOM_FLAGS   0xFFFF0000

//
//  An individual security attribute.
//


typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1 {

    //
    //  Name of the attribute.
    //  Case insensitive Unicode string.
    //

    PWSTR   Name; 

    //
    //  Data type of attribute.
    //

    USHORT  ValueType;

    //
    //  Pass 0 in a set operation and check for 0 in
    //  a get operation.
    //

    USHORT  Reserved;

    //
    // Attribute Flags
    //

    ULONG   Flags;

    //
    //  Number of values.
    //

    ULONG   ValueCount;

    //
    //  The actual value itself.
    //

    union {
        PLONG64                                         pInt64;
        PULONG64                                        pUint64;
        PWSTR                                           *ppString;
        PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE            pFqbn;
        PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE    pOctetString;
    } Values;
} CLAIM_SECURITY_ATTRIBUTE_V1, *PCLAIM_SECURITY_ATTRIBUTE_V1;

//
//  Relative form of the security attribute.
//


typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 {

    //
    //  Name of the attribute.
    //  Offset from beginning of structure.
    //

    ULONG   Name;

    //
    //  Data type of attribute.
    //

    USHORT  ValueType;

    //
    //  Pass 0 in a set operation and check for 0 in
    //  a get operation.
    //

    USHORT  Reserved;

    //
    // Attribute Flags
    //

    ULONG   Flags;

    //
    //  Number of values.
    //

    ULONG   ValueCount;

    //
    //  The actual value itself.
    //

    union {
        ULONG pInt64[ANYSIZE_ARRAY];
        ULONG pUint64[ANYSIZE_ARRAY];
        ULONG ppString[ANYSIZE_ARRAY];
        ULONG pFqbn[ANYSIZE_ARRAY];
        ULONG pOctetString[ANYSIZE_ARRAY];
    } Values;
} CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1, *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;


//
//  Set of security attributes.
//

//
//  Versioning. The interpretation of the pointers in the
//  Attribute field below is dependent on the version field.
//
//  Get operations return the version while the set operation
//  MUST specify the version of the data structure passed in.
//

#define CLAIM_SECURITY_ATTRIBUTES_INFORMATION_VERSION_V1    1

#define CLAIM_SECURITY_ATTRIBUTES_INFORMATION_VERSION       \
    CLAIM_SECURITY_ATTRIBUTES_INFORMATION_VERSION_V1



typedef struct _CLAIM_SECURITY_ATTRIBUTES_INFORMATION {

    //
    //  MUST BE first.
    //

    USHORT  Version;

    //
    //  Pass 0 in set operations and ignore on get operations.
    //

    USHORT  Reserved;

    ULONG   AttributeCount;
    union {
        PCLAIM_SECURITY_ATTRIBUTE_V1    pAttributeV1;
    } Attribute;
} CLAIM_SECURITY_ATTRIBUTES_INFORMATION, *PCLAIM_SECURITY_ATTRIBUTES_INFORMATION;

// end_winnt

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenThreadToken(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenThreadTokenEx(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenProcessToken(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenProcessTokenEx(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
NTSTATUS
NTAPI
NtOpenJobObjectToken(
    _In_ HANDLE JobHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDuplicateToken(
    _In_ HANDLE ExistingTokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN EffectiveOnly,
    _In_ TOKEN_TYPE TokenType,
    _Out_ PHANDLE NewTokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFilterToken (
    _In_ HANDLE ExistingTokenHandle,
    _In_ ULONG Flags,
    _In_opt_ PTOKEN_GROUPS SidsToDisable,
    _In_opt_ PTOKEN_PRIVILEGES PrivilegesToDelete,
    _In_opt_ PTOKEN_GROUPS RestrictedSids,
    _Out_ PHANDLE NewTokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtImpersonateAnonymousToken(
    _In_ HANDLE ThreadHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_When_(TokenInformationClass == TokenAccessInformation,
       _At_(TokenInformationLength,
            _In_range_(>=, sizeof(TOKEN_ACCESS_INFORMATION))))
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _Out_writes_bytes_to_opt_(TokenInformationLength, *ReturnLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength,
    _Out_ PULONG ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _In_reads_bytes_(TokenInformationLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAdjustPrivilegesToken (
    _In_ HANDLE TokenHandle,
    _In_ BOOLEAN DisableAllPrivileges,
    _In_opt_ PTOKEN_PRIVILEGES NewState,
    _In_ ULONG BufferLength,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PTOKEN_PRIVILEGES PreviousState,
    _Out_ _When_(PreviousState == NULL, _Out_opt_) PULONG ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAdjustGroupsToken (
    _In_ HANDLE TokenHandle,
    _In_ BOOLEAN ResetToDefault,
    _In_opt_ PTOKEN_GROUPS NewState,
    _In_opt_ ULONG BufferLength,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PTOKEN_GROUPS PreviousState,
    _Out_ PULONG ReturnLength
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrivilegeCheck (
    _In_ HANDLE ClientToken,
    _Inout_ PPRIVILEGE_SET RequiredPrivileges,
    _Out_ PBOOLEAN Result
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckByTypeAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckByTypeResultListAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckByTypeResultListAndAuditAlarmByHandle (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK GrantedAccess,
    _In_opt_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN ObjectCreation,
    _In_ BOOLEAN AccessGranted,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrivilegeObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN AccessGranted
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCloseObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ BOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDeleteObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ BOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrivilegedServiceAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_ PUNICODE_STRING ServiceName,
    _In_ HANDLE ClientToken,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN AccessGranted
    );
#endif


typedef
_Function_class_(RTL_HEAP_COMMIT_ROUTINE)
_IRQL_requires_same_
NTSTATUS
NTAPI
RTL_HEAP_COMMIT_ROUTINE(
    _In_ PVOID Base,
    _Inout_ PVOID *CommitAddress,
    _Inout_ PSIZE_T CommitSize
    );
typedef RTL_HEAP_COMMIT_ROUTINE *PRTL_HEAP_COMMIT_ROUTINE;

typedef struct _RTL_HEAP_PARAMETERS {
    ULONG Length;
    SIZE_T SegmentReserve;
    SIZE_T SegmentCommit;
    SIZE_T DeCommitFreeBlockThreshold;
    SIZE_T DeCommitTotalFreeThreshold;
    SIZE_T MaximumAllocationSize;
    SIZE_T VirtualMemoryThreshold;
    SIZE_T InitialCommit;
    SIZE_T InitialReserve;
    PRTL_HEAP_COMMIT_ROUTINE CommitRoutine;
    SIZE_T Reserved[ 2 ];
} RTL_HEAP_PARAMETERS, *PRTL_HEAP_PARAMETERS;

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlCreateHeap(
    _In_     ULONG Flags,
    _In_opt_ PVOID HeapBase,
    _In_opt_ SIZE_T ReserveSize,
    _In_opt_ SIZE_T CommitSize,
    _In_opt_ PVOID Lock,
    _In_opt_ PRTL_HEAP_PARAMETERS Parameters
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP


#define HEAP_NO_SERIALIZE               0x00000001      // winnt
#define HEAP_GROWABLE                   0x00000002      // winnt
#define HEAP_GENERATE_EXCEPTIONS        0x00000004      // winnt
#define HEAP_ZERO_MEMORY                0x00000008      // winnt
#define HEAP_REALLOC_IN_PLACE_ONLY      0x00000010      // winnt
#define HEAP_TAIL_CHECKING_ENABLED      0x00000020      // winnt
#define HEAP_FREE_CHECKING_ENABLED      0x00000040      // winnt
#define HEAP_DISABLE_COALESCE_ON_FREE   0x00000080      // winnt

#define HEAP_CREATE_ALIGN_16            0x00010000      // winnt Create heap with 16 byte alignment (obsolete)
#define HEAP_CREATE_ENABLE_TRACING      0x00020000      // winnt Create heap call tracing enabled (obsolete)
#define HEAP_CREATE_ENABLE_EXECUTE      0x00040000      // winnt Create heap with executable pages

#define HEAP_SETTABLE_USER_VALUE        0x00000100
#define HEAP_SETTABLE_USER_FLAG1        0x00000200
#define HEAP_SETTABLE_USER_FLAG2        0x00000400
#define HEAP_SETTABLE_USER_FLAG3        0x00000800
#define HEAP_SETTABLE_USER_FLAGS        0x00000E00

#define HEAP_CLASS_0                    0x00000000      // process heap
#define HEAP_CLASS_1                    0x00001000      // private heap
#define HEAP_CLASS_2                    0x00002000      // Kernel Heap
#define HEAP_CLASS_3                    0x00003000      // GDI heap
#define HEAP_CLASS_4                    0x00004000      // User heap
#define HEAP_CLASS_5                    0x00005000      // Console heap
#define HEAP_CLASS_6                    0x00006000      // User Desktop heap
#define HEAP_CLASS_7                    0x00007000      // Csrss Shared heap
#define HEAP_CLASS_8                    0x00008000      // Csr Port heap
#define HEAP_CLASS_MASK                 0x0000F000

#define HEAP_MAXIMUM_TAG                0x0FFF              // winnt
#define HEAP_GLOBAL_TAG                 0x0800
#define HEAP_PSEUDO_TAG_FLAG            0x8000              // winnt
#define HEAP_TAG_SHIFT                  18                  // winnt
#define HEAP_TAG_MASK                  (HEAP_MAXIMUM_TAG << HEAP_TAG_SHIFT)

#define HEAP_CREATE_SEGMENT_HEAP        0x00000100      // winnt create a segment heap

//
// Only applies to segment heap.  Applies pointer obfuscation which is
// generally excessive and unnecessary but is necessary for certain insecure
// heaps in win32k.
//

#define HEAP_CREATE_HARDENED            0x00000200      // winnt Only applies to segment heap.

#define HEAP_CREATE_VALID_MASK         (HEAP_NO_SERIALIZE |             \
                                        HEAP_GROWABLE |                 \
                                        HEAP_GENERATE_EXCEPTIONS |      \
                                        HEAP_ZERO_MEMORY |              \
                                        HEAP_REALLOC_IN_PLACE_ONLY |    \
                                        HEAP_TAIL_CHECKING_ENABLED |    \
                                        HEAP_FREE_CHECKING_ENABLED |    \
                                        HEAP_DISABLE_COALESCE_ON_FREE | \
                                        HEAP_CLASS_MASK |               \
                                        HEAP_CREATE_ALIGN_16 |          \
                                        HEAP_CREATE_ENABLE_TRACING |    \
                                        HEAP_CREATE_ENABLE_EXECUTE | \
                                        HEAP_CREATE_SEGMENT_HEAP | \
                                        HEAP_CREATE_HARDENED )

// begin_winnt
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if !defined(MIDL_PASS)
FORCEINLINE
ULONG
HEAP_MAKE_TAG_FLAGS (
    _In_ ULONG TagBase,
    _In_ ULONG Tag
    )

{
    return ((ULONG)((TagBase) + ((Tag) << HEAP_TAG_SHIFT)));
}
#endif
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
// end_winnt

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTSYSAPI
PVOID
NTAPI
RtlDestroyHeap(
    _In_ _Post_invalid_ PVOID HeapHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
_Must_inspect_result_
_Ret_maybenull_
_Post_writable_byte_size_(Size)
PVOID
NTAPI
RtlAllocateHeap(
    _In_ PVOID HeapHandle,
    _In_opt_ ULONG Flags,
    _In_ SIZE_T Size
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Success_(return != 0)
NTSYSAPI
LOGICAL
NTAPI
RtlFreeHeap(
    _In_ PVOID HeapHandle,
    _In_opt_ ULONG Flags,
    _Frees_ptr_opt_ PVOID BaseAddress
    );
#else
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlFreeHeap(
    _In_ PVOID HeapHandle,
    _In_opt_ ULONG Flags,
    _Frees_ptr_opt_ PVOID BaseAddress
    );
#endif // NTDDI_VERSION >= NTDDI_WIN2K
#endif // NTDDI_VERSION >= NTDDI_WIN8

// end_wudfpwdm
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
_Ret_range_(<=, MAXLONG)
NTSYSAPI
ULONG
NTAPI
RtlRandom (
    _Inout_ PULONG Seed
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
_Ret_range_(<=, MAXLONG)
NTSYSAPI
ULONG
NTAPI
RtlRandomEx (
    _Inout_ PULONG Seed
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitUnicodeStringEx(
    _Out_ PUNICODE_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCWSTR SourceString
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

// begin_wdm

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitAnsiStringEx(
    _Out_ PANSI_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitStringEx(
    _Out_ PSTRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
#endif

// end_wdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
_Success_(return != 0)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlCreateUnicodeString(
    _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem))
        PUNICODE_STRING DestinationString,
    _In_z_ PCWSTR SourceString
    );
#endif


_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlPrefixString(
    _In_ const STRING * String1,
    _In_ const STRING * String2,
    _In_ BOOLEAN CaseInSensitive
    );


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAppendStringToString (
    _Inout_ PSTRING Destination,
    _In_ const STRING * Source
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlOemStringToUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCOEM_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
_When_(AllocateDestinationString, _At_(DestinationString->Buffer, _Post_notnull_ __drv_allocatesMem(Mem)))
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeStringToOemString(
    _When_(AllocateDestinationString, _Out_)
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeStringToOemString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlOemStringToCountedUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCOEM_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeStringToCountedOemString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeStringToCountedOemString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlValidateUnicodeString(
    _Reserved_ ULONG Flags,
    _In_ PCUNICODE_STRING String
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP


#define RTL_DUPLICATE_UNICODE_STRING_NULL_TERMINATE (0x00000001)
#define RTL_DUPLICATE_UNICODE_STRING_ALLOCATE_NULL_STRING (0x00000002)

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlDuplicateUnicodeString(
    _In_ ULONG Flags,
    _In_ PCUNICODE_STRING StringIn,
    _Out_ _At_(StringOut->Buffer, __drv_allocatesMem(Mem))
        PUNICODE_STRING StringOut
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(AllocateDestinationString, _Must_inspect_result_)
NTSYSAPI
NTSTATUS
NTAPI
RtlDowncaseUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlFreeOemString(
    _Inout_ _At_(OemString->Buffer, _Frees_ptr_opt_)
        POEM_STRING OemString
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlxUnicodeStringToOemSize(
    _In_ PCUNICODE_STRING UnicodeString
    );
#endif

//
//  NTSYSAPI
//  ULONG
//  NTAPI
//  RtlUnicodeStringToOemSize(
//      PUNICODE_STRING UnicodeString
//      );
//

#define RtlUnicodeStringToOemSize(STRING) (                   \
    NLS_MB_OEM_CODE_PAGE_TAG ?                                \
    RtlxUnicodeStringToOemSize(STRING) :                      \
    ((STRING)->Length + sizeof(UNICODE_NULL)) / sizeof(WCHAR) \
)


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlxOemStringToUnicodeSize(
    _In_ PCOEM_STRING OemString
    );
#endif

//
//  NTSYSAPI
//  ULONG
//  NTAPI
//  RtlOemStringToUnicodeSize(
//      POEM_STRING OemString
//      );
//

#define RtlOemStringToUnicodeSize(STRING) (                  \
    NLS_MB_OEM_CODE_PAGE_TAG ?                               \
    RtlxOemStringToUnicodeSize(STRING) :                     \
    ((STRING)->Length + sizeof(ANSI_NULL)) * sizeof(WCHAR) \
)

//
//  ULONG
//  RtlOemStringToCountedUnicodeSize(
//      POEM_STRING OemString
//      );
//

#define RtlOemStringToCountedUnicodeSize(STRING) (                    \
    (ULONG)(RtlOemStringToUnicodeSize(STRING) - sizeof(UNICODE_NULL)) \
    )

// Use Unicode if possible
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlMultiByteToUnicodeN(
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInMultiByteString) const CHAR *MultiByteString,
    _In_ ULONG BytesInMultiByteString
    );
#endif

// Use Unicode if possible
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlMultiByteToUnicodeSize(
    _Out_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInMultiByteString) const CHAR *MultiByteString,
    _In_ ULONG BytesInMultiByteString
    );
#endif

// Use Unicode if possible
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToMultiByteSize(
    _Out_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

// Use Unicode if possible
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToMultiByteN(
    _Out_writes_bytes_to_(MaxBytesInMultiByteString, *BytesInMultiByteString) PCHAR MultiByteString,
    _In_ ULONG MaxBytesInMultiByteString,
    _Out_opt_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

// UTF 8 conversion

// begin_wdm
#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToUTF8N(
    _Out_writes_bytes_to_(UTF8StringMaxByteCount, *UTF8StringActualByteCount) PCHAR  UTF8StringDestination,
    _In_                                ULONG  UTF8StringMaxByteCount,
    _Out_                               PULONG UTF8StringActualByteCount,
    _In_reads_bytes_(UnicodeStringByteCount) PCWCH UnicodeStringSource,
    _In_                                ULONG  UnicodeStringByteCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUTF8ToUnicodeN(
    _Out_writes_bytes_to_(UnicodeStringMaxByteCount, *UnicodeStringActualByteCount) PWSTR  UnicodeStringDestination,
    _In_                             ULONG  UnicodeStringMaxByteCount,
    _Out_                            PULONG UnicodeStringActualByteCount,
    _In_reads_bytes_(UTF8StringByteCount) PCCH   UTF8StringSource,
    _In_                             ULONG  UTF8StringByteCount
    );
#endif
// end_wdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeToMultiByteN(
    _Out_writes_bytes_to_(MaxBytesInMultiByteString, *BytesInMultiByteString) PCHAR MultiByteString,
    _In_ ULONG MaxBytesInMultiByteString,
    _Out_opt_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlOemToUnicodeN(
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInOemString) PCCH OemString,
    _In_ ULONG BytesInOemString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToOemN(
    _Out_writes_bytes_to_(MaxBytesInOemString, *BytesInOemString) PCHAR OemString,
    _In_ ULONG MaxBytesInOemString,
    _Out_opt_ PULONG BytesInOemString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeToOemN(
    _Out_writes_bytes_to_(MaxBytesInOemString, *BytesInOemString) PCHAR OemString,
    _In_ ULONG MaxBytesInOemString,
    _Out_opt_ PULONG BytesInOemString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
NTSTATUS
NTAPI
RtlNormalizeString(
    _In_ ULONG NormForm,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
NTSTATUS
NTAPI
RtlIsNormalizedString(
    _In_ ULONG NormForm,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_ PBOOLEAN Normalized
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
NTSTATUS
NTAPI
RtlIdnToAscii(
    _In_ ULONG Flags,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
NTSTATUS
NTAPI
RtlIdnToUnicode(
    _In_ ULONG Flags,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
NTSTATUS
NTAPI
RtlIdnToNameprepUnicode(
    _In_ ULONG Flags,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
#endif


typedef
_Function_class_(RTL_ALLOCATE_STRING_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_allocatesMem(Mem)
PVOID
NTAPI
RTL_ALLOCATE_STRING_ROUTINE (
    _In_ SIZE_T NumberOfBytes
    );
typedef RTL_ALLOCATE_STRING_ROUTINE *PRTL_ALLOCATE_STRING_ROUTINE;

#if _WIN32_WINNT >= 0x0600

typedef
_Function_class_(RTL_REALLOCATE_STRING_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_allocatesMem(Mem)
PVOID
NTAPI
RTL_REALLOCATE_STRING_ROUTINE(
    _In_ SIZE_T NumberOfBytes,
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef RTL_REALLOCATE_STRING_ROUTINE *PRTL_REALLOCATE_STRING_ROUTINE;

#endif // _WIN32_WINNT >= 0x0600

typedef
_Function_class_(RTL_FREE_STRING_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
NTAPI
RTL_FREE_STRING_ROUTINE (
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef RTL_FREE_STRING_ROUTINE *PRTL_FREE_STRING_ROUTINE;

extern const PRTL_ALLOCATE_STRING_ROUTINE RtlAllocateStringRoutine;
extern const PRTL_FREE_STRING_ROUTINE RtlFreeStringRoutine;

#if _WIN32_WINNT >= 0x0600
extern const PRTL_REALLOCATE_STRING_ROUTINE RtlReallocateStringRoutine;
#endif // _WIN32_WINNT >= 0x0600

//
//  Defines and Routines for handling GUID's.
//

//
//  Routine for generating 8.3 names from long names.
//

//
//  The context structure is used when generating 8.3 names.  The caller must
//  always zero out the structure before starting a new generation sequence
//

typedef struct _GENERATE_NAME_CONTEXT {

    //
    //  The structure is divided into two strings.  The Name, and extension.
    //  Each part contains the value that was last inserted in the name.
    //  The length values are in terms of wchars and not bytes.  We also
    //  store the last index value used in the generation collision algorithm.
    //

    USHORT Checksum;
    BOOLEAN ChecksumInserted;

    _Field_range_(<=, 8) UCHAR NameLength;        // not including extension
    WCHAR NameBuffer[8];                          // e.g., "ntoskrnl"

    _Field_range_(<=, 4) ULONG ExtensionLength;   // including dot
    WCHAR ExtensionBuffer[4];                     // e.g., ".exe"

    ULONG LastIndexValue;

} GENERATE_NAME_CONTEXT;
typedef GENERATE_NAME_CONTEXT *PGENERATE_NAME_CONTEXT;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#if (NTDDI_VERSION >= NTDDI_VISTASP1)
//
//  In Vista SP1 and beyond this routine now returns
//  STATUS_FILE_SYSTEM_LIMITATION if the system can not generate a unique
//  shortname for a given file.  It returns this error after 1 million retry
//  attempts for a single given longname.
//

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGenerate8dot3Name (
    _In_    PCUNICODE_STRING Name,
    _In_    BOOLEAN AllowExtendedCharacters,
    _Inout_ PGENERATE_NAME_CONTEXT Context,
    _Inout_ PUNICODE_STRING Name8dot3
    );
#else   // (NTDDI_VERSION < NTDDI_VISTASP1)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlGenerate8dot3Name (
    _In_    PCUNICODE_STRING Name,
    _In_    BOOLEAN AllowExtendedCharacters,
    _Inout_ PGENERATE_NAME_CONTEXT Context,
    _Inout_ PUNICODE_STRING Name8dot3
    );
#endif
#endif  // (NTDDI_VERSION >= NTDDI_WIN2K)

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsNameLegalDOS8Dot3 (
    _In_ PCUNICODE_STRING Name,
    _Inout_opt_ POEM_STRING OemName,
    _Out_opt_ PBOOLEAN NameContainsSpaces
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsValidOemCharacter (
    _Inout_ PWCHAR Char
    );
#endif

//
//  Prefix package types and procedures.
//
//  Note that the following two record structures should really be opaque
//  to the user of this package.  The only information about the two
//  structures available for the user should be the size and alignment
//  of the structures.
//

typedef struct _PREFIX_TABLE_ENTRY {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    struct _PREFIX_TABLE_ENTRY *NextPrefixTree;
    RTL_SPLAY_LINKS Links;
    PSTRING Prefix;
} PREFIX_TABLE_ENTRY;
typedef PREFIX_TABLE_ENTRY *PPREFIX_TABLE_ENTRY;

typedef struct _PREFIX_TABLE {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    PPREFIX_TABLE_ENTRY NextPrefixTree;
} PREFIX_TABLE;
typedef PREFIX_TABLE *PPREFIX_TABLE;

//
//  The procedure prototypes for the prefix package
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
PfxInitialize (
    _Out_ PPREFIX_TABLE PrefixTable
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
BOOLEAN
NTAPI
PfxInsertPrefix (
    _In_ PPREFIX_TABLE PrefixTable,
    _In_ __drv_aliasesMem PSTRING Prefix,
    _Out_ PPREFIX_TABLE_ENTRY PrefixTableEntry
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
PfxRemovePrefix (
    _In_ PPREFIX_TABLE PrefixTable,
    _In_ PPREFIX_TABLE_ENTRY PrefixTableEntry
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
PPREFIX_TABLE_ENTRY
NTAPI
PfxFindPrefix (
    _In_ PPREFIX_TABLE PrefixTable,
    _In_ PSTRING FullName
    );
#endif

//
//  The following definitions are for the unicode version of the prefix
//  package.
//

typedef struct _UNICODE_PREFIX_TABLE_ENTRY {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    struct _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree;
    struct _UNICODE_PREFIX_TABLE_ENTRY *CaseMatch;
    RTL_SPLAY_LINKS Links;
    PUNICODE_STRING Prefix;
} UNICODE_PREFIX_TABLE_ENTRY;
typedef UNICODE_PREFIX_TABLE_ENTRY *PUNICODE_PREFIX_TABLE_ENTRY;

typedef struct _UNICODE_PREFIX_TABLE {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree;
    PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry;
} UNICODE_PREFIX_TABLE;
typedef UNICODE_PREFIX_TABLE *PUNICODE_PREFIX_TABLE;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlInitializeUnicodePrefix (
    _Out_ PUNICODE_PREFIX_TABLE PrefixTable
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
BOOLEAN
NTAPI
RtlInsertUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ __drv_aliasesMem PUNICODE_STRING Prefix,
    _Out_ PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlRemoveUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
PUNICODE_PREFIX_TABLE_ENTRY
NTAPI
RtlFindUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ PCUNICODE_STRING FullName,
    _In_ ULONG CaseInsensitiveIndex
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
PUNICODE_PREFIX_TABLE_ENTRY
NTAPI
RtlNextUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ BOOLEAN Restart
    );
#endif

//
//  Compression package types and procedures.
//

#define COMPRESSION_FORMAT_NONE          (0x0000)   // winnt
#define COMPRESSION_FORMAT_DEFAULT       (0x0001)   // winnt
#define COMPRESSION_FORMAT_LZNT1         (0x0002)   // winnt
#define COMPRESSION_FORMAT_XPRESS        (0x0003)   // winnt
#define COMPRESSION_FORMAT_XPRESS_HUFF   (0x0004)   // winnt
#define COMPRESSION_FORMAT_MAX           (0x0004)

#define COMPRESSION_ENGINE_STANDARD      (0x0000)   // winnt
#define COMPRESSION_ENGINE_MAXIMUM       (0x0100)   // winnt
#define COMPRESSION_ENGINE_HIBER         (0x0200)   // winnt
#define COMPRESSION_ENGINE_MAX           (0x0200)

#define COMPRESSION_FORMAT_MASK          (0x00FF)
#define COMPRESSION_ENGINE_MASK          (0xFF00)
#define COMPRESSION_FORMAT_ENGINE_MASK   (COMPRESSION_FORMAT_MASK |         \
                                          COMPRESSION_ENGINE_MASK)

//
//  Compressed Data Information structure.  This structure is
//  used to describe the state of a compressed data buffer,
//  whose uncompressed size is known.  All compressed chunks
//  described by this structure must be compressed with the
//  same format.  On compressed reads, this entire structure
//  is an output, and on compressed writes the entire structure
//  is an input.
//

typedef struct _COMPRESSED_DATA_INFO {

    //
    //  Code for the compression format (and engine) as
    //  defined in ntrtl.h.  Note that COMPRESSION_FORMAT_NONE
    //  and COMPRESSION_FORMAT_DEFAULT are invalid if
    //  any of the described chunks are compressed.
    //

    USHORT CompressionFormatAndEngine;

    //
    //  Since chunks and compression units are expected to be
    //  powers of 2 in size, we express then log2.  So, for
    //  example (1 << ChunkShift) == ChunkSizeInBytes.  The
    //  ClusterShift indicates how much space must be saved
    //  to successfully compress a compression unit - each
    //  successfully compressed compression unit must occupy
    //  at least one cluster less in bytes than an uncompressed
    //  compression unit.
    //

    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved;

    //
    //  This is the number of entries in the CompressedChunkSizes
    //  array.
    //

    USHORT NumberOfChunks;

    //
    //  This is an array of the sizes of all chunks resident
    //  in the compressed data buffer.  There must be one entry
    //  in this array for each chunk possible in the uncompressed
    //  buffer size.  A size of FSRTL_CHUNK_SIZE indicates the
    //  corresponding chunk is uncompressed and occupies exactly
    //  that size.  A size of 0 indicates that the corresponding
    //  chunk contains nothing but binary 0's, and occupies no
    //  space in the compressed data.  All other sizes must be
    //  less than FSRTL_CHUNK_SIZE, and indicate the exact size
    //  of the compressed data in bytes.
    //

    ULONG CompressedChunkSizes[ANYSIZE_ARRAY];

} COMPRESSED_DATA_INFO;
typedef COMPRESSED_DATA_INFO *PCOMPRESSED_DATA_INFO;

#ifdef _NT_STATIC_RTL_COMPRESS_
#define NT_RTL_COMPRESS_API
#else
#define NT_RTL_COMPRESS_API NTSYSAPI
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlGetCompressionWorkSpaceSize (
    _In_ USHORT CompressionFormatAndEngine,
    _Out_ PULONG CompressBufferWorkSpaceSize,
    _Out_ PULONG CompressFragmentWorkSpaceSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlCompressBuffer (
    _In_ USHORT CompressionFormatAndEngine,
    _In_reads_bytes_(UncompressedBufferSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _Out_writes_bytes_to_(CompressedBufferSize, *FinalCompressedSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_ ULONG UncompressedChunkSize,
    _Out_ PULONG FinalCompressedSize,
    _In_ PVOID WorkSpace
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressBuffer (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedBufferSize, *FinalUncompressedSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _Out_ PULONG FinalUncompressedSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8) || defined(_NT_STATIC_RTL_COMPRESS_)
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressBufferEx (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedBufferSize, *FinalUncompressedSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _Out_ PULONG FinalUncompressedSize,
    _In_opt_ PVOID WorkSpace
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE) || defined(_NT_STATIC_RTL_COMPRESS_)
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressBufferEx2 (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedBufferSize, *FinalUncompressedSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_ ULONG UncompressedChunkSize,
    _Out_ PULONG FinalUncompressedSize,
    _In_opt_ PVOID WorkSpace
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressFragment (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedFragmentSize, *FinalUncompressedSize) PUCHAR UncompressedFragment,
    _In_ ULONG UncompressedFragmentSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_range_(<, CompressedBufferSize) ULONG FragmentOffset,
    _Out_ PULONG FinalUncompressedSize,
    _In_ PVOID WorkSpace
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE) || defined(_NT_STATIC_RTL_COMPRESS_)
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressFragmentEx (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedFragmentSize, *FinalUncompressedSize) PUCHAR UncompressedFragment,
    _In_ ULONG UncompressedFragmentSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_range_(<, CompressedBufferSize) ULONG FragmentOffset,
    _In_ ULONG UncompressedChunkSize,
    _Out_ PULONG FinalUncompressedSize,
    _In_ PVOID WorkSpace
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDescribeChunk (
    _In_ USHORT CompressionFormat,
    _Inout_ PUCHAR *CompressedBuffer,
    _In_ PUCHAR EndOfCompressedBufferPlus1,
    _Out_ PUCHAR *ChunkBuffer,
    _Out_ PULONG ChunkSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlReserveChunk (
    _In_ USHORT CompressionFormat,
    _Inout_ PUCHAR *CompressedBuffer,
    _In_ PUCHAR EndOfCompressedBufferPlus1,
    _Out_ PUCHAR *ChunkBuffer,
    _In_ ULONG ChunkSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDecompressChunks (
    _Out_writes_bytes_(UncompressedBufferSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_reads_bytes_(CompressedTailSize) PUCHAR CompressedTail,
    _In_ ULONG CompressedTailSize,
    _In_ PCOMPRESSED_DATA_INFO CompressedDataInfo
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCompressChunks (
    _In_reads_bytes_(UncompressedBufferSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _Out_writes_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_range_(>=, (UncompressedBufferSize - (UncompressedBufferSize / 16))) ULONG CompressedBufferSize,
    _Inout_updates_bytes_(CompressedDataInfoLength) PCOMPRESSED_DATA_INFO CompressedDataInfo,
    _In_range_(>, sizeof(COMPRESSED_DATA_INFO)) ULONG CompressedDataInfoLength,
    _In_ PVOID WorkSpace
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
NTSYSAPI
SIZE_T
NTAPI
RtlCompareMemoryUlong (
    _In_reads_bytes_(Length) PVOID Source,
    _In_ SIZE_T Length,
    _In_ ULONG Pattern
    );

#endif

#if defined(_M_AMD64)

#if !defined(MIDL_PASS)

FORCEINLINE
VOID
RtlFillMemoryUlong (
    _Out_writes_bytes_all_(Length) PVOID Destination,
    _In_ SIZE_T Length,
    _In_ ULONG Pattern
    )

{

    PULONG Address = (PULONG)Destination;

    //
    // If the number of DWORDs is not zero, then fill the specified buffer
    // with the specified pattern.
    //

    if ((Length /= 4) != 0) {

        //
        // If the destination is not quadword aligned (ignoring low bits),
        // then align the destination by storing one DWORD.
        //

        if (((ULONG64)Address & 4) != 0) {
            *Address = Pattern;
            if ((Length -= 1) == 0) {
                return;
            }

            Address += 1;
        }

        //
        // If the number of QWORDs is not zero, then fill the destination
        // buffer a QWORD at a time.
        //

         __stosq((PULONG64)(Address),
                 Pattern | ((ULONG64)Pattern << 32),
                 Length / 2);

        if ((Length & 1) != 0) {
            Address[Length - 1] = Pattern;
        }
    }

    return;
}

#define RtlFillMemoryUlonglong(Destination, Length, Pattern)                \
    __stosq((PULONG64)(Destination), Pattern, (Length) / 8)

#endif

#else

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTSYSAPI
VOID
NTAPI
RtlFillMemoryUlong (
    _Out_writes_bytes_all_(Length) PVOID Destination,
    _In_ SIZE_T Length,
    _In_ ULONG Pattern
   );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTSYSAPI
VOID
NTAPI
RtlFillMemoryUlonglong (
   _Out_writes_bytes_all_(Length) PVOID Destination,
   _In_ SIZE_T Length,
   _In_ ULONGLONG Pattern
   );
#endif

#endif // defined(_M_AMD64)



//
//  A 64 bit Time value -> Seconds since the start of 1980
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlTimeToSecondsSince1980 (
    _In_ PLARGE_INTEGER Time,
    _Out_ PULONG ElapsedSeconds
    );
#endif

//
//  Seconds since the start of 1980 -> 64 bit Time value
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
VOID
NTAPI
RtlSecondsSince1980ToTime (
    _In_ ULONG ElapsedSeconds,
    _Out_ PLARGE_INTEGER Time
    );
#endif

//
//  A 64 bit Time value -> Seconds since the start of 1970
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlTimeToSecondsSince1970 (
    _In_ PLARGE_INTEGER Time,
    _Out_ PULONG ElapsedSeconds
    );
#endif

//
//  Seconds since the start of 1970 -> 64 bit Time value
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
VOID
NTAPI
RtlSecondsSince1970ToTime (
    _In_ ULONG ElapsedSeconds,
    _Out_ PLARGE_INTEGER Time
    );
#endif


//++
//
// PCHAR
// RtlOffsetToPointer (
//     PVOID Base,
//     ULONG Offset
//     )
//
// Routine Description:
//
// This macro generates a pointer which points to the byte that is 'Offset'
// bytes beyond 'Base'. This is useful for referencing fields within
// self-relative data structures.
//
// Arguments:
//
//     Base - The address of the base of the structure.
//
//     Offset - An unsigned integer offset of the byte whose address is to
//         be generated.
//
// Return Value:
//
//     A PCHAR pointer to the byte that is 'Offset' bytes beyond 'Base'.
//
//
//--

#define RtlOffsetToPointer(B,O)  ((PCHAR)( ((PCHAR)(B)) + ((ULONG_PTR)(O))  ))


//++
//
// ULONG
// RtlPointerToOffset (
//     PVOID Base,
//     PVOID Pointer
//     )
//
// Routine Description:
//
// This macro calculates the offset from Base to Pointer.  This is useful
// for producing self-relative offsets for structures.
//
// Arguments:
//
//     Base - The address of the base of the structure.
//
//     Pointer - A pointer to a field, presumably within the structure
//         pointed to by Base.  This value must be larger than that specified
//         for Base.
//
// Return Value:
//
//     A ULONG offset from Base to Pointer.
//
//
//--

#define RtlPointerToOffset(B,P)  ((ULONG)( ((PCHAR)(P)) - ((PCHAR)(B))  ))

//
//  Security ID RTL routine definitions
//


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlValidSid (
    _In_ PSID Sid
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlEqualSid (
    _In_ PSID Sid1,
    _In_ PSID Sid2
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlEqualPrefixSid (
    _In_ PSID Sid1,
    _In_ PSID Sid2
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlLengthRequiredSid (
    _In_ ULONG SubAuthorityCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
PVOID
NTAPI
RtlFreeSid(
    _In_ _Post_invalid_ PSID Sid
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlAllocateAndInitializeSid(
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount,
    _In_ ULONG SubAuthority0,
    _In_ ULONG SubAuthority1,
    _In_ ULONG SubAuthority2,
    _In_ ULONG SubAuthority3,
    _In_ ULONG SubAuthority4,
    _In_ ULONG SubAuthority5,
    _In_ ULONG SubAuthority6,
    _In_ ULONG SubAuthority7,
    _Outptr_ PSID *Sid
    );
#endif // NTDDI_VERSION >= NTDDI_WIN2K

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlAllocateAndInitializeSidEx(
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount,
    _In_reads_(SubAuthorityCount) PULONG SubAuthorities,
    _Outptr_ PSID *Sid
    );
#endif // NTDDI_VERSION >= NTDDI_WIN8

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitializeSid (
    _Out_ PSID Sid,
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitializeSidEx (
    _Out_writes_bytes_(SECURITY_SID_SIZE(SubAuthorityCount)) PSID Sid,
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount,
    ...
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
PSID_IDENTIFIER_AUTHORITY
NTAPI
RtlIdentifierAuthoritySid (
    _In_ PSID Sid
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
PULONG
NTAPI
RtlSubAuthoritySid (
    _In_ PSID Sid,
    _In_ ULONG SubAuthority
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTSYSAPI
PUCHAR
NTAPI
RtlSubAuthorityCountSid (
    _In_ PSID Sid
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
_Post_satisfies_(return >= 8 && return <= SECURITY_MAX_SID_SIZE)
ULONG
NTAPI
RtlLengthSid (
    _In_ PSID Sid
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCopySid (
    _In_ ULONG DestinationSidLength,
    _Out_writes_bytes_(DestinationSidLength) PSID DestinationSid,
    _In_ PSID SourceSid
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateServiceSid(
    _In_ PUNICODE_STRING ServiceName,
    _Out_writes_bytes_opt_(*ServiceSidLength) PSID ServiceSid,
    _Inout_ PULONG ServiceSidLength
    );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetSaclSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Out_ PBOOLEAN SaclPresent,
    _Out_ PACL *Sacl,
    _Out_ PBOOLEAN SaclDefaulted
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlReplaceSidInSd(
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PSID OldSid,
    _In_ PSID NewSid,
    _Out_ ULONG *NumChanges
    );

NTSYSAPI
NTSTATUS
NTAPI
RtlCreateVirtualAccountSid (
    _In_ PCUNICODE_STRING Name,
    _In_ ULONG BaseSubAuthority,
    _Out_writes_bytes_(*SidLength) PSID Sid,
    _Inout_ PULONG SidLength
    );
#endif

//
// MAX_UNICODE_STACK_BUFFER_LENGTH is the maximum stack buffer
// that RtlConvertSidToUnicodeString can fill if the caller
// specifies AllocateDestinationString = FALSE.
//

#define MAX_UNICODE_STACK_BUFFER_LENGTH 256

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlConvertSidToUnicodeString(
    _Inout_ PUNICODE_STRING UnicodeString,
    _In_ PSID Sid,
    _In_ BOOLEAN AllocateDestinationString
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlCopyLuid (
    _Out_ PLUID DestinationLuid,
    _In_ PLUID SourceLuid
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateAcl (
    _Out_writes_bytes_(AclLength) PACL Acl,
    _In_ ULONG AclLength,
    _In_ ULONG AclRevision
    );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAddAce (
    _Inout_ PACL Acl,
    _In_ ULONG AceRevision,
    _In_ ULONG StartingAceIndex,
    _In_reads_bytes_(AceListLength) PVOID AceList,
    _In_ ULONG AceListLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDeleteAce (
    _Inout_ PACL Acl,
    _In_ ULONG AceIndex
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetAce (
    _In_ PACL Acl,
    _In_ ULONG AceIndex,
    _Outptr_ PVOID *Ace
    );
#endif // NTDDI_VERSION >= NTDDI_WIN2K

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAddAccessAllowedAce (
    _Inout_ PACL Acl,
    _In_ ULONG AceRevision,
    _In_ ACCESS_MASK AccessMask,
    _In_ PSID Sid
    );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAddAccessAllowedAceEx (
    _Inout_ PACL Acl,
    _In_ ULONG AceRevision,
    _In_ ULONG AceFlags,
    _In_ ACCESS_MASK AccessMask,
    _In_ PSID Sid
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateSecurityDescriptorRelative (
    _Out_ PISECURITY_DESCRIPTOR_RELATIVE SecurityDescriptor,
    _In_ ULONG Revision
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetDaclSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Out_ PBOOLEAN DaclPresent,
    _Outptr_result_maybenull_ PACL *Dacl,
    _Pre_ _Writable_elements_(1)
    _When_(!(*DaclPresent), _Post_invalid_)
    _When_((*DaclPresent), _Post_valid_)
    PBOOLEAN DaclDefaulted
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSetOwnerSecurityDescriptor (
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID Owner,
    _In_ BOOLEAN OwnerDefaulted
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSetGroupSecurityDescriptor (
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID Group,
    _In_ BOOLEAN GroupDefaulted
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetGroupSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Outptr_result_maybenull_ PSID *Group,
    _Pre_ _Notnull_ _Pre_ _Writable_elements_(1)
    _When_(*Group == NULL, _Post_invalid_)
    _When_(*Group != NULL, _Post_valid_)
    PBOOLEAN GroupDefaulted
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAbsoluteToSelfRelativeSD (
    _In_ PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
    _Out_writes_bytes_to_opt_(*BufferLength, *BufferLength) PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
    _Inout_ PULONG BufferLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSelfRelativeToAbsoluteSD (
    _In_ PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
    _Out_writes_bytes_to_opt_(*AbsoluteSecurityDescriptorSize, *AbsoluteSecurityDescriptorSize) PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
    _Inout_ PULONG AbsoluteSecurityDescriptorSize,
    _Out_writes_bytes_to_opt_(*DaclSize, *DaclSize) PACL Dacl,
    _Inout_ PULONG DaclSize,
    _Out_writes_bytes_to_opt_(*SaclSize, *SaclSize) PACL Sacl,
    _Inout_ PULONG SaclSize,
    _Out_writes_bytes_to_opt_(*OwnerSize, *OwnerSize) PSID Owner,
    _Inout_ PULONG OwnerSize,
    _Out_writes_bytes_to_opt_(*PrimaryGroupSize, *PrimaryGroupSize) PSID PrimaryGroup,
    _Inout_ PULONG PrimaryGroupSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetOwnerSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Outptr_result_maybenull_ PSID *Owner,
    _When_(*Owner == NULL, _Post_invalid_)
    _When_(*Owner != NULL, _Post_valid_)
    _Pre_ _Notnull_ _Pre_ _Writable_elements_(1) PBOOLEAN OwnerDefaulted
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
_When_(Status < 0, _Out_range_(>, 0))
_When_(Status >= 0, _Out_range_(==, 0))
NTSYSAPI
ULONG
NTAPI
RtlNtStatusToDosError (
   _In_ NTSTATUS Status
   );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WINXP)
_When_(Status < 0, _Out_range_(>, 0))
_When_(Status >= 0, _Out_range_(==, 0))
NTSYSAPI
ULONG
NTAPI
RtlNtStatusToDosErrorNoTeb (
   _In_ NTSTATUS Status
   );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCustomCPToUnicodeN(
    _In_ PCPTABLEINFO CustomCP,
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInCustomCPString) PCH CustomCPString,
    _In_ ULONG BytesInCustomCPString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToCustomCPN(
    _In_ PCPTABLEINFO CustomCP,
    _Out_writes_bytes_to_(MaxBytesInCustomCPString, *BytesInCustomCPString) PCH CustomCPString,
    _In_ ULONG MaxBytesInCustomCPString,
    _Out_opt_ PULONG BytesInCustomCPString,
    _In_reads_bytes_(BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeToCustomCPN(
    _In_ PCPTABLEINFO CustomCP,
    _Out_writes_bytes_to_(MaxBytesInCustomCPString, *BytesInCustomCPString) PCH CustomCPString,
    _In_ ULONG MaxBytesInCustomCPString,
    _Out_opt_ PULONG BytesInCustomCPString,
    _In_reads_bytes_(BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlInitCodePageTable(
    _In_ PUSHORT TableBase,
    _Inout_ PCPTABLEINFO CodePageTable
    );
#endif


//
// Routine for verifying or creating the "System Volume Information"
// folder on NTFS volumes.
//

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateSystemVolumeInformationFolder(
    _In_ PCUNICODE_STRING VolumeRootPath
    );
#endif

#define RTL_SYSTEM_VOLUME_INFORMATION_FOLDER    L"System Volume Information"

//
//  Altitude Routines
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI
LONG
NTAPI
RtlCompareAltitudes(
    _In_ PCUNICODE_STRING Altitude1,
    _In_ PCUNICODE_STRING Altitude2
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
NTSYSAPI
BOOLEAN
NTAPI
RtlIsNonEmptyDirectoryReparsePointAllowed(
    _In_ ULONG ReparseTag
    );
#endif // NTDDI_VERSION >= NTDDI_RS2

//
// Placeholder file routines.
//

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

NTSYSAPI
BOOLEAN
NTAPI
RtlIsCloudFilesPlaceholder(
    _In_ ULONG FileAttributes,
    _In_ ULONG ReparseTag
    );

NTSYSAPI
BOOLEAN
NTAPI
RtlIsPartialPlaceholder(
    _In_ ULONG FileAttributes,
    _In_ ULONG ReparseTag
    );

NTSYSAPI
NTSTATUS
NTAPI
RtlIsPartialPlaceholderFileHandle(
    _In_ HANDLE FileHandle,
    _Out_ PBOOLEAN IsPartialPlaceholder
    );

NTSYSAPI
NTSTATUS
NTAPI
RtlIsPartialPlaceholderFileInfo(
    _In_ CONST VOID *InfoBuffer,
    _In_ FILE_INFORMATION_CLASS InfoClass,
    _Out_ PBOOLEAN IsPartialPlaceholder
    );

#endif // NTDDI_VERSION >= NTDDI_RS2

#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)

#define PHCM_APPLICATION_DEFAULT      ((CHAR)0)
#define PHCM_DISGUISE_PLACEHOLDERS    ((CHAR)1)
#define PHCM_EXPOSE_PLACEHOLDERS      ((CHAR)2)
#define PHCM_MAX                      ((CHAR)2)

#define PHCM_ERROR_INVALID_PARAMETER  ((CHAR)-1)
#define PHCM_ERROR_NO_TEB             ((CHAR)-2)

NTSYSAPI
CHAR
NTAPI
RtlQueryThreadPlaceholderCompatibilityMode(
    VOID
    );

NTSYSAPI
CHAR
NTAPI
RtlSetThreadPlaceholderCompatibilityMode(
    _In_ CHAR Mode
    );

#endif // NTDDI_VERSION >= NTDDI_RS3


#pragma region Application or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (NTDDI_VERSION > NTDDI_WINXP)

NTSYSAPI
_Success_(return != 0)
USHORT
NTAPI
RtlCaptureStackBackTrace(
    _In_ ULONG FramesToSkip,
    _In_ ULONG FramesToCapture,
    _Out_writes_to_(FramesToCapture, return) PVOID * BackTrace,
    _Out_opt_ PULONG BackTraceHash
    );


#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (NTDDI_VERSION > NTDDI_WIN2K)

NTSYSAPI
VOID
NTAPI
RtlCaptureContext(
    _Out_ PCONTEXT ContextRecord
    );


#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

//
// Define the various device type values.  Note that values used by Microsoft
// Corporation are in the range 0-32767, and 32768-65535 are reserved for use
// by customers.
//

#define DEVICE_TYPE ULONG

#define FILE_DEVICE_BEEP                0x00000001
#define FILE_DEVICE_CD_ROM              0x00000002
#define FILE_DEVICE_CD_ROM_FILE_SYSTEM  0x00000003
#define FILE_DEVICE_CONTROLLER          0x00000004
#define FILE_DEVICE_DATALINK            0x00000005
#define FILE_DEVICE_DFS                 0x00000006
#define FILE_DEVICE_DISK                0x00000007
#define FILE_DEVICE_DISK_FILE_SYSTEM    0x00000008
#define FILE_DEVICE_FILE_SYSTEM         0x00000009
#define FILE_DEVICE_INPORT_PORT         0x0000000a
#define FILE_DEVICE_KEYBOARD            0x0000000b
#define FILE_DEVICE_MAILSLOT            0x0000000c
#define FILE_DEVICE_MIDI_IN             0x0000000d
#define FILE_DEVICE_MIDI_OUT            0x0000000e
#define FILE_DEVICE_MOUSE               0x0000000f
#define FILE_DEVICE_MULTI_UNC_PROVIDER  0x00000010
#define FILE_DEVICE_NAMED_PIPE          0x00000011
#define FILE_DEVICE_NETWORK             0x00000012
#define FILE_DEVICE_NETWORK_BROWSER     0x00000013
#define FILE_DEVICE_NETWORK_FILE_SYSTEM 0x00000014
#define FILE_DEVICE_NULL                0x00000015
#define FILE_DEVICE_PARALLEL_PORT       0x00000016
#define FILE_DEVICE_PHYSICAL_NETCARD    0x00000017
#define FILE_DEVICE_PRINTER             0x00000018
#define FILE_DEVICE_SCANNER             0x00000019
#define FILE_DEVICE_SERIAL_MOUSE_PORT   0x0000001a
#define FILE_DEVICE_SERIAL_PORT         0x0000001b
#define FILE_DEVICE_SCREEN              0x0000001c
#define FILE_DEVICE_SOUND               0x0000001d
#define FILE_DEVICE_STREAMS             0x0000001e
#define FILE_DEVICE_TAPE                0x0000001f
#define FILE_DEVICE_TAPE_FILE_SYSTEM    0x00000020
#define FILE_DEVICE_TRANSPORT           0x00000021
#define FILE_DEVICE_UNKNOWN             0x00000022
#define FILE_DEVICE_VIDEO               0x00000023
#define FILE_DEVICE_VIRTUAL_DISK        0x00000024
#define FILE_DEVICE_WAVE_IN             0x00000025
#define FILE_DEVICE_WAVE_OUT            0x00000026
#define FILE_DEVICE_8042_PORT           0x00000027
#define FILE_DEVICE_NETWORK_REDIRECTOR  0x00000028
#define FILE_DEVICE_BATTERY             0x00000029
#define FILE_DEVICE_BUS_EXTENDER        0x0000002a
#define FILE_DEVICE_MODEM               0x0000002b
#define FILE_DEVICE_VDM                 0x0000002c
#define FILE_DEVICE_MASS_STORAGE        0x0000002d
#define FILE_DEVICE_SMB                 0x0000002e
#define FILE_DEVICE_KS                  0x0000002f
#define FILE_DEVICE_CHANGER             0x00000030
#define FILE_DEVICE_SMARTCARD           0x00000031
#define FILE_DEVICE_ACPI                0x00000032
#define FILE_DEVICE_DVD                 0x00000033
#define FILE_DEVICE_FULLSCREEN_VIDEO    0x00000034
#define FILE_DEVICE_DFS_FILE_SYSTEM     0x00000035
#define FILE_DEVICE_DFS_VOLUME          0x00000036
#define FILE_DEVICE_SERENUM             0x00000037
#define FILE_DEVICE_TERMSRV             0x00000038
#define FILE_DEVICE_KSEC                0x00000039
#define FILE_DEVICE_FIPS                0x0000003A
#define FILE_DEVICE_INFINIBAND          0x0000003B
#define FILE_DEVICE_VMBUS               0x0000003E
#define FILE_DEVICE_CRYPT_PROVIDER      0x0000003F
#define FILE_DEVICE_WPD                 0x00000040
#define FILE_DEVICE_BLUETOOTH           0x00000041
#define FILE_DEVICE_MT_COMPOSITE        0x00000042
#define FILE_DEVICE_MT_TRANSPORT        0x00000043
#define FILE_DEVICE_BIOMETRIC           0x00000044
#define FILE_DEVICE_PMI                 0x00000045
#define FILE_DEVICE_EHSTOR              0x00000046
#define FILE_DEVICE_DEVAPI              0x00000047
#define FILE_DEVICE_GPIO                0x00000048
#define FILE_DEVICE_USBEX               0x00000049
#define FILE_DEVICE_CONSOLE             0x00000050
#define FILE_DEVICE_NFP                 0x00000051
#define FILE_DEVICE_SYSENV              0x00000052
#define FILE_DEVICE_VIRTUAL_BLOCK       0x00000053
#define FILE_DEVICE_POINT_OF_SERVICE    0x00000054
#define FILE_DEVICE_STORAGE_REPLICATION 0x00000055
#define FILE_DEVICE_TRUST_ENV           0x00000056
#define FILE_DEVICE_UCM                 0x00000057
#define FILE_DEVICE_UCMTCPCI            0x00000058
#define FILE_DEVICE_PERSISTENT_MEMORY   0x00000059
#define FILE_DEVICE_NVDIMM              0x0000005a
#define FILE_DEVICE_HOLOGRAPHIC         0x0000005b
#define FILE_DEVICE_SDFXHCI             0x0000005c

//
// Macro definition for defining IOCTL and FSCTL function control codes.  Note
// that function codes 0-2047 are reserved for Microsoft Corporation, and
// 2048-4095 are reserved for customers.
//

#define CTL_CODE( DeviceType, Function, Method, Access ) (                 \
    ((DeviceType) << 16) | ((Access) << 14) | ((Function) << 2) | (Method) \
)

//
// Macro to extract device type out of the device io control code
//
#define DEVICE_TYPE_FROM_CTL_CODE(ctrlCode)     (((ULONG)(ctrlCode & 0xffff0000)) >> 16)

//
// Macro to extract buffering method out of the device io control code
//
#define METHOD_FROM_CTL_CODE(ctrlCode)          ((ULONG)(ctrlCode & 3))

//
// Define the method codes for how buffers are passed for I/O and FS controls
//

#define METHOD_BUFFERED                 0
#define METHOD_IN_DIRECT                1
#define METHOD_OUT_DIRECT               2
#define METHOD_NEITHER                  3

//
// Define some easier to comprehend aliases:
//   METHOD_DIRECT_TO_HARDWARE (writes, aka METHOD_IN_DIRECT)
//   METHOD_DIRECT_FROM_HARDWARE (reads, aka METHOD_OUT_DIRECT)
//

#define METHOD_DIRECT_TO_HARDWARE       METHOD_IN_DIRECT
#define METHOD_DIRECT_FROM_HARDWARE     METHOD_OUT_DIRECT

//
// Define the access check value for any access
//
//
// The FILE_READ_ACCESS and FILE_WRITE_ACCESS constants are also defined in
// ntioapi.h as FILE_READ_DATA and FILE_WRITE_DATA. The values for these
// constants *MUST* always be in sync.
//
//
// FILE_SPECIAL_ACCESS is checked by the NT I/O system the same as FILE_ANY_ACCESS.
// The file systems, however, may add additional access checks for I/O and FS controls
// that use this value.
//


#define FILE_ANY_ACCESS                 0
#define FILE_SPECIAL_ACCESS    (FILE_ANY_ACCESS)
#define FILE_READ_ACCESS          ( 0x0001 )    // file & pipe
#define FILE_WRITE_ACCESS         ( 0x0002 )    // file & pipe


#if (NTDDI_VERSION >= NTDDI_WINXP)

#if defined(SORTPP_PASS)

//
// cgen compiler doesn't handle _When_. Assume that every class only reads
// ThreadInformation and special-case the only exception, ThreadManageWritesToExecutableMemory,
// in whnt32.tpl.
//

__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationThread (
    _In_ HANDLE ThreadHandle,
    _In_ THREADINFOCLASS ThreadInformationClass,
    _In_reads_bytes_(ThreadInformationLength) PVOID ThreadInformation,
    _In_ ULONG ThreadInformationLength
    );

#else

__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationThread (
    _In_ HANDLE ThreadHandle,
    _In_ THREADINFOCLASS ThreadInformationClass,
    _When_((ThreadInformationClass != ThreadManageWritesToExecutableMemory),
           _In_reads_bytes_(ThreadInformationLength))
    _When_((ThreadInformationClass == ThreadManageWritesToExecutableMemory),
           _Inout_updates_(ThreadInformationLength))
    PVOID ThreadInformation,
    _In_ ULONG ThreadInformationLength
    );

#endif // SORTPP_PASS

#endif // NTDDI_VERSION >= NTDDI_WINXP


//
// Security operation mode of the system is held in a control
// longword.
//

typedef ULONG  LSA_OPERATIONAL_MODE, *PLSA_OPERATIONAL_MODE;

//
// Used by a logon process to indicate what type of logon is being
// requested.
//

typedef enum _SECURITY_LOGON_TYPE {
    UndefinedLogonType = 0, // This is used to specify an undefied logon type
    Interactive = 2,      // Interactively logged on (locally or remotely)
    Network,              // Accessing system via network
    Batch,                // Started via a batch queue
    Service,              // Service started by service controller
    Proxy,                // Proxy logon
    Unlock,               // Unlock workstation
    NetworkCleartext,     // Network logon with cleartext credentials
    NewCredentials,       // Clone caller, new default credentials
    //The types below only exist in Windows XP and greater
#if (_WIN32_WINNT >= 0x0501)
    RemoteInteractive,  // Remote, yet interactive. Terminal server
    CachedInteractive,  // Try cached credentials without hitting the net.
    // The types below only exist in Windows Server 2003 and greater
#endif
#if (_WIN32_WINNT >= 0x0502)
    CachedRemoteInteractive, // Same as RemoteInteractive, this is used internally for auditing purpose
    CachedUnlock        // Cached Unlock workstation
#endif
} SECURITY_LOGON_TYPE, *PSECURITY_LOGON_TYPE;


//
// All of this stuff (between the Ifndef _NTLSA_AUDIT_ and its endif) were not
// present in NTIFS prior to Windows Server 2003 SP1. All of the definitions however
// exist down to windows 2000 (except for the few exceptions noted in the code).
//

#ifndef _NTLSA_AUDIT_
#define _NTLSA_AUDIT_

/////////////////////////////////////////////////////////////////////////
//                                                                     //
// Data types related to Auditing                                      //
//                                                                     //
/////////////////////////////////////////////////////////////////////////


//
// The following enumerated type is used between the reference monitor and
// LSA in the generation of audit messages.  It is used to indicate the
// type of data being passed as a parameter from the reference monitor
// to LSA.  LSA is responsible for transforming the specified data type
// into a set of unicode strings that are added to the event record in
// the audit log.
//

typedef enum _SE_ADT_PARAMETER_TYPE {

    SeAdtParmTypeNone = 0,          //Produces 1 parameter
                                    //Received value:
                                    //
                                    //  None.
                                    //
                                    //Results in:
                                    //
                                    //  a unicode string containing "-".
                                    //
                                    //Note:  This is typically used to
                                    //       indicate that a parameter value
                                    //       was not available.
                                    //

    SeAdtParmTypeString,            //Produces 1 parameter.
                                    //Received Value:
                                    //
                                    //  Unicode String (variable length)
                                    //
                                    //Results in:
                                    //
                                    //  No transformation.  The string
                                    //  entered into the event record as
                                    //  received.
                                    //
                                    // The Address value of the audit info
                                    // should be a pointer to a UNICODE_STRING
                                    // structure.



    SeAdtParmTypeFileSpec,          //Produces 1 parameter.
                                    //Received value:
                                    //
                                    //  Unicode string containing a file or
                                    //  directory name.
                                    //
                                    //Results in:
                                    //
                                    //  Unicode string with the prefix of the
                                    //  file's path replaced by a drive letter
                                    //  if possible.
                                    //




    SeAdtParmTypeUlong,             //Produces 1 parameter
                                    //Received value:
                                    //
                                    //  Ulong
                                    //
                                    //Results in:
                                    //
                                    //  Unicode string representation of
                                    //  unsigned integer value.


    SeAdtParmTypeSid,               //Produces 1 parameter.
                                    //Received value:
                                    //
                                    //  SID (variable length)
                                    //
                                    //Results in:
                                    //
                                    //  String representation of SID
                                    //




    SeAdtParmTypeLogonId,           //Produces 4 parameters.
                                    //Received Value:
                                    //
                                    //  LUID (fixed length)
                                    //
                                    //Results in:
                                    //
                                    //  param 1: Sid string
                                    //  param 2: Username string
                                    //  param 3: domain name string
                                    //  param 4: Logon ID (Luid) string


    SeAdtParmTypeNoLogonId,         //Produces 3 parameters.
                                    //Received value:
                                    //
                                    //  None.
                                    //
                                    //Results in:
                                    //
                                    //  param 1: "-"
                                    //  param 2: "-"
                                    //  param 3: "-"
                                    //  param 4: "-"
                                    //
                                    //Note:
                                    //
                                    //  This type is used when a logon ID
                                    //  is needed, but one is not available
                                    //  to pass.  For example, if an
                                    //  impersonation logon ID is expected
                                    //  but the subject is not impersonating
                                    //  anyone.
                                    //

    SeAdtParmTypeAccessMask,        //Produces 1 parameter with formatting.
                                    //Received value:
                                    //
                                    //  ACCESS_MASK followed by
                                    //  a Unicode string.  The unicode
                                    //  string contains the name of the
                                    //  type of object the access mask
                                    //  applies to.  The event's source
                                    //  further qualifies the object type.
                                    //
                                    //Results in:
                                    //
                                    //  formatted unicode string built to
                                    //  take advantage of the specified
                                    //  source's parameter message file.
                                    //
                                    //Note:
                                    //
                                    //  An access mask containing three
                                    //  access types for a Widget object
                                    //  type (defined by the Foozle source)
                                    //  might end up looking like:
                                    //
                                    //      %%1062\n\t\t%1066\n\t\t%%601
                                    //
                                    //  The %%numbers are signals to the
                                    //  event viewer to perform parameter
                                    //  substitution before display.
                                    //



    SeAdtParmTypePrivs,             //Produces 1 parameter with formatting.
                                    //Received value:
                                    //
                                    //Results in:
                                    //
                                    //  formatted unicode string similar to
                                    //  that for access types.  Each priv
                                    //  will be formatted to be displayed
                                    //  on its own line.  E.g.,
                                    //
                                    //      %%642\n\t\t%%651\n\t\t%%655
                                    //

    SeAdtParmTypeObjectTypes,       //Produces 10 parameters with formatting.
                                    //Received value:
                                    //
                                    // Produces a list a stringized GUIDS along
                                    // with information similar to that for
                                    // an access mask.

    SeAdtParmTypeHexUlong,          //Produces 1 parameter
                                    //Received value:
                                    //
                                    //  Ulong
                                    //
                                    //Results in:
                                    //
                                    //  Unicode string representation of
                                    //  unsigned integer value in hexadecimal.

// In W2k this value did not exist, it was ParmTypeLUID

    SeAdtParmTypePtr,               //Produces 1 parameter
                                    //Received value:
                                    //
                                    //  pointer
                                    //
                                    //Results in:
                                    //
                                    //  Unicode string representation of
                                    //  unsigned integer value in hexadecimal.

//
// Everything below exists only in Windows XP and greater
//

    SeAdtParmTypeTime,              //Produces 2 parameters
                                    //Received value:
                                    //
                                    //  LARGE_INTEGER
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of
                                    // date and time.

                                    //
    SeAdtParmTypeGuid,              //Produces 1 parameter
                                    //Received value:
                                    //
                                    //  GUID pointer
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of GUID
                                    // {xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx}
                                    //

//
// Everything below exists only in Windows Server 2003 and Greater
//

    SeAdtParmTypeLuid,              //
                                    //Produces 1 parameter
                                    //Received value:
                                    //
                                    // LUID
                                    //
                                    //Results in:
                                    //
                                    // Hex LUID
                                    //

    SeAdtParmTypeHexInt64,          //Produces 1 parameter
                                    //Received value:
                                    //
                                    //  64 bit integer
                                    //
                                    //Results in:
                                    //
                                    //  Unicode string representation of
                                    //  unsigned integer value in hexadecimal.

    SeAdtParmTypeStringList,        //Produces 1 parameter
                                    //Received value:
                                    //
                                    // ptr to LSAP_ADT_STRING_LIST
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of
                                    // concatenation of the strings in the list

    SeAdtParmTypeSidList,           //Produces 1 parameter
                                    //Received value:
                                    //
                                    // ptr to LSAP_ADT_SID_LIST
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of
                                    // concatenation of the SIDs in the list

    SeAdtParmTypeDuration,          //Produces 1 parameters
                                    //Received value:
                                    //
                                    //  LARGE_INTEGER
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of
                                    // a duration.

    SeAdtParmTypeUserAccountControl,//Produces 3 parameters
                                    //Received value:
                                    //
                                    // old and new UserAccountControl values
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representations of
                                    // the flags in UserAccountControl.
                                    // 1 - old value in hex
                                    // 2 - new value in hex
                                    // 3 - difference as strings

    SeAdtParmTypeNoUac,             //Produces 3 parameters
                                    //Received value:
                                    //
                                    // none
                                    //
                                    //Results in:
                                    //
                                    // Three dashes ('-') as unicode strings.

    SeAdtParmTypeMessage,           //Produces 1 Parameter
                                    //Received value:
                                    //
                                    //  ULONG (MessageNo from msobjs.mc)
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of
                                    // %%MessageNo which the event viewer
                                    // will replace with the message string
                                    // from msobjs.mc

    SeAdtParmTypeDateTime,          //Produces 1 Parameter
                                    //Received value:
                                    //
                                    //  LARGE_INTEGER
                                    //
                                    //Results in:
                                    //
                                    // Unicode string representation of
                                    // date and time (in _one_ string).

    SeAdtParmTypeSockAddr,          // Produces 2 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to SOCKADDR_IN/SOCKADDR_IN6
                                    // structure
                                    //
                                    // Results in:
                                    //
                                    // param 1: IP address string
                                    // param 2: Port number string
                                    //

//
// Everything below this exists only in Windows Server 2008 and greater
//

    SeAdtParmTypeSD,                // Produces 1 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to SECURITY_DESCRIPTOR
                                    // structure. This HAS to appear in pairs.
                                    // The first parameter will represent the
                                    // old SD and the second parameter will
                                    // represent the New SD
                                    //
                                    // Results in:
                                    //
                                    // SDDL string representation of SD
                                    //

    SeAdtParmTypeLogonHours,        // Produces 1 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to LOGON_HOURS
                                    // structure
                                    //
                                    // Results in:
                                    //
                                    // String representation of allowed logon hours
                                    //

    SeAdtParmTypeLogonIdNoSid,      //Produces 3 parameters.
                                    //Received Value:
                                    //
                                    //  LUID (fixed length)
                                    //
                                    //Results in:
                                    //
                                    //  param 1: Username string
                                    //  param 2: domain name string
                                    //  param 3: Logon ID (Luid) string

    SeAdtParmTypeUlongNoConv,       // Produces 1 parameter.
                                    // Received Value:
                                    // Ulong
                                    //
                                    //Results in:
                                    // Not converted to string
                                    //

    SeAdtParmTypeSockAddrNoPort,    // Produces 1 parameter
                                    //
                                    // Received value:
                                    //
                                    // pointer to SOCKADDR_IN/SOCKADDR_IN6
                                    // structure
                                    //
                                    // Results in:
                                    //
                                    // param 1: IPv4/IPv6 address string
                                    //
//
// Everything below this exists only in Windows Server 2008 and greater
//

    SeAdtParmTypeAccessReason,      // Produces 1 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to SE_ADT_ACCESS_REASON structure
                                    //
                                    // Results in:
                                    //
                                    // String representation of the access reason.
                                    //
//
// Everything below this exists only in Windows Server 2012 and greater
//

    SeAdtParmTypeStagingReason,     // Produces 1 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to SE_ADT_ACCESS_REASON structure
                                    //
                                    // Results in:
                                    //
                                    // String representation of Staging policy's
                                    // access reason.
                                    //

    SeAdtParmTypeResourceAttribute, // Produces 1 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to SECURITY_DESCRIPTOR
                                    // structure
                                    //
                                    // Results in:
                                    //
                                    // SDDL string representation of the
                                    // Resource Attribute ACEs in the SD
                                    //

    SeAdtParmTypeClaims,            // Produces 1 parameters
                                    //
                                    // Received value:
                                    //
                                    // pointer to the structure -
                                    // CLAIM_SECURITY_ATTRIBUTES_INFORMATION
                                    // structure
                                    //
                                    // Results in:
                                    //
                                    // Claims information as attributes, value
                                    // pairs
                                    //

    SeAdtParmTypeLogonIdAsSid,      // Produces 4 parameters.
                                    // Received Value:
                                    //
                                    //  SID  (variable length)
                                    //
                                    //Results in:
                                    //
                                    //  param 1: Sid string (based on SID and not derived from the LUID)
                                    //  param 2: -
                                    //  param 3: -
                                    //  param 4: -

    SeAdtParmTypeMultiSzString,     //Produces 1 parameter
                                    //Received value:
                                    //
                                    // PZZWSTR string
                                    //
                                    //Results in:
                                    //
                                    // Unicode string with each null replaced with /r/n

    SeAdtParmTypeLogonIdEx,         //Produces 4 parameters.
                                    //Received Value:
                                    //
                                    //  LUID (fixed length)
                                    //
                                    //Results in:
                                    //
                                    //  param 1: Sid string
                                    //  param 2: Username string
                                    //  param 3: domain name string
                                    //  param 4: Logon ID (Luid) string

} SE_ADT_PARAMETER_TYPE, *PSE_ADT_PARAMETER_TYPE;

#ifndef GUID_DEFINED
#include <guiddef.h>
#endif /* GUID_DEFINED */

typedef struct _SE_ADT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;
#define SE_ADT_OBJECT_ONLY 0x1
    USHORT Level;
    ACCESS_MASK AccessMask;
} SE_ADT_OBJECT_TYPE, *PSE_ADT_OBJECT_TYPE;

typedef struct _SE_ADT_PARAMETER_ARRAY_ENTRY {

    SE_ADT_PARAMETER_TYPE Type;
    ULONG Length;
    ULONG_PTR Data[2];
    PVOID Address;

} SE_ADT_PARAMETER_ARRAY_ENTRY, *PSE_ADT_PARAMETER_ARRAY_ENTRY;


typedef struct _SE_ADT_ACCESS_REASON{
    ACCESS_MASK AccessMask;
    ULONG  AccessReasons[32];
    ULONG  ObjectTypeIndex;
    ULONG AccessGranted;
    PSECURITY_DESCRIPTOR SecurityDescriptor;    // multple SDs may be stored here in self-relative way.
} SE_ADT_ACCESS_REASON, *PSE_ADT_ACCESS_REASON;

typedef struct _SE_ADT_CLAIMS {

    ULONG Length;
    PCLAIMS_BLOB Claims; // one claim blob will be stored here in self-relative way

} SE_ADT_CLAIMS, *PSE_ADT_CLAIMS;

//
// Structure that will be passed between the Reference Monitor and LSA
// to transmit auditing information.
//

#define SE_MAX_AUDIT_PARAMETERS 32
#define SE_MAX_GENERIC_AUDIT_PARAMETERS 28

typedef struct _SE_ADT_PARAMETER_ARRAY {

    ULONG CategoryId;
    ULONG AuditId;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];

} SE_ADT_PARAMETER_ARRAY, *PSE_ADT_PARAMETER_ARRAY;

typedef struct _SE_ADT_PARAMETER_ARRAY_EX {

    ULONG CategoryId;
    ULONG AuditId;
    ULONG Version;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];

} SE_ADT_PARAMETER_ARRAY_EX, *PSE_ADT_PARAMETER_ARRAY_EX;


#define SE_ADT_PARAMETERS_SELF_RELATIVE     0x00000001
#define SE_ADT_PARAMETERS_SEND_TO_LSA       0x00000002
#define SE_ADT_PARAMETER_EXTENSIBLE_AUDIT   0x00000004
#define SE_ADT_PARAMETER_GENERIC_AUDIT      0x00000008
#define SE_ADT_PARAMETER_WRITE_SYNCHRONOUS  0x00000010


//
// This macro only existed in Windows Server 2008 and after
//

#define LSAP_SE_ADT_PARAMETER_ARRAY_TRUE_SIZE(AuditParameters)    \
     ( sizeof(SE_ADT_PARAMETER_ARRAY) -                           \
       sizeof(SE_ADT_PARAMETER_ARRAY_ENTRY) *                     \
       (SE_MAX_AUDIT_PARAMETERS - AuditParameters->ParameterCount) )

#endif // _NTLSA_AUDIT_


_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaRegisterLogonProcess (
    _In_ PLSA_STRING LogonProcessName,
    _Out_ PHANDLE LsaHandle,
    _Out_ PLSA_OPERATIONAL_MODE SecurityMode
    );

//
// The function below did not exist in NTIFS before windows XP
// However, the function has always been there, so it is okay to use
// even on w2k
//
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaLogonUser (
    _In_        HANDLE          LsaHandle,
    _In_        PLSA_STRING     OriginName,
    _In_        SECURITY_LOGON_TYPE LogonType,
    _In_        ULONG           AuthenticationPackage,
    _In_reads_bytes_(AuthenticationInformationLength) PVOID AuthenticationInformation,
    _In_        ULONG           AuthenticationInformationLength,
    _In_opt_    PTOKEN_GROUPS   LocalGroups,
    _In_        PTOKEN_SOURCE   SourceContext,
    _Out_       PVOID           *ProfileBuffer,
    _Out_       PULONG          ProfileBufferLength,
    _Inout_     PLUID           LogonId,
    _Out_       PHANDLE         Token,
    _Out_       PQUOTA_LIMITS   Quotas,
    _Out_       PNTSTATUS       SubStatus
    );


_IRQL_requires_same_
NTSTATUS
NTAPI
LsaFreeReturnBuffer (
    _In_ PVOID Buffer
    );


#ifndef _NTLSA_IFS_
#define _NTLSA_IFS_
#endif

/////////////////////////////////////////////////////////////////////////
//                                                                     //
// Name of the MSV1_0 authentication package                           //
//                                                                     //
/////////////////////////////////////////////////////////////////////////

#define MSV1_0_PACKAGE_NAME     "MICROSOFT_AUTHENTICATION_PACKAGE_V1_0"
#define MSV1_0_PACKAGE_NAMEW    L"MICROSOFT_AUTHENTICATION_PACKAGE_V1_0"
#define MSV1_0_PACKAGE_NAMEW_LENGTH sizeof(MSV1_0_PACKAGE_NAMEW) - sizeof(WCHAR)

//
// Location of MSV authentication package data
//
#define MSV1_0_SUBAUTHENTICATION_KEY "SYSTEM\\CurrentControlSet\\Control\\Lsa\\MSV1_0"
#define MSV1_0_SUBAUTHENTICATION_VALUE "Auth"


/////////////////////////////////////////////////////////////////////////
//                                                                     //
// Widely used MSV1_0 data types                                       //
//                                                                     //
/////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//       LOGON      Related Data Structures
//
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//
// When a LsaLogonUser() call is dispatched to the MsV1_0 authentication
// package, the beginning of the AuthenticationInformation buffer is
// cast to a MSV1_0_LOGON_SUBMIT_TYPE to determine the type of logon
// being requested.  Similarly, upon return, the type of profile buffer
// can be determined by typecasting it to a MSV_1_0_PROFILE_BUFFER_TYPE.
//

//
//  MSV1.0 LsaLogonUser() submission message types.
//

typedef enum _MSV1_0_LOGON_SUBMIT_TYPE {
    MsV1_0InteractiveLogon = 2,
    MsV1_0Lm20Logon,
    MsV1_0NetworkLogon,
    MsV1_0SubAuthLogon,
    MsV1_0WorkstationUnlockLogon = 7,
    // defined in Windows Server 2008 and up
    MsV1_0S4ULogon = 12,
    MsV1_0VirtualLogon = 82,
    // defined in Windows 8 and up
    MsV1_0NoElevationLogon = 83,
    // defined in Windows 8.1 and up
    MsV1_0LuidLogon = 84,
} MSV1_0_LOGON_SUBMIT_TYPE, *PMSV1_0_LOGON_SUBMIT_TYPE;


//
//  MSV1.0 LsaLogonUser() profile buffer types.
//

typedef enum _MSV1_0_PROFILE_BUFFER_TYPE {
    MsV1_0InteractiveProfile = 2,
    MsV1_0Lm20LogonProfile,
    MsV1_0SmartCardProfile
} MSV1_0_PROFILE_BUFFER_TYPE, *PMSV1_0_PROFILE_BUFFER_TYPE;

//
// MsV1_0InteractiveLogon
//
// The AuthenticationInformation buffer of an LsaLogonUser() call to
// perform an interactive logon contains the following data structure:
//

typedef struct _MSV1_0_INTERACTIVE_LOGON {
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Password;
} MSV1_0_INTERACTIVE_LOGON, *PMSV1_0_INTERACTIVE_LOGON;

//
// Where:
//
//     MessageType - Contains the type of logon being requested.  This
//         field must be set to MsV1_0InteractiveLogon.
//
//     UserName - Is a string representing the user's account name.  The
//         name may be up to 255 characters long.  The name is treated case
//         insensitive.
//
//     Password - Is a string containing the user's cleartext password.
//         The password may be up to 255 characters long and contain any
//         UNICODE value.
//
//


//
// The ProfileBuffer returned upon a successful logon of this type
// contains the following data structure:
//

typedef struct _MSV1_0_INTERACTIVE_PROFILE {
    MSV1_0_PROFILE_BUFFER_TYPE MessageType;
    USHORT LogonCount;
    USHORT BadPasswordCount;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER LogoffTime;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER PasswordLastSet;
    LARGE_INTEGER PasswordCanChange;
    LARGE_INTEGER PasswordMustChange;
    UNICODE_STRING LogonScript;
    UNICODE_STRING HomeDirectory;
    UNICODE_STRING FullName;
    UNICODE_STRING ProfilePath;
    UNICODE_STRING HomeDirectoryDrive;
    UNICODE_STRING LogonServer;
    ULONG UserFlags;
} MSV1_0_INTERACTIVE_PROFILE, *PMSV1_0_INTERACTIVE_PROFILE;

//
// where:
//
//     MessageType - Identifies the type of profile data being returned.
//         Contains the type of logon being requested.  This field must
//         be set to MsV1_0InteractiveProfile.
//
//     LogonCount - Number of times the user is currently logged on.
//
//     BadPasswordCount - Number of times a bad password was applied to
//         the account since last successful logon.
//
//     LogonTime - Time when user last logged on.  This is an absolute
//         format NT standard time value.
//
//     LogoffTime - Time when user should log off.  This is an absolute
//         format NT standard time value.
//
//     KickOffTime - Time when system should force user logoff.  This is
//         an absolute format NT standard time value.
//
//     PasswordLastChanged - Time and date the password was last
//         changed.  This is an absolute format NT standard time
//         value.
//
//     PasswordCanChange - Time and date when the user can change the
//         password.  This is an absolute format NT time value.  To
//         prevent a password from ever changing, set this field to a
//         date very far into the future.
//
//     PasswordMustChange - Time and date when the user must change the
//         password.  If the user can never change the password, this
//         field is undefined.  This is an absolute format NT time
//         value.
//
//     LogonScript - The (relative) path to the account's logon
//         script.
//
//     HomeDirectory - The home directory for the user.
//


//
// MsV1_0Lm20Logon and MsV1_0NetworkLogon
//
// The AuthenticationInformation buffer of an LsaLogonUser() call to
// perform an network logon contains the following data structure:
//
// MsV1_0NetworkLogon logon differs from MsV1_0Lm20Logon in that the
// ParameterControl field exists.
//

#define MSV1_0_CHALLENGE_LENGTH 8
#define MSV1_0_USER_SESSION_KEY_LENGTH 16
#define MSV1_0_LANMAN_SESSION_KEY_LENGTH 8

//
// Values for ParameterControl.
//

#define MSV1_0_CLEARTEXT_PASSWORD_ALLOWED    0x02
#define MSV1_0_UPDATE_LOGON_STATISTICS       0x04
#define MSV1_0_RETURN_USER_PARAMETERS        0x08
#define MSV1_0_DONT_TRY_GUEST_ACCOUNT        0x10
#define MSV1_0_ALLOW_SERVER_TRUST_ACCOUNT    0x20
#define MSV1_0_RETURN_PASSWORD_EXPIRY        0x40
// this next flag says that CaseInsensitiveChallengeResponse
//  (aka LmResponse) contains a client challenge in the first 8 bytes
#define MSV1_0_USE_CLIENT_CHALLENGE          0x80
#define MSV1_0_TRY_GUEST_ACCOUNT_ONLY        0x100
#define MSV1_0_RETURN_PROFILE_PATH           0x200
#define MSV1_0_TRY_SPECIFIED_DOMAIN_ONLY     0x400
#define MSV1_0_ALLOW_WORKSTATION_TRUST_ACCOUNT 0x800
//#if (_WIN32_WINNT >= 0x0501) -- Disabled until IIS fixes their target version.
#define MSV1_0_DISABLE_PERSONAL_FALLBACK     0x00001000
#define MSV1_0_ALLOW_FORCE_GUEST             0x00002000
//#endif
#if (_WIN32_WINNT >= 0x0502)
#define MSV1_0_CLEARTEXT_PASSWORD_SUPPLIED   0x00004000
// Start
// Doesnt exist in Windows XP but does exist in Windows 2000 Security Rollup and up
#define MSV1_0_USE_DOMAIN_FOR_ROUTING_ONLY   0x00008000
#endif
#define MSV1_0_SUBAUTHENTICATION_DLL_EX      0x00100000
// Defined in Windows Server 2003 SP1 and above
#define MSV1_0_ALLOW_MSVCHAPV2               0x00010000

#if (_WIN32_WINNT >= 0x0600)

//Defined in Windows Server 2008 and up
#define MSV1_0_S4U2SELF                      0x00020000 // no password is needed
#define MSV1_0_CHECK_LOGONHOURS_FOR_S4U      0x00040000 // check logon hours for S4U logon
#endif

#if (_WIN32_WINNT >= 0x0602)
// Logon for internet users. To be used by calls from auth package
// directly, not from netlogon.
#define MSV1_0_INTERNET_DOMAIN               0x00080000
#endif

//
// The high order byte is a value indicating the SubAuthentication DLL.
//  Zero indicates no SubAuthentication DLL.
//
#define MSV1_0_SUBAUTHENTICATION_DLL         0xFF000000
#define MSV1_0_SUBAUTHENTICATION_DLL_SHIFT   24
#define MSV1_0_MNS_LOGON                     0x01000000

//
// This is the list of subauthentication dlls used in MS
//

#define MSV1_0_SUBAUTHENTICATION_DLL_RAS     2
#define MSV1_0_SUBAUTHENTICATION_DLL_IIS     132

typedef struct _MSV1_0_LM20_LOGON {
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Workstation;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
    STRING CaseSensitiveChallengeResponse;
    STRING CaseInsensitiveChallengeResponse;
    ULONG ParameterControl;
} MSV1_0_LM20_LOGON, * PMSV1_0_LM20_LOGON;

//
// NT 5.0 SubAuth dlls can use this struct
//

typedef struct _MSV1_0_SUBAUTH_LOGON{
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Workstation;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
    STRING AuthenticationInfo1;
    STRING AuthenticationInfo2;
    ULONG ParameterControl;
    ULONG SubAuthPackageId;
} MSV1_0_SUBAUTH_LOGON, * PMSV1_0_SUBAUTH_LOGON;

#if (_WIN32_WINNT >= 0x0600)

//
// s4u2self logon
//
// Defined in Windows Server 2008 and above

//
// request to enforce logon hours policy
//

#define MSV1_0_S4U_LOGON_FLAG_CHECK_LOGONHOURS 0x2

typedef struct _MSV1_0_S4U_LOGON {
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING UserPrincipalName; // username or username@domain
    UNICODE_STRING DomainName; // Optional: if missing, using the local machine
} MSV1_0_S4U_LOGON, *PMSV1_0_S4U_LOGON;

#endif

//
// Values for UserFlags.
//

#define LOGON_GUEST                 0x01
#define LOGON_NOENCRYPTION          0x02
#define LOGON_CACHED_ACCOUNT        0x04
#define LOGON_USED_LM_PASSWORD      0x08
#define LOGON_EXTRA_SIDS            0x20
#define LOGON_SUBAUTH_SESSION_KEY   0x40
#define LOGON_SERVER_TRUST_ACCOUNT  0x80
#define LOGON_NTLMV2_ENABLED        0x100       // says DC understands NTLMv2
#define LOGON_RESOURCE_GROUPS       0x200
#define LOGON_PROFILE_PATH_RETURNED 0x400
// Defined in Windows Server 2008 and above
#define LOGON_NT_V2                 0x800   // NT response was used for validation
#define LOGON_LM_V2                 0x1000  // LM response was used for validation
#define LOGON_NTLM_V2               0x2000  // LM response was used to authenticate but NT response was used to derive the session key

#if (_WIN32_WINNT >= 0x0600)

#define LOGON_OPTIMIZED             0x4000  // this is an optimized logon
#define LOGON_WINLOGON              0x8000  // the logon session was created for winlogon
#define LOGON_PKINIT               0x10000  // Kerberos PKINIT extension was used to authenticate the user
#define LOGON_NO_OPTIMIZED         0x20000  // optimized logon has been disabled for this account

#endif

#if (_WIN32_WINNT >= 0x0602)

#define LOGON_NO_ELEVATION         0x40000  // Do not allow elevation for this logon
#define LOGON_MANAGED_SERVICE      0x80000  // Managed service account

#endif

//
// The high order byte is reserved for return by SubAuthentication DLLs.
//

#define MSV1_0_SUBAUTHENTICATION_FLAGS 0xFF000000

// Values returned by the MSV1_0_MNS_LOGON SubAuthentication DLL
#define LOGON_GRACE_LOGON              0x01000000

typedef struct _MSV1_0_LM20_LOGON_PROFILE {
    MSV1_0_PROFILE_BUFFER_TYPE MessageType;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER LogoffTime;
    ULONG UserFlags;
    UCHAR UserSessionKey[MSV1_0_USER_SESSION_KEY_LENGTH];
    UNICODE_STRING LogonDomainName;
    UCHAR LanmanSessionKey[MSV1_0_LANMAN_SESSION_KEY_LENGTH];
    UNICODE_STRING LogonServer;
    UNICODE_STRING UserParameters;
} MSV1_0_LM20_LOGON_PROFILE, * PMSV1_0_LM20_LOGON_PROFILE;


//
// Supplemental credentials structure used for passing credentials into
// MSV1_0 from other packages
//

#define MSV1_0_OWF_PASSWORD_LENGTH 16
#define MSV1_0_SHA_PASSWORD_LENGTH 20
#define MSV1_0_CREDENTIAL_KEY_LENGTH 20

#define MSV1_0_CRED_LM_PRESENT      0x0001
#define MSV1_0_CRED_NT_PRESENT      0x0002
#define MSV1_0_CRED_REMOVED         0x0004
#define MSV1_0_CRED_CREDKEY_PRESENT 0x0008
#define MSV1_0_CRED_SHA_PRESENT     0x0010

#define MSV1_0_CRED_VERSION             0
#define MSV1_0_CRED_VERSION_V2          2
#define MSV1_0_CRED_VERSION_V3          4
#define MSV1_0_CRED_VERSION_IUM         0xffff0001
#define MSV1_0_CRED_VERSION_REMOTE      0xffff0002
#define MSV1_0_CRED_VERSION_RESERVED_1  0xfffffffe
#define MSV1_0_CRED_VERSION_INVALID     0xffffffff

typedef enum _MSV1_0_CREDENTIAL_KEY_TYPE
{
    InvalidCredKey,
    DeprecatedIUMCredKey,
    DomainUserCredKey,
    LocalUserCredKey,
    ExternallySuppliedCredKey
} MSV1_0_CREDENTIAL_KEY_TYPE;

typedef struct _MSV1_0_CREDENTIAL_KEY {
    UCHAR Data[MSV1_0_CREDENTIAL_KEY_LENGTH];
} MSV1_0_CREDENTIAL_KEY, *PMSV1_0_CREDENTIAL_KEY;

typedef struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL {
    ULONG Version;
    ULONG Flags;
    UCHAR LmPassword[MSV1_0_OWF_PASSWORD_LENGTH];
    UCHAR NtPassword[MSV1_0_OWF_PASSWORD_LENGTH];
} MSV1_0_SUPPLEMENTAL_CREDENTIAL, *PMSV1_0_SUPPLEMENTAL_CREDENTIAL;

// V2 Drops support for LM hash, but adds the credential key
typedef struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2 {
    ULONG Version;
    ULONG Flags;
    UCHAR NtPassword[MSV1_0_OWF_PASSWORD_LENGTH];
    MSV1_0_CREDENTIAL_KEY CredentialKey;
} MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2, *PMSV1_0_SUPPLEMENTAL_CREDENTIAL_V2;

typedef struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3 {
    ULONG Version;
    ULONG Flags;
    MSV1_0_CREDENTIAL_KEY_TYPE CredentialKeyType;
    UCHAR NtPassword[MSV1_0_OWF_PASSWORD_LENGTH];
    MSV1_0_CREDENTIAL_KEY CredentialKey;
    UCHAR ShaPassword[MSV1_0_SHA_PASSWORD_LENGTH];
} MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3, *PMSV1_0_SUPPLEMENTAL_CREDENTIAL_V3;

typedef struct _MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL {
    ULONG Version;
    ULONG EncryptedCredsSize;
#ifdef MIDL_PASS
    [size_is(EncryptedCredsSize)]
    UCHAR EncryptedCreds[*];
#else
    UCHAR EncryptedCreds[ANYSIZE_ARRAY];
#endif
} MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL, *PMSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL;

#define MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL_SIZE(Creds) \
    (FIELD_OFFSET(MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL, EncryptedCreds) + (Creds)->EncryptedCredsSize)

// For remote creds, NTLM will request the NTOWF from Kerberos. However, NTLM
// does need to get the CredentialKey from the credssp client system.
#pragma pack(push,1)
typedef struct _MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL {
    ULONG Version;
    ULONG Flags;
    MSV1_0_CREDENTIAL_KEY CredentialKey;
    MSV1_0_CREDENTIAL_KEY_TYPE CredentialKeyType;
    ULONG EncryptedCredsSize;
    UCHAR EncryptedCreds[ANYSIZE_ARRAY];
} MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL, *PMSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL;
#pragma pack(pop)

//
// NTLM3 definitions.
//

#define MSV1_0_NTLM3_RESPONSE_LENGTH 16
#define MSV1_0_NTLM3_OWF_LENGTH 16

//
// this is the longest amount of time we'll allow challenge response
// pairs to be used. Note that this also has to allow for worst case clock skew
//
#if (_WIN32_WINNT == 0x0500)
#define MSV1_0_MAX_NTLM3_LIFE 1800     // 30 minutes (in seconds)
#else
#define MSV1_0_MAX_NTLM3_LIFE 129600     // 36 hours (in seconds)
#endif
#define MSV1_0_MAX_AVL_SIZE 64000

#if (_WIN32_WINNT >= 0x0501)
//
// MsvAvFlags bit values
//
// Exists only after Windows 2000
//

#define MSV1_0_AV_FLAG_FORCE_GUEST                  0x00000001
#if (_WIN32_WINNT >= 0x0600)
#define MSV1_0_AV_FLAG_MIC_HANDSHAKE_MESSAGES       0x00000002 // the client supports
                                                               // hand-shake messages integrity
#if (_WIN32_WINNT >= 0x0601)
#define MSV1_0_AV_FLAG_UNVERIFIED_TARGET            0x00000004

#endif
#endif
#endif

// this is an MSV1_0 private data structure, defining the layout of an NTLM3 response, as sent by a
//  client in the NtChallengeResponse field of the NETLOGON_NETWORK_INFO structure. If can be differentiated
//  from an old style NT response by its length. This is crude, but it needs to pass through servers and
//  the servers' DCs that do not understand NTLM3 but that are willing to pass longer responses.
typedef struct _MSV1_0_NTLM3_RESPONSE {
    UCHAR Response[MSV1_0_NTLM3_RESPONSE_LENGTH]; // hash of OWF of password with all the following fields
    UCHAR RespType;     // id number of response; current is 1
    UCHAR HiRespType;   // highest id number understood by client
    USHORT Flags;       // reserved; must be sent as zero at this version
    ULONG MsgWord;      // 32 bit message from client to server (for use by auth protocol)
    ULONGLONG TimeStamp;    // time stamp when client generated response -- NT system time, quad part
    UCHAR ChallengeFromClient[MSV1_0_CHALLENGE_LENGTH];
    ULONG AvPairsOff;   // offset to start of AvPairs (to allow future expansion)
    UCHAR Buffer[1];    // start of buffer with AV pairs (or future stuff -- so use the offset)
} MSV1_0_NTLM3_RESPONSE, *PMSV1_0_NTLM3_RESPONSE;

#define MSV1_0_NTLM3_INPUT_LENGTH (sizeof(MSV1_0_NTLM3_RESPONSE) - MSV1_0_NTLM3_RESPONSE_LENGTH)
#if(_WIN32_WINNT >= 0x0502)
#define MSV1_0_NTLM3_MIN_NT_RESPONSE_LENGTH RTL_SIZEOF_THROUGH_FIELD(MSV1_0_NTLM3_RESPONSE, AvPairsOff)
#endif

typedef enum {
    MsvAvEOL,                 // end of list
    MsvAvNbComputerName,      // server's computer name -- NetBIOS
    MsvAvNbDomainName,        // server's domain name -- NetBIOS
    MsvAvDnsComputerName,     // server's computer name -- DNS
    MsvAvDnsDomainName,       // server's domain name -- DNS
#if (_WIN32_WINNT >= 0x0501)
    MsvAvDnsTreeName,         // server's tree name -- DNS
    MsvAvFlags,               // server's extended flags -- DWORD mask
#if (_WIN32_WINNT >= 0x0600)
    MsvAvTimestamp,           // contains the server's local time in FILETIME,
                              // (64 bit 100 ns ticks since 1602
                              // (UTC)) in little endian byte order
    MsvAvRestrictions,        // token restrictions
    MsvAvTargetName,
    MsvAvChannelBindings,
#endif
#endif
} MSV1_0_AVID;

typedef struct  _MSV1_0_AV_PAIR {
    USHORT AvId;
    USHORT AvLen;
    // Data is treated as byte array following structure
} MSV1_0_AV_PAIR, *PMSV1_0_AV_PAIR;



///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//       CALL PACKAGE Related Data Structures                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


//
//  MSV1.0 LsaCallAuthenticationPackage() submission and response
//  message types.
//

typedef enum _MSV1_0_PROTOCOL_MESSAGE_TYPE {
    MsV1_0Lm20ChallengeRequest = 0,          // Both submission and response
    MsV1_0Lm20GetChallengeResponse,          // Both submission and response
    MsV1_0EnumerateUsers,                    // Both submission and response
    MsV1_0GetUserInfo,                       // Both submission and response
    MsV1_0ReLogonUsers,                      // Submission only
    MsV1_0ChangePassword,                    // Both submission and response
    MsV1_0ChangeCachedPassword,              // Both submission and response
    MsV1_0GenericPassthrough,                // Both submission and response
    MsV1_0CacheLogon,                        // Submission only, no response
    MsV1_0SubAuth,                           // Both submission and response
    MsV1_0DeriveCredential,                  // Both submission and response
    MsV1_0CacheLookup,                       // Both submission and response
#if (_WIN32_WINNT >= 0x0501)
    MsV1_0SetProcessOption,                  // Submission only, no response
#endif
#if (_WIN32_WINNT >= 0x0600)
    MsV1_0ConfigLocalAliases,
    MsV1_0ClearCachedCredentials,
#endif
#if (_WIN32_WINNT >= 0x0601)
    MsV1_0LookupToken,                        // Both submission and response
#endif
#if (_WIN32_WINNT >= 0x0602)
    MsV1_0ValidateAuth,
    MsV1_0CacheLookupEx,                      // Both submission and response
    MsV1_0GetCredentialKey,                   // Both submission and response
    MsV1_0SetThreadOption,                    // Submission only
#endif
#if (_WIN32_WINNT >= 0x0604)
    MsV1_0DecryptDpapiMasterKey,              // Both submission and response
    MsV1_0GetStrongCredentialKey,             // Both submission and response
#endif
#if (_WIN32_WINNT >= 0x0A00)
    MsV1_0TransferCred,
    MsV1_0ProvisionTbal,
    MsV1_0DeleteTbalSecrets,
#endif
} MSV1_0_PROTOCOL_MESSAGE_TYPE, *PMSV1_0_PROTOCOL_MESSAGE_TYPE;

// end_ntsecapi

//
// MsV1_0Lm20ChallengeRequest submit buffer and response
//

typedef struct _MSV1_0_LM20_CHALLENGE_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
} MSV1_0_LM20_CHALLENGE_REQUEST, *PMSV1_0_LM20_CHALLENGE_REQUEST;

typedef struct _MSV1_0_LM20_CHALLENGE_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
} MSV1_0_LM20_CHALLENGE_RESPONSE, *PMSV1_0_LM20_CHALLENGE_RESPONSE;

//
// MsV1_0Lm20GetChallengeResponse submit buffer and response
//

#define USE_PRIMARY_PASSWORD            0x01
#define RETURN_PRIMARY_USERNAME         0x02
#define RETURN_PRIMARY_LOGON_DOMAINNAME 0x04
#define RETURN_NON_NT_USER_SESSION_KEY  0x08
#define GENERATE_CLIENT_CHALLENGE       0x10
#define GCR_NTLM3_PARMS                 0x20
#define GCR_TARGET_INFO                 0x40    // ServerName field contains target info AV pairs
#define RETURN_RESERVED_PARAMETER       0x80    // was 0x10
#define GCR_ALLOW_NTLM                 0x100    // allow the use of NTLM
// Exists in Windows XPSP2 and later
#define GCR_USE_OEM_SET                0x200    // response uses oem character set
#define GCR_MACHINE_CREDENTIAL         0x400
#define GCR_USE_OWF_PASSWORD           0x800    // use owf passwords
#define GCR_ALLOW_LM                  0x1000    // allow the use of LM
// Defined in Windows Server 2003 and above
#define GCR_ALLOW_NO_TARGET           0x2000    // allow no target server or target domain name
// Defined in Windows 10 and above
#define GCR_VSM_PROTECTED_PASSWORD    0x4000    // password is VSM protected

//
// version 1 of the GETCHALLENRESP structure, which was used by RAS and others.
// compiled before the additional fields added to GETCHALLENRESP_REQUEST.
// here to allow sizing operations for backwards compatibility.
//

typedef struct _MSV1_0_GETCHALLENRESP_REQUEST_V1 {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG ParameterControl;
    LUID LogonId;
    UNICODE_STRING Password;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
} MSV1_0_GETCHALLENRESP_REQUEST_V1, *PMSV1_0_GETCHALLENRESP_REQUEST_V1;

typedef struct _MSV1_0_GETCHALLENRESP_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG ParameterControl;
    LUID LogonId;
    UNICODE_STRING Password;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];

    //
    // the following 3 fields are only present if GCR_NTLM3_PARMS is set in ParameterControl
    //

    UNICODE_STRING UserName;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING ServerName;      // server domain or target info AV pairs
} MSV1_0_GETCHALLENRESP_REQUEST, *PMSV1_0_GETCHALLENRESP_REQUEST;

typedef struct _MSV1_0_GETCHALLENRESP_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    STRING CaseSensitiveChallengeResponse;
    STRING CaseInsensitiveChallengeResponse;
    UNICODE_STRING UserName;
    UNICODE_STRING LogonDomainName;
    UCHAR UserSessionKey[MSV1_0_USER_SESSION_KEY_LENGTH];
    UCHAR LanmanSessionKey[MSV1_0_LANMAN_SESSION_KEY_LENGTH];
} MSV1_0_GETCHALLENRESP_RESPONSE, *PMSV1_0_GETCHALLENRESP_RESPONSE;

//
// MsV1_0EnumerateUsers submit buffer and response
//

typedef struct _MSV1_0_ENUMUSERS_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
} MSV1_0_ENUMUSERS_REQUEST, *PMSV1_0_ENUMUSERS_REQUEST;

typedef struct _MSV1_0_ENUMUSERS_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG NumberOfLoggedOnUsers;
    PLUID LogonIds;
    PULONG EnumHandles;
} MSV1_0_ENUMUSERS_RESPONSE, *PMSV1_0_ENUMUSERS_RESPONSE;

//
// MsV1_0GetUserInfo submit buffer and response
//

typedef struct _MSV1_0_GETUSERINFO_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
} MSV1_0_GETUSERINFO_REQUEST, *PMSV1_0_GETUSERINFO_REQUEST;

typedef struct _MSV1_0_GETUSERINFO_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    PSID UserSid;
    UNICODE_STRING UserName;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING LogonServer;
    SECURITY_LOGON_TYPE LogonType;
} MSV1_0_GETUSERINFO_RESPONSE, *PMSV1_0_GETUSERINFO_RESPONSE;


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)
//
// Define the I/O status information return values from IRP_MJ_CLEANUP.  For
// some values it is valid for them to be combined with others, such as
// FILE_CLEANUP_FILE_DELETED | FILE_CLEANUP_POSIX_STYLE_DELETE.
//
// FILE_CLEANUP_WRONG_DEVICE is defined as the same value as Create's FILE_OPENED
// for compatibility.  File systems return this value in Irp->IoStatus.Information
// when they get a cleanup with the file system device object instead of the
// volume device object.
//

#define FILE_CLEANUP_UNKNOWN            0x00000000
#define FILE_CLEANUP_WRONG_DEVICE       0x00000001
#define FILE_CLEANUP_FILE_REMAINS       0x00000002
#define FILE_CLEANUP_FILE_DELETED       0x00000004
#define FILE_CLEANUP_LINK_DELETED       0x00000008
#define FILE_CLEANUP_STREAM_DELETED     0x00000010
#define FILE_CLEANUP_POSIX_STYLE_DELETE 0x00000020
#endif

//
// Define the I/O status information return values for requests for oplocks
// via NtFsControlFile
//

#define FILE_OPLOCK_BROKEN_TO_LEVEL_2   0x00000007
#define FILE_OPLOCK_BROKEN_TO_NONE      0x00000008

//
// Define the I/O status information return values for NtCreateFile/NtOpenFile
// when the sharing access fails but a batch oplock break is in progress
//

#define FILE_OPBATCH_BREAK_UNDERWAY     0x00000009

//
// Define the filter flags for NtNotifyChangeDirectoryFile
//

#define FILE_NOTIFY_CHANGE_FILE_NAME    0x00000001   // winnt
#define FILE_NOTIFY_CHANGE_DIR_NAME     0x00000002   // winnt
#define FILE_NOTIFY_CHANGE_NAME         0x00000003
#define FILE_NOTIFY_CHANGE_ATTRIBUTES   0x00000004   // winnt
#define FILE_NOTIFY_CHANGE_SIZE         0x00000008   // winnt
#define FILE_NOTIFY_CHANGE_LAST_WRITE   0x00000010   // winnt
#define FILE_NOTIFY_CHANGE_LAST_ACCESS  0x00000020   // winnt
#define FILE_NOTIFY_CHANGE_CREATION     0x00000040   // winnt
#define FILE_NOTIFY_CHANGE_EA           0x00000080
#define FILE_NOTIFY_CHANGE_SECURITY     0x00000100   // winnt
#define FILE_NOTIFY_CHANGE_STREAM_NAME  0x00000200
#define FILE_NOTIFY_CHANGE_STREAM_SIZE  0x00000400
#define FILE_NOTIFY_CHANGE_STREAM_WRITE 0x00000800
#define FILE_NOTIFY_VALID_MASK          0x00000fff

//
// Define the file action type codes for NtNotifyChangeDirectoryFile
//

#define FILE_ACTION_ADDED                   0x00000001   // winnt
#define FILE_ACTION_REMOVED                 0x00000002   // winnt
#define FILE_ACTION_MODIFIED                0x00000003   // winnt
#define FILE_ACTION_RENAMED_OLD_NAME        0x00000004   // winnt
#define FILE_ACTION_RENAMED_NEW_NAME        0x00000005   // winnt
#define FILE_ACTION_ADDED_STREAM            0x00000006
#define FILE_ACTION_REMOVED_STREAM          0x00000007
#define FILE_ACTION_MODIFIED_STREAM         0x00000008
#define FILE_ACTION_REMOVED_BY_DELETE       0x00000009
#define FILE_ACTION_ID_NOT_TUNNELLED        0x0000000A
#define FILE_ACTION_TUNNELLED_ID_COLLISION  0x0000000B

//
// Define the NamedPipeType flags for NtCreateNamedPipeFile
//

#define FILE_PIPE_BYTE_STREAM_TYPE          0x00000000
#define FILE_PIPE_MESSAGE_TYPE              0x00000001

#define FILE_PIPE_ACCEPT_REMOTE_CLIENTS     0x00000000
#define FILE_PIPE_REJECT_REMOTE_CLIENTS     0x00000002

#define FILE_PIPE_TYPE_VALID_MASK           0x00000003

//
// Define the CompletionMode flags for NtCreateNamedPipeFile
//

#define FILE_PIPE_QUEUE_OPERATION       0x00000000
#define FILE_PIPE_COMPLETE_OPERATION    0x00000001

//
// Define the ReadMode flags for NtCreateNamedPipeFile
//

#define FILE_PIPE_BYTE_STREAM_MODE      0x00000000
#define FILE_PIPE_MESSAGE_MODE          0x00000001

//
// Define the NamedPipeConfiguration flags for NtQueryInformation
//

#define FILE_PIPE_INBOUND               0x00000000
#define FILE_PIPE_OUTBOUND              0x00000001
#define FILE_PIPE_FULL_DUPLEX           0x00000002

//
// Define the NamedPipeState flags for NtQueryInformation
//

#define FILE_PIPE_DISCONNECTED_STATE    0x00000001
#define FILE_PIPE_LISTENING_STATE       0x00000002
#define FILE_PIPE_CONNECTED_STATE       0x00000003
#define FILE_PIPE_CLOSING_STATE         0x00000004

//
// Define the NamedPipeEnd flags for NtQueryInformation
//

#define FILE_PIPE_CLIENT_END            0x00000000
#define FILE_PIPE_SERVER_END            0x00000001


//
// Define the file system attributes flags
//

#define FILE_CASE_SENSITIVE_SEARCH          0x00000001  // winnt
#define FILE_CASE_PRESERVED_NAMES           0x00000002  // winnt
#define FILE_UNICODE_ON_DISK                0x00000004  // winnt
#define FILE_PERSISTENT_ACLS                0x00000008  // winnt
#define FILE_FILE_COMPRESSION               0x00000010  // winnt
#define FILE_VOLUME_QUOTAS                  0x00000020  // winnt
#define FILE_SUPPORTS_SPARSE_FILES          0x00000040  // winnt
#define FILE_SUPPORTS_REPARSE_POINTS        0x00000080  // winnt
#define FILE_SUPPORTS_REMOTE_STORAGE        0x00000100  // winnt
#define FILE_RETURNS_CLEANUP_RESULT_INFO    0x00000200  // winnt
#define FILE_SUPPORTS_POSIX_UNLINK_RENAME   0x00000400  // winnt
//  available                               0x00000800  // winnt
//  available                               0x00001000  // winnt
//  available                               0x00002000  // winnt
//  available                               0x00004000  // winnt
#define FILE_VOLUME_IS_COMPRESSED           0x00008000  // winnt
#define FILE_SUPPORTS_OBJECT_IDS            0x00010000  // winnt
#define FILE_SUPPORTS_ENCRYPTION            0x00020000  // winnt
#define FILE_NAMED_STREAMS                  0x00040000  // winnt
#define FILE_READ_ONLY_VOLUME               0x00080000  // winnt
#define FILE_SEQUENTIAL_WRITE_ONCE          0x00100000  // winnt
#define FILE_SUPPORTS_TRANSACTIONS          0x00200000  // winnt
#define FILE_SUPPORTS_HARD_LINKS            0x00400000  // winnt
#define FILE_SUPPORTS_EXTENDED_ATTRIBUTES   0x00800000  // winnt
//
//  When enabled this attribute implies that the FileID's for the supported
//  file system are also durable.  This means the FileID will not change due
//  to other file system operations like rename or defrag.  If a file
//  is deleted and re-created the ID will change.
//
#define FILE_SUPPORTS_OPEN_BY_FILE_ID       0x01000000  // winnt
#define FILE_SUPPORTS_USN_JOURNAL           0x02000000  // winnt
#define FILE_SUPPORTS_INTEGRITY_STREAMS     0x04000000  // winnt
#define FILE_SUPPORTS_BLOCK_REFCOUNTING     0x08000000  // winnt
#define FILE_SUPPORTS_SPARSE_VDL            0x10000000  // winnt
//
//  When enabled this attribute implies that the volume supports byte addressable
//  mode.  A mode where reads / writes on mapped files happen directly on the
//  storage device, without going through the file system and the storage stack.
//
//  NOTE: This attribute only mean that the file system supports.  It doesn't
//  imply that the storage hardware is capable.  The storage hardware should be
//  a byte addressable persistent memory device, to let one map files directly
//  on the storage device.
//
#define FILE_DAX_VOLUME                     0x20000000  // winnt
#define FILE_SUPPORTS_GHOSTING              0x40000000  // winnt
// available                                0x80000000  // winnt

#define FILE_INVALID_FILE_ID               ((LONGLONG)-1LL) // winnt

typedef struct _FILE_ID_128 {                               // winnt
    UCHAR Identifier[16];                                   // winnt
} FILE_ID_128, *PFILE_ID_128;                               // winnt

//
// Define the flags for NtSet(Query)EaFile service structure entries
//

#define FILE_NEED_EA                    0x00000080

//
// Define EA type values
//

#define FILE_EA_TYPE_BINARY             0xfffe
#define FILE_EA_TYPE_ASCII              0xfffd
#define FILE_EA_TYPE_BITMAP             0xfffb
#define FILE_EA_TYPE_METAFILE           0xfffa
#define FILE_EA_TYPE_ICON               0xfff9
#define FILE_EA_TYPE_EA                 0xffee
#define FILE_EA_TYPE_MVMT               0xffdf
#define FILE_EA_TYPE_MVST               0xffde
#define FILE_EA_TYPE_ASN1               0xffdd
#define FILE_EA_TYPE_FAMILY_IDS         0xff01


//
// Define the file notification information structure
//

typedef struct _FILE_NOTIFY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG Action;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3)
typedef struct _FILE_NOTIFY_EXTENDED_INFORMATION {
    ULONG NextEntryOffset;
    ULONG Action;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastModificationTime;
    LARGE_INTEGER LastChangeTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER AllocatedLength;
    LARGE_INTEGER FileSize;
    ULONG FileAttributes;
    ULONG ReparsePointTag;
    LARGE_INTEGER FileId;
    LARGE_INTEGER ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NOTIFY_EXTENDED_INFORMATION, *PFILE_NOTIFY_EXTENDED_INFORMATION;
#endif


//
// NtQueryDirectoryFile return types:
//
//      FILE_DIRECTORY_INFORMATION
//      FILE_FULL_DIR_INFORMATION
//      FILE_ID_FULL_DIR_INFORMATION
//      FILE_BOTH_DIR_INFORMATION
//      FILE_ID_BOTH_DIR_INFORMATION
//      FILE_NAMES_INFORMATION
//      FILE_ID_EXTD_DIR_INFORMATION
//      FILE_OBJECTID_INFORMATION
//

typedef struct _FILE_DIRECTORY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_DIRECTORY_INFORMATION, *PFILE_DIRECTORY_INFORMATION;

typedef struct _FILE_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
} FILE_FULL_DIR_INFORMATION, *PFILE_FULL_DIR_INFORMATION;

typedef struct _FILE_ID_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_FULL_DIR_INFORMATION, *PFILE_ID_FULL_DIR_INFORMATION;

typedef struct _FILE_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
} FILE_BOTH_DIR_INFORMATION, *PFILE_BOTH_DIR_INFORMATION;

typedef struct _FILE_ID_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_BOTH_DIR_INFORMATION, *PFILE_ID_BOTH_DIR_INFORMATION;

typedef struct _FILE_NAMES_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAMES_INFORMATION, *PFILE_NAMES_INFORMATION;

typedef struct _FILE_ID_GLOBAL_TX_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    LARGE_INTEGER FileId;
    GUID LockingTransactionId;
    ULONG TxInfoFlags;
    WCHAR FileName[1];
} FILE_ID_GLOBAL_TX_DIR_INFORMATION, *PFILE_ID_GLOBAL_TX_DIR_INFORMATION;

#define FILE_ID_GLOBAL_TX_DIR_INFO_FLAG_WRITELOCKED         0x00000001
#define FILE_ID_GLOBAL_TX_DIR_INFO_FLAG_VISIBLE_TO_TX       0x00000002
#define FILE_ID_GLOBAL_TX_DIR_INFO_FLAG_VISIBLE_OUTSIDE_TX  0x00000004

typedef struct _FILE_ID_EXTD_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    WCHAR FileName[1];
} FILE_ID_EXTD_DIR_INFORMATION, *PFILE_ID_EXTD_DIR_INFORMATION;

typedef struct _FILE_ID_EXTD_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
} FILE_ID_EXTD_BOTH_DIR_INFORMATION, *PFILE_ID_EXTD_BOTH_DIR_INFORMATION;

typedef struct _FILE_OBJECTID_INFORMATION {
    LONGLONG FileReference;
    UCHAR ObjectId[16];
    union {
        struct {
            UCHAR BirthVolumeId[16];
            UCHAR BirthObjectId[16];
            UCHAR DomainId[16];
        } DUMMYSTRUCTNAME;
        UCHAR ExtendedInfo[48];
    } DUMMYUNIONNAME;
} FILE_OBJECTID_INFORMATION, *PFILE_OBJECTID_INFORMATION;

//
//  The following constants provide addition meta characters to fully
//  support the more obscure aspects of DOS wild card processing.
//

#define ANSI_DOS_STAR   ('<')
#define ANSI_DOS_QM     ('>')
#define ANSI_DOS_DOT    ('"')

#define DOS_STAR        (L'<')
#define DOS_QM          (L'>')
#define DOS_DOT         (L'"')

//
// NtQuery(Set)InformationFile return types:
//
//      FILE_BASIC_INFORMATION
//      FILE_STANDARD_INFORMATION
//      FILE_INTERNAL_INFORMATION
//      FILE_EA_INFORMATION
//      FILE_ACCESS_INFORMATION
//      FILE_POSITION_INFORMATION
//      FILE_MODE_INFORMATION
//      FILE_ALIGNMENT_INFORMATION
//      FILE_NAME_INFORMATION
//      FILE_ALL_INFORMATION
//
//      FILE_NETWORK_OPEN_INFORMATION
//
//      FILE_ALLOCATION_INFORMATION
//      FILE_COMPRESSION_INFORMATION
//      FILE_DISPOSITION_INFORMATION
//      FILE_END_OF_FILE_INFORMATION
//      FILE_LINK_INFORMATION
//      FILE_MOVE_CLUSTER_INFORMATION
//      FILE_RENAME_INFORMATION
//      FILE_SHORT_NAME_INFORMATION
//      FILE_STREAM_INFORMATION
//      FILE_COMPLETION_INFORMATION
//
//      FILE_PIPE_INFORMATION
//      FILE_PIPE_LOCAL_INFORMATION
//      FILE_PIPE_REMOTE_INFORMATION
//
//      FILE_MAILSLOT_QUERY_INFORMATION
//      FILE_MAILSLOT_SET_INFORMATION
//      FILE_REPARSE_POINT_INFORMATION
//
//      FILE_NETWORK_PHYSICAL_NAME_INFORMATION
//
//      FILE_DISPOSITION_INFORMATION_EX
//



typedef struct _FILE_INTERNAL_INFORMATION {
    LARGE_INTEGER IndexNumber;
} FILE_INTERNAL_INFORMATION, *PFILE_INTERNAL_INFORMATION;

typedef struct _FILE_ID_INFORMATION {
    ULONGLONG VolumeSerialNumber;
    FILE_ID_128 FileId;
} FILE_ID_INFORMATION, *PFILE_ID_INFORMATION;

typedef struct _FILE_EA_INFORMATION {
    ULONG EaSize;
} FILE_EA_INFORMATION, *PFILE_EA_INFORMATION;

typedef struct _FILE_ACCESS_INFORMATION {
    ACCESS_MASK AccessFlags;
} FILE_ACCESS_INFORMATION, *PFILE_ACCESS_INFORMATION;

typedef struct _FILE_MODE_INFORMATION {
    ULONG Mode;
} FILE_MODE_INFORMATION, *PFILE_MODE_INFORMATION;

typedef struct _FILE_ALL_INFORMATION {
    FILE_BASIC_INFORMATION BasicInformation;
    FILE_STANDARD_INFORMATION StandardInformation;
    FILE_INTERNAL_INFORMATION InternalInformation;
    FILE_EA_INFORMATION EaInformation;
    FILE_ACCESS_INFORMATION AccessInformation;
    FILE_POSITION_INFORMATION PositionInformation;
    FILE_MODE_INFORMATION ModeInformation;
    FILE_ALIGNMENT_INFORMATION AlignmentInformation;
    FILE_NAME_INFORMATION NameInformation;
} FILE_ALL_INFORMATION, *PFILE_ALL_INFORMATION;


typedef struct _FILE_STAT_INFORMATION {
    LARGE_INTEGER FileId;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
    ULONG ReparseTag;
    ULONG NumberOfLinks;
    ACCESS_MASK EffectiveAccess;
} FILE_STAT_INFORMATION, *PFILE_STAT_INFORMATION;

typedef struct _FILE_ALLOCATION_INFORMATION {
    LARGE_INTEGER AllocationSize;
} FILE_ALLOCATION_INFORMATION, *PFILE_ALLOCATION_INFORMATION;


typedef struct _FILE_COMPRESSION_INFORMATION {
    LARGE_INTEGER CompressedFileSize;
    USHORT CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
} FILE_COMPRESSION_INFORMATION, *PFILE_COMPRESSION_INFORMATION;


#define CHECKSUM_ENFORCEMENT_OFF       0x00000001


#ifdef _MAC
#pragma warning( disable : 4121)
#endif

typedef struct _FILE_LINK_INFORMATION {
    BOOLEAN ReplaceIfExists;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_INFORMATION, *PFILE_LINK_INFORMATION;


#ifdef _MAC
#pragma warning( default : 4121 )
#endif

typedef struct _FILE_MOVE_CLUSTER_INFORMATION {
    ULONG ClusterCount;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_MOVE_CLUSTER_INFORMATION, *PFILE_MOVE_CLUSTER_INFORMATION;

#ifdef _MAC
#pragma warning( disable : 4121)
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS1)
#define FILE_RENAME_REPLACE_IF_EXISTS                  0x00000001
#define FILE_RENAME_POSIX_SEMANTICS                    0x00000002
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3)
#define FILE_RENAME_SUPPRESS_PIN_STATE_INHERITANCE     0x00000004
#endif

typedef struct _FILE_RENAME_INFORMATION {
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS1)
    union {
        BOOLEAN ReplaceIfExists;  // FileRenameInformation
        ULONG Flags;              // FileRenameInformationEx
    } DUMMYUNIONNAME;
#else
    BOOLEAN ReplaceIfExists;
#endif
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_RENAME_INFORMATION, *PFILE_RENAME_INFORMATION;

#ifdef _MAC
#pragma warning( default : 4121 )
#endif

typedef struct _FILE_STREAM_INFORMATION {
    ULONG NextEntryOffset;
    ULONG StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
} FILE_STREAM_INFORMATION, *PFILE_STREAM_INFORMATION;

typedef struct _FILE_TRACKING_INFORMATION {
    HANDLE DestinationFile;
    ULONG ObjectInformationLength;
    CHAR ObjectInformation[1];
} FILE_TRACKING_INFORMATION, *PFILE_TRACKING_INFORMATION;

typedef struct _FILE_COMPLETION_INFORMATION {
    HANDLE Port;
    PVOID Key;
} FILE_COMPLETION_INFORMATION, *PFILE_COMPLETION_INFORMATION;

typedef struct _FILE_PIPE_INFORMATION {
     ULONG ReadMode;
     ULONG CompletionMode;
} FILE_PIPE_INFORMATION, *PFILE_PIPE_INFORMATION;

typedef struct _FILE_PIPE_LOCAL_INFORMATION {
     ULONG NamedPipeType;
     ULONG NamedPipeConfiguration;
     ULONG MaximumInstances;
     ULONG CurrentInstances;
     ULONG InboundQuota;
     ULONG ReadDataAvailable;
     ULONG OutboundQuota;
     ULONG WriteQuotaAvailable;
     ULONG NamedPipeState;
     ULONG NamedPipeEnd;
} FILE_PIPE_LOCAL_INFORMATION, *PFILE_PIPE_LOCAL_INFORMATION;

typedef struct _FILE_PIPE_REMOTE_INFORMATION {
     LARGE_INTEGER CollectDataTime;
     ULONG MaximumCollectionCount;
} FILE_PIPE_REMOTE_INFORMATION, *PFILE_PIPE_REMOTE_INFORMATION;


typedef struct _FILE_MAILSLOT_QUERY_INFORMATION {
    ULONG MaximumMessageSize;
    ULONG MailslotQuota;
    ULONG NextMessageSize;
    ULONG MessagesAvailable;
    LARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_QUERY_INFORMATION, *PFILE_MAILSLOT_QUERY_INFORMATION;

typedef struct _FILE_MAILSLOT_SET_INFORMATION {
    PLARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_SET_INFORMATION, *PFILE_MAILSLOT_SET_INFORMATION;

typedef struct _FILE_REPARSE_POINT_INFORMATION {
    LONGLONG FileReference;
    ULONG Tag;
} FILE_REPARSE_POINT_INFORMATION, *PFILE_REPARSE_POINT_INFORMATION;

typedef struct _FILE_LINK_ENTRY_INFORMATION {
    ULONG NextEntryOffset;
    LONGLONG ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_ENTRY_INFORMATION, *PFILE_LINK_ENTRY_INFORMATION;

typedef struct _FILE_LINKS_INFORMATION {
    ULONG BytesNeeded;
    ULONG EntriesReturned;
    FILE_LINK_ENTRY_INFORMATION Entry;
} FILE_LINKS_INFORMATION, *PFILE_LINKS_INFORMATION;

typedef struct _FILE_LINK_ENTRY_FULL_ID_INFORMATION {
    ULONG NextEntryOffset;
    FILE_ID_128 ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_ENTRY_FULL_ID_INFORMATION, *PFILE_LINK_ENTRY_FULL_ID_INFORMATION;

typedef struct _FILE_LINKS_FULL_ID_INFORMATION {
    ULONG BytesNeeded;
    ULONG EntriesReturned;
    FILE_LINK_ENTRY_FULL_ID_INFORMATION Entry;
} FILE_LINKS_FULL_ID_INFORMATION, *PFILE_LINKS_FULL_ID_INFORMATION;

typedef struct _FILE_NETWORK_PHYSICAL_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NETWORK_PHYSICAL_NAME_INFORMATION, *PFILE_NETWORK_PHYSICAL_NAME_INFORMATION;

typedef struct _FILE_STANDARD_LINK_INFORMATION {
    ULONG NumberOfAccessibleLinks;
    ULONG TotalNumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_LINK_INFORMATION, *PFILE_STANDARD_LINK_INFORMATION;

//
// NtQuery(Set)EaFile
//
// The offset for the start of EaValue is EaName[EaNameLength + 1]
//


typedef struct _FILE_GET_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR EaNameLength;
    CHAR EaName[1];
} FILE_GET_EA_INFORMATION, *PFILE_GET_EA_INFORMATION;


//
// File Remote protocol information (FileRemoteProtocolInformation)
//

//
// Protocol generic flags for version 1 and higher
//

#define REMOTE_PROTOCOL_FLAG_LOOPBACK           0x00000001
#define REMOTE_PROTOCOL_FLAG_OFFLINE            0x00000002

//
// Protocol generic flags valid for version 2 and higher
//
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define REMOTE_PROTOCOL_FLAG_PERSISTENT_HANDLE  0x00000004
#define REMOTE_PROTOCOL_FLAG_PRIVACY            0x00000008
#define REMOTE_PROTOCOL_FLAG_INTEGRITY          0x00000010
#define REMOTE_PROTOCOL_FLAG_MUTUAL_AUTH        0x00000020
#endif

//
// Protocol specific SMB2 share capability flags for version
// 2 and higher
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define RPI_SMB2_SHARECAP_TIMEWARP                0x00000002
#define RPI_SMB2_SHARECAP_DFS                     0x00000008
#define RPI_SMB2_SHARECAP_CONTINUOUS_AVAILABILITY 0x00000010
#define RPI_SMB2_SHARECAP_SCALEOUT                0x00000020
#define RPI_SMB2_SHARECAP_CLUSTER                 0x00000040
#define RPI_SMB2_SHARECAP_ENCRYPTED               0x00000080
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_RS1)
#define RPI_SMB2_SHARECAP_ACCESS_BASED_DIRECTORY_ENUM 0x00000100
#endif
//
// Protocol specific SMB2 server capability flags for version
// 2 and higher
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define RPI_SMB2_SERVERCAP_DFS                    0x00000001
#define RPI_SMB2_SERVERCAP_LEASING                0x00000002
#define RPI_SMB2_SERVERCAP_LARGEMTU               0x00000004
#define RPI_SMB2_SERVERCAP_MULTICHANNEL           0x00000008
#define RPI_SMB2_SERVERCAP_PERSISTENT_HANDLES     0x00000010
#define RPI_SMB2_SERVERCAP_DIRECTORY_LEASING      0x00000020
#define RPI_SMB2_SERVERCAP_ENCRYPTION_AWARE       0x00000040
#endif

typedef struct _FILE_REMOTE_PROTOCOL_INFORMATION
{
    // Structure Version
    USHORT StructureVersion;     // 1 for Win7, 2 for Win8 SMB3, 3 for Blue SMB3.
    USHORT StructureSize;        // sizeof(FILE_REMOTE_PROTOCOL_INFORMATION)

    ULONG  Protocol;             // Protocol (WNNC_NET_*) defined in winnetwk.h or ntifs.h.

    // Protocol Version & Type
    USHORT ProtocolMajorVersion;
    USHORT ProtocolMinorVersion;
    USHORT ProtocolRevision;

    USHORT Reserved;

    // Protocol-Generic Information
    ULONG  Flags;

    struct {
        ULONG Reserved[8];
    } GenericReserved;

    // Protocol specific information

#if (_WIN32_WINNT < _WIN32_WINNT_WIN8)
    struct {
        ULONG Reserved[16];
    } ProtocolSpecificReserved;
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    union {

        struct {

            struct {
                ULONG Capabilities;
            } Server;

            struct {
                ULONG Capabilities;
                ULONG CachingFlags;
            } Share;

        } Smb2;

        ULONG Reserved[16];

    } ProtocolSpecific;

#endif

} FILE_REMOTE_PROTOCOL_INFORMATION, *PFILE_REMOTE_PROTOCOL_INFORMATION;

//
// NtQuery(Set)QuotaInformationFile
//

typedef struct _FILE_GET_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    SID Sid;
} FILE_GET_QUOTA_INFORMATION, *PFILE_GET_QUOTA_INFORMATION;

typedef struct _FILE_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER QuotaUsed;
    LARGE_INTEGER QuotaThreshold;
    LARGE_INTEGER QuotaLimit;
    SID Sid;
} FILE_QUOTA_INFORMATION, *PFILE_QUOTA_INFORMATION;

//
// File volume name information (FileVolumeNameInformation)
//

typedef struct _FILE_VOLUME_NAME_INFORMATION {
    ULONG DeviceNameLength;
    WCHAR DeviceName[1];
} FILE_VOLUME_NAME_INFORMATION, *PFILE_VOLUME_NAME_INFORMATION;


typedef struct _FILE_FS_ATTRIBUTE_INFORMATION {
    ULONG FileSystemAttributes;
    LONG MaximumComponentNameLength;
    ULONG FileSystemNameLength;
    WCHAR FileSystemName[1];
} FILE_FS_ATTRIBUTE_INFORMATION, *PFILE_FS_ATTRIBUTE_INFORMATION;

typedef struct _FILE_FS_DRIVER_PATH_INFORMATION {
    BOOLEAN DriverInPath;
    ULONG   DriverNameLength;
    WCHAR   DriverName[1];
} FILE_FS_DRIVER_PATH_INFORMATION, *PFILE_FS_DRIVER_PATH_INFORMATION;

typedef struct _FILE_FS_VOLUME_FLAGS_INFORMATION {
    ULONG Flags;
} FILE_FS_VOLUME_FLAGS_INFORMATION, *PFILE_FS_VOLUME_FLAGS_INFORMATION;

//
// File system control flags
//

#define FILE_VC_QUOTA_NONE                  0x00000000
#define FILE_VC_QUOTA_TRACK                 0x00000001
#define FILE_VC_QUOTA_ENFORCE               0x00000002
#define FILE_VC_QUOTA_MASK                  0x00000003

#define FILE_VC_CONTENT_INDEX_DISABLED      0x00000008

#define FILE_VC_LOG_QUOTA_THRESHOLD         0x00000010
#define FILE_VC_LOG_QUOTA_LIMIT             0x00000020
#define FILE_VC_LOG_VOLUME_THRESHOLD        0x00000040
#define FILE_VC_LOG_VOLUME_LIMIT            0x00000080

#define FILE_VC_QUOTAS_INCOMPLETE           0x00000100
#define FILE_VC_QUOTAS_REBUILDING           0x00000200

#define FILE_VC_VALID_MASK                  0x000003ff

typedef struct _FILE_FS_CONTROL_INFORMATION {
    LARGE_INTEGER FreeSpaceStartFiltering;
    LARGE_INTEGER FreeSpaceThreshold;
    LARGE_INTEGER FreeSpaceStopFiltering;
    LARGE_INTEGER DefaultQuotaThreshold;
    LARGE_INTEGER DefaultQuotaLimit;
    ULONG FileSystemControlFlags;
} FILE_FS_CONTROL_INFORMATION, *PFILE_FS_CONTROL_INFORMATION;

typedef struct _FILE_FS_DATA_COPY_INFORMATION {
    ULONG NumberOfCopies;
} FILE_FS_DATA_COPY_INFORMATION, *PFILE_FS_DATA_COPY_INFORMATION;


#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDeviceIoControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFsControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtLockFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG ShareAccess,
    _In_ ULONG OpenOptions
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryDirectoryFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryDirectoryFileEx (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG QueryFlags,  // Valid flags are in SL_QUERY_DIRECTORY_MASK
    _In_opt_ PUNICODE_STRING FileName
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_reads_bytes_opt_((8 + (4 * ((SID *)StartSid)->SubAuthorityCount))) // SeLengthSid()
        PSID StartSid,
    _In_ BOOLEAN RestartScan
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtReadFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
#endif

// end_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtWriteFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtUnlockFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key
    );
#endif

// begin_winnt begin_wdm
#if (NTDDI_VERSION >= NTDDI_WIN8)

//
//  Flag defintions for NtFlushBuffersFileEx
//
//  If none of the below flags are specified the following will occur for a
//  given file handle:
//      - Write any modified data for the given file from the Windows in-memory
//        cache.
//      - Commit all pending metadata changes for the given file from the
//        Windows in-memory cache.
//      - Send a SYNC command to the underlying storage device to commit all
//        written data in the devices cache to persistent storage.
//
//  If a volume handle is specified:
//      - Write all modified data for all files on the volume from the Windows
//        in-memory cache.
//      - Commit all pending metadata changes for all files on the volume from
//        the Windows in-memory cache.
//      - Send a SYNC command to the underlying storage device to commit all
//        written data in the devices cache to persistent storage.
//
//  This is equivalent to how NtFlushBuffersFile has always worked.
//

//
//  If set, this operation will write the data for the given file from the
//  Windows in-memory cache.  This will NOT commit any associated metadata
//  changes.  This will NOT send a SYNC to the storage device to flush its
//  cache.  Not supported on volume handles.  Only supported by the NTFS
//  filesystem.
//

#define FLUSH_FLAGS_FILE_DATA_ONLY                      0x00000001

//
//  If set, this operation will commit both the data and metadata changes for
//  the given file from the Windows in-memory cache.  This will NOT send a SYNC
//  to the storage device to flush its cache.  Not supported on volume handles.
//  Only supported by the NTFS filesystem.
//

#define FLUSH_FLAGS_NO_SYNC                             0x00000002

#endif  // (NTDDI_VERSION >= NTDDI_WIN8)

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)

//
//  If set, this operation will write the data for the given file from the
//  Windows in-memory cache.  It will also try to skip updating the timestamp
//  as much as possible.  This will send a SYNC to the storage device to flush its
//  cache.  Not supported on volume or directory handles.  Only supported by the NTFS
//  filesystem.
//

#define FLUSH_FLAGS_FILE_DATA_SYNC_ONLY                 0x00000004

#endif  // (NTDDI_VERSION >= NTDDI_WIN10_RS1)

// end_winnt end_wdm

#if (NTDDI_VERSION >= NTDDI_WIN8)

__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFlushBuffersFileEx (
    _In_ HANDLE FileHandle,
    _In_ ULONG Flags,
    _In_reads_bytes_(ParametersSize) PVOID Parameters,
    _In_ ULONG ParametersSize,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );

#endif  // (NTDDI_VERSION >= NTDDI_WIN8)

//
// Macro definition for defining IOCTL and FSCTL function control codes.  Note
// that function codes 0-2047 are reserved for Microsoft Corporation, and
// 2048-4095 are reserved for customers.
//
// These macros are defined in devioctl.h which contains the portable IO
// definitions (for use by both DOS and NT)
//

//
// The IoGetFunctionCodeFromCtlCode( ControlCode ) Macro is defined in io.h
// This macro is used to extract the function code from an IOCTL (or FSCTL).
// The macro can only be used in kernel mode code.
//

//
// General File System control codes - Note that these values are valid
// regardless of the actual file system type
//

//
//  IMPORTANT:  These values have been arranged in order of increasing
//              control codes.  Do NOT break this!!  Add all new codes
//              at end of list regardless of functionality type.
//
//  Note: FSCTL_QUERY_RETRIEVAL_POINTER and FSCTL_MARK_AS_SYSTEM_HIVE only
//        work from Kernel mode on local paging files or the system hives.
//

// begin_winioctl

#ifndef _FILESYSTEMFSCTL_
#define _FILESYSTEMFSCTL_

//
// The following is a list of the native file system fsctls followed by
// additional network file system fsctls.  Some values have been
// decommissioned.
//

#define FSCTL_REQUEST_OPLOCK_LEVEL_1    CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  0, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_REQUEST_OPLOCK_LEVEL_2    CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_REQUEST_BATCH_OPLOCK      CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OPLOCK_BREAK_ACKNOWLEDGE  CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  3, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OPBATCH_ACK_CLOSE_PENDING CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  4, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OPLOCK_BREAK_NOTIFY       CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  5, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_LOCK_VOLUME               CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  6, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_UNLOCK_VOLUME             CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  7, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DISMOUNT_VOLUME           CTL_CODE(FILE_DEVICE_FILE_SYSTEM,  8, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                              9
#define FSCTL_IS_VOLUME_MOUNTED         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 10, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_IS_PATHNAME_VALID         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 11, METHOD_BUFFERED, FILE_ANY_ACCESS) // PATHNAME_BUFFER,
#define FSCTL_MARK_VOLUME_DIRTY         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 12, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             13
#define FSCTL_QUERY_RETRIEVAL_POINTERS  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 14,  METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_GET_COMPRESSION           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_COMPRESSION           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 16, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
// decommissioned fsctl value                                             17
// decommissioned fsctl value                                             18
#define FSCTL_SET_BOOTLOADER_ACCESSED   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 19,  METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_MARK_AS_SYSTEM_HIVE       FSCTL_SET_BOOTLOADER_ACCESSED
#define FSCTL_OPLOCK_BREAK_ACK_NO_2     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 20, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_INVALIDATE_VOLUMES        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 21, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_FAT_BPB             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 22, METHOD_BUFFERED, FILE_ANY_ACCESS) // FSCTL_QUERY_FAT_BPB_BUFFER
#define FSCTL_REQUEST_FILTER_OPLOCK     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 23, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_FILESYSTEM_GET_STATISTICS CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 24, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILESYSTEM_STATISTICS

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
#define FSCTL_GET_NTFS_VOLUME_DATA      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 25, METHOD_BUFFERED, FILE_ANY_ACCESS) // NTFS_VOLUME_DATA_BUFFER
#define FSCTL_GET_NTFS_FILE_RECORD      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 26, METHOD_BUFFERED, FILE_ANY_ACCESS) // NTFS_FILE_RECORD_INPUT_BUFFER, NTFS_FILE_RECORD_OUTPUT_BUFFER
#define FSCTL_GET_VOLUME_BITMAP         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 27,  METHOD_NEITHER, FILE_ANY_ACCESS) // STARTING_LCN_INPUT_BUFFER, VOLUME_BITMAP_BUFFER
#define FSCTL_GET_RETRIEVAL_POINTERS    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 28,  METHOD_NEITHER, FILE_ANY_ACCESS) // STARTING_VCN_INPUT_BUFFER, RETRIEVAL_POINTERS_BUFFER
#define FSCTL_MOVE_FILE                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 29, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // MOVE_FILE_DATA,
#define FSCTL_IS_VOLUME_DIRTY           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 30, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             31
#define FSCTL_ALLOW_EXTENDED_DASD_IO    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 32, METHOD_NEITHER,  FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
// decommissioned fsctl value                                             33
// decommissioned fsctl value                                             34
#define FSCTL_FIND_FILES_BY_SID         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 35, METHOD_NEITHER, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             36
// decommissioned fsctl value                                             37
#define FSCTL_SET_OBJECT_ID             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 38, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_GET_OBJECT_ID             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 39, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_DELETE_OBJECT_ID          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 40, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_REPARSE_POINT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 41, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // REPARSE_DATA_BUFFER,
#define FSCTL_GET_REPARSE_POINT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 42, METHOD_BUFFERED, FILE_ANY_ACCESS) // REPARSE_DATA_BUFFER
#define FSCTL_DELETE_REPARSE_POINT      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 43, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // REPARSE_DATA_BUFFER,
#define FSCTL_ENUM_USN_DATA             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 44,  METHOD_NEITHER, FILE_ANY_ACCESS) // MFT_ENUM_DATA,
#define FSCTL_SECURITY_ID_CHECK         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 45,  METHOD_NEITHER, FILE_READ_DATA)  // BULK_SECURITY_TEST_DATA,
#define FSCTL_READ_USN_JOURNAL          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 46,  METHOD_NEITHER, FILE_ANY_ACCESS) // READ_USN_JOURNAL_DATA, USN
#define FSCTL_SET_OBJECT_ID_EXTENDED    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 47, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_CREATE_OR_GET_OBJECT_ID   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 48, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILE_OBJECTID_BUFFER
#define FSCTL_SET_SPARSE                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 49, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_ZERO_DATA             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 50, METHOD_BUFFERED, FILE_WRITE_DATA) // FILE_ZERO_DATA_INFORMATION,
#define FSCTL_QUERY_ALLOCATED_RANGES    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 51,  METHOD_NEITHER, FILE_READ_DATA)  // FILE_ALLOCATED_RANGE_BUFFER, FILE_ALLOCATED_RANGE_BUFFER
#define FSCTL_ENABLE_UPGRADE            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 52, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_SET_ENCRYPTION            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 53,  METHOD_NEITHER, FILE_ANY_ACCESS) // ENCRYPTION_BUFFER, DECRYPTION_STATUS_BUFFER
#define FSCTL_ENCRYPTION_FSCTL_IO       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 54,  METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_WRITE_RAW_ENCRYPTED       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 55,  METHOD_NEITHER, FILE_SPECIAL_ACCESS) // ENCRYPTED_DATA_INFO, EXTENDED_ENCRYPTED_DATA_INFO
#define FSCTL_READ_RAW_ENCRYPTED        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 56,  METHOD_NEITHER, FILE_SPECIAL_ACCESS) // REQUEST_RAW_ENCRYPTED_DATA, ENCRYPTED_DATA_INFO, EXTENDED_ENCRYPTED_DATA_INFO
#define FSCTL_CREATE_USN_JOURNAL        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 57,  METHOD_NEITHER, FILE_ANY_ACCESS) // CREATE_USN_JOURNAL_DATA,
#define FSCTL_READ_FILE_USN_DATA        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 58,  METHOD_NEITHER, FILE_ANY_ACCESS) // Read the Usn Record for a file
#define FSCTL_WRITE_USN_CLOSE_RECORD    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 59,  METHOD_NEITHER, FILE_ANY_ACCESS) // Generate Close Usn Record
#define FSCTL_EXTEND_VOLUME             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 60, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_USN_JOURNAL         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 61, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DELETE_USN_JOURNAL        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 62, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_MARK_HANDLE               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 63, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SIS_COPYFILE              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 64, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SIS_LINK_FILES            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 65, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
// decommissional fsctl value                                             66
// decommissioned fsctl value                                             67
// decommissioned fsctl value                                             68
#define FSCTL_RECALL_FILE               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 69, METHOD_NEITHER, FILE_ANY_ACCESS)
// decommissioned fsctl value                                             70
#define FSCTL_READ_FROM_PLEX            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 71, METHOD_OUT_DIRECT, FILE_READ_DATA)
#define FSCTL_FILE_PREFETCH             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 72, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // FILE_PREFETCH
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
#define FSCTL_MAKE_MEDIA_COMPATIBLE         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 76, METHOD_BUFFERED, FILE_WRITE_DATA) // UDFS R/W
#define FSCTL_SET_DEFECT_MANAGEMENT         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 77, METHOD_BUFFERED, FILE_WRITE_DATA) // UDFS R/W
#define FSCTL_QUERY_SPARING_INFO            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 78, METHOD_BUFFERED, FILE_ANY_ACCESS) // UDFS R/W
#define FSCTL_QUERY_ON_DISK_VOLUME_INFO     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 79, METHOD_BUFFERED, FILE_ANY_ACCESS) // C/UDFS
#define FSCTL_SET_VOLUME_COMPRESSION_STATE  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 80, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // VOLUME_COMPRESSION_STATE
// decommissioned fsctl value                                                 80
#define FSCTL_TXFS_MODIFY_RM                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 81, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_QUERY_RM_INFORMATION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 82, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
// decommissioned fsctl value                                                 83
#define FSCTL_TXFS_ROLLFORWARD_REDO         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 84, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_ROLLFORWARD_UNDO         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 85, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_START_RM                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 86, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_SHUTDOWN_RM              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 87, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_READ_BACKUP_INFORMATION  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 88, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
#define FSCTL_TXFS_WRITE_BACKUP_INFORMATION CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 89, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_CREATE_SECONDARY_RM      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 90, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_GET_METADATA_INFO        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 91, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
#define FSCTL_TXFS_GET_TRANSACTED_VERSION   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 92, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
// decommissioned fsctl value                                                 93
#define FSCTL_TXFS_SAVEPOINT_INFORMATION    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 94, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
#define FSCTL_TXFS_CREATE_MINIVERSION       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 95, METHOD_BUFFERED, FILE_WRITE_DATA) // TxF
// decommissioned fsctl value                                                 96
// decommissioned fsctl value                                                 97
// decommissioned fsctl value                                                 98
#define FSCTL_TXFS_TRANSACTION_ACTIVE       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 99, METHOD_BUFFERED, FILE_READ_DATA)  // TxF
#define FSCTL_SET_ZERO_ON_DEALLOCATION      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 101, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_SET_REPAIR                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 102, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_GET_REPAIR                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 103, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_WAIT_FOR_REPAIR               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 104, METHOD_BUFFERED, FILE_ANY_ACCESS)
// decommissioned fsctl value                                                 105
#define FSCTL_INITIATE_REPAIR               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 106, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSC_INTERNAL                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 107, METHOD_NEITHER, FILE_ANY_ACCESS) // CSC internal implementation
#define FSCTL_SHRINK_VOLUME                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 108, METHOD_BUFFERED, FILE_SPECIAL_ACCESS) // SHRINK_VOLUME_INFORMATION
#define FSCTL_SET_SHORT_NAME_BEHAVIOR       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 109, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DFSR_SET_GHOST_HANDLE_STATE   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 110, METHOD_BUFFERED, FILE_ANY_ACCESS)

//
//  Values 111 - 119 are reserved for FSRM.
//

#define FSCTL_TXFS_LIST_TRANSACTION_LOCKED_FILES \
                                            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 120, METHOD_BUFFERED, FILE_READ_DATA) // TxF
#define FSCTL_TXFS_LIST_TRANSACTIONS        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 121, METHOD_BUFFERED, FILE_READ_DATA) // TxF
#define FSCTL_QUERY_PAGEFILE_ENCRYPTION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 122, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
#define FSCTL_RESET_VOLUME_ALLOCATION_HINTS CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 123, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_QUERY_DEPENDENT_VOLUME        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 124, METHOD_BUFFERED, FILE_ANY_ACCESS)    // Dependency File System Filter
#define FSCTL_SD_GLOBAL_CHANGE              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 125, METHOD_BUFFERED, FILE_ANY_ACCESS) // Query/Change NTFS Security Descriptors
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
#define FSCTL_TXFS_READ_BACKUP_INFORMATION2 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 126, METHOD_BUFFERED, FILE_ANY_ACCESS) // TxF
#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_LOOKUP_STREAM_FROM_CLUSTER    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 127, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_TXFS_WRITE_BACKUP_INFORMATION2 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 128, METHOD_BUFFERED, FILE_ANY_ACCESS) // TxF
#define FSCTL_FILE_TYPE_NOTIFICATION        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 129, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_FILE_LEVEL_TRIM               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 130, METHOD_BUFFERED, FILE_WRITE_DATA)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

//
//  Values 131 - 139 are reserved for FSRM.
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_GET_BOOT_AREA_INFO            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 140, METHOD_BUFFERED, FILE_ANY_ACCESS) // BOOT_AREA_INFO
#define FSCTL_GET_RETRIEVAL_POINTER_BASE    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 141, METHOD_BUFFERED, FILE_ANY_ACCESS) // RETRIEVAL_POINTER_BASE
#define FSCTL_SET_PERSISTENT_VOLUME_STATE   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 142, METHOD_BUFFERED, FILE_ANY_ACCESS)  // FILE_FS_PERSISTENT_VOLUME_INFORMATION
#define FSCTL_QUERY_PERSISTENT_VOLUME_STATE CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 143, METHOD_BUFFERED, FILE_ANY_ACCESS)  // FILE_FS_PERSISTENT_VOLUME_INFORMATION

#define FSCTL_REQUEST_OPLOCK                CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 144, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_CSV_TUNNEL_REQUEST            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 145, METHOD_BUFFERED, FILE_ANY_ACCESS) // CSV_TUNNEL_REQUEST
#define FSCTL_IS_CSV_FILE                   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 146, METHOD_BUFFERED, FILE_ANY_ACCESS) // IS_CSV_FILE

#define FSCTL_QUERY_FILE_SYSTEM_RECOGNITION CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 147, METHOD_BUFFERED, FILE_ANY_ACCESS) //
#define FSCTL_CSV_GET_VOLUME_PATH_NAME      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 148, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_GET_VOLUME_NAME_FOR_VOLUME_MOUNT_POINT CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 149, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_GET_VOLUME_PATH_NAMES_FOR_VOLUME_NAME CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 150,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_IS_FILE_ON_CSV_VOLUME         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 151,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_CORRUPTION_HANDLING           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 152, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_OFFLOAD_READ                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 153, METHOD_BUFFERED, FILE_READ_ACCESS)
#define FSCTL_OFFLOAD_WRITE                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 154, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_CSV_INTERNAL                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 155,  METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_SET_PURGE_FAILURE_MODE        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 156, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_FILE_LAYOUT             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 157, METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_IS_VOLUME_OWNED_BYCSVFS       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 158,  METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_GET_INTEGRITY_INFORMATION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 159, METHOD_BUFFERED, FILE_ANY_ACCESS)                  // FSCTL_GET_INTEGRITY_INFORMATION_BUFFER
#define FSCTL_SET_INTEGRITY_INFORMATION     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 160, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA) // FSCTL_SET_INTEGRITY_INFORMATION_BUFFER

#define FSCTL_QUERY_FILE_REGIONS            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 161, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_RKF_INTERNAL                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 171, METHOD_NEITHER, FILE_ANY_ACCESS) // Resume Key Filter

#define FSCTL_SCRUB_DATA                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 172, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_REPAIR_COPIES                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 173, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA)
#define FSCTL_DISABLE_LOCAL_BUFFERING       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 174, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_MGMT_LOCK                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 175, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_QUERY_DOWN_LEVEL_FILE_SYSTEM_CHARACTERISTICS CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 176, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_ADVANCE_FILE_ID               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 177, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_SYNC_TUNNEL_REQUEST       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 178, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_QUERY_VETO_FILE_DIRECT_IO CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 179, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_WRITE_USN_REASON              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 180, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_CONTROL                   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 181, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_GET_REFS_VOLUME_DATA          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 182, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CSV_H_BREAKING_SYNC_TUNNEL_REQUEST CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 185, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_QUERY_STORAGE_CLASSES         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 187, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_REGION_INFO             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 188, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_USN_TRACK_MODIFIED_RANGES     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 189, METHOD_BUFFERED, FILE_ANY_ACCESS) // USN_TRACK_MODIFIED_RANGES
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 192, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SVHDX_SYNC_TUNNEL_REQUEST         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 193, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SVHDX_SET_INITIATOR_INFORMATION   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 194, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_SET_EXTERNAL_BACKING              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 195, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_GET_EXTERNAL_BACKING              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 196, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DELETE_EXTERNAL_BACKING           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 197, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_ENUM_EXTERNAL_BACKING             CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 198, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_ENUM_OVERLAY                      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 199, METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_ADD_OVERLAY                       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 204, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_REMOVE_OVERLAY                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 205, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_UPDATE_OVERLAY                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 206, METHOD_BUFFERED, FILE_WRITE_DATA)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_DUPLICATE_EXTENTS_TO_FILE         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 209, METHOD_BUFFERED, FILE_WRITE_DATA )
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_SPARSE_OVERALLOCATE               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 211, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_STORAGE_QOS_CONTROL               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 212, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_INITIATE_FILE_METADATA_OPTIMIZATION       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 215, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_QUERY_FILE_METADATA_OPTIMIZATION          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 216, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_SVHDX_ASYNC_TUNNEL_REQUEST         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 217, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_GET_WOF_VERSION                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 218, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_HCS_SYNC_TUNNEL_REQUEST            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 219, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_HCS_ASYNC_TUNNEL_REQUEST           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 220, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_QUERY_EXTENT_READ_CACHE_INFO       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 221, METHOD_NEITHER, FILE_ANY_ACCESS)  // VCN_RANGE_INPUT_BUFFER, EXTENT_READ_CACHE_INFO_BUFFER
#define FSCTL_QUERY_REFS_VOLUME_COUNTER_INFO     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 222, METHOD_NEITHER, FILE_ANY_ACCESS)  // REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER, VOLUME_REFS_INFO_BUFFER
#define FSCTL_CLEAN_VOLUME_METADATA              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 223, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_INTEGRITY_INFORMATION_EX       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 224, METHOD_BUFFERED, FILE_ANY_ACCESS) // FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_SUSPEND_OVERLAY                    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 225, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_VIRTUAL_STORAGE_QUERY_PROPERTY     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 226, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_FILESYSTEM_GET_STATISTICS_EX       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 227, METHOD_BUFFERED, FILE_ANY_ACCESS) // FILESYSTEM_STATISTICS_EX
#define FSCTL_QUERY_VOLUME_CONTAINER_STATE       CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 228, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_LAYER_ROOT                     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 229, METHOD_BUFFERED, FILE_ANY_ACCESS) // CONTAINER_ROOT_INFO_INPUT CONTAINER_ROOT_INFO_OUTPUT
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)
#define FSCTL_QUERY_DIRECT_ACCESS_EXTENTS        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 230, METHOD_NEITHER, FILE_ANY_ACCESS)
#define FSCTL_NOTIFY_STORAGE_SPACE_ALLOCATION    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 231, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SSDI_STORAGE_REQUEST               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 232, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS1)
#define FSCTL_QUERY_DIRECT_IMAGE_ORIGINAL_BASE   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 233, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_READ_UNPRIVILEGED_USN_JOURNAL      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 234,  METHOD_NEITHER, FILE_ANY_ACCESS) // READ_USN_JOURNAL_DATA, USN
#endif

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)
#define FSCTL_GHOST_FILE_EXTENTS                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 235, METHOD_BUFFERED, FILE_WRITE_ACCESS) // FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER
#define FSCTL_QUERY_GHOSTED_FILE_EXTENTS         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 236, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)
#define FSCTL_UNMAP_SPACE                        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 237, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
#define FSCTL_HCS_SYNC_NO_WRITE_TUNNEL_REQUEST   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 238, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS1)
#define FSCTL_START_VIRTUALIZATION_INSTANCE     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 240, METHOD_BUFFERED, FILE_ANY_ACCESS) // VIRTUALIZATION_INSTANCE_INFO_INPUT, VIRTUALIZATION_INSTANCE_INFO_OUTPUT
#define FSCTL_GET_FILTER_FILE_IDENTIFIER        CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 241, METHOD_BUFFERED, FILE_ANY_ACCESS) // GET_FILTER_FILE_IDENTIFIER_INPUT, GET_FILTER_FILE_IDENTIFIER_OUTPUT
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS1) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)
#define FSCTL_STREAMS_QUERY_PARAMETERS          CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 241, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_STREAMS_ASSOCIATE_ID              CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 242, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_STREAMS_QUERY_ID                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 243, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define FSCTL_GET_RETRIEVAL_POINTERS_AND_REFCOUNT CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 244, METHOD_NEITHER,  FILE_ANY_ACCESS) // STARTING_VCN_INPUT_BUFFER, RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER

#define FSCTL_QUERY_VOLUME_NUMA_INFO            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 245, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)

#define FSCTL_REFS_DEALLOCATE_RANGES            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 246, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)
#define FSCTL_QUERY_REFS_SMR_VOLUME_INFO         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 247, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_REFS_SMR_VOLUME_GC_PARAMETERS  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 248, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_REFS_FILE_STRICTLY_SEQUENTIAL  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 249, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3)
#define FSCTL_DUPLICATE_EXTENTS_TO_FILE_EX      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 250, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_QUERY_BAD_RANGES                  CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 251, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SET_DAX_ALLOC_ALIGNMENT_HINT      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 252, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_DELETE_CORRUPTED_REFS_CONTAINER   CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 253, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_SCRUB_UNDISCOVERABLE_ID           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 254, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3) */

//
// The following long list of structs are associated with the preceeding
// file system fsctls.
//

//
//==================== FSCTL_IS_PATHNAME_VALID ======================
//
// Structure for FSCTL_IS_PATHNAME_VALID
//

typedef struct _PATHNAME_BUFFER {

    ULONG PathNameLength;
    WCHAR Name[1];

} PATHNAME_BUFFER, *PPATHNAME_BUFFER;

//
//==================== FSCTL_QUERY_BPB_INFO ======================
//
// Structure for FSCTL_QUERY_BPB_INFO
//

typedef struct _FSCTL_QUERY_FAT_BPB_BUFFER {

    UCHAR First0x24BytesOfBootSector[0x24];

} FSCTL_QUERY_FAT_BPB_BUFFER, *PFSCTL_QUERY_FAT_BPB_BUFFER;

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)

//
//==================== FSCTL_GET_NTFS_VOLUME_DATA ======================
//
// Structures for FSCTL_GET_NTFS_VOLUME_DATA.
// The user must pass the basic buffer below.  Ntfs
// will return as many fields as available in the extended
// buffer which follows immediately after the VOLUME_DATA_BUFFER.
//

typedef struct {

    LARGE_INTEGER VolumeSerialNumber;
    LARGE_INTEGER NumberSectors;
    LARGE_INTEGER TotalClusters;
    LARGE_INTEGER FreeClusters;
    LARGE_INTEGER TotalReserved;
    ULONG BytesPerSector;
    ULONG BytesPerCluster;
    ULONG BytesPerFileRecordSegment;
    ULONG ClustersPerFileRecordSegment;
    LARGE_INTEGER MftValidDataLength;
    LARGE_INTEGER MftStartLcn;
    LARGE_INTEGER Mft2StartLcn;
    LARGE_INTEGER MftZoneStart;
    LARGE_INTEGER MftZoneEnd;

} NTFS_VOLUME_DATA_BUFFER, *PNTFS_VOLUME_DATA_BUFFER;

typedef struct {

    ULONG ByteCount;

    USHORT MajorVersion;
    USHORT MinorVersion;

    ULONG BytesPerPhysicalSector;

    USHORT LfsMajorVersion;
    USHORT LfsMinorVersion;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
    ULONG MaxDeviceTrimExtentCount;
    ULONG MaxDeviceTrimByteCount;

    ULONG MaxVolumeTrimExtentCount;
    ULONG MaxVolumeTrimByteCount;
#endif

} NTFS_EXTENDED_VOLUME_DATA, *PNTFS_EXTENDED_VOLUME_DATA;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//
//==================== FSCTL_GET_REFS_VOLUME_DATA ======================
//
// Structures for FSCTL_GET_REFS_VOLUME_DATA.
//

typedef struct {

    ULONG ByteCount;
    ULONG MajorVersion;
    ULONG MinorVersion;

    ULONG BytesPerPhysicalSector;

    LARGE_INTEGER VolumeSerialNumber;
    LARGE_INTEGER NumberSectors;
    LARGE_INTEGER TotalClusters;
    LARGE_INTEGER FreeClusters;
    LARGE_INTEGER TotalReserved;
    ULONG BytesPerSector;
    ULONG BytesPerCluster;
    LARGE_INTEGER MaximumSizeOfResidentFile;

    LARGE_INTEGER Reserved[10];

} REFS_VOLUME_DATA_BUFFER, *PREFS_VOLUME_DATA_BUFFER;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */


#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_GET_VOLUME_BITMAP ======================
//
// Structure for FSCTL_GET_VOLUME_BITMAP
//

typedef struct {

    LARGE_INTEGER StartingLcn;

} STARTING_LCN_INPUT_BUFFER, *PSTARTING_LCN_INPUT_BUFFER;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#define GET_VOLUME_BITMAP_FLAG_MASK_METADATA         0x00000001

typedef struct {

    LARGE_INTEGER StartingLcn;
    ULONG Flags;

} STARTING_LCN_INPUT_BUFFER_EX, *PSTARTING_LCN_INPUT_BUFFER_EX;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

typedef struct {

    LARGE_INTEGER StartingLcn;
    LARGE_INTEGER BitmapSize;
    UCHAR Buffer[1];

} VOLUME_BITMAP_BUFFER, *PVOLUME_BITMAP_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_GET_RETRIEVAL_POINTERS ======================
//
// Structure for FSCTL_GET_RETRIEVAL_POINTERS
//

typedef struct {

    LARGE_INTEGER StartingVcn;

} STARTING_VCN_INPUT_BUFFER, *PSTARTING_VCN_INPUT_BUFFER;

typedef struct RETRIEVAL_POINTERS_BUFFER {

    ULONG ExtentCount;
    LARGE_INTEGER StartingVcn;
    struct {
        LARGE_INTEGER NextVcn;
        LARGE_INTEGER Lcn;
    } Extents[1];

} RETRIEVAL_POINTERS_BUFFER, *PRETRIEVAL_POINTERS_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)
//
//==================== FSCTL_GET_RETRIEVAL_POINTERS_AND_REFCOUNT ======================
//
// Structure for FSCTL_GET_RETRIEVAL_POINTERS_AND_REFCOUNT
//

//
// Input structure is STARTING_VCN_INPUT_BUFFER
//

typedef struct RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER {

    ULONG ExtentCount;
    LARGE_INTEGER StartingVcn;
    struct {
        LARGE_INTEGER NextVcn;
        LARGE_INTEGER Lcn;
        ULONG ReferenceCount;
    } Extents[1];

} RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER, *PRETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2 */

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_GET_NTFS_FILE_RECORD ======================
//
// Structures for FSCTL_GET_NTFS_FILE_RECORD
//

typedef struct {

    LARGE_INTEGER FileReferenceNumber;

} NTFS_FILE_RECORD_INPUT_BUFFER, *PNTFS_FILE_RECORD_INPUT_BUFFER;

typedef struct {

    LARGE_INTEGER FileReferenceNumber;
    ULONG FileRecordLength;
    UCHAR FileRecordBuffer[1];

} NTFS_FILE_RECORD_OUTPUT_BUFFER, *PNTFS_FILE_RECORD_OUTPUT_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_NT4)
//
//==================== FSCTL_MOVE_FILE ======================
//
// Structure for FSCTL_MOVE_FILE
//

typedef struct {

    HANDLE FileHandle;
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER StartingLcn;
    ULONG ClusterCount;

} MOVE_FILE_DATA, *PMOVE_FILE_DATA;

typedef struct {

    HANDLE FileHandle;
    LARGE_INTEGER SourceFileRecord;
    LARGE_INTEGER TargetFileRecord;

} MOVE_FILE_RECORD_DATA, *PMOVE_FILE_RECORD_DATA;


#if defined(_WIN64)
//
//  32/64 Bit thunking support structure
//

typedef struct _MOVE_FILE_DATA32 {

    UINT32 FileHandle;
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER StartingLcn;
    ULONG ClusterCount;

} MOVE_FILE_DATA32, *PMOVE_FILE_DATA32;
#endif
#endif /* _WIN32_WINNT >= _WIN32_WINNT_NT4 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_FIND_FILES_BY_SID ======================
//
// Structures for FSCTL_FIND_FILES_BY_SID
//

typedef struct {
    ULONG Restart;
    SID Sid;
} FIND_BY_SID_DATA, *PFIND_BY_SID_DATA;

typedef struct {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FIND_BY_SID_OUTPUT, *PFIND_BY_SID_OUTPUT;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//  The following structures apply to Usn operations.
//

//
//==================== FSCTL_ENUM_USN_DATA ======================
//
// Structure for FSCTL_ENUM_USN_DATA
//

typedef struct {

    ULONGLONG StartFileReferenceNumber;
    USN LowUsn;
    USN HighUsn;

} MFT_ENUM_DATA_V0, *PMFT_ENUM_DATA_V0;

typedef struct {

    ULONGLONG StartFileReferenceNumber;
    USN LowUsn;
    USN HighUsn;
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;

} MFT_ENUM_DATA_V1, *PMFT_ENUM_DATA_V1;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef MFT_ENUM_DATA_V1 MFT_ENUM_DATA, *PMFT_ENUM_DATA;
#else
typedef MFT_ENUM_DATA_V0 MFT_ENUM_DATA, *PMFT_ENUM_DATA;
#endif

//
//==================== FSCTL_CREATE_USN_JOURNAL ======================
//
// Structure for FSCTL_CREATE_USN_JOURNAL
//

typedef struct {

    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;

} CREATE_USN_JOURNAL_DATA, *PCREATE_USN_JOURNAL_DATA;

//
//==================== FSCTL_READ_FILE_USN_DATA ====================
//
// Structure for FSCTL_READ_FILE_USN_DATA
//

//
//  Windows 7 and earlier releases did not use an input buffer
//  for this FSCTL.  It is valid to omit this, and doing so
//  will default to MinMajorVersion == 2, MaxMajorVersion == 2.
//

typedef struct {

    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;

} READ_FILE_USN_DATA, *PREAD_FILE_USN_DATA;


//
//==================== FSCTL_READ_USN_JOURNAL ======================
//
// Structure for FSCTL_READ_USN_JOURNAL
//

typedef struct {

    USN StartUsn;
    ULONG ReasonMask;
    ULONG ReturnOnlyOnClose;
    ULONGLONG Timeout;
    ULONGLONG BytesToWaitFor;
    ULONGLONG UsnJournalID;

} READ_USN_JOURNAL_DATA_V0, *PREAD_USN_JOURNAL_DATA_V0;

typedef struct {

    USN StartUsn;
    ULONG ReasonMask;
    ULONG ReturnOnlyOnClose;
    ULONGLONG Timeout;
    ULONGLONG BytesToWaitFor;
    ULONGLONG UsnJournalID;
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;

} READ_USN_JOURNAL_DATA_V1, *PREAD_USN_JOURNAL_DATA_V1;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef READ_USN_JOURNAL_DATA_V1 READ_USN_JOURNAL_DATA, *PREAD_USN_JOURNAL_DATA;
#else
typedef READ_USN_JOURNAL_DATA_V0 READ_USN_JOURNAL_DATA, *PREAD_USN_JOURNAL_DATA;
#endif

//
//==================== FSCTL_USN_TRACK_MODIFIED_RANGES ======================
//
// Structure for FSCTL_USN_TRACK_MODIFIED_RANGES
//

typedef struct {
    ULONG Flags;
    ULONG Unused;
    ULONGLONG ChunkSize;
    LONGLONG FileSizeThreshold;
} USN_TRACK_MODIFIED_RANGES, *PUSN_TRACK_MODIFIED_RANGES;

typedef struct {
    USN Usn;
} USN_RANGE_TRACK_OUTPUT, *PUSN_RANGE_TRACK_OUTPUT;

#define FLAG_USN_TRACK_MODIFIED_RANGES_ENABLE 0x00000001

//
//  The initial Major.Minor version of the Usn record will be 2.0.
//  In general, the MinorVersion may be changed if fields are added
//  to this structure in such a way that the previous version of the
//  software can still correctly the fields it knows about.  The
//  MajorVersion should only be changed if the previous version of
//  any software using this structure would incorrectly handle new
//  records due to structure changes.
//
//  The first update to this will force the structure to version 2.0.
//  This will add the extended information about the source as
//  well as indicate the file name offset within the structure.
//
//  The following structure is returned with these fsctls.
//
//      FSCTL_READ_USN_JOURNAL
//      FSCTL_READ_FILE_USN_DATA
//      FSCTL_ENUM_USN_DATA
//

typedef struct {

    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONGLONG FileReferenceNumber;
    ULONGLONG ParentFileReferenceNumber;
    USN Usn;
    LARGE_INTEGER TimeStamp;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG SecurityId;
    ULONG FileAttributes;
    USHORT FileNameLength;
    USHORT FileNameOffset;
    WCHAR FileName[1];

} USN_RECORD_V2, *PUSN_RECORD_V2;

typedef struct {

    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
    FILE_ID_128 FileReferenceNumber;
    FILE_ID_128 ParentFileReferenceNumber;
    USN Usn;
    LARGE_INTEGER TimeStamp;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG SecurityId;
    ULONG FileAttributes;
    USHORT FileNameLength;
    USHORT FileNameOffset;
    WCHAR FileName[1];

} USN_RECORD_V3, *PUSN_RECORD_V3;

typedef USN_RECORD_V2 USN_RECORD, *PUSN_RECORD;

typedef struct {
    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
} USN_RECORD_COMMON_HEADER, *PUSN_RECORD_COMMON_HEADER;

typedef struct {
    LONGLONG Offset;
    LONGLONG Length;
} USN_RECORD_EXTENT, *PUSN_RECORD_EXTENT;

typedef struct {
    USN_RECORD_COMMON_HEADER Header;
    FILE_ID_128 FileReferenceNumber;
    FILE_ID_128 ParentFileReferenceNumber;
    USN Usn;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG RemainingExtents;
    USHORT NumberOfExtents;
    USHORT ExtentSize;
    USN_RECORD_EXTENT Extents[1];
} USN_RECORD_V4, *PUSN_RECORD_V4;

typedef union {
    USN_RECORD_COMMON_HEADER Header;
    USN_RECORD_V2 V2;
    USN_RECORD_V3 V3;
    USN_RECORD_V4 V4;
} USN_RECORD_UNION, *PUSN_RECORD_UNION;

#define USN_PAGE_SIZE                    (0x1000)

#define USN_REASON_DATA_OVERWRITE        (0x00000001)
#define USN_REASON_DATA_EXTEND           (0x00000002)
#define USN_REASON_DATA_TRUNCATION       (0x00000004)
#define USN_REASON_NAMED_DATA_OVERWRITE  (0x00000010)
#define USN_REASON_NAMED_DATA_EXTEND     (0x00000020)
#define USN_REASON_NAMED_DATA_TRUNCATION (0x00000040)
#define USN_REASON_FILE_CREATE           (0x00000100)
#define USN_REASON_FILE_DELETE           (0x00000200)
#define USN_REASON_EA_CHANGE             (0x00000400)
#define USN_REASON_SECURITY_CHANGE       (0x00000800)
#define USN_REASON_RENAME_OLD_NAME       (0x00001000)
#define USN_REASON_RENAME_NEW_NAME       (0x00002000)
#define USN_REASON_INDEXABLE_CHANGE      (0x00004000)
#define USN_REASON_BASIC_INFO_CHANGE     (0x00008000)
#define USN_REASON_HARD_LINK_CHANGE      (0x00010000)
#define USN_REASON_COMPRESSION_CHANGE    (0x00020000)
#define USN_REASON_ENCRYPTION_CHANGE     (0x00040000)
#define USN_REASON_OBJECT_ID_CHANGE      (0x00080000)
#define USN_REASON_REPARSE_POINT_CHANGE  (0x00100000)
#define USN_REASON_STREAM_CHANGE         (0x00200000)
#define USN_REASON_TRANSACTED_CHANGE     (0x00400000)
#define USN_REASON_INTEGRITY_CHANGE      (0x00800000)
#define USN_REASON_DESIRED_STORAGE_CLASS_CHANGE (0x01000000)
#define USN_REASON_CLOSE                 (0x80000000)

//
//==================== FSCTL_QUERY_USN_JOUNAL ======================
//
//  Structure for FSCTL_QUERY_USN_JOUNAL
//

typedef struct {

    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;

} USN_JOURNAL_DATA_V0, *PUSN_JOURNAL_DATA_V0;

typedef struct {

    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
    USHORT MinSupportedMajorVersion;
    USHORT MaxSupportedMajorVersion;

} USN_JOURNAL_DATA_V1, *PUSN_JOURNAL_DATA_V1;

typedef struct {

    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
    USHORT MinSupportedMajorVersion;
    USHORT MaxSupportedMajorVersion;
    ULONG Flags;
    ULONGLONG RangeTrackChunkSize;
    LONGLONG RangeTrackFileSizeThreshold;

} USN_JOURNAL_DATA_V2, *PUSN_JOURNAL_DATA_V2;


#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef USN_JOURNAL_DATA_V1 USN_JOURNAL_DATA, *PUSN_JOURNAL_DATA;
#else
typedef USN_JOURNAL_DATA_V0 USN_JOURNAL_DATA, *PUSN_JOURNAL_DATA;
#endif

//
//==================== FSCTL_DELETE_USN_JOURNAL ======================
//
//  Structure for FSCTL_DELETE_USN_JOURNAL
//

typedef struct {

    ULONGLONG UsnJournalID;
    ULONG DeleteFlags;

} DELETE_USN_JOURNAL_DATA, *PDELETE_USN_JOURNAL_DATA;

#define USN_DELETE_FLAG_DELETE              (0x00000001)
#define USN_DELETE_FLAG_NOTIFY              (0x00000002)

#define USN_DELETE_VALID_FLAGS              (0x00000003)

//
//==================== FSCTL_MARK_HANDLE ======================
//
//  Structure for FSCTL_MARK_HANDLE
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct {

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    union {
        ULONG UsnSourceInfo;
        ULONG CopyNumber;
    } DUMMYUNIONNAME;
#else
    ULONG UsnSourceInfo;
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

    HANDLE VolumeHandle;
    ULONG HandleInfo;

} MARK_HANDLE_INFO, *PMARK_HANDLE_INFO;

#if defined(_WIN64)
//
//  32/64 Bit thunking support structure
//

typedef struct {

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    union {
        ULONG UsnSourceInfo;
        ULONG CopyNumber;
    } DUMMYUNIONNAME;
#else
    ULONG UsnSourceInfo;
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */
    UINT32 VolumeHandle;
    ULONG HandleInfo;

} MARK_HANDLE_INFO32, *PMARK_HANDLE_INFO32;
#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)       // unnamed struct
#endif

//
//  Flags for the additional source information above.
//
//      USN_SOURCE_DATA_MANAGEMENT - Service is not modifying the external view
//          of any part of the file.  Typical case is HSM moving data to
//          and from external storage.
//
//      USN_SOURCE_AUXILIARY_DATA - Service is not modifying the external view
//          of the file with regard to the application that created this file.
//          Can be used to add private data streams to a file.
//
//      USN_SOURCE_REPLICATION_MANAGEMENT - Service is modifying a file to match
//          the contents of the same file which exists in another member of the
//          replica set.
//
//      USN_SOURCE_CLIENT_REPLICATION_MANAGEMENT - Replication is being performed
//          on clint systems either from the cloud or servers
//

#define USN_SOURCE_DATA_MANAGEMENT                  (0x00000001)
#define USN_SOURCE_AUXILIARY_DATA                   (0x00000002)
#define USN_SOURCE_REPLICATION_MANAGEMENT           (0x00000004)
#define USN_SOURCE_CLIENT_REPLICATION_MANAGEMENT    (0x00000008)

#define USN_SOURCE_VALID_FLAGS      (USN_SOURCE_DATA_MANAGEMENT |               \
                                     USN_SOURCE_AUXILIARY_DATA |                \
                                     USN_SOURCE_REPLICATION_MANAGEMENT |        \
                                     USN_SOURCE_CLIENT_REPLICATION_MANAGEMENT)


//
//  Flags for the HandleInfo field above
//
//  MARK_HANDLE_PROTECT_CLUSTERS - disallow any defragmenting (FSCTL_MOVE_FILE) until the
//      the handle is closed
//
//  MARK_HANDLE_TXF_SYSTEM_LOG - indicates that this stream is being used as the Txf
//      log for an RM on the volume.  Must be called in the kernel using
//      IRP_MN_KERNEL_CALL.
//
//  MARK_HANDLE_NOT_TXF_SYSTEM_LOG - indicates that this user is no longer using this
//      object as a log file.
//
//  MARK_HANDLE_REALTIME
//
//  MARK_HANDLE_NOT_REALTIME
//
//  MARK_HANDLE_READ_COPY - indicates the data must be read from the specified copy.
//
//  MARK_HANDLE_NOT_READ_COPY - indicates the data is no longer to be read from a specific copy.
//
//  MARK_HANDLE_CLOUD_SYNC - indicates that the handle belongs to the cloud sync engine
//

#define MARK_HANDLE_PROTECT_CLUSTERS                    (0x00000001)
#define MARK_HANDLE_TXF_SYSTEM_LOG                      (0x00000004)
#define MARK_HANDLE_NOT_TXF_SYSTEM_LOG                  (0x00000008)

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define MARK_HANDLE_REALTIME                            (0x00000020)
#define MARK_HANDLE_NOT_REALTIME                        (0x00000040)
#define MARK_HANDLE_FILTER_METADATA                     (0x00000200)        // 8.1 update and newer

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define MARK_HANDLE_READ_COPY                           (0x00000080)
#define MARK_HANDLE_NOT_READ_COPY                       (0x00000100)
#define MARK_HANDLE_RETURN_PURGE_FAILURE                (0x00000400)        // 8.1 and newer

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define MARK_HANDLE_CLOUD_SYNC                          (0x00000800)

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#define MARK_HANDLE_DISABLE_FILE_METADATA_OPTIMIZATION  (0x00001000)        // 9.0 and newer
#define MARK_HANDLE_ENABLE_USN_SOURCE_ON_PAGING_IO      (0x00002000)        // 9.0 and newer
#define MARK_HANDLE_SKIP_COHERENCY_SYNC_DISALLOW_WRITES (0x00004000)        // 9.0 and newer

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define NO_8DOT3_NAME_PRESENT               (0x00000001)
#define REMOVED_8DOT3_NAME                  (0x00000002)

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SECURITY_ID_CHECK ======================
//
// Structure for FSCTL_SECURITY_ID_CHECK
//

typedef struct {

    ACCESS_MASK DesiredAccess;
    ULONG SecurityIds[1];

} BULK_SECURITY_TEST_DATA, *PBULK_SECURITY_TEST_DATA;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_IS_VOLUME_DIRTY ======================
//
//  Output flags for the FSCTL_IS_VOLUME_DIRTY
//

#define VOLUME_IS_DIRTY                  (0x00000001)
#define VOLUME_UPGRADE_SCHEDULED         (0x00000002)
#define VOLUME_SESSION_OPEN              (0x00000004)
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
// Structures for FSCTL_FILE_PREFETCH
//

typedef struct _FILE_PREFETCH {
    ULONG Type;
    ULONG Count;
    ULONGLONG Prefetch[1];
} FILE_PREFETCH, *PFILE_PREFETCH;

typedef struct _FILE_PREFETCH_EX {
    ULONG Type;
    ULONG Count;
    PVOID Context;
    ULONGLONG Prefetch[1];
} FILE_PREFETCH_EX, *PFILE_PREFETCH_EX;

#define FILE_PREFETCH_TYPE_FOR_CREATE       0x1
#define FILE_PREFETCH_TYPE_FOR_DIRENUM      0x2
#define FILE_PREFETCH_TYPE_FOR_CREATE_EX    0x3
#define FILE_PREFETCH_TYPE_FOR_DIRENUM_EX   0x4

#define FILE_PREFETCH_TYPE_MAX              0x4

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

//
//==================== FSCTL_FILESYSTEM_GET_STATISTICS ======================
//
// Structures for FSCTL_FILESYSTEM_GET_STATISTICS
//
// Filesystem performance counters
//

typedef struct _FILESYSTEM_STATISTICS {

    USHORT FileSystemType;
    USHORT Version;                     // currently version 1

    ULONG SizeOfCompleteStructure;      // must by a mutiple of 64 bytes

    ULONG UserFileReads;
    ULONG UserFileReadBytes;
    ULONG UserDiskReads;
    ULONG UserFileWrites;
    ULONG UserFileWriteBytes;
    ULONG UserDiskWrites;

    ULONG MetaDataReads;
    ULONG MetaDataReadBytes;
    ULONG MetaDataDiskReads;
    ULONG MetaDataWrites;
    ULONG MetaDataWriteBytes;
    ULONG MetaDataDiskWrites;

    //
    //  The file system's private structure is appended here.
    //

} FILESYSTEM_STATISTICS, *PFILESYSTEM_STATISTICS;

// values for FS_STATISTICS.FileSystemType

#define FILESYSTEM_STATISTICS_TYPE_NTFS     1
#define FILESYSTEM_STATISTICS_TYPE_FAT      2
#define FILESYSTEM_STATISTICS_TYPE_EXFAT    3
#define FILESYSTEM_STATISTICS_TYPE_REFS     4

//
//  File System Specific Statistics Data
//

typedef struct _FAT_STATISTICS {
    ULONG CreateHits;
    ULONG SuccessfulCreates;
    ULONG FailedCreates;

    ULONG NonCachedReads;
    ULONG NonCachedReadBytes;
    ULONG NonCachedWrites;
    ULONG NonCachedWriteBytes;

    ULONG NonCachedDiskReads;
    ULONG NonCachedDiskWrites;
} FAT_STATISTICS, *PFAT_STATISTICS;

typedef struct _EXFAT_STATISTICS {
    ULONG CreateHits;
    ULONG SuccessfulCreates;
    ULONG FailedCreates;

    ULONG NonCachedReads;
    ULONG NonCachedReadBytes;
    ULONG NonCachedWrites;
    ULONG NonCachedWriteBytes;

    ULONG NonCachedDiskReads;
    ULONG NonCachedDiskWrites;
} EXFAT_STATISTICS, *PEXFAT_STATISTICS;

typedef struct _NTFS_STATISTICS {

    ULONG LogFileFullExceptions;
    ULONG OtherExceptions;

    //
    // Other meta data io's
    //

    ULONG MftReads;
    ULONG MftReadBytes;
    ULONG MftWrites;
    ULONG MftWriteBytes;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } MftWritesUserLevel;

    USHORT MftWritesFlushForLogFileFull;
    USHORT MftWritesLazyWriter;
    USHORT MftWritesUserRequest;

    ULONG Mft2Writes;
    ULONG Mft2WriteBytes;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } Mft2WritesUserLevel;

    USHORT Mft2WritesFlushForLogFileFull;
    USHORT Mft2WritesLazyWriter;
    USHORT Mft2WritesUserRequest;

    ULONG RootIndexReads;
    ULONG RootIndexReadBytes;
    ULONG RootIndexWrites;
    ULONG RootIndexWriteBytes;

    ULONG BitmapReads;
    ULONG BitmapReadBytes;
    ULONG BitmapWrites;
    ULONG BitmapWriteBytes;

    USHORT BitmapWritesFlushForLogFileFull;
    USHORT BitmapWritesLazyWriter;
    USHORT BitmapWritesUserRequest;

    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
    } BitmapWritesUserLevel;

    ULONG MftBitmapReads;
    ULONG MftBitmapReadBytes;
    ULONG MftBitmapWrites;
    ULONG MftBitmapWriteBytes;

    USHORT MftBitmapWritesFlushForLogFileFull;
    USHORT MftBitmapWritesLazyWriter;
    USHORT MftBitmapWritesUserRequest;

    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } MftBitmapWritesUserLevel;

    ULONG UserIndexReads;
    ULONG UserIndexReadBytes;
    ULONG UserIndexWrites;
    ULONG UserIndexWriteBytes;

    //
    // Additions for NT 5.0
    //

    ULONG LogFileReads;
    ULONG LogFileReadBytes;
    ULONG LogFileWrites;
    ULONG LogFileWriteBytes;

    struct {
        ULONG Calls;                // number of individual calls to allocate clusters
        ULONG Clusters;             // number of clusters allocated
        ULONG Hints;                // number of times a hint was specified

        ULONG RunsReturned;         // number of runs used to satisify all the requests

        ULONG HintsHonored;         // number of times the hint was useful
        ULONG HintsClusters;        // number of clusters allocated via the hint
        ULONG Cache;                // number of times the cache was useful other than the hint
        ULONG CacheClusters;        // number of clusters allocated via the cache other than the hint
        ULONG CacheMiss;            // number of times the cache wasn't useful
        ULONG CacheMissClusters;    // number of clusters allocated without the cache
    } Allocate;

    //
    //  Additions for Windows 8.1
    //

    ULONG DiskResourcesExhausted;

    //
    //  All future expansion of this structure needs to be in NTFS_STATISTICS_EX starting Windows 10
    //

} NTFS_STATISTICS, *PNTFS_STATISTICS;

typedef struct _FILESYSTEM_STATISTICS_EX {

    USHORT FileSystemType;
    USHORT Version;                     // currently version 1

    ULONG SizeOfCompleteStructure;      // must by a mutiple of 64 bytes

    ULONGLONG UserFileReads;
    ULONGLONG UserFileReadBytes;
    ULONGLONG UserDiskReads;
    ULONGLONG UserFileWrites;
    ULONGLONG UserFileWriteBytes;
    ULONGLONG UserDiskWrites;

    ULONGLONG MetaDataReads;
    ULONGLONG MetaDataReadBytes;
    ULONGLONG MetaDataDiskReads;
    ULONGLONG MetaDataWrites;
    ULONGLONG MetaDataWriteBytes;
    ULONGLONG MetaDataDiskWrites;

    //
    //  The file system's private structure is appended here.
    //

} FILESYSTEM_STATISTICS_EX, *PFILESYSTEM_STATISTICS_EX;

typedef struct _NTFS_STATISTICS_EX {

    ULONG LogFileFullExceptions;
    ULONG OtherExceptions;

    //
    // Other meta data io's
    //

    ULONGLONG MftReads;
    ULONGLONG MftReadBytes;
    ULONGLONG MftWrites;
    ULONGLONG MftWriteBytes;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } MftWritesUserLevel;

    ULONG MftWritesFlushForLogFileFull;
    ULONG MftWritesLazyWriter;
    ULONG MftWritesUserRequest;

    ULONGLONG Mft2Writes;
    ULONGLONG Mft2WriteBytes;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } Mft2WritesUserLevel;

    ULONG Mft2WritesFlushForLogFileFull;
    ULONG Mft2WritesLazyWriter;
    ULONG Mft2WritesUserRequest;

    ULONGLONG RootIndexReads;
    ULONGLONG RootIndexReadBytes;
    ULONGLONG RootIndexWrites;
    ULONGLONG RootIndexWriteBytes;

    ULONGLONG BitmapReads;
    ULONGLONG BitmapReadBytes;
    ULONGLONG BitmapWrites;
    ULONGLONG BitmapWriteBytes;

    ULONG BitmapWritesFlushForLogFileFull;
    ULONG BitmapWritesLazyWriter;
    ULONG BitmapWritesUserRequest;

    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } BitmapWritesUserLevel;

    ULONGLONG MftBitmapReads;
    ULONGLONG MftBitmapReadBytes;
    ULONGLONG MftBitmapWrites;
    ULONGLONG MftBitmapWriteBytes;

    ULONG MftBitmapWritesFlushForLogFileFull;
    ULONG MftBitmapWritesLazyWriter;
    ULONG MftBitmapWritesUserRequest;

    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } MftBitmapWritesUserLevel;

    ULONGLONG UserIndexReads;
    ULONGLONG UserIndexReadBytes;
    ULONGLONG UserIndexWrites;
    ULONGLONG UserIndexWriteBytes;

    //
    // Additions for NT 5.0
    //

    ULONGLONG LogFileReads;
    ULONGLONG LogFileReadBytes;
    ULONGLONG LogFileWrites;
    ULONGLONG LogFileWriteBytes;

    struct {
        ULONG Calls;                    // number of individual calls to allocate clusters
        ULONG RunsReturned;             // number of runs used to satisify all the requests
        ULONG Hints;                    // number of times a hint was specified
        ULONG HintsHonored;             // number of times the hint was useful
        ULONG Cache;                    // number of times the cache was useful other than the hint
        ULONG CacheMiss;                // number of times the cache wasn't useful

        ULONGLONG Clusters;             // number of clusters allocated
        ULONGLONG HintsClusters;        // number of clusters allocated via the hint
        ULONGLONG CacheClusters;        // number of clusters allocated via the cache other than the hint
        ULONGLONG CacheMissClusters;    // number of clusters allocated without the cache
    } Allocate;

    //
    //  Additions for Windows 8.1
    //

    ULONG DiskResourcesExhausted;

    //
    //  Additions for Windows 10
    //

    ULONGLONG VolumeTrimCount;
    ULONGLONG VolumeTrimTime;
    ULONGLONG VolumeTrimByteCount;

    ULONGLONG FileLevelTrimCount;
    ULONGLONG FileLevelTrimTime;
    ULONGLONG FileLevelTrimByteCount;

    ULONGLONG VolumeTrimSkippedCount;
    ULONGLONG VolumeTrimSkippedByteCount;

    //
    //  Additions for NtfsFillStatInfoFromMftRecord
    //

    ULONGLONG NtfsFillStatInfoFromMftRecordCalledCount;
    ULONGLONG NtfsFillStatInfoFromMftRecordBailedBecauseOfAttributeListCount;
    ULONGLONG NtfsFillStatInfoFromMftRecordBailedBecauseOfNonResReparsePointCount;

} NTFS_STATISTICS_EX, *PNTFS_STATISTICS_EX;

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SET_OBJECT_ID ================================
//==================== FSCTL_GET_OBJECT_ID ================================
//==================== FSCTL_CREATE_OR_GET_OBJECT_ID ======================
//
//  Structures for FSCTL_SET_OBJECT_ID, FSCTL_GET_OBJECT_ID, and
//  FSCTL_CREATE_OR_GET_OBJECT_ID
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct _FILE_OBJECTID_BUFFER {

    //
    //  This is the portion of the object id that is indexed.
    //

    UCHAR ObjectId[16];

    //
    //  This portion of the object id is not indexed, it's just
    //  some metadata for the user's benefit.
    //

    union {
        struct {
            UCHAR BirthVolumeId[16];
            UCHAR BirthObjectId[16];
            UCHAR DomainId[16];
        } DUMMYSTRUCTNAME;
        UCHAR ExtendedInfo[48];
    } DUMMYUNIONNAME;

} FILE_OBJECTID_BUFFER, *PFILE_OBJECTID_BUFFER;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) /* nonstandard extension used : nameless struct/union */
#endif

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SET_SPARSE ======================
//
// Structure for FSCTL_SET_SPARSE
//

typedef struct _FILE_SET_SPARSE_BUFFER {
    BOOLEAN SetSparse;
} FILE_SET_SPARSE_BUFFER, *PFILE_SET_SPARSE_BUFFER;


#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_SET_ZERO_DATA ======================
//
// Structure for FSCTL_SET_ZERO_DATA
//

typedef struct _FILE_ZERO_DATA_INFORMATION {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;

} FILE_ZERO_DATA_INFORMATION, *PFILE_ZERO_DATA_INFORMATION;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#define FILE_ZERO_DATA_INFORMATION_FLAG_PRESERVE_CACHED_DATA       (0x00000001)
typedef struct _FILE_ZERO_DATA_INFORMATION_EX {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;
    ULONG Flags;

} FILE_ZERO_DATA_INFORMATION_EX, *PFILE_ZERO_DATA_INFORMATION_EX;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//==================== FSCTL_QUERY_ALLOCATED_RANGES ======================
//
// Structure for FSCTL_QUERY_ALLOCATED_RANGES
//

//
// Querying the allocated ranges requires an output buffer to store the
// allocated ranges and an input buffer to specify the range to query.
// The input buffer contains a single entry, the output buffer is an
// array of the following structure.
//

typedef struct _FILE_ALLOCATED_RANGE_BUFFER {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER Length;

} FILE_ALLOCATED_RANGE_BUFFER, *PFILE_ALLOCATED_RANGE_BUFFER;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//====================== FSCTL_SET_ENCRYPTION ===============================
//====================== FSCTL_WRITE_RAW_ENCRYPTED ==========================
//====================== FSCTL_READ_RAW_ENCRYPTED ===========================
//
// Structures for FSCTL_SET_ENCRYPTION, FSCTL_WRITE_RAW_ENCRYPTED, and FSCTL_READ_RAW_ENCRYPTED
//

//
//  The input buffer to set encryption indicates whether we are to encrypt/decrypt a file
//  or an individual stream.
//

typedef struct _ENCRYPTION_BUFFER {

    ULONG EncryptionOperation;
    UCHAR Private[1];

} ENCRYPTION_BUFFER, *PENCRYPTION_BUFFER;

#define FILE_SET_ENCRYPTION         0x00000001
#define FILE_CLEAR_ENCRYPTION       0x00000002
#define STREAM_SET_ENCRYPTION       0x00000003
#define STREAM_CLEAR_ENCRYPTION     0x00000004

#define MAXIMUM_ENCRYPTION_VALUE    0x00000004

//
//  The optional output buffer to set encryption indicates that the last encrypted
//  stream in a file has been marked as decrypted.
//

typedef struct _DECRYPTION_STATUS_BUFFER {

    BOOLEAN NoEncryptedStreams;

} DECRYPTION_STATUS_BUFFER, *PDECRYPTION_STATUS_BUFFER;

#define ENCRYPTION_FORMAT_DEFAULT        (0x01)

//
//  Request Encrypted Data structure.  This is used to indicate
//  the range of the file to read.  It also describes the
//  output buffer used to return the data.
//

typedef struct _REQUEST_RAW_ENCRYPTED_DATA {

    //
    //  Requested file offset and requested length to read.
    //  The fsctl will round the starting offset down
    //  to a file system boundary.  It will also
    //  round the length up to a file system boundary.
    //

    LONGLONG FileOffset;
    ULONG Length;

} REQUEST_RAW_ENCRYPTED_DATA, *PREQUEST_RAW_ENCRYPTED_DATA;

//
//  Encrypted Data Information structure.  This structure
//  is used to return raw encrypted data from a file in
//  order to perform off-line recovery.  The data will be
//  encrypted or encrypted and compressed.  The off-line
//  service will need to use the encryption and compression
//  format information to recover the file data.  In the
//  event that the data is both encrypted and compressed then
//  the decryption must occur before decompression.  All
//  the data units below must be encrypted and compressed
//  with the same format.
//
//  The data will be returned in units.  The data unit size
//  will be fixed per request.  If the data is compressed
//  then the data unit size will be the compression unit size.
//
//  This structure is at the beginning of the buffer used to
//  return the encrypted data.  The actual raw bytes from
//  the file will follow this buffer.  The offset of the
//  raw bytes from the beginning of this structure is
//  specified in the REQUEST_RAW_ENCRYPTED_DATA structure
//  described above.
//

typedef struct _ENCRYPTED_DATA_INFO {

    //
    //  This is the file offset for the first entry in the
    //  data block array.  The file system will round
    //  the requested start offset down to a boundary
    //  that is consistent with the format of the file.
    //

    ULONGLONG StartingFileOffset;

    //
    //  Data offset in output buffer.  The output buffer
    //  begins with an ENCRYPTED_DATA_INFO structure.
    //  The file system will then store the raw bytes from
    //  disk beginning at the following offset within the
    //  output buffer.
    //

    ULONG OutputBufferOffset;

    //
    //  The number of bytes being returned that are within
    //  the size of the file.  If this value is less than
    //  (NumberOfDataBlocks << DataUnitShift), it means the
    //  end of the file occurs within this transfer.  Any
    //  data beyond file size is invalid and was never
    //  passed to the encryption driver.
    //

    ULONG BytesWithinFileSize;

    //
    //  The number of bytes being returned that are below
    //  valid data length.  If this value is less than
    //  (NumberOfDataBlocks << DataUnitShift), it means the
    //  end of the valid data occurs within this transfer.
    //  After decrypting the data from this transfer, any
    //  byte(s) beyond valid data length must be zeroed.
    //

    ULONG BytesWithinValidDataLength;

    //
    //  Code for the compression format as defined in
    //  ntrtl.h.  Note that COMPRESSION_FORMAT_NONE
    //  and COMPRESSION_FORMAT_DEFAULT are invalid if
    //  any of the described chunks are compressed.
    //

    USHORT CompressionFormat;

    //
    //  The DataUnit is the granularity used to access the
    //  disk.  It will be the same as the compression unit
    //  size for a compressed file.  For an uncompressed
    //  file, it will be some cluster-aligned power of 2 that
    //  the file system deems convenient.  A caller should
    //  not expect that successive calls will have the
    //  same data unit shift value as the previous call.
    //
    //  Since chunks and compression units are expected to be
    //  powers of 2 in size, we express them log2.  So, for
    //  example (1 << ChunkShift) == ChunkSizeInBytes.  The
    //  ClusterShift indicates how much space must be saved
    //  to successfully compress a compression unit - each
    //  successfully compressed data unit must occupy
    //  at least one cluster less in bytes than an uncompressed
    //  data block unit.
    //

    UCHAR DataUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;

    //
    //  The format for the encryption.
    //

    UCHAR EncryptionFormat;

    //
    //  This is the number of entries in the data block size
    //  array.
    //

    USHORT NumberOfDataBlocks;

    //
    //  This is an array of sizes in the data block array.  There
    //  must be one entry in this array for each data block
    //  read from disk.  The size has a different meaning
    //  depending on whether the file is compressed.
    //
    //  A size of zero always indicates that the final data consists entirely
    //  of zeroes.  There is no decryption or decompression to
    //  perform.
    //
    //  If the file is compressed then the data block size indicates
    //  whether this block is compressed.  A size equal to
    //  the block size indicates that the corresponding block did
    //  not compress.  Any other non-zero size indicates the
    //  size of the compressed data which needs to be
    //  decrypted/decompressed.
    //
    //  If the file is not compressed then the data block size
    //  indicates the amount of data within the block that
    //  needs to be decrypted.  Any other non-zero size indicates
    //  that the remaining bytes in the data unit within the file
    //  consists of zeros.  An example of this is when the
    //  the read spans the valid data length of the file.  There
    //  is no data to decrypt past the valid data length.
    //

    ULONG DataBlockSize[ANYSIZE_ARRAY];

} ENCRYPTED_DATA_INFO, *PENCRYPTED_DATA_INFO;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
//
//  Extended encryption structure for read/write raw encrypted operations.
//  This was needed so we can explicitly indicate if a file is sparse or not
//
//  Flag to indicate the encrypted file is sparse
//

#define ENCRYPTED_DATA_INFO_SPARSE_FILE    1

typedef struct _EXTENDED_ENCRYPTED_DATA_INFO {

    //
    //  This is really a 4 byte character array which
    //  must have the value "EXTD".  We use this
    //  to determine if we should read the extended data
    //  or not.
    //

    ULONG ExtendedCode;

    //
    //  The length of the extended data structure
    //

    ULONG Length;

    //
    //  Encrypted data flags (currently only sparse is defined)
    //

    ULONG Flags;
    ULONG Reserved;

} EXTENDED_ENCRYPTED_DATA_INFO, *PEXTENDED_ENCRYPTED_DATA_INFO;
#endif /*(_WIN32_WINNT >= _WIN32_WINNT_WIN7)*/


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//======================== FSCTL_READ_FROM_PLEX ===========================
//
//  Request Plex Read Data structure.  This is used to indicate
//  the range of the file to read.  It also describes
//  which plex to perform the read from.
//

typedef struct _PLEX_READ_DATA_REQUEST {

    //
    //  Requested offset and length to read.
    //  The offset can be the virtual offset (vbo) in to a file,
    //  or a volume. In the case of a file offset,
    //  the fsd will round the starting offset down
    //  to a file system boundary.  It will also
    //  round the length up to a file system boundary and
    //  enforce any other applicable limits.
    //

    LARGE_INTEGER ByteOffset;
    ULONG ByteLength;
    ULONG PlexNumber;

} PLEX_READ_DATA_REQUEST, *PPLEX_READ_DATA_REQUEST;
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN2K)
//
//======================== FSCTL_SIS_COPYFILE ===========================
//
// Source and destination file names are passed in the FileNameBuffer.
// Both strings are null terminated, with the source name starting at
// the beginning of FileNameBuffer, and the destination name immediately
// following.  Length fields include terminating nulls.
//

typedef struct _SI_COPYFILE {
    ULONG SourceFileNameLength;
    ULONG DestinationFileNameLength;
    ULONG Flags;
    WCHAR FileNameBuffer[1];
} SI_COPYFILE, *PSI_COPYFILE;

#define COPYFILE_SIS_LINK       0x0001              // Copy only if source is SIS
#define COPYFILE_SIS_REPLACE    0x0002              // Replace destination if it exists, otherwise don't.
#define COPYFILE_SIS_FLAGS      0x0003
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN2K */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)
//
//======================== FSCTL_MAKE_MEDIA_COMPATIBLE ===========================
//
//  Input parameter structure for FSCTL_MAKE_MEDIA_COMPATIBLE
//

typedef struct _FILE_MAKE_COMPATIBLE_BUFFER {
    BOOLEAN CloseDisc;
} FILE_MAKE_COMPATIBLE_BUFFER, *PFILE_MAKE_COMPATIBLE_BUFFER;

//
//======================== FSCTL_SET_DEFECT_MANAGEMENT ===========================
//
//  Input parameter structure for FSCTL_SET_DEFECT_MANAGEMENT
//

typedef struct _FILE_SET_DEFECT_MGMT_BUFFER {
    BOOLEAN Disable;
} FILE_SET_DEFECT_MGMT_BUFFER, *PFILE_SET_DEFECT_MGMT_BUFFER;

//
//======================== FSCTL_QUERY_SPARING_INFO ===========================
//
//  Output structure for FSCTL_QUERY_SPARING_INFO
//

typedef struct _FILE_QUERY_SPARING_BUFFER {
    ULONG SparingUnitBytes;
    BOOLEAN SoftwareSparing;
    ULONG TotalSpareBlocks;
    ULONG FreeSpareBlocks;
} FILE_QUERY_SPARING_BUFFER, *PFILE_QUERY_SPARING_BUFFER;

//
//===================== FSCTL_QUERY_ON_DISK_VOLUME_INFO ========================
//
//  Output structure for FSCTL_QUERY_ON_DISK_VOLUME_INFO
//

typedef struct _FILE_QUERY_ON_DISK_VOL_INFO_BUFFER {
    LARGE_INTEGER DirectoryCount;       // -1 = unknown
    LARGE_INTEGER FileCount;            // -1 = unknown
    USHORT FsFormatMajVersion;          // -1 = unknown or n/a
    USHORT FsFormatMinVersion;          // -1 = unknown or n/a
    WCHAR FsFormatName[ 12];
    LARGE_INTEGER FormatTime;
    LARGE_INTEGER LastUpdateTime;
    WCHAR CopyrightInfo[ 34];
    WCHAR AbstractInfo[ 34];
    WCHAR FormattingImplementationInfo[ 34];
    WCHAR LastModifyingImplementationInfo[ 34];
} FILE_QUERY_ON_DISK_VOL_INFO_BUFFER, *PFILE_QUERY_ON_DISK_VOL_INFO_BUFFER;

//
//===================== FSCTL_SET_REPAIR ========================
//
//  Input flags for FSCTL_SET_REPAIR
//

#define SET_REPAIR_ENABLED                                      (0x00000001)
#define SET_REPAIR_WARN_ABOUT_DATA_LOSS                         (0x00000008)
#define SET_REPAIR_DISABLED_AND_BUGCHECK_ON_CORRUPT             (0x00000010)
#define SET_REPAIR_VALID_MASK                                   (0x00000019)

//
//===================== FSCTL_INITIATE_REPAIR ========================
//
//  Optional output structure for FSCTL_INITIATE_REPAIR
//

#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_IN_USE                               (0x0000000000000001)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_REUSED                                   (0x0000000000000002)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_EXIST                                (0x0000000000000004)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_BASE_RECORD                          (0x0000000000000008)
#define FILE_INITIATE_REPAIR_HINT1_SYSTEM_FILE                                          (0x0000000000000010)
#define FILE_INITIATE_REPAIR_HINT1_NOT_IMPLEMENTED                                      (0x0000000000000020)
#define FILE_INITIATE_REPAIR_HINT1_UNABLE_TO_REPAIR                                     (0x0000000000000040)
#define FILE_INITIATE_REPAIR_HINT1_REPAIR_DISABLED                                      (0x0000000000000080)
#define FILE_INITIATE_REPAIR_HINT1_RECURSIVELY_CORRUPTED                                (0x0000000000000100)
#define FILE_INITIATE_REPAIR_HINT1_ORPHAN_GENERATED                                     (0x0000000000000200)
#define FILE_INITIATE_REPAIR_HINT1_REPAIRED                                             (0x0000000000000400)
#define FILE_INITIATE_REPAIR_HINT1_NOTHING_WRONG                                        (0x0000000000000800)
#define FILE_INITIATE_REPAIR_HINT1_ATTRIBUTE_NOT_FOUND                                  (0x0000000000001000)
#define FILE_INITIATE_REPAIR_HINT1_POTENTIAL_CROSSLINK                                  (0x0000000000002000)
#define FILE_INITIATE_REPAIR_HINT1_STALE_INFORMATION                                    (0x0000000000004000)
#define FILE_INITIATE_REPAIR_HINT1_CLUSTERS_ALREADY_IN_USE                              (0x0000000000008000)
#define FILE_INITIATE_REPAIR_HINT1_LCN_NOT_EXIST                                        (0x0000000000010000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_RUN_LENGTH                                   (0x0000000000020000)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_NOT_ORPHAN                               (0x0000000000040000)
#define FILE_INITIATE_REPAIR_HINT1_FILE_RECORD_IS_BASE_RECORD                           (0x0000000000080000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_ARRAY_LENGTH_COUNT                           (0x0000000000100000)
#define FILE_INITIATE_REPAIR_HINT1_SID_VALID                                            (0x0000000000200000)
#define FILE_INITIATE_REPAIR_HINT1_SID_MISMATCH                                         (0x0000000000400000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_PARENT                                       (0x0000000000800000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_IN_USE                        (0x0000000001000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_REUSED                            (0x0000000002000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_EXIST                         (0x0000000004000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_BASE_RECORD                   (0x0000000008000000)
#define FILE_INITIATE_REPAIR_HINT1_PARENT_FILE_RECORD_NOT_INDEX                         (0x0000000010000000)
#define FILE_INITIATE_REPAIR_HINT1_VALID_INDEX_ENTRY                                    (0x0000000020000000)
#define FILE_INITIATE_REPAIR_HINT1_OUT_OF_GENERIC_NAMES                                 (0x0000000040000000)
#define FILE_INITIATE_REPAIR_HINT1_OUT_OF_RESOURCE                                      (0x0000000080000000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_LCN                                          (0x0000000100000000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_VCN                                          (0x0000000200000000)
#define FILE_INITIATE_REPAIR_HINT1_NAME_CONFLICT                                        (0x0000000400000000)
#define FILE_INITIATE_REPAIR_HINT1_ORPHAN                                               (0x0000000800000000)
#define FILE_INITIATE_REPAIR_HINT1_ATTRIBUTE_TOO_SMALL                                  (0x0000001000000000)
#define FILE_INITIATE_REPAIR_HINT1_ATTRIBUTE_NON_RESIDENT                               (0x0000002000000000)
#define FILE_INITIATE_REPAIR_HINT1_DENY_DEFRAG                                          (0x0000004000000000)
#define FILE_INITIATE_REPAIR_HINT1_PREVIOUS_PARENT_STILL_VALID                          (0x0000008000000000)
#define FILE_INITIATE_REPAIR_HINT1_INDEX_ENTRY_MISMATCH                                 (0x0000010000000000)
#define FILE_INITIATE_REPAIR_HINT1_INVALID_ORPHAN_RECOVERY_NAME                         (0x0000020000000000)
#define FILE_INITIATE_REPAIR_HINT1_MULTIPLE_FILE_NAME_ATTRIBUTES                        (0x0000040000000000)


//
//  We need to expose CLSN definition???????????????
//
typedef ULONGLONG CLSN;

typedef struct _FILE_INITIATE_REPAIR_OUTPUT_BUFFER {
    ULONGLONG Hint1;
    ULONGLONG Hint2;
    CLSN Clsn;
    NTSTATUS Status;
} FILE_INITIATE_REPAIR_OUTPUT_BUFFER, *PFILE_INITIATE_REPAIR_OUTPUT_BUFFER;

//
//===================== FSCTL_SHRINK_VOLUME ========================
//
//  Input structures for FSCTL_SHRINK_VOLUME.
//

typedef enum _SHRINK_VOLUME_REQUEST_TYPES
{
    ShrinkPrepare = 1,
    ShrinkCommit,
    ShrinkAbort

} SHRINK_VOLUME_REQUEST_TYPES, *PSHRINK_VOLUME_REQUEST_TYPES;

typedef struct _SHRINK_VOLUME_INFORMATION
{
    SHRINK_VOLUME_REQUEST_TYPES ShrinkRequestType;
    ULONGLONG Flags;
    LONGLONG NewNumberOfSectors;

} SHRINK_VOLUME_INFORMATION, *PSHRINK_VOLUME_INFORMATION;

//
//========= FSCTL_TXFS_MODIFY_RM,  FSCTL_TXFS_QUERY_RM_INFORMATION ============
//
//  Structures for FSCTL_TXFS_MODIFY_RM and FSCTL_TXFS_QUERY_RM_INFORMATION
//
//  For ModifyRM, TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS and
//  TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT are mutually exclusive.
//  You can specify the log growth amount in number of containers or as a percentage.
//
//  For ModifyRM, TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX and
//  TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX are mutually exclusive.
//
//  For ModifyRM, TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN and
//  TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN are mutually exclusive.
//
//  For ModifyRM, TXFS_RM_FLAG_RESET_RM_AT_NEXT_START and
//  TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START are mutually exclusive and only
//  apply to default RMs.
//
//  For ModifyRM, TXFS_RM_FLAG_PREFER_CONSISTENCY and
//  TXFS_RM_FLAG_PREFER_AVAILABILITY are mutually exclusive.  After calling ModifyRM
//  with one of these flags set the RM must be restarted for the change to take effect.
//

#define TXFS_RM_FLAG_LOGGING_MODE                           0x00000001
#define TXFS_RM_FLAG_RENAME_RM                              0x00000002
#define TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX                0x00000004
#define TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN                0x00000008
#define TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS    0x00000010
#define TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT           0x00000020
#define TXFS_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE             0x00000040
#define TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX             0x00000080
#define TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN             0x00000100
#define TXFS_RM_FLAG_GROW_LOG                               0x00000400
#define TXFS_RM_FLAG_SHRINK_LOG                             0x00000800
#define TXFS_RM_FLAG_ENFORCE_MINIMUM_SIZE                   0x00001000
#define TXFS_RM_FLAG_PRESERVE_CHANGES                       0x00002000
#define TXFS_RM_FLAG_RESET_RM_AT_NEXT_START                 0x00004000
#define TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START          0x00008000
#define TXFS_RM_FLAG_PREFER_CONSISTENCY                     0x00010000
#define TXFS_RM_FLAG_PREFER_AVAILABILITY                    0x00020000

#define TXFS_LOGGING_MODE_SIMPLE        (0x0001)
#define TXFS_LOGGING_MODE_FULL          (0x0002)

#define TXFS_TRANSACTION_STATE_NONE         0x00
#define TXFS_TRANSACTION_STATE_ACTIVE       0x01
#define TXFS_TRANSACTION_STATE_PREPARED     0x02
#define TXFS_TRANSACTION_STATE_NOTACTIVE    0x03

#define TXFS_MODIFY_RM_VALID_FLAGS                                      \
                (TXFS_RM_FLAG_LOGGING_MODE                          |   \
                 TXFS_RM_FLAG_RENAME_RM                             |   \
                 TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX               |   \
                 TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN               |   \
                 TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS   |   \
                 TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT          |   \
                 TXFS_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE            |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX            |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN            |   \
                 TXFS_RM_FLAG_SHRINK_LOG                            |   \
                 TXFS_RM_FLAG_GROW_LOG                              |   \
                 TXFS_RM_FLAG_ENFORCE_MINIMUM_SIZE                  |   \
                 TXFS_RM_FLAG_PRESERVE_CHANGES                      |   \
                 TXFS_RM_FLAG_RESET_RM_AT_NEXT_START                |   \
                 TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START         |   \
                 TXFS_RM_FLAG_PREFER_CONSISTENCY                    |   \
                 TXFS_RM_FLAG_PREFER_AVAILABILITY)

typedef struct _TXFS_MODIFY_RM {

    //
    //  TXFS_RM_FLAG_* flags
    //

    ULONG Flags;

    //
    //  Maximum log container count if TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MAX is set.
    //

    ULONG LogContainerCountMax;

    //
    //  Minimum log container count if TXFS_RM_FLAG_LOG_CONTAINER_COUNT_MIN is set.
    //

    ULONG LogContainerCountMin;

    //
    //  Target log container count for TXFS_RM_FLAG_SHRINK_LOG or _GROW_LOG.
    //

    ULONG LogContainerCount;

    //
    //  When the log is full, increase its size by this much.  Indicated as either a percent of
    //  the log size or absolute container count, depending on which of the TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_*
    //  flags is set.
    //

    ULONG LogGrowthIncrement;

    //
    //  Sets autoshrink policy if TXFS_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE is set.  Autoshrink
    //  makes the log shrink so that no more than this percentage of the log is free at any time.
    //

    ULONG LogAutoShrinkPercentage;

    //
    //  Reserved.
    //

    ULONGLONG Reserved;

    //
    //  If TXFS_RM_FLAG_LOGGING_MODE is set, this must contain one of TXFS_LOGGING_MODE_SIMPLE
    //  or TXFS_LOGGING_MODE_FULL.
    //

    USHORT LoggingMode;

} TXFS_MODIFY_RM,
 *PTXFS_MODIFY_RM;

#define TXFS_RM_STATE_NOT_STARTED       0
#define TXFS_RM_STATE_STARTING          1
#define TXFS_RM_STATE_ACTIVE            2
#define TXFS_RM_STATE_SHUTTING_DOWN     3

//
//  The flags field for query RM information is used for the following information:
//
//  1)  To indicate whether the LogGrowthIncrement field is reported as a percent
//      or as a number of containers.  Possible flag values for this are:
//
//      TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS xor TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT
//
//  2)  To indicate that there is no set maximum or minimum container count.  Possible
//      flag values for this are:
//
//      TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX
//      TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN
//
//      Note that these flags are not mutually exclusive.
//
//  2)  To report whether the RM will be reset the next time it is started.  Note that
//      only the default RM will report a meaningful value (secondary RMs will always
//      report DO_NOT_RESET) Possible flag values for this are:
//
//      TXFS_RM_FLAG_RESET_RM_AT_NEXT_START xor TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START
//
//  3)  To report whether the RM is in consistency mode or availability mode.  Possible
//      flag values for this are:
//
//      TXFS_RM_FLAG_PREFER_CONSISTENCY xor TXFS_RM_FLAG_PREFER_AVAILABILITY
//
//  The RmState field can have exactly one of the above-defined TXF_RM_STATE_ values.
//

#define TXFS_QUERY_RM_INFORMATION_VALID_FLAGS                           \
                (TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS   |   \
                 TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT          |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX            |   \
                 TXFS_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN            |   \
                 TXFS_RM_FLAG_RESET_RM_AT_NEXT_START                |   \
                 TXFS_RM_FLAG_DO_NOT_RESET_RM_AT_NEXT_START         |   \
                 TXFS_RM_FLAG_PREFER_CONSISTENCY                    |   \
                 TXFS_RM_FLAG_PREFER_AVAILABILITY)

typedef struct _TXFS_QUERY_RM_INFORMATION {

    //
    //  If the return value is STATUS_BUFFER_OVERFLOW (ERROR_MORE_DATA), this
    //  will indicate how much space is required to hold everything.
    //

    ULONG BytesRequired;

    //
    //  LSN of earliest available record in the RM's log.
    //

    ULONGLONG TailLsn;

    //
    //  LSN of most recently-written record in the RM's log.
    //

    ULONGLONG CurrentLsn;

    //
    //  LSN of the log's archive tail.
    //

    ULONGLONG ArchiveTailLsn;

    //
    //  Size of a log container in bytes.
    //

    ULONGLONG LogContainerSize;

    //
    //  Highest virtual clock value recorded in this RM's log.
    //

    LARGE_INTEGER HighestVirtualClock;

    //
    //  Number of containers in this RM's log.
    //

    ULONG LogContainerCount;

    //
    //  Maximum-allowed log container count.
    //

    ULONG LogContainerCountMax;

    //
    //  Minimum-allowed log container count.
    //

    ULONG LogContainerCountMin;

    //
    //  Amount by which log will grow when it gets full.  Indicated as either a percent of
    //  the log size or absolute container count, depending on which of the TXFS_RM_FLAG_LOG_GROWTH_INCREMENT_*
    //  flags is set.
    //

    ULONG LogGrowthIncrement;

    //
    //  Reports on the autoshrink policy if.  Autoshrink makes the log shrink so that no more than this
    //  percentage of the log is free at any time.  A value of 0 indicates that autoshrink is off (i.e.
    //  the log will not automatically shrink).
    //

    ULONG LogAutoShrinkPercentage;

    //
    //  TXFS_RM_FLAG_* flags.  See the comment above at TXFS_QUERY_RM_INFORMATION_VALID_FLAGS to see
    //  what the flags here mean.
    //

    ULONG Flags;

    //
    //  Exactly one of TXFS_LOGGING_MODE_SIMPLE or TXFS_LOGGING_MODE_FULL.
    //

    USHORT LoggingMode;

    //
    //  Reserved.
    //

    USHORT Reserved;

    //
    //  Activity state of the RM.  May be exactly one of the above-defined TXF_RM_STATE_ values.
    //

    ULONG RmState;

    //
    //  Total capacity of the log in bytes.
    //

    ULONGLONG LogCapacity;

    //
    //  Amount of free space in the log in bytes.
    //

    ULONGLONG LogFree;

    //
    //  Size of $Tops in bytes.
    //

    ULONGLONG TopsSize;

    //
    //  Amount of space in $Tops in use.
    //

    ULONGLONG TopsUsed;

    //
    //  Number of transactions active in the RM at the time of the call.
    //

    ULONGLONG TransactionCount;

    //
    //  Total number of single-phase commits that have happened the RM.
    //

    ULONGLONG OnePCCount;

    //
    //  Total number of two-phase commits that have happened the RM.
    //

    ULONGLONG TwoPCCount;

    //
    //  Number of times the log has filled up.
    //

    ULONGLONG NumberLogFileFull;

    //
    //  Age of oldest active transaction in the RM, in milliseconds.
    //

    ULONGLONG OldestTransactionAge;

    //
    //  Name of the RM.
    //

    GUID RMName;

    //
    //  Offset in bytes from the beginning of this structure to a NULL-terminated Unicode
    //  string indicating the path to the RM's transaction manager's log.
    //

    ULONG TmLogPathOffset;

} TXFS_QUERY_RM_INFORMATION,
 *PTXFS_QUERY_RM_INFORMATION;

//
//======================== FSCTL_TXFS_ROLLFORWARD_REDO ========================
//
// Structures for FSCTL_TXFS_ROLLFORWARD_REDO
//

#define TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_REDO_LSN        0x01
#define TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_VIRTUAL_CLOCK   0x02

#define TXFS_ROLLFORWARD_REDO_VALID_FLAGS                               \
                (TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_REDO_LSN |         \
                 TXFS_ROLLFORWARD_REDO_FLAG_USE_LAST_VIRTUAL_CLOCK)

typedef struct _TXFS_ROLLFORWARD_REDO_INFORMATION {
    LARGE_INTEGER  LastVirtualClock;
    ULONGLONG LastRedoLsn;
    ULONGLONG HighestRecoveryLsn;
    ULONG Flags;
} TXFS_ROLLFORWARD_REDO_INFORMATION,
 *PTXFS_ROLLFORWARD_REDO_INFORMATION;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_ROLLFORWARD_REDO_INFORMATION)
#pragma deprecated(PTXFS_ROLLFORWARD_REDO_INFORMATION)
#endif
#endif

//
//======================== FSCTL_TXFS_START_RM ========================
//
//  Structures for FSCTL_TXFS_START_RM
//
//  Note that TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS and
//  TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT are mutually exclusive.
//  You can specify the log growth amount in number of containers or as a percentage.
//
//  TXFS_START_RM_FLAG_CONTAINER_COUNT_MAX and TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX
//  are mutually exclusive.
//
//  TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MIN and TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN
//  are mutually exclusive.
//
//  TXFS_START_RM_FLAG_PREFER_CONSISTENCY and TXFS_START_RM_FLAG_PREFER_AVAILABILITY
//  are mutually exclusive.
//
//  Optional parameters will have system-supplied defaults applied if omitted.
//

#define TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MAX              0x00000001
#define TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MIN              0x00000002
#define TXFS_START_RM_FLAG_LOG_CONTAINER_SIZE                   0x00000004
#define TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS  0x00000008
#define TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT         0x00000010
#define TXFS_START_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE           0x00000020
#define TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX           0x00000040
#define TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MIN           0x00000080

#define TXFS_START_RM_FLAG_RECOVER_BEST_EFFORT                  0x00000200
#define TXFS_START_RM_FLAG_LOGGING_MODE                         0x00000400
#define TXFS_START_RM_FLAG_PRESERVE_CHANGES                     0x00000800

#define TXFS_START_RM_FLAG_PREFER_CONSISTENCY                   0x00001000
#define TXFS_START_RM_FLAG_PREFER_AVAILABILITY                  0x00002000

#define TXFS_START_RM_VALID_FLAGS                                           \
                (TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MAX             |   \
                 TXFS_START_RM_FLAG_LOG_CONTAINER_COUNT_MIN             |   \
                 TXFS_START_RM_FLAG_LOG_CONTAINER_SIZE                  |   \
                 TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_NUM_CONTAINERS |   \
                 TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_PERCENT        |   \
                 TXFS_START_RM_FLAG_LOG_AUTO_SHRINK_PERCENTAGE          |   \
                 TXFS_START_RM_FLAG_RECOVER_BEST_EFFORT                 |   \
                 TXFS_START_RM_FLAG_LOG_NO_CONTAINER_COUNT_MAX          |   \
                 TXFS_START_RM_FLAG_LOGGING_MODE                        |   \
                 TXFS_START_RM_FLAG_PRESERVE_CHANGES                    |   \
                 TXFS_START_RM_FLAG_PREFER_CONSISTENCY                  |   \
                 TXFS_START_RM_FLAG_PREFER_AVAILABILITY)

typedef struct _TXFS_START_RM_INFORMATION {

    //
    //  TXFS_START_RM_FLAG_* flags.
    //

    ULONG Flags;

    //
    //  RM log container size, in bytes.  This parameter is optional.
    //

    ULONGLONG LogContainerSize;

    //
    //  RM minimum log container count.  This parameter is optional.
    //

    ULONG LogContainerCountMin;

    //
    //  RM maximum log container count.  This parameter is optional.
    //

    ULONG LogContainerCountMax;

    //
    //  RM log growth increment in number of containers or percent, as indicated
    //  by TXFS_START_RM_FLAG_LOG_GROWTH_INCREMENT_* flag.  This parameter is
    //  optional.
    //

    ULONG LogGrowthIncrement;

    //
    //  RM log auto shrink percentage.  This parameter is optional.
    //

    ULONG LogAutoShrinkPercentage;

    //
    //  Offset from the beginning of this structure to the log path for the KTM
    //  instance to be used by this RM.  This must be a two-byte (WCHAR) aligned
    //  value.  This parameter is required.
    //

    ULONG TmLogPathOffset;

    //
    //  Length in bytes of log path for the KTM instance to be used by this RM.
    //  This parameter is required.
    //

    USHORT TmLogPathLength;

    //
    //  Logging mode for this RM.  One of TXFS_LOGGING_MODE_SIMPLE or
    //  TXFS_LOGGING_MODE_FULL (mutually exclusive).  This parameter is optional,
    //  and will default to TXFS_LOGGING_MODE_SIMPLE.
    //

    USHORT LoggingMode;

    //
    //  Length in bytes of the path to the log to be used by the RM.  This parameter
    //  is required.
    //

    USHORT LogPathLength;

    //
    //  Reserved.
    //

    USHORT Reserved;

    //
    //  The path to the log (in Unicode characters) to be used by the RM goes here.
    //  This parameter is required.
    //

    WCHAR LogPath[1];

} TXFS_START_RM_INFORMATION,
 *PTXFS_START_RM_INFORMATION;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_START_RM_INFORMATION)
#pragma deprecated(PTXFS_START_RM_INFORMATION)
#endif
#endif

//
//======================== FSCTL_TXFS_GET_METADATA_INFO ========================
//
//  Structures for FSCTL_TXFS_GET_METADATA_INFO
//

typedef struct _TXFS_GET_METADATA_INFO_OUT {

    //
    //  Returns the TxfId of the file referenced by the handle used to call this routine.
    //

    struct {
        LONGLONG LowPart;
        LONGLONG HighPart;
    } TxfFileId;

    //
    //  The GUID of the transaction that has the file locked, if applicable.
    //

    GUID LockingTransaction;

    //
    //  Returns the LSN for the most recent log record we've written for the file.
    //

    ULONGLONG LastLsn;

    //
    //  Transaction state, a TXFS_TRANSACTION_STATE_* value.
    //

    ULONG TransactionState;

} TXFS_GET_METADATA_INFO_OUT, *PTXFS_GET_METADATA_INFO_OUT;

//
//================= FSCTL_TXFS_LIST_TRANSACTION_LOCKED_FILES ==================
//
//  Structures for FSCTL_TXFS_LIST_TRANSACTION_LOCKED_FILES
//
//  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_CREATED means the reported name was created
//  in the locking transaction.
//
//  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_DELETED means the reported name was deleted
//  in the locking transaction.
//
//  Note that both flags may appear if the name was both created and deleted in the same
//  transaction.  In that case the FileName[] member will contain only "\0", as there is
//  no meaningful name to report.
//

#define TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_CREATED   0x00000001
#define TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_DELETED   0x00000002

typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY {

    //
    //  Offset in bytes from the beginning of the TXFS_LIST_TRANSACTION_LOCKED_FILES
    //  structure to the next TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.
    //

    ULONGLONG Offset;

    //
    //  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY_FLAG_* flags to indicate whether the
    //  current name was deleted or created in the transaction.
    //

    ULONG NameFlags;

    //
    //  NTFS File ID of the file.
    //

    LONGLONG FileId;

    //
    //  Reserved.
    //

    ULONG Reserved1;
    ULONG Reserved2;
    LONGLONG Reserved3;

    //
    //  NULL-terminated Unicode path to this file, relative to RM root.
    //

    WCHAR FileName[1];
} TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY, *PTXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY;


typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES {

    //
    //  GUID name of the KTM transaction that files should be enumerated from.
    //

    GUID KtmTransaction;

    //
    //  On output, the number of files involved in the transaction on this RM.
    //

    ULONGLONG NumberOfFiles;

    //
    //  The length of the buffer required to obtain the complete list of files.
    //  This value may change from call to call as the transaction locks more files.
    //

    ULONGLONG BufferSizeRequired;

    //
    //  Offset in bytes from the beginning of this structure to the first
    //  TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.
    //

    ULONGLONG Offset;
} TXFS_LIST_TRANSACTION_LOCKED_FILES, *PTXFS_LIST_TRANSACTION_LOCKED_FILES;

//
//==================== FSCTL_TXFS_LIST_TRANSACTIONS ======================
//
//  Structures for FSCTL_TXFS_LIST_TRANSACTIONS
//

typedef struct _TXFS_LIST_TRANSACTIONS_ENTRY {

    //
    //  Transaction GUID.
    //

    GUID TransactionId;

    //
    //  Transaction state, a TXFS_TRANSACTION_STATE_* value.
    //

    ULONG TransactionState;

    //
    //  Reserved fields
    //

    ULONG Reserved1;
    ULONG Reserved2;
    LONGLONG Reserved3;
} TXFS_LIST_TRANSACTIONS_ENTRY, *PTXFS_LIST_TRANSACTIONS_ENTRY;

typedef struct _TXFS_LIST_TRANSACTIONS {

    //
    //  On output, the number of transactions involved in this RM.
    //

    ULONGLONG NumberOfTransactions;

    //
    //  The length of the buffer required to obtain the complete list of
    //  transactions.  Note that this value may change from call to call
    //  as transactions enter and exit the system.
    //

    ULONGLONG BufferSizeRequired;
} TXFS_LIST_TRANSACTIONS, *PTXFS_LIST_TRANSACTIONS;


//
//==================== FSCTL_TXFS_READ_BACKUP_INFORMATION ======================
//
//  Structures for FSCTL_TXFS_READ_BACKUP_INFORMATION
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct _TXFS_READ_BACKUP_INFORMATION_OUT {
    union {

        //
        //  Used to return the required buffer size if return code is STATUS_BUFFER_OVERFLOW
        //

        ULONG BufferLength;

        //
        //  On success the data is copied here.
        //

        UCHAR Buffer[1];
    } DUMMYUNIONNAME;
} TXFS_READ_BACKUP_INFORMATION_OUT, *PTXFS_READ_BACKUP_INFORMATION_OUT;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 )
#endif

//
//==================== FSCTL_TXFS_WRITE_BACKUP_INFORMATION ======================
//
//  Structures for FSCTL_TXFS_WRITE_BACKUP_INFORMATION
//

typedef struct _TXFS_WRITE_BACKUP_INFORMATION {

    //
    //  The data returned in the Buffer member of a previous call to
    //  FSCTL_TXFS_READ_BACKUP_INFORMATION goes here.
    //

    UCHAR Buffer[1];
} TXFS_WRITE_BACKUP_INFORMATION, *PTXFS_WRITE_BACKUP_INFORMATION;

//
//==================== FSCTL_TXFS_GET_TRANSACTED_VERSION ======================
//
//  Output structure for FSCTL_TXFS_GET_TRANSACTED_VERSION
//

#define TXFS_TRANSACTED_VERSION_NONTRANSACTED   0xFFFFFFFE
#define TXFS_TRANSACTED_VERSION_UNCOMMITTED     0xFFFFFFFF

typedef struct _TXFS_GET_TRANSACTED_VERSION {

    //
    //  The version that this handle is opened to.  This will be
    //  TXFS_TRANSACTED_VERSION_UNCOMMITTED for nontransacted and
    //  transactional writer handles.
    //

    ULONG ThisBaseVersion;

    //
    //  The most recent committed version available.
    //

    ULONG LatestVersion;

    //
    //  If this is a handle to a miniversion, the ID of the miniversion.
    //  If it is not a handle to a minivers, this field will be 0.
    //

    USHORT ThisMiniVersion;

    //
    //  The first available miniversion.  Unless the miniversions are
    //  visible to the transaction bound to this handle, this field will be zero.
    //

    USHORT FirstMiniVersion;

    //
    //  The latest available miniversion.  Unless the miniversions are
    //  visible to the transaction bound to this handle, this field will be zero.
    //

    USHORT LatestMiniVersion;

} TXFS_GET_TRANSACTED_VERSION, *PTXFS_GET_TRANSACTED_VERSION;

//
//==================== FSCTL_TXFS_SAVEPOINT_INFORMATION ======================
//
//  Structures for FSCTL_TXFS_SAVEPOINT_INFORMATION
//
//  Note that the TXFS_SAVEPOINT_INFORMATION structure is both and in and out structure.
//  The KtmTransaction and ActionCode members are always in-parameters, and the SavepointId
//  member is either an in-parameter, an out-parameter, or not used (see its definition below).
//

//
//  Create a new savepoint.
//

#define TXFS_SAVEPOINT_SET                      0x00000001

//
//  Roll back to a specified savepoint.
//

#define TXFS_SAVEPOINT_ROLLBACK                 0x00000002

//
//  Clear (make unavailable for rollback) the most recently set savepoint
//  that has not yet been cleared.
//

#define TXFS_SAVEPOINT_CLEAR                    0x00000004

//
//  Clear all savepoints from the transaction.
//

#define TXFS_SAVEPOINT_CLEAR_ALL                0x00000010

typedef struct _TXFS_SAVEPOINT_INFORMATION {

    //
    //  Handle to the transaction on which to perform the savepoint operation.
    //

    HANDLE KtmTransaction;

    //
    //  Specifies the savepoint action to take.  A TXFS_SAVEPOINT_* value.
    //

    ULONG ActionCode;

    //
    //  In-parameter for TXFS_ROLLBACK_TO_SAVEPOINT - specifies the savepoint to which
    //  to roll back.
    //
    //  Out-parameter for TXFS_SET_SAVEPOINT - the newly-created savepoint ID will be
    //  returned here.
    //
    //  Not used for TXFS_CLEAR_SAVEPOINT or TXFS_CLEAR_ALL_SAVEPOINTS.
    //

    ULONG SavepointId;

} TXFS_SAVEPOINT_INFORMATION, *PTXFS_SAVEPOINT_INFORMATION;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_SAVEPOINT_INFORMATION)
#pragma deprecated(PTXFS_SAVEPOINT_INFORMATION)
#endif
#endif

//
//==================== FSCTL_TXFS_CREATE_MINIVERSION ======================
//
//  Structures for FSCTL_TXFS_CREATE_MINIVERSION
//
//      Only an out parameter is necessary.  That returns the identifier of the new miniversion created.
//

typedef struct _TXFS_CREATE_MINIVERSION_INFO {

    USHORT StructureVersion;

    USHORT StructureLength;

    //
    //  The base version for the newly created miniversion.
    //

    ULONG BaseVersion;

    //
    //  The miniversion that was just created.
    //

    USHORT MiniVersion;

} TXFS_CREATE_MINIVERSION_INFO, *PTXFS_CREATE_MINIVERSION_INFO;

#ifdef DEPRECATE_SUPPORTED
#ifndef USE_TXF_DEPRECATED_FUNCTIONALITY
#pragma deprecated(TXFS_CREATE_MINIVERSION_INFO)
#pragma deprecated(PTXFS_CREATE_MINIVERSION_INFO)
#endif
#endif

//
//==================== FSCTL_TXFS_TRANSACTION_ACTIVE ======================
//
//  Structure for FSCTL_TXFS_TRANSACTION_ACTIVE
//

typedef struct _TXFS_TRANSACTION_ACTIVE_INFO {

    //
    //  Whether or not the volume had active transactions when this snapshot was taken.
    //

    BOOLEAN TransactionsActiveAtSnapshot;

} TXFS_TRANSACTION_ACTIVE_INFO, *PTXFS_TRANSACTION_ACTIVE_INFO;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_VISTA */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
//======================= FSCTL_GET_BOOT_AREA_INFO ==========================
//
// Output structure for FSCTL_GET_BOOT_AREA_INFO
//

typedef struct _BOOT_AREA_INFO {

    ULONG               BootSectorCount;  // the count of boot sectors present on the file system
    struct {
        LARGE_INTEGER   Offset;
    } BootSectors[2];                     // variable number of boot sectors.

} BOOT_AREA_INFO, *PBOOT_AREA_INFO;

//
//==================== FSCTL_GET_RETRIEVAL_POINTER_BASE ======================
//
// Output structure for FSCTL_GET_RETRIEVAL_POINTER_BASE
//

typedef struct _RETRIEVAL_POINTER_BASE {

    LARGE_INTEGER       FileAreaOffset; // sector offset to the first allocatable unit on the filesystem
} RETRIEVAL_POINTER_BASE, *PRETRIEVAL_POINTER_BASE;

//
//==================== FSCTL_QUERY_PERSISTENT_VOLUME_STATE ====================
//==================== FSCTL_SET_PERSISTENT_VOLUME_STATE ======================
//
// Structure for FSCTL_SET_PERSISTENT_VOLUME_STATE and
//  FSCTL_GET_PERSISTENT_VOLUME_STATE.  The initial version will be 1.0
//

typedef struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION {

    ULONG VolumeFlags;
    ULONG FlagMask;
    ULONG Version;
    ULONG Reserved;

} FILE_FS_PERSISTENT_VOLUME_INFORMATION, *PFILE_FS_PERSISTENT_VOLUME_INFORMATION;

//
//  VolumeFlags values
//

#define PERSISTENT_VOLUME_STATE_SHORT_NAME_CREATION_DISABLED        (0x00000001)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define PERSISTENT_VOLUME_STATE_VOLUME_SCRUB_DISABLED               (0x00000002)

#endif  /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
//
//  Persistent volume flags to control the file systems' storage tiering
//  awareness.
//

#define PERSISTENT_VOLUME_STATE_GLOBAL_METADATA_NO_SEEK_PENALTY     (0x00000004)
#define PERSISTENT_VOLUME_STATE_LOCAL_METADATA_NO_SEEK_PENALTY      (0x00000008)
#define PERSISTENT_VOLUME_STATE_NO_HEAT_GATHERING                   (0x00000010)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

//
//  These are flags that define a volume's dependency on WimBoot file.
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
//  The volume backs a system critical volume, typically the one that has wimboot
//  image file serving the system files
//

#define PERSISTENT_VOLUME_STATE_CONTAINS_BACKING_WIM                (0x00000020)

//
//  The volume is backed by other volume that actually has the system files.
//  And hence this relies on the other volume being present in order for the sytem to boot up.
//

#define PERSISTENT_VOLUME_STATE_BACKED_BY_WIM                       (0x00000040)

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

//
//  Writes dynamic redirection on tiered volumes will be disabled
//

#define PERSISTENT_VOLUME_STATE_NO_WRITE_AUTO_TIERING               (0x00000080)

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

//
//  Disable txf on volume
//

#define PERSISTENT_VOLUME_STATE_TXF_DISABLED                        (0x00000100)

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

//
//==================== FSCTL_QUERY_FILE_SYSTEM_RECOGNITION ====================
//
//  Structure for FSCTL_QUERY_FILE_SYSTEM_RECOGNITION
//

typedef struct _FILE_SYSTEM_RECOGNITION_INFORMATION {

    CHAR FileSystem[9];

} FILE_SYSTEM_RECOGNITION_INFORMATION, *PFILE_SYSTEM_RECOGNITION_INFORMATION;

//
//=========================== FSCTL_REQUEST_OPLOCK ===========================
//
//  Structures for FSCTL_REQUEST_OPLOCK
//

#define OPLOCK_LEVEL_CACHE_READ         (0x00000001)
#define OPLOCK_LEVEL_CACHE_HANDLE       (0x00000002)
#define OPLOCK_LEVEL_CACHE_WRITE        (0x00000004)

#define REQUEST_OPLOCK_INPUT_FLAG_REQUEST               (0x00000001)
#define REQUEST_OPLOCK_INPUT_FLAG_ACK                   (0x00000002)
#define REQUEST_OPLOCK_INPUT_FLAG_COMPLETE_ACK_ON_CLOSE (0x00000004)

#define REQUEST_OPLOCK_CURRENT_VERSION          1

typedef struct _REQUEST_OPLOCK_INPUT_BUFFER {

    //
    //  This should be set to REQUEST_OPLOCK_CURRENT_VERSION.
    //

    USHORT StructureVersion;

    USHORT StructureLength;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values to indicate the desired level of the oplock.
    //

    ULONG RequestedOplockLevel;

    //
    //  REQUEST_OPLOCK_INPUT_FLAG_* flags.
    //

    ULONG Flags;

} REQUEST_OPLOCK_INPUT_BUFFER, *PREQUEST_OPLOCK_INPUT_BUFFER;

#define REQUEST_OPLOCK_OUTPUT_FLAG_ACK_REQUIRED     (0x00000001)
#define REQUEST_OPLOCK_OUTPUT_FLAG_MODES_PROVIDED   (0x00000002)

typedef struct _REQUEST_OPLOCK_OUTPUT_BUFFER {

    //
    //  This should be set to REQUEST_OPLOCK_CURRENT_VERSION.
    //

    USHORT StructureVersion;

    USHORT StructureLength;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values indicating the level of the oplock that
    //  was just broken.
    //

    ULONG OriginalOplockLevel;

    //
    //  One or more OPLOCK_LEVEL_CACHE_* values indicating the level to which an oplock
    //  is being broken, or an oplock level that may be available for granting, depending
    //  on the operation returning this buffer.
    //

    ULONG NewOplockLevel;

    //
    //  REQUEST_OPLOCK_OUTPUT_FLAG_* flags.
    //

    ULONG Flags;

    //
    //  When REQUEST_OPLOCK_OUTPUT_FLAG_MODES_PROVIDED is set, and when the
    //  OPLOCK_LEVEL_CACHE_HANDLE level is being lost in an oplock break, these fields
    //  contain the access mode and share mode of the request that is causing the break.
    //

    ACCESS_MASK AccessMode;

    USHORT ShareMode;

} REQUEST_OPLOCK_OUTPUT_BUFFER, *PREQUEST_OPLOCK_OUTPUT_BUFFER;

//
//======================= FSCTL_QUERY_DEPENDENT_VOLUME =======================
//

#ifndef _VIRTUAL_STORAGE_TYPE_DEFINED
#define _VIRTUAL_STORAGE_TYPE_DEFINED
typedef struct _VIRTUAL_STORAGE_TYPE
{
    ULONG DeviceId;
    GUID  VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE;
#endif

//
//  These structures are used by the FSCTL_QUERY_DEPENDENT_VOLUME
//

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST {
    ULONG   RequestLevel;
    ULONG   RequestFlags;
} STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST, *PSTORAGE_QUERY_DEPENDENT_VOLUME_REQUEST;

#define QUERY_DEPENDENT_VOLUME_REQUEST_FLAG_HOST_VOLUMES    0x1
#define QUERY_DEPENDENT_VOLUME_REQUEST_FLAG_GUEST_VOLUMES   0x2

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY {
    ULONG   EntryLength;
    ULONG   DependencyTypeFlags;
    ULONG   ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY;

typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY {
    ULONG   EntryLength;
    ULONG   DependencyTypeFlags;
    ULONG   ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG   AncestorLevel;      // Root parent is 0, every child level after that is incremented
    ULONG   HostVolumeNameOffset;
    ULONG   HostVolumeNameSize;
    ULONG   DependentVolumeNameOffset;
    ULONG   DependentVolumeNameSize;
    ULONG   RelativePathOffset;
    ULONG   RelativePathSize;
    ULONG   DependentDeviceNameOffset;
    ULONG   DependentDeviceNameSize;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY;

#ifdef _MSC_EXTENSIONS

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4200) // zero length array
#endif


typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE {
    ULONG   ResponseLevel;
    ULONG   NumberEntries;
    union {
        STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY Lev1Depends[];
        STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY Lev2Depends[];
    } DUMMYUNIONNAME;
} STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE, *PSTORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE;

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#endif

//
//========================== FSCTL_SD_GLOBAL_CHANGE ==========================
//
//  Structures for FSCTL_SD_GLOBAL_CHANGE
//

//
//  list of operations supported
//

#define SD_GLOBAL_CHANGE_TYPE_MACHINE_SID   1
#define SD_GLOBAL_CHANGE_TYPE_QUERY_STATS   (1 << 16)
#define SD_GLOBAL_CHANGE_TYPE_ENUM_SDS      (2 << 16)


//
//  Operation specific structures for SD_GLOBAL_CHANGE_TYPE_MACHINE_SID
//

typedef struct _SD_CHANGE_MACHINE_SID_INPUT {

    //
    //  The current machine SID to change.
    //  This defines the offset from the beginning of the SD_GLOBAL_CHANGE_INPUT
    //  structure of where the CurrentMachineSID to replace begins.  This will
    //  be a SID structure.  The length defines the length of the imbedded SID
    //  structure.
    //

    USHORT CurrentMachineSIDOffset;
    USHORT CurrentMachineSIDLength;

    //
    //  The new machine SID value to set inplace of the current machine SID
    //  This defines the offset from the beginning of the SD_GLOBAL_CHANGE_INPUT
    //  structure of where the NewMachineSID to set begins.  This will
    //  be a SID structure.  The length defines the length of the imbedded SID
    //  structure.
    //

    USHORT NewMachineSIDOffset;
    USHORT NewMachineSIDLength;

} SD_CHANGE_MACHINE_SID_INPUT, *PSD_CHANGE_MACHINE_SID_INPUT;

typedef struct _SD_CHANGE_MACHINE_SID_OUTPUT {

    //
    //  How many entries were successfully changed in the $Secure stream
    //

    ULONGLONG NumSDChangedSuccess;

    //
    //  How many entries failed the update in the $Secure stream
    //

    ULONGLONG NumSDChangedFail;

    //
    //  How many entries are unused in the current security stream
    //

    ULONGLONG NumSDUnused;

    //
    //  The total number of entries processed in the $Secure stream
    //

    ULONGLONG NumSDTotal;

    //
    //  How many entries were successfully changed in the $MFT file
    //

    ULONGLONG NumMftSDChangedSuccess;

    //
    //  How many entries failed the update in the $MFT file
    //

    ULONGLONG NumMftSDChangedFail;

    //
    //  Total number of entriess process in the $MFT file
    //

    ULONGLONG NumMftSDTotal;

} SD_CHANGE_MACHINE_SID_OUTPUT, *PSD_CHANGE_MACHINE_SID_OUTPUT;

//
//  Operation specific structures for SD_GLOBAL_CHANGE_TYPE_QUERY_STATS
//

typedef struct _SD_QUERY_STATS_INPUT {

    ULONG Reserved;

} SD_QUERY_STATS_INPUT, *PSD_QUERY_STATS_INPUT;

typedef struct _SD_QUERY_STATS_OUTPUT {

    //
    //  Stream size and allocation size for the security descriptor
    //  data stream ($Secure:$SDS).
    //

    ULONGLONG SdsStreamSize;
    ULONGLONG SdsAllocationSize;

    //
    //  Stream size and allocation size for the security ID index
    //  stream ($Secure:$SII).
    //

    ULONGLONG SiiStreamSize;
    ULONGLONG SiiAllocationSize;

    //
    //  Stream size and allocation size for the security descriptor
    //  hash index stream ($Secure:$SDH).
    //

    ULONGLONG SdhStreamSize;
    ULONGLONG SdhAllocationSize;

    //
    //  The total number of entries in the security descriptor data
    //  stream.
    //

    ULONGLONG NumSDTotal;

    //
    //  The number of unused entries in the security descriptor data
    //  stream.
    //

    ULONGLONG NumSDUnused;

} SD_QUERY_STATS_OUTPUT, *PSD_QUERY_STATS_OUTPUT;

//
//  Operation specific structures for SD_GLOBAL_CHANGE_TYPE_ENUM_SDS
//

typedef struct _SD_ENUM_SDS_INPUT {

    //
    //  The byte offset within the security descriptor data stream to look
    //  for security descriptors.  This must be a multiple of 16.
    //
    //  Note this is a virtual byte offset.  The security descriptor data
    //  stream contains some additional data embedded inside the stream for
    //  redundancy, and this extra data does not count toward this byte
    //  offset.
    //

    ULONGLONG StartingOffset;

    //
    //  The maximum number of SD entries to return.  This is primarily
    //  useful for supporting a model where you only want one entry at
    //  a time.  Set to 0 for no max.
    //

    ULONGLONG MaxSDEntriesToReturn;

} SD_ENUM_SDS_INPUT, *PSD_ENUM_SDS_INPUT;

typedef struct _SD_ENUM_SDS_ENTRY {

    //
    //  Hash value of the security decriptor.
    //

    ULONG Hash;

    //
    //  SecurityId for the security descriptor.
    //

    ULONG SecurityId;

    //
    //  Virtual byte offset of this header in the security descriptor
    //  data stream.
    //

    ULONGLONG Offset;

    //
    //  Length of this header + security descriptor that follows this
    //  header.
    //

    ULONG Length;

    //
    //  Actual security decriptor, variable length.
    //

    UCHAR Descriptor[1];

} SD_ENUM_SDS_ENTRY, *PSD_ENUM_SDS_ENTRY;

typedef struct _SD_ENUM_SDS_OUTPUT {

    //
    //  The current machine SID to change.
    //  This defines the offset from the beginning of the SD_GLOBAL_CHANGE_INPUT
    //  structure of where the CurrentMachineSID to replace begins.  This will
    //  be a SID structure.  The length defines the length of the imbedded SID
    //  structure.
    //

    ULONGLONG NextOffset;

    //
    //  The total number of entries returned.
    //

    ULONGLONG NumSDEntriesReturned;

    //
    //  The total number of bytes of entries returned.
    //

    ULONGLONG NumSDBytesReturned;

    //
    //  Variable length array of security descriptor stream entries.
    //  There should be NumSDEntriesReturned of them.  To walk this array,
    //  first point to SDEntry[0], then advance a number of bytes equal
    //  to the entry's Length rounded up to a multiple of 16.  (Each entry
    //  will be aligned to a 16-byte boundary.)
    //

    SD_ENUM_SDS_ENTRY SDEntry[1];

} SD_ENUM_SDS_OUTPUT, *PSD_ENUM_SDS_OUTPUT;

//
//  Generic INPUT & OUTPUT structures for FSCTL_SD_GLOBAL_CHANGE
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

typedef struct _SD_GLOBAL_CHANGE_INPUT
{
    //
    //  Input flags (none currently defined)
    //

    ULONG Flags;

    //
    //  Specifies which type of change we are doing and pics which member
    //  of the below union is in use.
    //

    ULONG ChangeType;

    union {

        SD_CHANGE_MACHINE_SID_INPUT SdChange;
        SD_QUERY_STATS_INPUT SdQueryStats;
        SD_ENUM_SDS_INPUT SdEnumSds;
    } DUMMYUNIONNAME;

} SD_GLOBAL_CHANGE_INPUT, *PSD_GLOBAL_CHANGE_INPUT;

typedef struct _SD_GLOBAL_CHANGE_OUTPUT
{

    //
    //  Output State Flags (none currently defined)
    //

    ULONG Flags;

    //
    //  Specifies which below union to use
    //

    ULONG ChangeType;

    union {

        SD_CHANGE_MACHINE_SID_OUTPUT SdChange;
        SD_QUERY_STATS_OUTPUT SdQueryStats;
        SD_ENUM_SDS_OUTPUT SdEnumSds;
    } DUMMYUNIONNAME;

} SD_GLOBAL_CHANGE_OUTPUT, *PSD_GLOBAL_CHANGE_OUTPUT;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) /* nonstandard extension used : nameless struct/union */
#endif

//
//==================== FSCTL_LOOKUP_STREAM_FROM_CLUSTER =======================
//

typedef struct _LOOKUP_STREAM_FROM_CLUSTER_INPUT {

    //
    //  Flags for the operation.  Currently no flags are defined.
    //
    ULONG         Flags;

    //
    //  Number of clusters in the following array of clusters.
    //  The input buffer must be large enough to contain this
    //  number or the operation will fail.
    //
    ULONG         NumberOfClusters;

    //
    //  An array of one or more clusters to look up.
    //
    LARGE_INTEGER Cluster[1];
} LOOKUP_STREAM_FROM_CLUSTER_INPUT, *PLOOKUP_STREAM_FROM_CLUSTER_INPUT;

typedef struct _LOOKUP_STREAM_FROM_CLUSTER_OUTPUT {
    //
    //  Offset from the beginning of this structure to the first entry
    //  returned.  If no entries are returned, this value is zero.
    //
    ULONG         Offset;

    //
    //  Number of matches to the input criteria.  Note that more matches
    //  may be found than entries returned if the buffer is not large
    //  enough.
    //
    ULONG         NumberOfMatches;

    //
    //  Minimum size of the buffer, in bytes, which would be needed to
    //  contain all matching entries to the input criteria.
    //
    ULONG         BufferSizeRequired;
} LOOKUP_STREAM_FROM_CLUSTER_OUTPUT, *PLOOKUP_STREAM_FROM_CLUSTER_OUTPUT;

#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_PAGE_FILE          0x00000001
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_DENY_DEFRAG_SET    0x00000002
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_FS_SYSTEM_FILE     0x00000004
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_FLAG_TXF_SYSTEM_FILE    0x00000008

#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_MASK          0xff000000
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_DATA          0x01000000
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_INDEX         0x02000000
#define LOOKUP_STREAM_FROM_CLUSTER_ENTRY_ATTRIBUTE_SYSTEM        0x03000000

typedef struct _LOOKUP_STREAM_FROM_CLUSTER_ENTRY {
    //
    //  Offset from the beginning of this structure to the next entry
    //  returned.  If there are no more entries, this value is zero.
    //
    ULONG         OffsetToNext;

    //
    //  Flags describing characteristics about this stream.
    //
    ULONG         Flags;

    //
    //  This value is reserved and is currently zero.
    //
    LARGE_INTEGER Reserved;

    //
    //  This is the cluster that this entry refers to.  It will be one
    //  of the clusters passed in the input structure.
    //
    LARGE_INTEGER Cluster;

    //
    //  A NULL-terminated Unicode string containing the path of the
    //  object relative to the root of the volume.  This string
    //  will refer to the attribute or stream represented by the
    //  cluster.
    //
    WCHAR         FileName[1];
} LOOKUP_STREAM_FROM_CLUSTER_ENTRY, *PLOOKUP_STREAM_FROM_CLUSTER_ENTRY;

//
//==================== FSCTL_FILE_TYPE_NOTIFICATION =======================
//
//  This is the structure for the FSCTL_FILE_TYPE_NOTIFICATION operation.
//  Its purpose is to notify the storage stack about the extents of certain
//  types of files.  This is only callable from kernel mode
//

typedef struct _FILE_TYPE_NOTIFICATION_INPUT {

    //
    //  Flags for this operation
    //  FILE_TYPE_NOTIFICATION_FLAG_*
    //

    ULONG Flags;

    //
    //  A count of how many FileTypeID guids are given
    //

    ULONG NumFileTypeIDs;

    //
    //  This is a unique identifer for the type of file notification occuring
    //

    GUID FileTypeID[1];

} FILE_TYPE_NOTIFICATION_INPUT, *PFILE_TYPE_NOTIFICATION_INPUT;

//
//  Flags for the given operation
//

#define FILE_TYPE_NOTIFICATION_FLAG_USAGE_BEGIN     0x00000001      //Set when adding the specified usage on the given file
#define FILE_TYPE_NOTIFICATION_FLAG_USAGE_END       0x00000002      //Set when removing the specified usage on the given file

//
//  These are the globally defined file types
//

DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE,         0x0d0a64a1, 0x38fc, 0x4db8, 0x9f, 0xe7, 0x3f, 0x43, 0x52, 0xcd, 0x7c, 0x5c );
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE,  0xb7624d64, 0xb9a3, 0x4cf8, 0x80, 0x11, 0x5b, 0x86, 0xc9, 0x40, 0xe7, 0xb7 );
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE,    0x9d453eb7, 0xd2a6, 0x4dbd, 0xa2, 0xe3, 0xfb, 0xd0, 0xed, 0x91, 0x09, 0xa9 );

//
//=========================FSCTL_CSV_MGMT_LOCK===========================
//
#define CSV_MGMTLOCK_CHECK_VOLUME_REDIRECTED 0x00000001
typedef struct _CSV_MGMT_LOCK {
    ULONG      Flags;
}CSV_MGMT_LOCK, *PCSV_MGMT_LOCK;

//
//========================= FSCTL_IS_CSV_FILE ============================
//
// Structure for FSCTL_IS_CSV_FILE
//

typedef struct _CSV_NAMESPACE_INFO {

    ULONG         Version;
    ULONG         DeviceNumber;
    LARGE_INTEGER StartingOffset;
    ULONG         SectorSize;

} CSV_NAMESPACE_INFO, *PCSV_NAMESPACE_INFO;

#define CSV_NAMESPACE_INFO_V1 (sizeof(CSV_NAMESPACE_INFO))
#define CSV_INVALID_DEVICE_NUMBER 0xFFFFFFFF

//
//========================= FSCTL_CSV_CONTROL =============================
//

typedef enum _CSV_CONTROL_OP {
    CsvControlStartRedirectFile                  = 0x02,
    CsvControlStopRedirectFile                   = 0x03,
    CsvControlQueryRedirectState                 = 0x04,
    CsvControlQueryFileRevision                  = 0x06,
    CsvControlQueryMdsPath                       = 0x08,
    CsvControlQueryFileRevisionFileId128         = 0x09,
    CsvControlQueryVolumeRedirectState           = 0x0a,
    CsvControlEnableUSNRangeModificationTracking = 0x0d,
    CsvControlMarkHandleLocalVolumeMount         = 0x0e,
    CsvControlUnmarkHandleLocalVolumeMount       = 0x0f,
    CsvControlGetCsvFsMdsPathV2                  = 0x12,
} CSV_CONTROL_OP, *PCSV_CONTROL_OP;

typedef struct _CSV_CONTROL_PARAM {
    CSV_CONTROL_OP Operation;
    LONGLONG Unused;
} CSV_CONTROL_PARAM, *PCSV_CONTROL_PARAM;

//
// Output for the CsvControlQueryRedirectState
//
typedef struct _CSV_QUERY_REDIRECT_STATE {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    BOOLEAN FileRedirected;
} CSV_QUERY_REDIRECT_STATE, *PCSV_QUERY_REDIRECT_STATE;

//
// Output for the CsvControlQueryFileRevision
// Note that revision tracking is per file, and not per
// stream so it changes every time one of the stream
// changes.
//
typedef struct _CSV_QUERY_FILE_REVISION {
    //
    // NTFS File Id
    //
    LONGLONG FileId;
    //
    // FileRevision[0] increases each time the CSV MDS
    // stack is rebuilt and CSVFLT loses its state.
    //
    // FileRevision[1] increases each time CSV MDS
    // stack purges the cached revision # for the
    // file.
    //
    // FileRevision[2] increases each time CSV MDS
    // observes that file sizes might have
    // changed or the file might have been written
    // to. It also is incremented when one of the
    // nodes performs the first direct IO on a stream
    // associated with this file after opening this stream.
    //
    // If any of the numbers are 0 the caller should
    // assume that the file was modified
    //
    LONGLONG FileRevision[3];

} CSV_QUERY_FILE_REVISION, *PCSV_QUERY_FILE_REVISION;

//
// Output for the CsvControlQueryFileRevisionFileId128
// Note that revision tracking is per file, and not per
// stream so it changes every time one of the stream
// changes.
//
typedef struct _CSV_QUERY_FILE_REVISION_FILE_ID_128 {
    //
    // File Id
    //
    FILE_ID_128 FileId;
    //
    // FileRevision[0] increases each time the CSV MDS
    // stack is rebuilt and CSVFLT loses its state.
    //
    // FileRevision[1] increases each time CSV MDS
    // stack purges the cached revision # for the
    // file.
    //
    // FileRevision[2] increases each time CSV MDS
    // observes that file sizes might have
    // changed or the file might have been written
    // to. It also is incremented when one of the
    // nodes performs the first direct IO on a stream
    // associated with this file after opening this stream.
    //
    // If any of the numbers are 0 the caller should
    // assume that the file was modified
    //
    LONGLONG FileRevision[3];

} CSV_QUERY_FILE_REVISION_FILE_ID_128, *PCSV_QUERY_FILE_REVISION_FILE_ID_128;


//
// Output for the CsvControlQueryMdsPath
// This control returns the path that is used by CSV to
// communicate to the MDS
//
typedef struct _CSV_QUERY_MDS_PATH {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    ULONG PathLength;
    WCHAR Path[1];
} CSV_QUERY_MDS_PATH, *PCSV_QUERY_MDS_PATH;

typedef enum _CSVFS_DISK_CONNECTIVITY
{
    CsvFsDiskConnectivityNone          = 0,
    CsvFsDiskConnectivityMdsNodeOnly   = 1,
    CsvFsDiskConnectivitySubsetOfNodes = 2,
    CsvFsDiskConnectivityAllNodes      = 3
} CSVFS_DISK_CONNECTIVITY, *PCSVFS_DISK_CONNECTIVITY;

//
// Output for the CsvControlQueryVolumeRedirectState
//
typedef struct _CSV_QUERY_VOLUME_REDIRECT_STATE {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    BOOLEAN IsDiskConnected;
    BOOLEAN ClusterEnableDirectIo;
    CSVFS_DISK_CONNECTIVITY DiskConnectivity;
} CSV_QUERY_VOLUME_REDIRECT_STATE, *PCSV_QUERY_VOLUME_REDIRECT_STATE;

//
// Structure is defined up to and including field PathLength
//
#define CSV_QUERY_MDS_PATH_V2_VERSION_1 1

#define CSV_QUERY_MDS_PATH_FLAG_STORAGE_ON_THIS_NODE_IS_CONNECTED 0x1
#define CSV_QUERY_MDS_PATH_FLAG_CSV_DIRECT_IO_ENABLED             0x2
#define CSV_QUERY_MDS_PATH_FLAG_SMB_BYPASS_CSV_ENABLED            0x4

//
// Output for the CsvControlGetCsvFsMdsPathV2
//
typedef struct _CSV_QUERY_MDS_PATH_V2 {
    //
    // Version of the structure.
    // CSV_QUERY_MDS_PATH_V2_VERSION_*
    //
    LONGLONG Version;
    //
    // Required output buffer size to completely fit
    // all the data
    //
    ULONG RequiredSize;
    //
    // Id of MDS and of the current node.
    // When these two Ids are the same then current node is MDS
    // otherwise current node is a DS
    //
    ULONG MdsNodeId;
    ULONG DsNodeId;
    //
    // A combination of CSV_QUERY_MDS_PATH_FLAG_* flags
    //
    ULONG Flags;
    //
    // Describes disk connectivity across all cluster nodes
    //
    CSVFS_DISK_CONNECTIVITY DiskConnectivity;
    //
    // Volume GUID of this CSV volume
    //
    GUID VolumeId;
    //
    // Offset to an array of DIPs of MDS and number of bytes
    // in that array. Each array entry has type SOCKADDR_INET
    // number of elements is IpAddressLength / sizeof(SOCKADDR_INET)
    //
    ULONG IpAddressOffset;
    ULONG IpAddressLength;
    //
    // Offset to the a Unicode string that contains
    // path this node is using to open files on MDS, and number of
    // characters in that string
    //
    ULONG PathOffset;
    ULONG PathLength;

} CSV_QUERY_MDS_PATH_V2, *PCSV_QUERY_MDS_PATH_V2;


//
//====================== FSCTL_CSV_QUERY_VETO_FILE_DIRECT_IO =========================
//
// In output buffer set Veto to TRUE to prevent CsvFs from
// performing DirectIO on the stream.
// VetoedFromAltitude and Reason are optional fields that
// are used to help with troubleshooting. CSV writes these
// strings to the diagnostic log. Filter can set it to a
// string that would hint why volume is in a redirected mode.
//
typedef struct _CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT {
    ULONGLONG VetoedFromAltitudeIntegral;
    ULONGLONG VetoedFromAltitudeDecimal;
    WCHAR   Reason[256];
} CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT, *PCSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//
//========================= FSCTL_IS_VOLUME_OWNED_BYCSVFS ============================
//

typedef struct _CSV_IS_OWNED_BY_CSVFS {
    BOOLEAN OwnedByCSVFS;
}CSV_IS_OWNED_BY_CSVFS, *PCSV_IS_OWNED_BY_CSVFS;

//
//======================== FSCTL_FILE_LEVEL_TRIM ===========================
//
//  Structure defintions for supporint file level trim
//

typedef struct _FILE_LEVEL_TRIM_RANGE {

    //
    //  Bytes offset from the front of the given file to trim at
    //

    ULONGLONG Offset;

    //
    //  Length in bytes to trim from the given offset
    //

    ULONGLONG Length;
} FILE_LEVEL_TRIM_RANGE, *PFILE_LEVEL_TRIM_RANGE;

//
//  Input buffer defining what ranges to trim
//

typedef struct _FILE_LEVEL_TRIM {

    //
    // Used when interacting with byte range locks. Set to zero if not SMB or
    //  similar.
    //

    ULONG Key;

    //
    // A count of how many Offset:Length pairs are given
    //

    ULONG NumRanges;

    //
    //  All the pairs.
    //

    FILE_LEVEL_TRIM_RANGE Ranges[1];

} FILE_LEVEL_TRIM, *PFILE_LEVEL_TRIM;

//
//  This is an optional output buffer
//

typedef struct _FILE_LEVEL_TRIM_OUTPUT {

    //
    //  Receives the number of input ranges
    //  that were processed
    //

    ULONG NumRangesProcessed;

} FILE_LEVEL_TRIM_OUTPUT, *PFILE_LEVEL_TRIM_OUTPUT;

//
//==================== FSCTL_QUERY_FILE_LAYOUT ===========================
//

//
// Clear the state of the internal cursor.
//
#define QUERY_FILE_LAYOUT_RESTART                                       (0x00000001)

//
// Request that the API call retrieve name information for the
// objects on the volume.
//
#define QUERY_FILE_LAYOUT_INCLUDE_NAMES                                 (0x00000002)

//
// Request that the API call include streams of the file.
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAMS                               (0x00000004)

//
// Include extent information with the attribute entries, where applicable.
// Use of this flag requires the _INCLUDE_STREAMS flag.
//
#define QUERY_FILE_LAYOUT_INCLUDE_EXTENTS                               (0x00000008)

//
// Include extra information, such as modification times and security
// IDs, with each returned file layout entry.
//
#define QUERY_FILE_LAYOUT_INCLUDE_EXTRA_INFO                            (0x00000010)

//
// Include unallocated attributes in the enumeration, which in NTFS means one
// of two cases:
//      1. Resident attributes.
//      2. Compressed or sparse nonresident attributes with no physical
//         allocation (consisting only of a sparse hole).
//  This flag may only be used when no cluster ranges are specified (i. e.
//  on a whole-volume query).
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAMS_WITH_NO_CLUSTERS_ALLOCATED    (0x00000020)

//
//  Request the full path to the file be included in the file name.
//  This flag must be used with QUERY_FILE_LAYOUT_INCLUDE_NAMES
//
#define QUERY_FILE_LAYOUT_INCLUDE_FULL_PATH_IN_NAMES                    (0x00000040)

//
//  Enable QueryFileLayout to include information on attribute streams.
//  Additionally, individual stream information flags must be enabled for
//  information on a given stream to be returned.
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION                    (0x00000080)

//
//  Have QueryFileLayout include information on DSC streams.
//  This flag must be used in conjunction with QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION_FOR_DSC_ATTRIBUTE  (0x00000100)

//
//  Have QueryFileLayout include information on TxF streams.
//  This flag must be used in conjunction with QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION_FOR_TXF_ATTRIBUTE  (0x00000200)

//
//  Have QueryFileLayout include information on EFS streams.
//  This flag must be used in conjunction with QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION
//
#define QUERY_FILE_LAYOUT_INCLUDE_STREAM_INFORMATION_FOR_EFS_ATTRIBUTE  (0x00000400)

//
//  We can ask (politely) QueryFileLayout to only return files that have
//  a given set of attributes present. This flag must be used with at least
//  one attribute type flag or Query File Layout will return no files.
//
#define QUERY_FILE_LAYOUT_INCLUDE_ONLY_FILES_WITH_SPECIFIC_ATTRIBUTES   (0x00000800)

//
//  Have QueryFileLayout include files with a DSC attribute in the output buffer.
//  This must be used in conjunction with QUERY_FILE_LAYOUT_INCLUDE_ONLY_FILES_WITH_SPECIFIC_ATTRIBUTES
//
#define QUERY_FILE_LAYOUT_INCLUDE_FILES_WITH_DSC_ATTRIBUTE              (0x00001000)

typedef enum _QUERY_FILE_LAYOUT_FILTER_TYPE {
    QUERY_FILE_LAYOUT_FILTER_TYPE_NONE = 0,
    QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS = 1,
    QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID = 2,
    QUERY_FILE_LAYOUT_NUM_FILTER_TYPES = 3,
} QUERY_FILE_LAYOUT_FILTER_TYPE;

typedef struct _CLUSTER_RANGE {

    //
    // The starting cluster for this query region
    // (inclusive).
    //
    LARGE_INTEGER       StartingCluster;

    //
    // The length of the cluster region.
    //
    LARGE_INTEGER       ClusterCount;

} CLUSTER_RANGE, *PCLUSTER_RANGE;

typedef struct _FILE_REFERENCE_RANGE {

    //
    // The starting file reference number for this
    // query region (inclusive).
    //
    ULONGLONG           StartingFileReferenceNumber;

    //
    // The ending file reference number for this
    // query region (inclusive).
    //
    ULONGLONG           EndingFileReferenceNumber;

} FILE_REFERENCE_RANGE, *PFILE_REFERENCE_RANGE;

typedef struct _QUERY_FILE_LAYOUT_INPUT {

    //
    // Number of filter range pairs in the following array.
    // The input buffer must be large enough to contain this
    // number or the operation will fail.
    //
    ULONG               NumberOfPairs;

    //
    // Flags for the operation.
    //
    ULONG               Flags;

    //
    //  The type of filter being applied for this operation.
    //

    QUERY_FILE_LAYOUT_FILTER_TYPE   FilterType;

    //
    //  Reserved for future use. Should be set to zero.
    //

    ULONG               Reserved;

    //
    //  A pointer to the filter-type-specific information.  This is
    //  the caller's actual set of cluster ranges or filter ranges.
    //

    union {

        //
        //  The following  is used when the caller wishes to filter
        //  on a set of cluster ranges.
        //

        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS),
               _Field_size_(NumberOfPairs))
        CLUSTER_RANGE ClusterRanges[1];

        //
        //  The following is used when the caller wishes to filter
        //  on a set of file reference ranges.
        //

        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID),
               _Field_size_(NumberOfPairs))
        FILE_REFERENCE_RANGE FileReferenceRanges[1];

    } Filter;
} QUERY_FILE_LAYOUT_INPUT, *PQUERY_FILE_LAYOUT_INPUT;

//
// Indicates that the filesystem is returning stream extents in a
// single-instanced fashion.
//
#define QUERY_FILE_LAYOUT_SINGLE_INSTANCED                              (0x00000001)

typedef struct _QUERY_FILE_LAYOUT_OUTPUT {

    //
    // Number of file entries following this header.
    // Includes only the number of file entries in
    // this iteration.
    //
    ULONG               FileEntryCount;

    //
    // Offset to the first file entry in this buffer,
    // expressed in bytes.
    //
    ULONG               FirstFileOffset;

    //
    // Flags indicating context that is applicable to the
    // entire output set.
    //
    ULONG               Flags;

    //
    // For alignment/later use.
    //
    ULONG               Reserved;

} QUERY_FILE_LAYOUT_OUTPUT, *PQUERY_FILE_LAYOUT_OUTPUT;

typedef struct _FILE_LAYOUT_ENTRY {

    //
    // Version number of this structure
    // (current version number is 1).
    //
    ULONG         Version;

    //
    // Offset to next file entry (in bytes)
    // or zero if this is the last entry.
    //
    ULONG         NextFileOffset;

    //
    // Flags containing context applicable to this
    // file.
    //
    ULONG         Flags;

    //
    // File attributes.
    //
    ULONG         FileAttributes;

    //
    // File ID for this file.
    //
    ULONGLONG     FileReferenceNumber;

    //
    // Offset to the first name entry
    // from the start of this record, or
    // zero if there are no link records.
    //
    ULONG         FirstNameOffset;

    //
    // Offset to the first stream entry
    // from the start of this record, or
    // zero if there are no stream records.
    //
    ULONG         FirstStreamOffset;

    //
    // Offset to additional per-file information,
    // contained in a FILE_LAYOUT_INFO_ENTRY
    // structure, or zero if this information was
    // not returned.
    //
    ULONG         ExtraInfoOffset;

    //
    // For alignment/future use.
    //
    ULONG         Reserved;

    //
    // The structure may be extended here to support
    // additional static fields (e.g. pointing to
    // a FILE_BASIC_INFORMATION structure, etc.). This
    // sort of change should coincide with a version
    // number increase.

} FILE_LAYOUT_ENTRY, *PFILE_LAYOUT_ENTRY;

//
// Each file name entry may be one, both, or neither of
// these.
//
#define FILE_LAYOUT_NAME_ENTRY_PRIMARY                                  (0x00000001)
#define FILE_LAYOUT_NAME_ENTRY_DOS                                      (0x00000002)

typedef struct _FILE_LAYOUT_NAME_ENTRY {

    //
    // Offset to next name entry (in bytes)
    // or zero if this is the last entry.
    //
    ULONG         NextNameOffset;

    //
    // Flags for this file name entry.
    //
    ULONG         Flags;

    //
    // Parent FRN for this link.
    //
    ULONGLONG     ParentFileReferenceNumber;

    //
    // File name length (bytes).
    //
    ULONG         FileNameLength;

    //
    // For later use/alignment.
    //
    ULONG         Reserved;

    //
    // Starting point for the name itself
    // (NOT null-terminated).
    //
    _Field_size_bytes_(FileNameLength)
    WCHAR         FileName[1];

} FILE_LAYOUT_NAME_ENTRY, *PFILE_LAYOUT_NAME_ENTRY;

typedef struct _FILE_LAYOUT_INFO_ENTRY {

    //
    // Basic information for this file.
    //
    struct {
        LARGE_INTEGER CreationTime;
        LARGE_INTEGER LastAccessTime;
        LARGE_INTEGER LastWriteTime;
        LARGE_INTEGER ChangeTime;
        ULONG FileAttributes;
    } BasicInformation;

    //
    // Owner ID for this file.
    //
    ULONG                       OwnerId;

    //
    // Security ID for this file.
    //
    ULONG                       SecurityId;

    //
    // Update sequence number for this file.
    //
    USN                         Usn;

} FILE_LAYOUT_INFO_ENTRY, *PFILE_LAYOUT_INFO_ENTRY;

//
// This attribute/stream is known to the filesystem to be immovable.
//
#define STREAM_LAYOUT_ENTRY_IMMOVABLE                                   (0x00000001)

//
// This attribute/stream is currently pinned by another application.
// It is unmovable for the duration of the pin.
//
#define STREAM_LAYOUT_ENTRY_PINNED                                      (0x00000002)

//
// This attribute is resident.
//
#define STREAM_LAYOUT_ENTRY_RESIDENT                                    (0x00000004)

//
// This attribute has no clusters allocated to it.
//
#define STREAM_LAYOUT_ENTRY_NO_CLUSTERS_ALLOCATED                       (0x00000008)

//
// This layout entry contains the information (data) for the attribute
//
#define STREAM_LAYOUT_ENTRY_HAS_INFORMATION                             (0x00000010)

typedef struct _STREAM_LAYOUT_ENTRY {

    //
    // Version of this struct. Current version is 2.
    //
    ULONG         Version;

    //
    // Offset to the next stream entry (bytes).
    //
    ULONG         NextStreamOffset;

    //
    // FSCTL-specific flags.
    //
    ULONG         Flags;

    //
    // Offset to the extent information buffer
    // for this stream, or zero if none exists.
    // This is relative to the start of this
    // stream record.
    //
    ULONG         ExtentInformationOffset;

    //
    // Total allocated size of this stream,
    // in bytes.
    //
    LARGE_INTEGER AllocationSize;

    //
    // End of file location as a byte offset.
    //
    LARGE_INTEGER EndOfFile;

    //
    //  Offset to stream information. This is the
    //  content of the stream
    //
    ULONG         StreamInformationOffset;

    //
    // Attribute code.
    //
    ULONG         AttributeTypeCode;

    //
    // Stream attribute flags.
    //
    ULONG         AttributeFlags;

    //
    // Length of the stream identifier, in bytes.
    //
    ULONG         StreamIdentifierLength;

    //
    // Starting point for the stream identifier
    // buffer.
    //
    _Field_size_bytes_(StreamIdentifierLength)
    WCHAR         StreamIdentifier[1];

} STREAM_LAYOUT_ENTRY, *PSTREAM_LAYOUT_ENTRY;

//
// Flag noting that the extent information may be interpreted as
// a RETRIEVAL_POINTERS_BUFFER structure
//
#define STREAM_EXTENT_ENTRY_AS_RETRIEVAL_POINTERS                       (0x00000001)

//
// Flag noting that all of the stream's extents are returned in
// this structure, even if only some of them fall within the caller's
// specified interest region(s).
//
#define STREAM_EXTENT_ENTRY_ALL_EXTENTS                                 (0x00000002)


typedef struct _STREAM_EXTENT_ENTRY {

    //
    // Extent-level flags for this entry.
    //
    ULONG        Flags;

    union {

        //
        // All that's defined for now is a retrieval
        // pointers buffer, since this is what NTFS
        // will use.
        //
        RETRIEVAL_POINTERS_BUFFER        RetrievalPointers;

    } ExtentInformation;

} STREAM_EXTENT_ENTRY, *PSTREAM_EXTENT_ENTRY;

//
//==================== FSCTL_GET_INTEGRITY_INFORMATION / FSCTL_SET_INTEGRITY_INFORMATION ===========================
//

#define CHECKSUM_TYPE_UNCHANGED        (-1)

#define CHECKSUM_TYPE_NONE              (0)
#define CHECKSUM_TYPE_CRC32             (1)
#define CHECKSUM_TYPE_CRC64             (2)
#define CHECKSUM_TYPE_ECC               (3)
#define CHECKSUM_TYPE_FIRST_UNUSED_TYPE (4)

#define FSCTL_INTEGRITY_FLAG_CHECKSUM_ENFORCEMENT_OFF        (1)

typedef struct _FSCTL_GET_INTEGRITY_INFORMATION_BUFFER {
    USHORT ChecksumAlgorithm;   // Checksum algorithm. e.g. CHECKSUM_TYPE_UNCHANGED, CHECKSUM_TYPE_NONE, CHECKSUM_TYPE_CRC32
    USHORT Reserved;            // Must be 0
    ULONG Flags;                // FSCTL_INTEGRITY_FLAG_xxx
    ULONG ChecksumChunkSizeInBytes;
    ULONG ClusterSizeInBytes;
} FSCTL_GET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_GET_INTEGRITY_INFORMATION_BUFFER;

typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER {
    USHORT ChecksumAlgorithm;   // Checksum algorithm. e.g. CHECKSUM_TYPE_UNCHANGED, CHECKSUM_TYPE_NONE, CHECKSUM_TYPE_CRC32
    USHORT Reserved;            // Must be 0
    ULONG Flags;                // FSCTL_INTEGRITY_FLAG_xxx
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER;

//
//==================== FSCTL_SET_INTEGRITY_INFORMATION_EX ===========================
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX {
    UCHAR EnableIntegrity;             // 0 to disable integrity, 1 to enable integrity
    UCHAR KeepIntegrityStateUnchanged; // 1 to keep the current integrity state and ignore the value in EnableIntegrity, 0 to use EnableIntegrity value
    USHORT Reserved;                   // Must be 0
    ULONG Flags;                       // FSCTL_INTEGRITY_FLAG_xxx
    UCHAR Version;                     // Structure version info, must be 1
    UCHAR Reserved2[7];                // Must be 0
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX;
#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)


//
//======================== FSCTL_OFFLOAD_READ ==============================
//
//  Structures used by FSCTL_OFFLOAD_READ operation
//

typedef struct _FSCTL_OFFLOAD_READ_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONG TokenTimeToLive; // In milliseconds
    ULONG Reserved;
    ULONGLONG FileOffset;
    ULONGLONG CopyLength;
} FSCTL_OFFLOAD_READ_INPUT, *PFSCTL_OFFLOAD_READ_INPUT;

typedef struct _FSCTL_OFFLOAD_READ_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG TransferLength;
    UCHAR Token[512];
} FSCTL_OFFLOAD_READ_OUTPUT, *PFSCTL_OFFLOAD_READ_OUTPUT;

#define OFFLOAD_READ_FLAG_ALL_ZERO_BEYOND_CURRENT_RANGE       (1)


//
//======================== FSCTL_OFFLOAD_WRITE =============================
//
//  Structures used by FSCTL_OFFLOAD_WRITE operation
//

typedef struct _FSCTL_OFFLOAD_WRITE_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG FileOffset;
    ULONGLONG CopyLength;
    ULONGLONG TransferOffset;
    UCHAR Token[512];
} FSCTL_OFFLOAD_WRITE_INPUT, *PFSCTL_OFFLOAD_WRITE_INPUT;

typedef struct _FSCTL_OFFLOAD_WRITE_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG LengthWritten;
} FSCTL_OFFLOAD_WRITE_OUTPUT, *PFSCTL_OFFLOAD_WRITE_OUTPUT;


//
//======================== FSCTL_SET_PURGE_FAILURE_MODE ===========================
//
//  Structure defintions for supporting purge failure mode
//

typedef struct _SET_PURGE_FAILURE_MODE_INPUT {
    ULONG Flags;
} SET_PURGE_FAILURE_MODE_INPUT, *PSET_PURGE_FAILURE_MODE_INPUT;

#define SET_PURGE_FAILURE_MODE_ENABLED   0x00000001    // Enable purge failure mode
#define SET_PURGE_FAILURE_MODE_DISABLED  0x00000002    // Disable purge failure mode


//
//======================= FSCTL_REPAIR_COPIES =============================
//

typedef struct _REPAIR_COPIES_INPUT {

    ULONG Size;                                 // sizeof(REPAIR_COPIES_INPUT)

    ULONG Flags;                                // Reserved (must be zero)

    LARGE_INTEGER FileOffset;

    ULONG Length;

    ULONG SourceCopy;                           // The copy number of the source copy.

    ULONG NumberOfRepairCopies;                 // The number of copies that will be repaired.

    ULONG RepairCopies[ANYSIZE_ARRAY];          // The copy numbers of all the copies that will be repaired.

} REPAIR_COPIES_INPUT, *PREPAIR_COPIES_INPUT;

typedef struct _REPAIR_COPIES_OUTPUT {

    ULONG Size;                                 // sizeof(REPAIR_COPIES_OUTPUT)

    NTSTATUS Status;                            // Operational status

    LARGE_INTEGER ResumeFileOffset;             // File Offset hint to use to resume repair operation skipping
                                                // the range where errors were found (operational Status is non-success).
} REPAIR_COPIES_OUTPUT, *PREPAIR_COPIES_OUTPUT;

//======================= FSCTL_QUERY_FILE_REGIONS =============================

//
//  Structures used for querying for Various file region definitions
//  The initial values if for query VDL
//

//
//  Bit flags which may be OR'd together to define the usage of the given range
//      If the given bit is SET, then the specified region has that attribute
//      if the bit is NOT set, then the specified region does NOT have that attribute
//

#define FILE_REGION_USAGE_VALID_CACHED_DATA     0x00000001
#define FILE_REGION_USAGE_VALID_NONCACHED_DATA  0x00000002

typedef struct _FILE_REGION_INFO {
    LONGLONG FileOffset;
    LONGLONG Length;
    ULONG Usage;
    ULONG Reserved;
} FILE_REGION_INFO, *PFILE_REGION_INFO;

typedef struct _FILE_REGION_OUTPUT {
    ULONG Flags;                            //none currently defined
    ULONG TotalRegionEntryCount;            //count of total regions that could be returned
    ULONG RegionEntryCount;                 //count of regions that were returned
    ULONG Reserved;                         //for longlong alignment
    FILE_REGION_INFO Region[1];
} FILE_REGION_OUTPUT, *PFILE_REGION_OUTPUT;

//
//  This is an optional buffer given on input to specify a region of the
//  file the caller is interested in
//

typedef struct _FILE_REGION_INPUT {

    LONGLONG FileOffset;
    LONGLONG Length;
    ULONG DesiredUsage;

} FILE_REGION_INPUT, *PFILE_REGION_INPUT;

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//======================= FSCTL_WRITE_USN_REASON =============================

//
//  The list of valid USN reasons that can be set with this FSCTL.  Any bits
//  which are specified which are not defined by this mask are silently
//  stripped.  This operation will not be failed for sending undefined reasons
//  This operation is only supported from kernel mode.
//  The output of this operation is a USN structure.
//

#define VALID_WRITE_USN_REASON_MASK     (USN_REASON_DATA_OVERWRITE |        \
                                         USN_REASON_CLOSE)

typedef struct _WRITE_USN_REASON_INPUT {

    ULONG Flags;                        // Flags for this operation (none defined)
    ULONG UsnReasonToWrite;             // A list of USN reasons to set

} WRITE_USN_REASON_INPUT, *PWRITE_USN_REASON_INPUT;

//No Flags currently defined



#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

// ****************** FSCTL_QUERY_STORAGE_CLASSES ***************************

//
//  The FILE_STORAGE_TIER is an identifier for the storage tier relative to the volume.
//  The storage tier ID for a particular volume has no relationship to the storage tier
//  ID with the same value on a different volume.
//

//
//  Note! The MediaType is used to indicate an uninitialized in-memory DSC structure.
//  Do not use values 0xfe or 0xff as media types.
//

#define FILE_STORAGE_TIER_NAME_LENGTH           (256)
#define FILE_STORAGE_TIER_DESCRIPTION_LENGTH    (512)

//
//  These flags *must* match those for _STORAGE_TIER as the file system does a
//  pass through.
//

#define FILE_STORAGE_TIER_FLAG_NO_SEEK_PENALTY    (0x00020000)
#define FILE_STORAGE_TIER_FLAG_WRITE_BACK_CACHE   (0x00200000)
#define FILE_STORAGE_TIER_FLAG_READ_CACHE         (0x00400000)
#define FILE_STORAGE_TIER_FLAG_PARITY             (0x00800000)
#define FILE_STORAGE_TIER_FLAG_SMR                (0x01000000)


typedef enum _FILE_STORAGE_TIER_MEDIA_TYPE {

    FileStorageTierMediaTypeUnspecified = 0,
    FileStorageTierMediaTypeDisk        = 1,
    FileStorageTierMediaTypeSsd         = 2,
    FileStorageTierMediaTypeScm         = 4,
    FileStorageTierMediaTypeMax

} FILE_STORAGE_TIER_MEDIA_TYPE, *PFILE_STORAGE_TIER_MEDIA_TYPE;

typedef enum _FILE_STORAGE_TIER_CLASS {

    FileStorageTierClassUnspecified = 0,
    FileStorageTierClassCapacity,
    FileStorageTierClassPerformance,
    FileStorageTierClassMax

} FILE_STORAGE_TIER_CLASS, *PFILE_STORAGE_TIER_CLASS;

typedef struct _FILE_STORAGE_TIER {

    //
    // Tier ID
    //

    GUID Id;

    //
    // Name for the tier
    //

    WCHAR Name[FILE_STORAGE_TIER_NAME_LENGTH];

    //
    // Note for the tier
    //

    WCHAR Description[FILE_STORAGE_TIER_NAME_LENGTH];

    //
    // Flags: FILE_STORAGE_TIER_FLAG_xxx
    //

    ULONGLONG Flags;

    //
    // Provisioned capacity of the tier
    //

    ULONGLONG ProvisionedCapacity;

    //
    // Media type of the tier
    //

    FILE_STORAGE_TIER_MEDIA_TYPE MediaType;

    //
    // Classification of the tier
    //

    FILE_STORAGE_TIER_CLASS Class;

} FILE_STORAGE_TIER, *PFILE_STORAGE_TIER;

//
//  This structure has the same fields as STORAGE_DEVICE_TIERING_DESCRIPTOR and
//  that structure reserves the upper USHORT of the Flags field for file system use.
//  We define the following possible values for the Flags field.
//

#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_WRITE   0x80000000
#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_READ    0x40000000
#define QUERY_STORAGE_CLASSES_FLAGS_NO_DEFRAG_VOLUME   0x20000000

//
//  The response returns a single structure of FSCTL_QUERY_STORAGE_CLASSES_OUTPUT
//  that has all the tiers for this volume.
//

typedef _Struct_size_bytes_(Size) struct _FSCTL_QUERY_STORAGE_CLASSES_OUTPUT {


    //
    // Size of this structure serves
    // as the version
    //

    ULONG Version;

    //
    // Size of  this structure  plus
    // all the variable sized fields
    //

    ULONG Size;

    //
    // Flags
    //

    ULONG Flags;

    //
    // The total number of available tiers for this disk
    //

    ULONG TotalNumberOfTiers;

    //
    // The number of tiers that fit in the output
    //

    ULONG NumberOfTiersReturned;

    //
    // Detailed info on the storage tiers.
    //

    FILE_STORAGE_TIER Tiers[ANYSIZE_ARRAY];

} FSCTL_QUERY_STORAGE_CLASSES_OUTPUT, *PFSCTL_QUERY_STORAGE_CLASSES_OUTPUT;

#define FSCTL_QUERY_STORAGE_CLASSES_OUTPUT_VERSION          sizeof(FSCTL_QUERY_STORAGE_CLASSES_OUTPUT)

//
// This structure lists information on the stream.
//
typedef struct _STREAM_INFORMATION_ENTRY {

    //
    // Version of this struct. Current version is 1.
    //
    ULONG         Version;

    //
    // Flags
    //
    ULONG         Flags;

    //
    // The stream information varies by type of stream. We enclose
    // the various types in a union.
    //
    union _StreamInformation {

        //
        //  Desired Storage Class
        //

        struct _DesiredStorageClass {

            //
            //  Class
            //

            FILE_STORAGE_TIER_CLASS          Class;

            //
            //  Flags
            //

            ULONG                            Flags;

        } DesiredStorageClass;

    } StreamInformation;

} STREAM_INFORMATION_ENTRY, *PSTREAM_INFORMATION_ENTRY;

// ****************** FSCTL_QUERY_REGION_INFO *******************************

//
//  Input structure for FSCTL_QUERY_REGION_INFO.
//
//  This FSCTL returns the storage tier regions from the storage
//  stack for a particular volume.
//

typedef struct _FSCTL_QUERY_REGION_INFO_INPUT {

    ULONG     Version;                      // The version of this structure.
    ULONG     Size;                         // The size of this structure in bytes.

    ULONG     Flags;                        // Reserved for future use.

    ULONG     NumberOfTierIds;              // Number of entries in TierIds, 0 for all for volume
    GUID      TierIds[ANYSIZE_ARRAY];       // Storage tiers to return information for

} FSCTL_QUERY_REGION_INFO_INPUT, *PFSCTL_QUERY_REGION_INFO_INPUT;

#define FSCTL_QUERY_REGION_INFO_INPUT_VERSION               sizeof(FSCTL_QUERY_REGION_INFO_INPUT)

//
//  Structure that describes a single storage tier region.
//

typedef struct _FILE_STORAGE_TIER_REGION {

    GUID        TierId;     // Tier ID

    ULONGLONG   Offset;     // offset of region in bytes
    ULONGLONG   Length;     // length of region in bytes

} FILE_STORAGE_TIER_REGION, *PFILE_STORAGE_TIER_REGION;

//
//  Output structure for FSCTL_QUERY_REGION_INFO.
//
//  The FSCTL_QUERY_REGION_INFO response returns a single one of these that include
//  multiple FILE_STORAGE_TIER_REGION records, one for each region.
//

typedef struct _FSCTL_QUERY_REGION_INFO_OUTPUT {

    ULONG     Version;                      // The version of this structure.
    ULONG     Size;                         // The size of this structure in bytes.

    ULONG     Flags;                        // Reserved for future use.
    ULONG     Reserved;                     // Reserved for future use.

    ULONGLONG Alignment;                    // in bytes, must align to slab boundary

    ULONG     TotalNumberOfRegions;             // Total number of available regions.
    ULONG     NumberOfRegionsReturned;          // Number of regions that fit in the output.

    FILE_STORAGE_TIER_REGION Regions[ANYSIZE_ARRAY]; // Detailed info on the regions.

} FSCTL_QUERY_REGION_INFO_OUTPUT, *PFSCTL_QUERY_REGION_INFO_OUTPUT;

#define FSCTL_QUERY_REGION_INFO_OUTPUT_VERSION              sizeof(FSCTL_QUERY_REGION_INFO_OUTPUT)

//
//  This structure contains the information for the Desired Storage Class attribute.
//

typedef struct _FILE_DESIRED_STORAGE_CLASS_INFORMATION {

    //
    // Class type of the tier
    //

    FILE_STORAGE_TIER_CLASS Class;

    //
    // Flags
    //

    ULONG Flags;

} FILE_DESIRED_STORAGE_CLASS_INFORMATION, *PFILE_DESIRED_STORAGE_CLASS_INFORMATION;

//
//  This structure has the same fields as STORAGE_DEVICE_TIERING_DESCRIPTOR and
//  that structure reserves the upper USHORT of the Flags field for file system use.
//  We define the following possible values for the Flags field.
//

#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_WRITE   0x80000000
#define QUERY_STORAGE_CLASSES_FLAGS_MEASURE_READ    0x40000000

//
//=============== FSCTL_DUPLICATE_EXTENTS_TO_FILE ====================
//

typedef struct _DUPLICATE_EXTENTS_DATA {
    HANDLE FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
} DUPLICATE_EXTENTS_DATA, *PDUPLICATE_EXTENTS_DATA;

#if ((_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2) && defined(_WIN64))

//
//  32/64 Bit thunking support structure
//

typedef struct _DUPLICATE_EXTENTS_DATA32 {
    UINT32 FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
} DUPLICATE_EXTENTS_DATA32, *PDUPLICATE_EXTENTS_DATA32;

#endif /* ((_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2) && defined(_WIN64)) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3)

//
//=============== FSCTL_DUPLICATE_EXTENTS_TO_FILE_EX ==================
//

#define DUPLICATE_EXTENTS_DATA_EX_SOURCE_ATOMIC     0x00000001

typedef struct _DUPLICATE_EXTENTS_DATA_EX {
    SIZE_T Size;
    HANDLE FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
    ULONG Flags;
} DUPLICATE_EXTENTS_DATA_EX, *PDUPLICATE_EXTENTS_DATA_EX;

#if ((_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3) && defined(_WIN64))

//
//  32/64 Bit thunking support structure
//

typedef struct _DUPLICATE_EXTENTS_DATA_EX32 {
    ULONG32 Size;
    ULONG32 FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
    ULONG Flags;
} DUPLICATE_EXTENTS_DATA_EX32, *PDUPLICATE_EXTENTS_DATA_EX32;

#endif /* ((_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3) && defined(_WIN64)) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)

//
//==================== FSCTL_QUERY_REFS_SMR_VOLUME_INFO =======================
//

#define REFS_SMR_VOLUME_INFO_OUTPUT_VERSION_V1      1

typedef enum _REFS_SMR_VOLUME_GC_STATE {

    SmrGcStateInactive = 0,
    SmrGcStatePaused = 1,
    SmrGcStateActive = 2,
    SmrGcStateActiveFullSpeed = 3,

} REFS_SMR_VOLUME_GC_STATE, *PREFS_SMR_VOLUME_GC_STATE;

typedef struct _REFS_SMR_VOLUME_INFO_OUTPUT {

    ULONG Version;
    ULONG Flags;

    LARGE_INTEGER SizeOfRandomlyWritableTier;
    LARGE_INTEGER FreeSpaceInRandomlyWritableTier;
    LARGE_INTEGER SizeofSMRTier;
    LARGE_INTEGER FreeSpaceInSMRTier;
    LARGE_INTEGER UsableFreeSpaceInSMRTier;

    REFS_SMR_VOLUME_GC_STATE VolumeGcState;
    NTSTATUS VolumeGcLastStatus;

    ULONGLONG Unused[7];

} REFS_SMR_VOLUME_INFO_OUTPUT, *PREFS_SMR_VOLUME_INFO_OUTPUT;

//
//==================== FSCTL_SET_REFS_SMR_VOLUME_GC_PARAMETERS =======================
//

#define REFS_SMR_VOLUME_GC_PARAMETERS_VERSION_V1    1

typedef enum _REFS_SMR_VOLUME_GC_ACTION {

    SmrGcActionStart = 1,
    SmrGcActionStartFullSpeed = 2,
    SmrGcActionPause = 3,
    SmrGcActionStop = 4,

} REFS_SMR_VOLUME_GC_ACTION, *PREFS_SMR_VOLUME_GC_ACTION;

typedef enum _REFS_SMR_VOLUME_GC_METHOD {

    SmrGcMethodCompaction = 1,
    SmrGcMethodCompression = 2,
    SmrGcMethodRotation = 3,

} REFS_SMR_VOLUME_GC_METHOD, *PREFS_SMR_VOLUME_GC_METHOD;

typedef struct _REFS_SMR_VOLUME_GC_PARAMETERS {

    ULONG Version;
    ULONG Flags;

    REFS_SMR_VOLUME_GC_ACTION Action;
    REFS_SMR_VOLUME_GC_METHOD Method;

    ULONG IoGranularity;
    ULONG CompressionFormat;

    ULONGLONG Unused[8];

} REFS_SMR_VOLUME_GC_PARAMETERS, *PREFS_SMR_VOLUME_GC_PARAMETERS;

//
//==================== STREAMS CONSTANTS =======================
//

#define STREAMS_INVALID_ID                      (0)
#define STREAMS_MAX_ID                          (MAXUSHORT)

//
//==================== FSCTL_STREAMS_QUERY_PARAMETERS =======================
//

typedef struct _STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER {

    ULONG OptimalWriteSize;
    ULONG StreamGranularitySize;
    ULONG StreamIdMin;
    ULONG StreamIdMax;

} STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER, *PSTREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER;

//
//==================== FSCTL_STREAMS_ASSOCIATE_ID =======================
//

#define STREAMS_ASSOCIATE_ID_CLEAR              (0x1)
#define STREAMS_ASSOCIATE_ID_SET                (0x2)

typedef struct _STREAMS_ASSOCIATE_ID_INPUT_BUFFER {

    ULONG Flags;
    ULONG StreamId;

} STREAMS_ASSOCIATE_ID_INPUT_BUFFER, *PSTREAMS_ASSOCIATE_ID_INPUT_BUFFER;

//
//==================== FSCTL_STREAMS_QUERY_ID =======================
//

typedef struct _STREAMS_QUERY_ID_OUTPUT_BUFFER {

    ULONG StreamId;

} STREAMS_QUERY_ID_OUTPUT_BUFFER, *PSTREAMS_QUERY_ID_OUTPUT_BUFFER;

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3)

//
//=============== FSCTL_QUERY_BAD_RANGES ==================
//

typedef struct _QUERY_BAD_RANGES_INPUT_RANGE {

    //
    //  Starting offset of the range in bytes.
    //

    ULONGLONG StartOffset;

    //
    //  Length of the range in bytes.
    //

    ULONGLONG LengthInBytes;

} QUERY_BAD_RANGES_INPUT_RANGE, *PQUERY_BAD_RANGES_INPUT_RANGE;

//
//  Input buffer defining the ranges in the file to look for
//  bad ranges.  A NULL input buffer would lookup the entire
//  file.
//

typedef struct _QUERY_BAD_RANGES_INPUT {

    ULONG Flags;

    //
    //  Number of ranges given, in the Ranges array.
    //

    ULONG NumRanges;

    //
    //  Array of ranges (<Offset,  Length> pairs)  to look for
    //  bad ranges.  A range with MAXULONGULONG as LengthInBytes
    //  would represent a range till end of the file allocation.
    //  For that matter a range going beyond allocation size
    //  will be capped at allocation size.
    //

    QUERY_BAD_RANGES_INPUT_RANGE Ranges[1];

} QUERY_BAD_RANGES_INPUT, *PQUERY_BAD_RANGES_INPUT;

typedef struct _QUERY_BAD_RANGES_OUTPUT_RANGE {

    //
    //  Flags, reserved for future.
    //

    ULONG Flags;

    ULONG Reserved;

    //
    //  Starting offset of the range in bytes.
    //

    ULONGLONG StartOffset;

    //
    //  Length of the range in bytes.
    //

    ULONGLONG LengthInBytes;

} QUERY_BAD_RANGES_OUTPUT_RANGE, *PQUERY_BAD_RANGES_OUTPUT_RANGE;

//
//  Output buffer defining the bad ranges.
//

typedef struct _QUERY_BAD_RANGES_OUTPUT {

    ULONG Flags;

    //
    //  Number of bad ranges populated in the Ranges
    //  array.
    //

    ULONG NumBadRanges;

    //
    //  If the output buffer is not big enough to hold all the
    //  bad ranges, the FSCTL would get STATUS_BUFFER_OVERFLOW
    //  with as many bad ranges as  that can fit  in the given
    //  output buffer and  NextOffsetToLookUp gives the offset
    //  from which the user can requery the remaining bad ranges.
    //

    ULONGLONG NextOffsetToLookUp;

    //
    //  Array of bad ranges (<Offset, Length> pairs) in the
    //  ranges that user asked for.
    //

    QUERY_BAD_RANGES_OUTPUT_RANGE BadRanges[1];

} QUERY_BAD_RANGES_OUTPUT, *PQUERY_BAD_RANGES_OUTPUT;


//
//========= FSCTL_SET_DAX_ALLOC_ALIGNMENT_HINT =========
//
//  Once this FSCTL is issued for a file, the following
//  allocations to the file will be examined to see if
//  the given offset is being allocated and if so the
//  allocation will be placed such that the physical
//  address corresponding to that allocation is aligned
//  to the given AlignmentValue, if we have free space
//  available at aligned regions.
//
//  To reset the alignment constraint you can issue this
//  FSCTL with AlignmentValue of 1 i.e. AlignmentShift
//  as 0.
//

typedef struct _SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT {

    ULONG Flags;

    //
    //  The block size to align the given offset of the file.
    //  The file is allocated such that the physical address
    //  corresponding to the file is aligned to this block
    //  size.  The actual alignment value is given by:
    //
    //    AlignmentValue = (1 << AlignmentShift);
    //

    ULONG AlignmentShift;

    //
    //  Offset in file that should be aligned to the given
    //  AlignmentValue.  This should be cluster aligned.
    //
    //  NOTE: MM supports huge page only if the file offset
    //  and the physical address are 1gb aligned.
    //

    ULONGLONG FileOffsetToAlign;

} SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT, *PSET_DAX_ALLOC_ALIGNMENT_HINT_INPUT;

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS3) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
// Generic fsctl headers which can be sent to the driver.
//

#define WOF_CURRENT_VERSION (0x00000001)

#define WOF_PROVIDER_WIM            (0x00000001)
#define WOF_PROVIDER_FILE           (0x00000002)
#define WOF_PROVIDER_CLOUD          (0x00000003)

typedef struct _WOF_EXTERNAL_INFO {
    ULONG Version;
    ULONG Provider;
} WOF_EXTERNAL_INFO, *PWOF_EXTERNAL_INFO;

typedef struct _WOF_EXTERNAL_FILE_ID {
    FILE_ID_128 FileId;
} WOF_EXTERNAL_FILE_ID, *PWOF_EXTERNAL_FILE_ID;

typedef struct _WOF_VERSION_INFO {
    ULONG WofVersion;
} WOF_VERSION_INFO, *PWOF_VERSION_INFO;

//
// Structures for WIM provider specific fsctl's.
//

#ifndef WIM_PROVIDER_HASH_SIZE
#define WIM_PROVIDER_HASH_SIZE 20
#endif

#define WIM_PROVIDER_CURRENT_VERSION  (0x00000001)

#define WIM_PROVIDER_EXTERNAL_FLAG_NOT_ACTIVE    (0x00000001)
#define WIM_PROVIDER_EXTERNAL_FLAG_SUSPENDED     (0x00000002)

typedef struct _WIM_PROVIDER_EXTERNAL_INFO {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER DataSourceId;
    UCHAR ResourceHash[WIM_PROVIDER_HASH_SIZE];
} WIM_PROVIDER_EXTERNAL_INFO, *PWIM_PROVIDER_EXTERNAL_INFO;

//
//  WimType specifies a set of flags corresponding to the type of WIM.
//
//  WIM_BOOT_OS_WIM means the wim contains Windows system files.
//  WIM_BOOT_NOT_OS_WIM means the wim contains 3rd party files or data files.
//
//  Do not use WIM_BOOT_OS_WIM for data that should be preserved on
//  system upgrade.
//

#define WIM_BOOT_OS_WIM       (0x00000001)
#define WIM_BOOT_NOT_OS_WIM   (0x00000000)

typedef struct _WIM_PROVIDER_ADD_OVERLAY_INPUT {
    ULONG WimType;
    ULONG WimIndex;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
} WIM_PROVIDER_ADD_OVERLAY_INPUT, *PWIM_PROVIDER_ADD_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_UPDATE_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
} WIM_PROVIDER_UPDATE_OVERLAY_INPUT, *PWIM_PROVIDER_UPDATE_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_REMOVE_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_REMOVE_OVERLAY_INPUT, *PWIM_PROVIDER_REMOVE_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_SUSPEND_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_SUSPEND_OVERLAY_INPUT, *PWIM_PROVIDER_SUSPEND_OVERLAY_INPUT;

typedef struct _WIM_PROVIDER_OVERLAY_ENTRY {
    ULONG NextEntryOffset;
    LARGE_INTEGER DataSourceId;
    GUID WimGuid;
    ULONG WimFileNameOffset;
    ULONG WimType;
    ULONG WimIndex;
    ULONG Flags;
} WIM_PROVIDER_OVERLAY_ENTRY, *PWIM_PROVIDER_OVERLAY_ENTRY;

#endif


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

//
// Structures for WOF File provider specific fsctl's.
//

#define FILE_PROVIDER_CURRENT_VERSION        (0x00000001)

#define FILE_PROVIDER_SINGLE_FILE            (0x00000001)

#define FILE_PROVIDER_COMPRESSION_XPRESS4K   (0x00000000)
#define FILE_PROVIDER_COMPRESSION_LZX        (0x00000001)
#define FILE_PROVIDER_COMPRESSION_XPRESS8K   (0x00000002)
#define FILE_PROVIDER_COMPRESSION_XPRESS16K  (0x00000003)
#define FILE_PROVIDER_COMPRESSION_MAXIMUM    (0x00000004)

#define FILE_PROVIDER_FLAG_COMPRESS_ON_WRITE (0x00000001)

typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V0 {
    ULONG Version;
    ULONG Algorithm;
} FILE_PROVIDER_EXTERNAL_INFO_V0, *PFILE_PROVIDER_EXTERNAL_INFO_V0;

typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V1 {
    ULONG Version;
    ULONG Algorithm;
    ULONG Flags;
} FILE_PROVIDER_EXTERNAL_INFO_V1, *PFILE_PROVIDER_EXTERNAL_INFO_V1;

typedef FILE_PROVIDER_EXTERNAL_INFO_V1  FILE_PROVIDER_EXTERNAL_INFO;
typedef PFILE_PROVIDER_EXTERNAL_INFO_V1 PFILE_PROVIDER_EXTERNAL_INFO;

#endif  //  (_WIN32_WINNT >= _WIN32_WINNT_WIN7)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

typedef struct _CONTAINER_VOLUME_STATE {
    ULONG Flags;
} CONTAINER_VOLUME_STATE, *PCONTAINER_VOLUME_STATE;

#define CONTAINER_VOLUME_STATE_HOSTING_CONTAINER    (0x00000001)


typedef struct _CONTAINER_ROOT_INFO_INPUT {
    ULONG Flags;
} CONTAINER_ROOT_INFO_INPUT, *PCONTAINER_ROOT_INFO_INPUT;

typedef struct _CONTAINER_ROOT_INFO_OUTPUT {
    USHORT ContainerRootIdLength;
    UCHAR ContainerRootId[ANYSIZE_ARRAY];
} CONTAINER_ROOT_INFO_OUTPUT, *PCONTAINER_ROOT_INFO_OUTPUT;

#define CONTAINER_ROOT_INFO_FLAG_SCRATCH_ROOT                   (0x00000001)
#define CONTAINER_ROOT_INFO_FLAG_LAYER_ROOT                     (0x00000002)
#define CONTAINER_ROOT_INFO_FLAG_VIRTUALIZATION_ROOT            (0x00000004)
#define CONTAINER_ROOT_INFO_FLAG_VIRTUALIZATION_TARGET_ROOT     (0x00000008)
#define CONTAINER_ROOT_INFO_FLAG_VIRTUALIZATION_EXCEPTION_ROOT  (0x00000010)

#define CONTAINER_ROOT_INFO_VALID_FLAGS                         (0x0000001f)

typedef struct _VIRTUALIZATION_INSTANCE_INFO_INPUT {
    ULONG NumberOfWorkerThreads;
    ULONG Flags;
} VIRTUALIZATION_INSTANCE_INFO_INPUT, *PVIRTUALIZATION_INSTANCE_INFO_INPUT;

typedef struct _VIRTUALIZATION_INSTANCE_INFO_OUTPUT {
    GUID VirtualizationInstanceID;
} VIRTUALIZATION_INSTANCE_INFO_OUTPUT, *PVIRTUALIZATION_INSTANCE_INFO_OUTPUT;

//
//  Structures for FSCTL_GET_FILTER_FILE_IDENTIFIER.
//

typedef struct _GET_FILTER_FILE_IDENTIFIER_INPUT {
    USHORT AltitudeLength;
    WCHAR Altitude[ANYSIZE_ARRAY];
} GET_FILTER_FILE_IDENTIFIER_INPUT, *PGET_FILTER_FILE_IDENTIFIER_INPUT;

typedef struct _GET_FILTER_FILE_IDENTIFIER_OUTPUT {
    USHORT FilterFileIdentifierLength;
    UCHAR FilterFileIdentifier[ANYSIZE_ARRAY];
} GET_FILTER_FILE_IDENTIFIER_OUTPUT, *PGET_FILTER_FILE_IDENTIFIER_OUTPUT;

#endif


// ****************** Insert New FSCTLs Here ********************************

#endif // _FILESYSTEMFSCTL_


//
//======================= FSCTL_SET_REPARSE_POINT =========================
//======================= FSCTL_GET_REPARSE_POINT =========================
//======================= FSCTL_DELETE_REPARSE_POINT ======================
//
// Structures for FSCTL_SET_REPARSE_POINT, FSCTL_GET_REPARSE_POINT, and FSCTL_DELETE_REPARSE_POINT
//

//
// The reparse structure is used by layered drivers to store data in a
// reparse point. The constraints on reparse tags are defined below.
// This version of the reparse data buffer is only for Microsoft tags.
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

#define SYMLINK_FLAG_RELATIVE   1

typedef struct _REPARSE_DATA_BUFFER {
    ULONG  ReparseTag;
    USHORT ReparseDataLength;
    USHORT Reserved;
    union {
        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            ULONG Flags;
            WCHAR PathBuffer[1];
        } SymbolicLinkReparseBuffer;
        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            WCHAR PathBuffer[1];
        } MountPointReparseBuffer;
        struct {
            UCHAR  DataBuffer[1];
        } GenericReparseBuffer;
    } DUMMYUNIONNAME;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 )
#endif

#define REPARSE_DATA_BUFFER_HEADER_SIZE   UFIELD_OFFSET(REPARSE_DATA_BUFFER, GenericReparseBuffer)


// begin_winnt
//
// The reparse GUID structure is used by all 3rd party layered drivers to
// store data in a reparse point. For non-Microsoft tags, The GUID field
// cannot be GUID_NULL.
// The constraints on reparse tags are defined below.
// Microsoft tags can also be used with this format of the reparse point buffer.
//

typedef struct _REPARSE_GUID_DATA_BUFFER {
    ULONG  ReparseTag;
    USHORT ReparseDataLength;
    USHORT Reserved;
    GUID   ReparseGuid;
    struct {
        UCHAR  DataBuffer[1];
    } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;

#define REPARSE_GUID_DATA_BUFFER_HEADER_SIZE   UFIELD_OFFSET(REPARSE_GUID_DATA_BUFFER, GenericReparseBuffer)

//
// Maximum allowed size of the reparse data.
//

#define MAXIMUM_REPARSE_DATA_BUFFER_SIZE      ( 16 * 1024 )

//
// Predefined reparse tags.
// These tags need to avoid conflicting with IO_REMOUNT defined in ntos\inc\io.h
//

#define IO_REPARSE_TAG_RESERVED_ZERO             (0)
#define IO_REPARSE_TAG_RESERVED_ONE              (1)
#define IO_REPARSE_TAG_RESERVED_TWO              (2)

//
// The value of the following constant needs to satisfy the following conditions:
//  (1) Be at least as large as the largest of the reserved tags.
//  (2) Be strictly smaller than all the tags in use.
//

#define IO_REPARSE_TAG_RESERVED_RANGE            IO_REPARSE_TAG_RESERVED_TWO

//
// The reparse tags are a ULONG. The 32 bits are laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +-+-+-+-+-----------------------+-------------------------------+
//  |M|R|N|D|     Reserved bits     |       Reparse Tag Value       |
//  +-+-+-+-+-----------------------+-------------------------------+
//
// M is the Microsoft bit. When set to 1, it denotes a tag owned by Microsoft.
//   All ISVs must use a tag with a 0 in this position.
//   Note: If a Microsoft tag is used by non-Microsoft software, the
//   behavior is not defined.
//
// R is reserved.  Must be zero for non-Microsoft tags.
//
// N is name surrogate. When set to 1, the file represents another named
//   entity in the system.
//
// D is the directory bit. When set to 1, indicates that any directory
//   with this reparse tag can have children. Has no special meaning when used
//   on a non-directory file. Not compatible with the name surrogate bit.
//
// The M and N bits are OR-able.
// The following macros check for the M and N bit values:
//

//
// Macro to determine whether a reparse point tag corresponds to a tag
// owned by Microsoft.
//

#define IsReparseTagMicrosoft(_tag) (              \
                           ((_tag) & 0x80000000)   \
                           )

//
// Macro to determine whether a reparse point tag is a name surrogate
//

#define IsReparseTagNameSurrogate(_tag) (          \
                           ((_tag) & 0x20000000)   \
                           )

//
// Macro to determine whether a directory with this reparse point can have
// children.
//

#define IsReparseTagDirectory(_tag) (    \
                           ((_tag) & 0x10000000)   \
                           )

// end_winnt

//
// The following constant represents the bits that are valid to use in
// reparse tags.
//

#define IO_REPARSE_TAG_VALID_VALUES     (0xF000FFFF)

//
// Macro to determine whether a reparse tag is a valid tag.
//

#define IsReparseTagValid(_tag) (                               \
                  !((_tag) & ~IO_REPARSE_TAG_VALID_VALUES) &&   \
                  ((_tag) > IO_REPARSE_TAG_RESERVED_RANGE) &&   \
                  (((_tag) & 0x30000000) != 0x30000000)         \
                 )

///////////////////////////////////////////////////////////////////////////////
//
// Microsoft tags for reparse points.
//
///////////////////////////////////////////////////////////////////////////////

#define IO_REPARSE_TAG_MOUNT_POINT              (0xA0000003L)       // winnt
#define IO_REPARSE_TAG_HSM                      (0xC0000004L)       // winnt
#define IO_REPARSE_TAG_DRIVE_EXTENDER           (0x80000005L)
#define IO_REPARSE_TAG_HSM2                     (0x80000006L)       // winnt
#define IO_REPARSE_TAG_SIS                      (0x80000007L)       // winnt
#define IO_REPARSE_TAG_WIM                      (0x80000008L)       // winnt
#define IO_REPARSE_TAG_CSV                      (0x80000009L)       // winnt
#define IO_REPARSE_TAG_DFS                      (0x8000000AL)       // winnt
#define IO_REPARSE_TAG_FILTER_MANAGER           (0x8000000BL)
#define IO_REPARSE_TAG_SYMLINK                  (0xA000000CL)       // winnt
#define IO_REPARSE_TAG_IIS_CACHE                (0xA0000010L)
#define IO_REPARSE_TAG_DFSR                     (0x80000012L)       // winnt
#define IO_REPARSE_TAG_DEDUP                    (0x80000013L)       // winnt
#define IO_REPARSE_TAG_APPXSTRM                 (0xC0000014L)
#define IO_REPARSE_TAG_NFS                      (0x80000014L)       // winnt
#define IO_REPARSE_TAG_FILE_PLACEHOLDER         (0x80000015L)       // winnt
#define IO_REPARSE_TAG_DFM                      (0x80000016L)
#define IO_REPARSE_TAG_WOF                      (0x80000017L)       // winnt
#define IO_REPARSE_TAG_WCI                      (0x80000018L)       // winnt
#define IO_REPARSE_TAG_WCI_1                    (0x90001018L)       // winnt
#define IO_REPARSE_TAG_GLOBAL_REPARSE           (0xA0000019L)       // winnt
#define IO_REPARSE_TAG_CLOUD                    (0x9000001AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_1                  (0x9000101AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_2                  (0x9000201AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_3                  (0x9000301AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_4                  (0x9000401AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_5                  (0x9000501AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_6                  (0x9000601AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_7                  (0x9000701AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_8                  (0x9000801AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_9                  (0x9000901AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_A                  (0x9000A01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_B                  (0x9000B01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_C                  (0x9000C01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_D                  (0x9000D01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_E                  (0x9000E01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_F                  (0x9000F01AL)       // winnt
#define IO_REPARSE_TAG_CLOUD_MASK               (0x0000F000L)       // winnt
#define IO_REPARSE_TAG_APPEXECLINK              (0x8000001BL)       // winnt
#define IO_REPARSE_TAG_GVFS                     (0x9000001CL)       // winnt
#define IO_REPARSE_TAG_LX_SYMLINK               (0xA000001DL)
#define IO_REPARSE_TAG_STORAGE_SYNC             (0x8000001EL)       // winnt
#define IO_REPARSE_TAG_WCI_TOMBSTONE            (0xA000001FL)       // winnt
#define IO_REPARSE_TAG_UNHANDLED                (0x80000020L)       // winnt
#define IO_REPARSE_TAG_ONEDRIVE                 (0x80000021L)       // winnt
#define IO_REPARSE_TAG_GVFS_TOMBSTONE           (0xA0000022L)       // winnt

///////////////////////////////////////////////////////////////////////////////
//
// Non-Microsoft tags for reparse points
//
///////////////////////////////////////////////////////////////////////////////

//
// Tag allocated to CONGRUENT, May 2000. Used by IFSTEST
//

#define IO_REPARSE_TAG_IFSTEST_CONGRUENT        (0x00000009L)

//
//  Tag allocated to Moonwalk Univeral for HSM
//  GUID: 257ABE42-5A28-4C8C-AC46-8FEA5619F18F
//

#define IO_REPARSE_TAG_MOONWALK_HSM             (0x0000000AL)

//
//  Tag allocated to Tsinghua Univeristy for Research purposes
//  No released products should use this tag
//  GUID: b86dff51-a31e-4bac-b3cf-e8cfe75c9fc2
//

#define IO_REPARSE_TAG_TSINGHUA_UNIVERSITY_RESEARCH (0x0000000BL)

//
// Tag allocated to ARKIVIO for HSM
//

#define IO_REPARSE_TAG_ARKIVIO                  (0x0000000CL)

//
//  Tag allocated to SOLUTIONSOFT for name surrogate
//

#define IO_REPARSE_TAG_SOLUTIONSOFT             (0x2000000DL)

//
//  Tag allocated to COMMVAULT for HSM
//

#define IO_REPARSE_TAG_COMMVAULT                (0x0000000EL)

//
//  Tag allocated to Overtone Software for HSM
//

#define IO_REPARSE_TAG_OVERTONE                 (0x0000000FL)

//
//  Tag allocated to Symantec (formerly to KVS Inc) for HSM
//  GUID: A49F7BF6-77CA-493c-A0AA-18DBB28D1098
//

#define IO_REPARSE_TAG_SYMANTEC_HSM2            (0x00000010L)

//
//  Tag allocated to Enigma Data for HSM
//

#define IO_REPARSE_TAG_ENIGMA_HSM               (0x00000011L)

//
//  Tag allocated to Symantec for HSM
//  GUID: B99F4235-CF1C-48dd-9E6C-459FA289F8C7
//

#define IO_REPARSE_TAG_SYMANTEC_HSM             (0x00000012L)

//
//  Tag allocated to INTERCOPE for HSM
//  GUID: F204BE2D-AEEB-4728-A31C-C7F4E9BEA758}
//

#define IO_REPARSE_TAG_INTERCOPE_HSM            (0x00000013L)

//
//  Tag allocated to KOM Networks for HSM
//

#define IO_REPARSE_TAG_KOM_NETWORKS_HSM         (0x00000014L)

//
//  Tag allocated to MEMORY_TECH for HSM
//  GUID: E51BA456-046C-43ea-AEC7-DC1A87E1FD49
//

#define IO_REPARSE_TAG_MEMORY_TECH_HSM          (0x00000015L)

//
//  Tag allocated to BridgeHead Software for HSM
//  GUID: EBAFF6E3-F21D-4496-8342-58144B3D2BD0
//

#define IO_REPARSE_TAG_BRIDGEHEAD_HSM           (0x00000016L)

//
//  Tag allocated to OSR for samples reparse point filter
//  GUID: 3740c860-b19b-11d9-9669-0800200c9a66
//

#define IO_REPARSE_TAG_OSR_SAMPLE               (0x20000017L)

//
//  Tag allocated to Global 360 for HSM
//  GUID: C4B51F66-7F00-4c55-9441-8A1B159F209B
//

#define IO_REPARSE_TAG_GLOBAL360_HSM            (0x00000018L)

//
//  Tag allocated to Altiris for HSM
//  GUID: fc1047eb-fb2d-45f2-a2f4-a71c1032fa2dB
//

#define IO_REPARSE_TAG_ALTIRIS_HSM              (0x00000019L)

//
//  Tag allocated to Hermes for HSM
//  GUID: 437E0FD5-FCB4-42fe-877A-C785DA662AC2
//

#define IO_REPARSE_TAG_HERMES_HSM               (0x0000001AL)

//
//  Tag allocated to PointSoft for HSM
//  GUID: 547BC7FD-9604-4deb-AE07-B6514DF5FBC6
//

#define IO_REPARSE_TAG_POINTSOFT_HSM            (0x0000001BL)

//
//  Tag allocated to GRAU Data Storage for HSM
//  GUID: 6662D310-5653-4D10-8C31-F8E166D1A1BD
//

#define IO_REPARSE_TAG_GRAU_DATASTORAGE_HSM     (0x0000001CL)

//
//  Tag allocated to CommVault for HSM
//  GUID: cc38adf3-c583-4efa-b183-72c1671941de
//

#define IO_REPARSE_TAG_COMMVAULT_HSM            (0x0000001DL)


//
//  Tag allocated to Data Storage Group for single instance storage
//  GUID: C1182673-0562-447a-8E40-4F0549FDF817
//

#define IO_REPARSE_TAG_DATASTOR_SIS             (0x0000001EL)


//
//  Tag allocated to Enterprise Data Solutions, Inc. for HSM
//  GUID: EB63DF9D-8874-41cd-999A-A197542CDAFC
//

#define IO_REPARSE_TAG_EDSI_HSM                 (0x0000001FL)


//
//  Tag allocated to HP StorageWorks Reference Information Manager for Files (HSM)
//  GUID: 3B0F6B23-0C2E-4281-9C19-C6AEEBC88CD8
//

#define IO_REPARSE_TAG_HP_HSM                   (0x00000020L)


//
//  Tag allocated to SER Beteiligung Solutions Deutschland GmbH (HSM)
//  GUID: 55B673F0-978E-41c5-9ADB-AF99640BE90E
//

#define IO_REPARSE_TAG_SER_HSM                  (0x00000021L)


//
//  Tag allocated to Double-Take Software (formerly NSI Software, Inc.) for HSM
//  GUID: f7cb0ce8-453a-4ae1-9c56-db41b55f6ed4
//

#define IO_REPARSE_TAG_DOUBLE_TAKE_HSM          (0x00000022L)


//
//  Tag allocated to Beijing Wisdata Systems CO, LTD for HSM
//  GUID: d546500a-2aeb-45f6-9482-f4b1799c3177
//

#define IO_REPARSE_TAG_WISDATA_HSM              (0x00000023L)


//
//  Tag allocated to Mimosa Systems Inc for HSM
//  GUID: 8ddd4144-1a22-404b-8a5a-fcd91c6ee9f3
//

#define IO_REPARSE_TAG_MIMOSA_HSM               (0x00000024L)


//
//  Tag allocated to H&S Heilig und Schubert Software AG for HSM
//  GUID: 77CA30C0-E5EC-43df-9E44-A4910378E284
//

#define IO_REPARSE_TAG_HSAG_HSM                 (0x00000025L)


//
//  Tag allocated to Atempo Inc. (Atempo Digital Archive)  for HSM
//  GUID: 9B64518A-D6A4-495f-8D01-392F38862F0C
//

#define IO_REPARSE_TAG_ADA_HSM                  (0x00000026L)


//
//  Tag allocated to Autonomy Corporation for HSM
//  GUID: EB112A57-10FC-4b42-B590-A61897FDC432
//

#define IO_REPARSE_TAG_AUTN_HSM                 (0x00000027L)


//
//  Tag allocated to Nexsan for HSM
//  GUID: d35eba9a-e722-445d-865f-dde1120acf16
//

#define IO_REPARSE_TAG_NEXSAN_HSM               (0x00000028L)


//
//  Tag allocated to Double-Take for SIS
//  GUID: BDA506C2-F74D-4495-9A8D-44FD8D5B4F42
//

#define IO_REPARSE_TAG_DOUBLE_TAKE_SIS          (0x00000029L)


//
//  Tag allocated to Sony for HSM
//  GUID: E95032E4-FD81-4e15-A8E2-A1F078061C4E
//

#define IO_REPARSE_TAG_SONY_HSM                 (0x0000002AL)


//
//  Tag allocated to Eltan Comm for HSM
//  GUID: E1596D9F-44D8-43f4-A2D6-E9FE8D3E28FB
//

#define IO_REPARSE_TAG_ELTAN_HSM                (0x0000002BL)


//
//  Tag allocated to Utixo LLC for HSM
//  GUID: 5401F960-2F95-46D0-BBA6-052929FE2C32
//

#define IO_REPARSE_TAG_UTIXO_HSM                (0x0000002CL)


//
//  Tag allocated to Quest Software for HSM
//  GUID: D546500A-2AEB-45F6-9482-F4B1799C3177
//

#define IO_REPARSE_TAG_QUEST_HSM                (0x0000002DL)


//
//  Tag allocated to DataGlobal GmbH for HSM
//  GUID: 7A09CA83-B7B1-4614-ADFD-0BD5F4F989C9
//

#define IO_REPARSE_TAG_DATAGLOBAL_HSM           (0x0000002EL)


//
//  Tag allocated to Qi Tech LLC for HSM
//  GUID: C8110B39-A4CE-432E-B58A-FBEAD296DF03
//

#define IO_REPARSE_TAG_QI_TECH_HSM              (0x2000002FL)

//
//  Tag allocated to DataFirst Corporation for HSM
//  GUID: E0E40591-6434-479f-94AC-DECF6DAEFB5C
//

#define IO_REPARSE_TAG_DATAFIRST_HSM            (0x00000030L)

//
//  Tag allocated to C2C Systems for HSM
//  GUID: 6F2F829C-36AE-4E88-A3B6-E2C24377EA1C
//

#define IO_REPARSE_TAG_C2CSYSTEMS_HSM           (0x00000031L)

//
//  Tag allocated to Waterford Technologies for deduplication
//  GUID: 0AF8B999-B8E8-408b-805F-5448E68F9274
//

#define IO_REPARSE_TAG_WATERFORD                (0x00000032L)

//
//  Tag allocated to Riverbed Technology for HSM
//  GUID: 3336274-255B-4038-9D39-14B0EC3F8256
//

#define IO_REPARSE_TAG_RIVERBED_HSM             (0x00000033L)

//
//  Tag allocated to Caringo, Inc.  for HSM
//  GUID: B92426FA-D35F-48DB-A452-8FD557A23353
//

#define IO_REPARSE_TAG_CARINGO_HSM              (0x00000034L)

//
//  Tag allocated to MaxiScale, Inc. for HSM
//  GUID: 643B4714-BA13-427b-B771-C5BFDE787BB7
//

#define IO_REPARSE_TAG_MAXISCALE_HSM            (0x20000035L)

//
//  Tag allocated to Citrix Systems for profile management
//  GUID: B9150EDE-5845-4818-841B-5BCBB3B848E3
//

#define IO_REPARSE_TAG_CITRIX_PM                (0x00000036L)

//
//  Tag allocated to OpenAFS for DFS
//  GUID: EF21A155-5C92-4470-AB3B-370403D96369
//

#define IO_REPARSE_TAG_OPENAFS_DFS              (0x00000037L)

//
//  Tag allocated to ZL Technologies Inc for HSM
//  GUID: A521FE7A-EB10-4148-BAC7-264359827B7E
//

#define IO_REPARSE_TAG_ZLTI_HSM                 (0x00000038L)

//
//  Tag allocated to EMC Corporation for HSM
//  GUID: 119EA2B9-8979-48b9-B4CE-5082AF2D81E5
//

#define IO_REPARSE_TAG_EMC_HSM                  (0x00000039L)

//
//  Tag allocated to VMware for profile management
//  GUID: 6D020A57-C9BB-4DA4-A43F-49686D8D5E77
//

#define IO_REPARSE_TAG_VMWARE_PM                (0x0000003AL)

//
//  Tag allocated to Arco Computer Products for backup
//  GUID: C933F72B-A64D-44d9-8CD9-F339D12390CC
//

#define IO_REPARSE_TAG_ARCO_BACKUP              (0x0000003BL)

//
//  Tag allocated to Carroll-Net for HSM
//  GUID: 805EB191-564B-415a-A78C-9ED0AF8E02FF
//

#define IO_REPARSE_TAG_CARROLL_HSM              (0x0000003CL)

//
//  Tag allocated to ComTrade for HSM
//  GUID: D546500A-2AEB-45F6-9482-F4B1799C3177
//

#define IO_REPARSE_TAG_COMTRADE_HSM             (0x0000003DL)

//
//  Tag allocated to EaseVault for HSM
//  GUID: BBA65D6F-F8A0-48CC-B748-DBD5FFFCCFB1
//

#define IO_REPARSE_TAG_EASEVAULT_HSM            (0x0000003EL)

//
//  Tag allocated to Hitachi Data Systems for HSM
//  GUID: DC095FD2-AC3C-46BA-9E58-DD182BE86AF4
//

#define IO_REPARSE_TAG_HDS_HSM                  (0x0000003FL)

//
//  Tag allocated to Maginatics for network redirector
//  GUID: 1907AE87-388D-4854-AF63-B585A619DF28
//

#define IO_REPARSE_TAG_MAGINATICS_RDR           (0x00000040L)

//
//  Tag allocated to Google for HSM
//  GUID: 40550C94-68DB-4726-9C62-47BB88577BD0
//

#define IO_REPARSE_TAG_GOOGLE_HSM               (0x00000041L)

//
//  Tag allocated to Quaddra for HSM
//  GUID: 491D6619-20C3-4BFA-AF98-4EA2A7F53F1D
//

#define IO_REPARSE_TAG_QUADDRA_HSM              (0x00000042L)

//
//  Tag allocated to HP for backup
//  GUID: 0c5ed442-4928-473e-970e-5389ff2b4328
//

#define IO_REPARSE_TAG_HP_BACKUP                (0x00000043L)

//
//  Tag allocated to DropBox for HSM
//  GUID: C5BB0F16-68E9-4456-B6B9-5F5EE5F89965
//

#define IO_REPARSE_TAG_DROPBOX_HSM              (0x00000044L)

//
//  Tag allocated to Adobe for HSM
//  GUID: 48F5DB1C-ED3C-44F7-8EBA-3623C09D6179
//

#define IO_REPARSE_TAG_ADOBE_HSM                (0x00000045L)

//
//  Tag allocated to HP for HPE Data Protector HSM
//  GUID: 3370DFC4-DCED-4DEB-AD0C-9A2416B3198B
//

#define IO_REPARSE_TAG_HP_DATA_PROTECT          (0x00000046L)

//
//  Tag allocated to Activision for HSM
//  GUID: 18CC35B3-5DFF-408E-B42E-9FA6731BC506
//

#define IO_REPARSE_TAG_ACTIVISION_HSM           (0x00000047L)

//
//  Tag allocated to Hitachi for HSM
//  GUID: DFFD30B6-6CC0-46A8-94C2-AAE32C9B16D1
//

#define IO_REPARSE_TAG_HDS_HCP_HSM              (0x00000048L)

//
//  Tag allocated to AuriStor File System
//  GUID: AFBD291F-3DF8-46BA-BE87-47A632714BB7
//

#define IO_REPARSE_TAG_AURISTOR_FS              (0x00000049L)

//
//  Tag allocated to ItStation for restore
//  GUID: C33A7A21-6142-4860-9AAA-0008F1064616
//

#define IO_REPARSE_TAG_ITSTATION                (0x0000004AL)

//
//  Tag allocated to Spharsoft for dedup
//  GUID: 2AB7C758-E6AA-43FB-9194-80A436E22F26
//

#define IO_REPARSE_TAG_SPHARSOFT                (0x0000004BL)

//
//  Tag allocated to AlertBoot for encryption
//  GUID: 80050DB9-52D3-4742-B28B-3918177242D5
//

#define IO_REPARSE_TAG_ALERTBOOT                (0x2000004CL)

//
//  Tag allocated to mTalos for monitoring
//  GUID: C51BB90B-77D2-43B9-8E88-CC5745E977FF
//

#define IO_REPARSE_TAG_MTALOS                   (0x0000004DL)

//
//  Tag allocated to CTERA for HSM
//  GUID: A0431A3B-7789-485C-8638-FCA288FDBA71
//

#define IO_REPARSE_TAG_CTERA_HSM                (0x0000004EL)

//
//  Tag allocated to Nippon Techno Lab for HSM
//  GUID: 8E5C2A8D-7344-4923-A741-2E9EFF128126
//

#define IO_REPARSE_TAG_NIPPON_HSM               (0x0000004FL)

//
//  Tag allocated to Redstor for HSM
//  GUID: E6636830-4534-4FA2-9D4F-DDD22818EDCC
//

#define IO_REPARSE_TAG_REDSTOR_HSM              (0x00000050L)

//
//  Reparse point index keys.
//
//  The index with all the reparse points that exist in a volume at a
//  given time contains entries with keys of the form
//                        <reparse tag, file record id>.
//  The data part of these records is empty.
//

#pragma pack(4)

typedef struct _REPARSE_INDEX_KEY {

    //
    //  The tag of the reparse point.
    //

    ULONG FileReparseTag;

    //
    //  The file record Id where the reparse point is set.
    //

    LARGE_INTEGER FileId;

} REPARSE_INDEX_KEY, *PREPARSE_INDEX_KEY;

#pragma pack()

//
//  To better guarentee backwards compatibility for selective new file system
//  functionality, this new functionality will be disabled until all mini
//  file system filters as well as legacy file system filters explicitly opt-in
//  to this new functionality.  This is controlled by a new registry key in
//  the filters service defintion called "SupportedFeatures".
//
//  File System filters need to update their .INF files to set state that the
//  given functionality is now supported.  Even if a filter can't actually
//  support the given operations they should mark in the .INF that it is
//  supported and modify their filter to fail the operations they don't support.
//
//  Following are the currently defined flag defintions for new functionality
//  and the indicator as to which version
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define SUPPORTED_FS_FEATURES_OFFLOAD_READ    0x00000001
#define SUPPORTED_FS_FEATURES_OFFLOAD_WRITE   0x00000002

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)

#define SUPPORTED_FS_FEATURES_QUERY_OPEN      0x00000004

#define SUPPORTED_FS_FEATURES_VALID_MASK      (SUPPORTED_FS_FEATURES_OFFLOAD_READ |\
                                               SUPPORTED_FS_FEATURES_OFFLOAD_WRITE |\
                                               SUPPORTED_FS_FEATURES_QUERY_OPEN)

#else  /*_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2 */

#define SUPPORTED_FS_FEATURES_VALID_MASK      (SUPPORTED_FS_FEATURES_OFFLOAD_READ |\
                                               SUPPORTED_FS_FEATURES_OFFLOAD_WRITE)

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2 */
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

//======================= FSCTL_SCRUB_DATA =============================

#define SCRUB_DATA_INPUT_FLAG_RESUME                           0x00000001
#define SCRUB_DATA_INPUT_FLAG_SKIP_IN_SYNC                     0x00000002
#define SCRUB_DATA_INPUT_FLAG_SKIP_NON_INTEGRITY_DATA          0x00000004
#define SCRUB_DATA_INPUT_FLAG_IGNORE_REDUNDANCY                0x00000008
#define SCRUB_DATA_INPUT_FLAG_SKIP_DATA                        0x00000010 
#define SCRUB_DATA_INPUT_FLAG_SCRUB_BY_OBJECT_ID               0x00000020                   

#define SCRUB_DATA_OUTPUT_FLAG_INCOMPLETE                      0x00000001

#define SCRUB_DATA_OUTPUT_FLAG_NON_USER_DATA_RANGE             0x00010000
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define SCRUB_DATA_OUTPUT_FLAG_PARITY_EXTENT_DATA_RETURNED     0x00020000
#define SCRUB_DATA_OUTPUT_FLAG_RESUME_CONTEXT_LENGTH_SPECIFIED 0x00040000
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINBLUE */

typedef struct _SCRUB_DATA_INPUT {

    //
    // sizeof(SCRUB_DATA_INPUT)
    //

    ULONG Size;

    //
    // Zero for the initial call.
    //
    // SCRUB_DATA_INPUT_FLAG_RESUME has to be specified when
    // ResumeContext is provided from the previous call
    //

    ULONG Flags;

    //
    // Maximum number of IOs in a single call. This is a hint to a
    // file system to halt the operation with a restart context if the
    // operation takes too long.
    //

    ULONG MaximumIos;
    
    //
    // 16 Byte object id. Only used if SCRUB_DATA_INPUT_FLAG_SCRUB_BY_OBJECT_ID
    // is specified via FSCTL_SCRUB_UNDISCOVERABLE_ID. Array of ULONGs to 
    // preserve previous alignment.
    //
    
    ULONG ObjectId[4];

    //
    // Reserved
    //

    ULONG Reserved[13];

    //
    // Opaque data returned from the previous call to restart the
    // operation. Only valid when SCRUB_DATA_FLAG_RESUME is set
    // at Flags field.
    //

    UCHAR ResumeContext[816];

} SCRUB_DATA_INPUT, *PSCRUB_DATA_INPUT;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

typedef struct _SCRUB_PARITY_EXTENT {

    LONGLONG Offset;

    ULONGLONG Length;

} SCRUB_PARITY_EXTENT, *PSCRUB_PARITY_EXTENT;

typedef struct _SCRUB_PARITY_EXTENT_DATA {

    //
    // sizeof(SCRUB_PARITY_EXTENT_DATA)
    //

    USHORT Size;

    //
    // Reserved
    //

    USHORT Flags;

    //
    // Number of parity extents
    //

    USHORT NumberOfParityExtents;

    //
    // Maximum number of parity extents in ParityExtents buffer
    //

    USHORT MaximumNumberOfParityExtents;

    //
    // Output buffer for parity extents
    //

    SCRUB_PARITY_EXTENT ParityExtents[ANYSIZE_ARRAY];

} SCRUB_PARITY_EXTENT_DATA, *PSCRUB_PARITY_EXTENT_DATA;

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

typedef struct _SCRUB_DATA_OUTPUT {

    //
    // sizeof(SCRUB_DATA_OUTPUT)
    //

    ULONG Size;

    //
    // Output Flags
    //
    // SCRUB_DATA_OUTPUT_FLAG_INCOMPLETE will be set if there are
    // remaining ranges. ResumeContext provided for the subsequent
    // call.
    //

    ULONG Flags;

    //
    // Operational status
    //

    ULONG Status;

    //
    // Offset of the error range of the user data where the operational errors were found.
    // This value may be -1 if the error were found in non-user data area
    //

    ULONGLONG ErrorFileOffset;

    //
    // Length of the error range of the user data where the operational errors were found.
    // This value may be 0 if the error were found in non-user data area
    //

    ULONGLONG ErrorLength;

    //
    // Number of bytes successfully repaired in the operational error range
    //

    ULONGLONG NumberOfBytesRepaired;

    //
    // Number of bytes failed due to an error in the operational error range
    //

    ULONGLONG NumberOfBytesFailed;

    //
    // Reference number for the file system specific internal file
    //

    ULONGLONG InternalFileReference;

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

    //
    // Resume context length
    //
    // Only valid if SCRUB_DATA_OUTPUT_FLAG_RESUME_CONTEXT_LENGTH_SPECIFIED
    // is specified in the Flags.
    //

    USHORT ResumeContextLength;

    //
    // Offset for the parity extent data in the output buffer
    // Only valid if SCRUB_DATA_OUTPUT_FLAG_PARITY_EXTENT_DATA_RETURNED
    // is specified in the Flags.
    //

    USHORT ParityExtentDataOffset;

    //
    // Reserved
    //

    ULONG Reserved[5];

#else /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

    //
    // Reserved
    //

    ULONG Reserved[6];

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

    //
    // Opaque data that the file system returns to the user so that
    // subsequent call can use this data to resume from the previous
    // point for the operation.
    //
    // Resume operation can be requested on a different handle and
    // across the reboot. However, file system may not honor the
    // resume context if not feasible and start from the beginning.
    //
    // This field is only valid when SCRUB_DATA_OUTPUT_FLAG_INCOMPLETE
    // is set.
    //

    UCHAR ResumeContext[816];

} SCRUB_DATA_OUTPUT, *PSCRUB_DATA_OUTPUT;

#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
//
//=============== FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT ====================
//

//
// Whether the file system supports shared virtual disks.
//
typedef enum _SharedVirtualDiskSupportType
{
    //
    // Shared virtual disks are not supported.
    //
    SharedVirtualDisksUnsupported = 0,

    //
    // Shared virtual disks are supported.
    //
    SharedVirtualDisksSupported = 1,

    //
    // The target device supports taking virtual disk
    // snapshots.
    //
    SharedVirtualDiskSnapshotsSupported = 3,

    //
    // The target device supports Continuous Data
    // Protection (log based) snapshots.
    //
    SharedVirtualDiskCDPSnapshotsSupported = 7
} SharedVirtualDiskSupportType;

typedef enum _SharedVirtualDiskHandleState
{
    //
    // The file handle is not related to a shared virtual disk.
    //
    SharedVirtualDiskHandleStateNone = 0,

    //
    // This handle is for the same file where at least one handle is
    // accessing the file in shared mode.
    //
    SharedVirtualDiskHandleStateFileShared = 1,

    //
    // This handle is currently being used to access a shared
    // virtual disk.
    //
    SharedVirtualDiskHandleStateHandleShared = 3
} SharedVirtualDiskHandleState;

//
// Response to FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT that indicates the level
// of support for shared virtual disks on the target file system.
//
typedef struct _SHARED_VIRTUAL_DISK_SUPPORT {
    //
    // One or more of the above SharedVirtualDiskSupportType flags that indicate the
    // level of shared virtual disk support on this file system.
    //
    SharedVirtualDiskSupportType SharedVirtualDiskSupport;

    //
    // The state of the current shared virtual disk handle.  This is one or more of the
    // above SharedVirtualDiskHandleState flags.
    //
    SharedVirtualDiskHandleState HandleState;
} SHARED_VIRTUAL_DISK_SUPPORT, *PSHARED_VIRTUAL_DISK_SUPPORT;

//
// Determines if the provided virtual disk handle state, from FSCTL_QUERY_SHARED_VIRTUAL_DISK_SUPPORT,
// indicates that the target virtual disk file is opened in shared mode.
//
#define IsVirtualDiskFileShared(HandleState) (((HandleState) & SharedVirtualDiskHandleStateFileShared) != 0)

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)



//
// The following three FSCTLs are placed in this file to facilitate sharing
// between the redirector and the IO subsystem
//
// This FSCTL is used to garner the link tracking information for a file.
// The data structures used for retreving the information are
// LINK_TRACKING_INFORMATION defined further down in this file.
//

#define FSCTL_LMR_GET_LINK_TRACKING_INFORMATION   CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM,58,METHOD_BUFFERED,FILE_ANY_ACCESS)

//
// This FSCTL is used to update the link tracking information on a server for
// an intra machine/ inter volume move on that server
//

#define FSCTL_LMR_SET_LINK_TRACKING_INFORMATION   CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM,59,METHOD_BUFFERED,FILE_ANY_ACCESS)

//
// The following IOCTL is used in link tracking implementation. It determines if the
// two file objects passed in are on the same server. This IOCTL is available in
// kernel mode only since it accepts FILE_OBJECT as parameters
//

#define IOCTL_LMR_ARE_FILE_OBJECTS_ON_SAME_SERVER CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM,60,METHOD_BUFFERED,FILE_ANY_ACCESS)



//
// Named Pipe file control code and structure declarations
//

//
// External named pipe file control operations
//

#define FSCTL_PIPE_ASSIGN_EVENT             CTL_CODE(FILE_DEVICE_NAMED_PIPE, 0, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_DISCONNECT               CTL_CODE(FILE_DEVICE_NAMED_PIPE, 1, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_LISTEN                   CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_PEEK                     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 3, METHOD_BUFFERED, FILE_READ_DATA)
#define FSCTL_PIPE_QUERY_EVENT              CTL_CODE(FILE_DEVICE_NAMED_PIPE, 4, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_TRANSCEIVE               CTL_CODE(FILE_DEVICE_NAMED_PIPE, 5, METHOD_NEITHER,  FILE_READ_DATA | FILE_WRITE_DATA)
#define FSCTL_PIPE_WAIT                     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 6, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_IMPERSONATE              CTL_CODE(FILE_DEVICE_NAMED_PIPE, 7, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_CLIENT_PROCESS       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 8, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_QUERY_CLIENT_PROCESS     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 9, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_PIPE_ATTRIBUTE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 10, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_PIPE_ATTRIBUTE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 11, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_CONNECTION_ATTRIBUTE CTL_CODE(FILE_DEVICE_NAMED_PIPE, 12, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_CONNECTION_ATTRIBUTE CTL_CODE(FILE_DEVICE_NAMED_PIPE, 13, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_GET_HANDLE_ATTRIBUTE     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 14, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SET_HANDLE_ATTRIBUTE     CTL_CODE(FILE_DEVICE_NAMED_PIPE, 15, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_FLUSH                    CTL_CODE(FILE_DEVICE_NAMED_PIPE, 16, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_PIPE_DISABLE_IMPERSONATE      CTL_CODE(FILE_DEVICE_NAMED_PIPE, 17, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_PIPE_SILO_ARRIVAL             CTL_CODE(FILE_DEVICE_NAMED_PIPE, 18, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_PIPE_CREATE_SYMLINK           CTL_CODE(FILE_DEVICE_NAMED_PIPE, 19, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_PIPE_DELETE_SYMLINK           CTL_CODE(FILE_DEVICE_NAMED_PIPE, 20, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

//
// Internal named pipe file control operations
//

#define FSCTL_PIPE_INTERNAL_READ        CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2045, METHOD_BUFFERED, FILE_READ_DATA)
#define FSCTL_PIPE_INTERNAL_WRITE       CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2046, METHOD_BUFFERED, FILE_WRITE_DATA)
#define FSCTL_PIPE_INTERNAL_TRANSCEIVE  CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2047, METHOD_NEITHER, FILE_READ_DATA | FILE_WRITE_DATA)
#define FSCTL_PIPE_INTERNAL_READ_OVFLOW CTL_CODE(FILE_DEVICE_NAMED_PIPE, 2048, METHOD_BUFFERED, FILE_READ_DATA)


//
// Define entry types for query event information
//

#define FILE_PIPE_READ_DATA             0x00000000
#define FILE_PIPE_WRITE_SPACE           0x00000001

//
// Named pipe file system control structure declarations
//

// Control structure for FSCTL_PIPE_ASSIGN_EVENT

typedef struct _FILE_PIPE_ASSIGN_EVENT_BUFFER {
     HANDLE EventHandle;
     ULONG KeyValue;
} FILE_PIPE_ASSIGN_EVENT_BUFFER, *PFILE_PIPE_ASSIGN_EVENT_BUFFER;

// Control structure for FSCTL_PIPE_PEEK

typedef struct _FILE_PIPE_PEEK_BUFFER {
     ULONG NamedPipeState;
     ULONG ReadDataAvailable;
     ULONG NumberOfMessages;
     ULONG MessageLength;
     CHAR Data[1];
} FILE_PIPE_PEEK_BUFFER, *PFILE_PIPE_PEEK_BUFFER;

// Control structure for FSCTL_PIPE_QUERY_EVENT

typedef struct _FILE_PIPE_EVENT_BUFFER {
     ULONG NamedPipeState;
     ULONG EntryType;
     ULONG ByteCount;
     ULONG KeyValue;
     ULONG NumberRequests;
} FILE_PIPE_EVENT_BUFFER, *PFILE_PIPE_EVENT_BUFFER;

// Control structure for FSCTL_PIPE_WAIT

typedef struct _FILE_PIPE_WAIT_FOR_BUFFER {
     LARGE_INTEGER Timeout;
     ULONG NameLength;
     BOOLEAN TimeoutSpecified;
     WCHAR Name[1];
} FILE_PIPE_WAIT_FOR_BUFFER, *PFILE_PIPE_WAIT_FOR_BUFFER;

// Control structure for FSCTL_PIPE_SET_CLIENT_PROCESS and FSCTL_PIPE_QUERY_CLIENT_PROCESS

typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER {
#if !defined(BUILD_WOW6432)
     PVOID ClientSession;
     PVOID ClientProcess;
#else
     ULONGLONG ClientSession;
     ULONGLONG ClientProcess;
#endif
} FILE_PIPE_CLIENT_PROCESS_BUFFER, *PFILE_PIPE_CLIENT_PROCESS_BUFFER;

// This is an extension to the client process info buffer containing the client
// computer name

#define FILE_PIPE_COMPUTER_NAME_LENGTH 15

typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_EX {
#if !defined(BUILD_WOW6432)
    PVOID ClientSession;
    PVOID ClientProcess;
#else
     ULONGLONG ClientSession;
     ULONGLONG ClientProcess;
#endif
    USHORT ClientComputerNameLength; // in bytes
    WCHAR ClientComputerBuffer[FILE_PIPE_COMPUTER_NAME_LENGTH+1]; // terminated
} FILE_PIPE_CLIENT_PROCESS_BUFFER_EX, *PFILE_PIPE_CLIENT_PROCESS_BUFFER_EX;

// Control structure for FSCTL_PIPE_SILO_ARRIVAL

typedef struct _FILE_PIPE_SILO_ARRIVAL_INPUT {
    HANDLE JobHandle;
} FILE_PIPE_SILO_ARRIVAL_INPUT, *PFILE_PIPE_SILO_ARRIVAL_INPUT;

//
// Flags for create symlink
//

//
// A global symlink will cause resolution of the symlink's target to occur in
// the host silo (i.e. not in any current silo).  For example, if there is a
// symlink at \Device\Silos\37\Device\NamedPipe\symlink then the target will be
// resolved as \Device\NamedPipe\target instead of \Device\Silos\37\Device\NamedPipe\target
//

#define FILE_PIPE_SYMLINK_FLAG_GLOBAL   0x1

//
// A relative symlink will cause resolution of the symlink's target to occur relative
// to the root of the named pipe file system.  For example, if there is a symlink at
// \Device\NamedPipe\symlink that has a target called "target", then the target will
// be resolved as \Device\NamedPipe\target
//

#define FILE_PIPE_SYMLINK_FLAG_RELATIVE 0x2

#define FILE_PIPE_SYMLINK_VALID_FLAGS   (FILE_PIPE_SYMLINK_FLAG_GLOBAL  | \
                                         FILE_PIPE_SYMLINK_FLAG_RELATIVE)

// Control structure for FSCTL_PIPE_CREATE_SYMLINK

typedef struct _FILE_PIPE_CREATE_SYMLINK_INPUT {
    USHORT NameOffset;
    USHORT NameLength;
    USHORT SubstituteNameOffset;
    USHORT SubstituteNameLength;
    ULONG Flags;
} FILE_PIPE_CREATE_SYMLINK_INPUT, *PFILE_PIPE_CREATE_SYMLINK_INPUT;

// Control structure for FSCTL_PIPE_DELETE_SYMLINK

typedef struct _FILE_PIPE_DELETE_SYMLINK_INPUT {
    USHORT NameOffset;
    USHORT NameLength;
} FILE_PIPE_DELETE_SYMLINK_INPUT, *PFILE_PIPE_DELETE_SYMLINK_INPUT;


//
// Mailslot file control operations.
//

#define FSCTL_MAILSLOT_PEEK             CTL_CODE(FILE_DEVICE_MAILSLOT, 0, METHOD_NEITHER, FILE_READ_DATA) // ntifs

//
// Control structure for FSCTL_LMR_GET_LINK_TRACKING_INFORMATION
//

//
// For links on DFS volumes the volume id and machine id are returned for
// link tracking
//

typedef enum _LINK_TRACKING_INFORMATION_TYPE {
    NtfsLinkTrackingInformation,
    DfsLinkTrackingInformation
} LINK_TRACKING_INFORMATION_TYPE, *PLINK_TRACKING_INFORMATION_TYPE;

typedef struct _LINK_TRACKING_INFORMATION {
    LINK_TRACKING_INFORMATION_TYPE Type;
    UCHAR   VolumeId[16];
} LINK_TRACKING_INFORMATION, *PLINK_TRACKING_INFORMATION;

//
// Control structure for FSCTL_LMR_SET_LINK_TRACKING_INFORMATION
//

typedef struct _REMOTE_LINK_TRACKING_INFORMATION_ {
    PVOID       TargetFileObject;
    ULONG   TargetLinkTrackingInformationLength;
    UCHAR   TargetLinkTrackingInformationBuffer[1];
} REMOTE_LINK_TRACKING_INFORMATION,
 *PREMOTE_LINK_TRACKING_INFORMATION;

#if (_WIN32_WINNT >= _WIN32_WINNT_THRESHOLD)
//
//==================== FSCTL_QUERY_EXTENT_READ_CACHE_INFO ======================
//
// Structure for FSCTL_QUERY_EXTENT_READ_CACHE_INFO
//

typedef struct _VCN_RANGE_INPUT_BUFFER {

    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER ClusterCount;

} VCN_RANGE_INPUT_BUFFER, *PVCN_RANGE_INPUT_BUFFER;

typedef struct _EXTENT_READ_CACHE_INFO_BUFFER {

    LARGE_INTEGER AllocatedCache;
    LARGE_INTEGER PopulatedCache;
    LARGE_INTEGER InErrorCache;

} EXTENT_READ_CACHE_INFO_BUFFER, *PEXTENT_READ_CACHE_INFO_BUFFER;


//
//==================== FSCTL_QUERY_REFS_VOLUME_COUNTER_INFO ======================
//
// Structure for FSCTL_QUERY_REFS_VOLUME_COUNTER_INFO
//

typedef struct _REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER {

    BOOLEAN ResetCounters;

} REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER, *PREFS_VOLUME_COUNTER_INFO_INPUT_BUFFER;

typedef struct _VOLUME_REFS_INFO_BUFFER {

    //
    //  These values will not be affected at reset
    //

    LARGE_INTEGER CacheSizeInBytes;
    LARGE_INTEGER AllocatedCacheInBytes;
    LARGE_INTEGER PopulatedCacheInBytes;
    LARGE_INTEGER InErrorCacheInBytes;
    LARGE_INTEGER MemoryUsedForCacheMetadata;
    ULONG CacheLineSize;
    LONG CacheTransactionsOutstanding;
    LONG CacheLinesFree;
    LONG CacheLinesInError;

    //
    //  These values will be affected at reset
    //

    LARGE_INTEGER CacheHitsInBytes;
    LARGE_INTEGER CacheMissesInBytes;
    LARGE_INTEGER CachePopulationUpdatesInBytes;
    LARGE_INTEGER CacheWriteThroughUpdatesInBytes;
    LARGE_INTEGER CacheInvalidationsInBytes;
    LARGE_INTEGER CacheOverReadsInBytes;
    LARGE_INTEGER MetadataWrittenBytes;

    LONG CacheHitCounter;
    LONG CacheMissCounter;
    LONG CacheLineAllocationCounter;
    LONG CacheInvalidationsCounter;
    LONG CachePopulationUpdatesCounter;
    LONG CacheWriteThroughUpdatesCounter;
    LONG MaxCacheTransactionsOutstanding;

//  LONG TimeRequiredForCacheHitIn100us;
//  LONG TimeRequiredForCacheMissIn100us;

    LONG DataWritesReallocationCount;
    LONG DataInPlaceWriteCount;
    LONG MetadataAllocationsFastTierCount;
    LONG MetadataAllocationsSlowTierCount;
    LONG DataAllocationsFastTierCount;
    LONG DataAllocationsSlowTierCount;

    LONG DestagesSlowTierToFastTier;
    LONG DestagesFastTierToSlowTier;
    LONG SlowTierDataFillRatio;
    LONG FastTierDataFillRatio;
    LONG SlowTierMetadataFillRatio;
    LONG FastTierMetadataFillRatio;

    LONG SlowToFastDestageReadLatency;
    LONG SlowToFastDestageReadLatencyBase;

    LONG SlowToFastDestageWriteLatency;
    LONG SlowToFastDestageWriteLatencyBase;

    LONG FastToSlowDestageReadLatency;
    LONG FastToSlowDestageReadLatencyBase;

    LONG FastToSlowDestageWriteLatency;
    LONG FastToSlowDestageWriteLatencyBase;

    LONG SlowTierContainerFillRatio;
    LONG SlowTierContainerFillRatioBase;

    LONG FastTierContainerFillRatio;
    LONG FastTierContainerFillRatioBase;

    LONG TreeUpdateLatency;
    LONG TreeUpdateLatencyBase;

    LONG CheckpointLatency;
    LONG CheckpointLatencyBase;

    LONG TreeUpdateCount;
    LONG CheckpointCount;
    LONG LogWriteCount;
    LONG LogFillRatio;

    LONG ReadCacheInvalidationsForOverwrite;
    LONG ReadCacheInvalidationsForReuse;
    LONG ReadCacheInvalidationsGeneral;

    LONG ReadCacheChecksOnMount;
    LONG ReadCacheIssuesOnMount;

    LONG TrimLatency;
    LONG TrimLatencyBase;

    LONG DataCompactionCount;

    LONG CompactionReadLatency;
    LONG CompactionReadLatencyBase;

    LONG CompactionWriteLatency;
    LONG CompactionWriteLatencyBase;

} VOLUME_REFS_INFO_BUFFER, *PVOLUME_REFS_INFO_BUFFER;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_THRESHOLD */

//
//==================== FSCTL_GHOST_FILE_EXTENTS ===========================
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)
typedef struct _FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER ByteCount;

    GUID RecallOwnerGuid;

    ULONG RecallMetadataBufferSize;
    UCHAR RecallMetadataBuffer[ANYSIZE_ARRAY];

} FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER, *PFSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER;
#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)

//
//==================== FSCTL_QUERY_GHOSTED_FILE_EXTENTS =======================
//

typedef struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER ByteCount;

} FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE, *PFSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE;

typedef struct _GHOSTED_FILE_EXTENT {

    LARGE_INTEGER FileOffset;
    LARGE_INTEGER ByteCount;

    GUID RecallOwnerGuid;
    ULONG NextEntryOffset;
    ULONG RecallMetadataBufferSize;
    UCHAR RecallMetadataBuffer[ANYSIZE_ARRAY];

} GHOSTED_FILE_EXTENT, *PGHOSTED_FILE_EXTENT;

typedef struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT {

    ULONG ExtentCount;
    ULONG TotalExtentCount;
    UCHAR Extents[ANYSIZE_ARRAY];

} FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT, *PFSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT;

#define GHOSTED_FILE_EXTENTS_OUTPUT_SIZE(Count, MaxRecallMetadataBufferSize)   \
  FIELD_OFFSET(FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT, Extents) +             \
      ALIGN_UP((FIELD_OFFSET(GHOSTED_FILE_EXTENT, RecallMetadataBuffer) +      \
                MaxRecallMetadataBufferSize),                                  \
               8) *                                                            \
          (Count)

//
//==================== FSCTL_UNMAP_SPACE =======================
//

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)
typedef struct _FSCTL_UNMAP_SPACE_INPUT_BUFFER {

    LARGE_INTEGER BytesToUnmap;

} FSCTL_UNMAP_SPACE_INPUT_BUFFER, *PFSCTL_UNMAP_SPACE_INPUT_BUFFER;

typedef struct _FSCTL_UNMAP_SPACE_OUTPUT {

    LARGE_INTEGER BytesUnmapped;

} FSCTL_UNMAP_SPACE_OUTPUT, *PFSCTL_UNMAP_SPACE_OUTPUT;

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_TH2)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)
//
//==================== FSCTL_QUERY_VOLUME_NUMA_INFO =======================
//

typedef struct _FSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT {

    ULONG NumaNode;

} FSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT, *PFSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT;

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)

//
//================== FSCTL_REFS_DEALLOCATE_RANGES ====================
//

typedef struct _REFS_DEALLOCATE_RANGES_RANGE{

    ULONGLONG StartOfRange;
    ULONGLONG CountOfRange;

} REFS_DEALLOCATE_RANGES_RANGE, *PREFS_DEALLOCATE_RANGES_RANGE;

typedef struct _REFS_DEALLOCATE_RANGES_INPUT_BUFFER {

    ULONG RangeCount;
    REFS_DEALLOCATE_RANGES_RANGE Ranges[ANYSIZE_ARRAY];

} REFS_DEALLOCATE_RANGES_INPUT_BUFFER, *PREFS_DEALLOCATE_RANGES_INPUT_BUFFER;

#endif // #if (_WIN32_WINNT >= _WIN32_WINNT_WIN10_RS2)


#define IO_QOS_MAX_RESERVATION 1000000000ULL


//
// Some applications include both ntioapi_x.h and winioctl.h
//

#ifndef SMB_CCF_APP_INSTANCE_EA_NAME
#define SMB_CCF_APP_INSTANCE_EA_NAME   "ClusteredApplicationInstance"
#endif //SMB_CCF_APP_INSTANCE_EA_NAME

#ifndef _NETWORK_APP_INSTANCE_EA_DEFINED
#define _NETWORK_APP_INSTANCE_EA_DEFINED

#if (NTDDI_VERSION >= NTDDI_WIN10)

//
// Define the SMB Cluster Client Failover AppInstance Extended Attribute name
// newer version of input payload assumes that EA is not just a GUID,
// but instead is a structure that contains additional information
//

//
// Is used only when file is opened directly on CSVFS. This flag is ignored when file
// is opened over SMB.
// Tells CSVFS that this file open should be valid only on coordinating node.
// If open comes to CSVFS, and this node is not a coordinating then open would fail.
// If file is opened, and coordinating node is moved then file open will be invalidated
//
#ifndef NETWORK_APP_INSTANCE_CSV_FLAGS_VALID_ONLY_IF_CSV_COORDINATOR
#define NETWORK_APP_INSTANCE_CSV_FLAGS_VALID_ONLY_IF_CSV_COORDINATOR 0x00000001
#endif //NETWORK_APP_INSTANCE_CSV_FLAGS_VALID_ONLY_IF_CSV_COORDINATOR

typedef struct _NETWORK_APP_INSTANCE_EA {

    //
    //  The caller places a GUID that should always be unique for a single instance of
    //  the application.
    //

    GUID AppInstanceID;

    //
    //  Combination of the NETWORK_APP_INSTANCE_CSV_FLAGS_* flags
    //

    ULONG CsvFlags;

} NETWORK_APP_INSTANCE_EA, *PNETWORK_APP_INSTANCE_EA;

#endif // (NTDDI_VERSION >= NTDDI_WIN10)

#endif //_NETWORK_APP_INSTANCE_EA_DEFINED


//
// Object Information Classes
//

typedef enum _OBJECT_INFORMATION_CLASS {
    ObjectBasicInformation = 0,
    ObjectTypeInformation = 2
} OBJECT_INFORMATION_CLASS;
//
//  Public Object Information definitions
//

typedef struct _PUBLIC_OBJECT_BASIC_INFORMATION {
    ULONG Attributes;
    ACCESS_MASK GrantedAccess;
    ULONG HandleCount;
    ULONG PointerCount;

    ULONG Reserved[10];    // reserved for internal use

} PUBLIC_OBJECT_BASIC_INFORMATION, *PPUBLIC_OBJECT_BASIC_INFORMATION;

typedef struct __PUBLIC_OBJECT_TYPE_INFORMATION {

    UNICODE_STRING TypeName;

    ULONG Reserved [22];    // reserved for internal use

} PUBLIC_OBJECT_TYPE_INFORMATION, *PPUBLIC_OBJECT_TYPE_INFORMATION;

#if (NTDDI_VERSION >= NTDDI_NT4)
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryObject (
    _In_opt_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetSecurityObject (
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQuerySecurityObject (
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_opt_(Length) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Length,
    _Out_ PULONG LengthNeeded
    );
#endif

// begin_wudfpwdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtClose (
    _In_ _Post_ptr_invalid_ HANDLE Handle
    );
#endif // NTDDI_VERSION >= NTDDI_WIN2K

// end_wudfpwdm


#if (NTDDI_VERSION >= NTDDI_WIN2K)
typedef enum _MEMORY_INFORMATION_CLASS {
    MemoryBasicInformation
} MEMORY_INFORMATION_CLASS;
#endif

typedef enum _VIRTUAL_MEMORY_INFORMATION_CLASS {
    VmPrefetchInformation
} VIRTUAL_MEMORY_INFORMATION_CLASS;


typedef struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    ULONG AllocationProtect;
    SIZE_T RegionSize;
    ULONG State;
    ULONG Protect;
    ULONG Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;


#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateSection (
    _Out_ PHANDLE SectionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_opt_ HANDLE FileHandle
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
__drv_allocatesMem(Mem)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAllocateVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ _At_ (*BaseAddress, _Readable_bytes_ (*RegionSize) _Writable_bytes_ (*RegionSize) _Post_readable_byte_size_ (*RegionSize)) PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG Protect
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFreeVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ __drv_freesMem(Mem) PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG FreeType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ MEMORY_INFORMATION_CLASS MemoryInformationClass,
    _Out_writes_bytes_(MemoryInformationLength) PVOID MemoryInformation,
    _In_ SIZE_T MemoryInformationLength,
    _Out_opt_ PSIZE_T ReturnLength
    );
#endif

typedef struct _MEMORY_RANGE_ENTRY {
    PVOID VirtualAddress;
    SIZE_T NumberOfBytes;
} MEMORY_RANGE_ENTRY, *PMEMORY_RANGE_ENTRY;

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Must_inspect_result_ 
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_ VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
    _In_ ULONG_PTR NumberOfEntries,
    _In_reads_(NumberOfEntries) PMEMORY_RANGE_ENTRY VirtualAddresses,
    _In_reads_bytes_(VmInformationLength) PVOID VmInformation,
    _In_ ULONG VmInformationLength
    );
#endif

//
// Data structure used to represent client security context for a thread.
// This data structure is used to support impersonation.
//
//  THE FIELDS OF THIS DATA STRUCTURE SHOULD BE CONSIDERED OPAQUE
//  BY ALL EXCEPT THE SECURITY ROUTINES.
//

typedef struct _SECURITY_CLIENT_CONTEXT {
    SECURITY_QUALITY_OF_SERVICE SecurityQos;
    PACCESS_TOKEN ClientToken;
    BOOLEAN DirectlyAccessClientToken;
    BOOLEAN DirectAccessEffectiveOnly;
    BOOLEAN ServerIsRemote;
    TOKEN_CONTROL ClientTokenControl;
    } SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT;

//
// where
//
//    SecurityQos - is the security quality of service information in effect
//        for this client.  This information is used when directly accessing
//        the client's token.  In this case, the information here over-rides
//        the information in the client's token.  If a copy of the client's
//        token is requested, it must be generated using this information,
//        not the information in the client's token.  In all cases, this
//        information may not provide greater access than the information
//        in the client's token.  In particular, if the client's token is
//        an impersonation token with an impersonation level of
//        "SecurityDelegation", but the information in this field indicates
//        an impersonation level of "SecurityIdentification", then
//        the server may only get a copy of the token with an Identification
//        level of impersonation.
//
//    ClientToken - If the DirectlyAccessClientToken field is FALSE,
//        then this field contains a pointer to a duplicate of the
//        client's token.  Otherwise, this field points directly to
//        the client's token.
//
//    DirectlyAccessClientToken - This boolean flag indicates whether the
//        token pointed to by ClientToken is a copy of the client's token
//        or is a direct reference to the client's token.  A value of TRUE
//        indicates the client's token is directly accessed, FALSE indicates
//        a copy has been made.
//
//    DirectAccessEffectiveOnly - This boolean flag indicates whether the
//        the disabled portions of the token that is currently directly
//        referenced may be enabled.  This field is only valid if the
//        DirectlyAccessClientToken field is TRUE.  In that case, this
//        value supersedes the EffectiveOnly value in the SecurityQos
//        FOR THE CURRENT TOKEN ONLY!  If the client changes to impersonate
//        another client, this value may change.  This value is always
//        minimized by the EffectiveOnly flag in the SecurityQos field.
//
//    ServerIsRemote - If TRUE indicates that the server of the client's
//        request is remote.  This is used for determining the legitimacy
//        of certain levels of impersonation and to determine how to
//        track context.
//
//    ClientTokenControl - If the ServerIsRemote flag is TRUE, and the
//        tracking mode is DYNAMIC, then this field contains a copy of
//        the TOKEN_SOURCE from the client's token to assist in deciding
//        whether the information at the remote server needs to be
//        updated to match the current state of the client's security
//        context.
//
//
//    NOTE: At some point, we may find it worthwhile to keep an array of
//          elements in this data structure, where each element of the
//          array contains {ClientToken, ClientTokenControl} fields.
//          This would allow efficient handling of the case where a client
//          thread was constantly switching between a couple different
//          contexts - presumably impersonating client's of its own.
//
#define NTKERNELAPI DECLSPEC_IMPORT     
#define NTHALAPI DECLSPEC_IMPORT            
//
// Priority increment definitions.  The comment for each definition gives
// the names of the system services that use the definition when satisfying
// a wait.
//

//
// Priority increment used when satisfying a wait on an executive event
// (NtPulseEvent and NtSetEvent)
//

#define EVENT_INCREMENT                 1

//
// Priority increment when no I/O has been done.  This is used by device
// and file system drivers when completing an IRP (IoCompleteRequest).
//

#define IO_NO_INCREMENT                 0


//
// Priority increment for completing CD-ROM I/O.  This is used by CD-ROM device
// and file system drivers when completing an IRP (IoCompleteRequest)
//

#define IO_CD_ROM_INCREMENT             1

//
// Priority increment for completing disk I/O.  This is used by disk device
// and file system drivers when completing an IRP (IoCompleteRequest)
//

#define IO_DISK_INCREMENT               1

//
// Priority increment for completing mailslot I/O.  This is used by the mail-
// slot file system driver when completing an IRP (IoCompleteRequest).
//

#define IO_MAILSLOT_INCREMENT           2

//
// Priority increment for completing named pipe I/O.  This is used by the
// named pipe file system driver when completing an IRP (IoCompleteRequest).
//

#define IO_NAMED_PIPE_INCREMENT         2

//
// Priority increment for completing network I/O.  This is used by network
// device and network file system drivers when completing an IRP
// (IoCompleteRequest).
//

#define IO_NETWORK_INCREMENT            2

//
// Priority increment used when satisfying a wait on an executive semaphore
// (NtReleaseSemaphore)
//

#define SEMAPHORE_INCREMENT             1


#ifndef _OB_REFERENCE_TAGS_
#define _OB_REFERENCE_TAGS_

//
// Object Manager Public Reference Tags
//

#define REFTAG_AFDCONN 'CdfA'
#define REFTAG_AFDENDPOINT 'EdfA'
#define REFTAG_AFDPOLL 'PdfA'
#define REFTAG_ALEIO 'IelA'
#define REFTAG_ALEPROCTBL 'PelA'
#define REFTAG_ALESIDTOKEN 'SelA'
#define REFTAG_CFSFILTER 'FsfC'
#define REFTAG_DWMKERNEL 'KmwD'
#define REFTAG_HTTP 'pttH'
#define REFTAG_MAILSLOT 'sFsM'
#define REFTAG_NFSVOLUME 'VsfN'
#define REFTAG_PGMFILE 'TmgP'
#define REFTAG_PSLOOKUP 'ULsP'
#define REFTAG_PSNOTIFICATION 'oNsP'
#define REFTAG_PSWAKE 'kWsP'
#define REFTAG_RAWENDPOINT 'EwaR'
#define REFTAG_TCPENDPOINT 'EpcT'
#define REFTAG_TCPLISTENER 'LpcT'
#define REFTAG_TCPTCB 'TpcT'
#define REFTAG_UDPENDPOINT 'EpdU'
#define REFTAG_USRKDESKTOP 'DrsU'
#define REFTAG_VIDEO_PORT_I386 'idiV'
#define REFTAG_VIDEO_PORT 'PdiV'
#define REFTAG_WIN32K 'k23W'
#define REFTAG_WIN32KQUEUE 'q23W'
#define REFTAG_WIN32KRESTRICT 'r23W'
#define REFTAG_WIN32KSERVER 'S23W'
#define REFTAG_WIN32KSTUBS 's23W'
#define REFTAG_WS2IFSL 'i2sW'
#define REFTAG_WSKNAMERES 'NksW'
#define REFTAG_WSKPROV 'PksW'
#define REFTAG_WSKTDI 'TksW'

#endif // _OB_REFERENCE_TAGS_



//
// Memory priority definitions.
//

#define SYSTEM_PAGE_PRIORITY_BITS       3
#define SYSTEM_PAGE_PRIORITY_LEVELS     (1 << SYSTEM_PAGE_PRIORITY_BITS)


//
// Miscellaneous type definitions
//
// APC state
//
// N.B. The user APC pending field must be the last member of this structure.
//

typedef struct _KAPC_STATE {
    LIST_ENTRY ApcListHead[MaximumMode];
    struct _KPROCESS *Process;
    union {
        UCHAR InProgressFlags;
        struct {
            BOOLEAN KernelApcInProgress : 1;
            BOOLEAN SpecialApcInProgress : 1;
        };
    };

    BOOLEAN KernelApcPending;
    BOOLEAN UserApcPending;
} KAPC_STATE, *PKAPC_STATE, *PRKAPC_STATE;

//
// Queue object
//
// begin_ntosp

typedef struct _KQUEUE {
    DISPATCHER_HEADER Header;
    LIST_ENTRY EntryListHead;       // Object lock
    volatile ULONG CurrentCount;    // Interlocked
    ULONG MaximumCount;
    LIST_ENTRY ThreadListHead;      // Object lock
} KQUEUE, *PKQUEUE, *PRKQUEUE;

// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
KeInitializeMutant (
    _Out_ PRKMUTANT Mutant,
    _In_ BOOLEAN InitialOwner
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeQueryOwnerMutant (
    _In_ PKMUTANT Mutant,
    _Out_ PCLIENT_ID ClientId
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateMutant (
    _In_ PRKMUTANT Mutant
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_When_(Wait==0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Wait==1, _IRQL_requires_max_(APC_LEVEL))
_When_(Wait==1, __drv_reportError("Caution: 'Wait' argument does not provide"
                                      " any synchronization guarantees, only a hint"
                                      " to the system that the thread will immediately"
                                      " issue a wait operation"))
NTKERNELAPI
LONG
KeReleaseMutant (
    _Inout_ PRKMUTANT Mutant,
    _In_ KPRIORITY Increment,
    _In_ BOOLEAN Abandoned,
    _In_ BOOLEAN Wait
    );
#endif

//
// Queue Object.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
KeInitializeQueue (
    _Out_ PRKQUEUE Queue,
    _In_ ULONG Count
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateQueue (
    _In_ PRKQUEUE Queue
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeInsertQueue (
    _Inout_ PRKQUEUE Queue,
    _Inout_ PLIST_ENTRY Entry
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeInsertHeadQueue (
    _Inout_ PRKQUEUE Queue,
    _Inout_ PLIST_ENTRY Entry
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_min_(PASSIVE_LEVEL)
_When_((Timeout==NULL || Timeout->QuadPart!=0), _IRQL_requires_max_(APC_LEVEL))
_When_((Timeout!=NULL && Timeout->QuadPart==0), _IRQL_requires_max_(DISPATCH_LEVEL))
NTKERNELAPI
PLIST_ENTRY
KeRemoveQueue (
    _Inout_ PRKQUEUE Queue,
    _In_ KPROCESSOR_MODE WaitMode,
    _In_opt_ PLARGE_INTEGER Timeout
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_min_(PASSIVE_LEVEL)
_When_((Timeout==NULL || Timeout->QuadPart!=0), _IRQL_requires_max_(APC_LEVEL))
_When_((Timeout!=NULL && Timeout->QuadPart==0), _IRQL_requires_max_(DISPATCH_LEVEL))
NTKERNELAPI
ULONG
KeRemoveQueueEx (
    _Inout_ PKQUEUE Queue,
    _In_ KPROCESSOR_MODE WaitMode,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout,
    _Out_writes_to_(Count, return) PLIST_ENTRY *EntryArray,
    _In_ ULONG Count
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PLIST_ENTRY
KeRundownQueue (
    _Inout_ PRKQUEUE Queue
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeAttachProcess (
    _Inout_ PRKPROCESS Process
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeDetachProcess (
    VOID
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeStackAttachProcess (
    _Inout_ PRKPROCESS PROCESS,
    _Out_ PRKAPC_STATE ApcState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeUnstackDetachProcess (
    _In_ PRKAPC_STATE ApcState
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
__drv_reportError("DISPATCH_LEVEL is only supported on Windows 7 or later.")
NTKERNELAPI
NTSTATUS
KeExpandKernelStackAndCalloutEx (
    _In_ PEXPAND_STACK_CALLOUT Callout,
    _In_opt_ PVOID Parameter,
    _In_ SIZE_T Size,
    _In_ BOOLEAN Wait,
    _In_opt_ PVOID Context
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
UCHAR
KeSetIdealProcessorThread (
    _Inout_ PKTHREAD Thread,
    _In_ UCHAR Processor
    );
#endif

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
KeSetKernelStackSwapEnable (
    _In_ BOOLEAN Enable
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WINXP)
_Requires_lock_not_held_(Number)
_Acquires_lock_(Number)
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
KIRQL
FASTCALL
KeAcquireQueuedSpinLock (
    _In_ KSPIN_LOCK_QUEUE_NUMBER Number
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Requires_lock_held_(Number)
_Releases_lock_(Number)
NTKERNELAPI
VOID
FASTCALL
KeReleaseQueuedSpinLock (
    _In_ KSPIN_LOCK_QUEUE_NUMBER Number,
    _In_ KIRQL OldIrql
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
_Post_satisfies_(return == 1 || return == 0)
NTKERNELAPI
LOGICAL
FASTCALL
KeTryToAcquireQueuedSpinLock (
    _In_ KSPIN_LOCK_QUEUE_NUMBER Number,
    _Out_ _At_(*OldIrql, _IRQL_saves_)
    PKIRQL OldIrql
    );
#endif

#if defined(_X86_)   

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Requires_lock_not_held_(*SpinLock)
_Acquires_lock_(*SpinLock)
_IRQL_raises_(SYNCH_LEVEL)
_IRQL_saves_
NTKERNELAPI
KIRQL
FASTCALL
KeAcquireSpinLockRaiseToSynch (
    _Inout_ PKSPIN_LOCK SpinLock
    );
#endif

#else 


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Requires_lock_not_held_(*SpinLock)
_Acquires_lock_(*SpinLock)
_IRQL_raises_(SYNCH_LEVEL)
_IRQL_saves_
NTKERNELAPI
KIRQL
KeAcquireSpinLockRaiseToSynch (
    _Inout_ PKSPIN_LOCK SpinLock
    );
#endif

#endif 

#define INVALID_PROCESSOR_INDEX     0xffffffff

NTSTATUS
KeGetProcessorNumberFromIndex (
    _In_ ULONG ProcIndex,
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );

ULONG
KeGetProcessorIndexFromNumber (
    _In_ PPROCESSOR_NUMBER ProcNumber
    );


#if (NTDDI_VERSION >= NTDDI_WIN2K)

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
SIZE_T
ExQueryPoolBlockSize (
    _In_ PVOID PoolBlock,
    _Out_ PBOOLEAN QuotaCharged
    );

#endif


//
// InterlockedPushListSList
//

#if !defined(_WINBASE_)

#if (NTDDI_VERSION >= NTDDI_WINXP)

PSLIST_ENTRY
FASTCALL
InterlockedPushListSList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_ __drv_aliasesMem PSLIST_ENTRY List,
    _Inout_ PSLIST_ENTRY ListEnd,
    _In_ ULONG Count
    );

#endif // NTDDI_VERSION >= NTDDI_WINXP

#endif // !defined(_WINBASE_)

//
// Define interlocked lookaside list structure and allocation functions.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExAdjustLookasideDepth (
    VOID
    );

#endif


#if !defined(_X86AMD64_)

#if defined(_WIN64)

C_ASSERT(sizeof(ERESOURCE) == 0x68);
C_ASSERT(FIELD_OFFSET(ERESOURCE,ActiveCount) == 0x18);
C_ASSERT(FIELD_OFFSET(ERESOURCE,Flag) == 0x1a);

#else

C_ASSERT(sizeof(ERESOURCE) == 0x38);
C_ASSERT(FIELD_OFFSET(ERESOURCE,ActiveCount) == 0x0c);
C_ASSERT(FIELD_OFFSET(ERESOURCE,Flag) == 0x0e);

#endif

#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExDisableResourceBoostLite (
    _In_ PERESOURCE Resource
    );

#endif


#define ExDisableResourceBoost ExDisableResourceBoostLite


//
// Push lock definitions
//


#define EX_PUSH_LOCK ULONG_PTR
#define PEX_PUSH_LOCK PULONG_PTR


VOID
ExInitializePushLock (
    _Out_ PEX_PUSH_LOCK PushLock
    );

//
// Token Flags
//
// Flags that may be defined in the TokenFlags field of the token object,
// or in an ACCESS_STATE structure
//

#define TOKEN_HAS_TRAVERSE_PRIVILEGE    0x0001
#define TOKEN_HAS_BACKUP_PRIVILEGE      0x0002
#define TOKEN_HAS_RESTORE_PRIVILEGE     0x0004
#define TOKEN_WRITE_RESTRICTED          0x0008
#define TOKEN_IS_RESTRICTED             0x0010
#define TOKEN_SESSION_NOT_REFERENCED    0x0020
#define TOKEN_SANDBOX_INERT             0x0040
#define TOKEN_HAS_IMPERSONATE_PRIVILEGE 0x0080
#define SE_BACKUP_PRIVILEGES_CHECKED    0x0100
#define TOKEN_VIRTUALIZE_ALLOWED        0x0200
#define TOKEN_VIRTUALIZE_ENABLED        0x0400
#define TOKEN_IS_FILTERED               0x0800
#define TOKEN_UIACCESS                  0x1000
#define TOKEN_NOT_LOW                   0x2000
#define TOKEN_LOWBOX                    0x4000
#define TOKEN_HAS_OWN_CLAIM_ATTRIBUTES  0x8000

#define TOKEN_PRIVATE_NAMESPACE                     0x00010000
#define TOKEN_DO_NOT_USE_GLOBAL_ATTRIBS_FOR_QUERY   0x00020000
#define SPECIAL_ENCRYPTED_OPEN                      0x00040000
#define TOKEN_NO_CHILD_PROCESS                      0x00080000
#define TOKEN_NO_CHILD_PROCESS_UNLESS_SECURE        0x00100000
#define TOKEN_AUDIT_NO_CHILD_PROCESS                0x00200000


typedef struct _SE_EXPORTS {

    //
    // Privilege values
    //

    LUID    SeCreateTokenPrivilege;
    LUID    SeAssignPrimaryTokenPrivilege;
    LUID    SeLockMemoryPrivilege;
    LUID    SeIncreaseQuotaPrivilege;
    LUID    SeUnsolicitedInputPrivilege;
    LUID    SeTcbPrivilege;
    LUID    SeSecurityPrivilege;
    LUID    SeTakeOwnershipPrivilege;
    LUID    SeLoadDriverPrivilege;
    LUID    SeCreatePagefilePrivilege;
    LUID    SeIncreaseBasePriorityPrivilege;
    LUID    SeSystemProfilePrivilege;
    LUID    SeSystemtimePrivilege;
    LUID    SeProfileSingleProcessPrivilege;
    LUID    SeCreatePermanentPrivilege;
    LUID    SeBackupPrivilege;
    LUID    SeRestorePrivilege;
    LUID    SeShutdownPrivilege;
    LUID    SeDebugPrivilege;
    LUID    SeAuditPrivilege;
    LUID    SeSystemEnvironmentPrivilege;
    LUID    SeChangeNotifyPrivilege;
    LUID    SeRemoteShutdownPrivilege;


    //
    // Universally defined Sids
    //


    PSID  SeNullSid;
    PSID  SeWorldSid;
    PSID  SeLocalSid;
    PSID  SeCreatorOwnerSid;
    PSID  SeCreatorGroupSid;


    //
    // Nt defined Sids
    //


    PSID  SeNtAuthoritySid;
    PSID  SeDialupSid;
    PSID  SeNetworkSid;
    PSID  SeBatchSid;
    PSID  SeInteractiveSid;
    PSID  SeLocalSystemSid;
    PSID  SeAliasAdminsSid;
    PSID  SeAliasUsersSid;
    PSID  SeAliasGuestsSid;
    PSID  SeAliasPowerUsersSid;
    PSID  SeAliasAccountOpsSid;
    PSID  SeAliasSystemOpsSid;
    PSID  SeAliasPrintOpsSid;
    PSID  SeAliasBackupOpsSid;

    //
    // New Sids defined for NT5
    //

    PSID  SeAuthenticatedUsersSid;

    PSID  SeRestrictedSid;
    PSID  SeAnonymousLogonSid;

    //
    // New Privileges defined for NT5
    //

    LUID  SeUndockPrivilege;
    LUID  SeSyncAgentPrivilege;
    LUID  SeEnableDelegationPrivilege;

    //
    // New Sids defined for post-Windows 2000

    PSID  SeLocalServiceSid;
    PSID  SeNetworkServiceSid;

    //
    // New Privileges defined for post-Windows 2000
    //

    LUID  SeManageVolumePrivilege;
    LUID  SeImpersonatePrivilege;
    LUID  SeCreateGlobalPrivilege;

    //
    // New Privileges defined for post Windows Server 2003
    //

    LUID  SeTrustedCredManAccessPrivilege;
    LUID  SeRelabelPrivilege;
    LUID  SeIncreaseWorkingSetPrivilege;

    LUID  SeTimeZonePrivilege;
    LUID  SeCreateSymbolicLinkPrivilege;

    //
    // New Sids defined for post Windows Server 2003
    //

    PSID  SeIUserSid;

    //
    // Mandatory Sids, ordered lowest to highest.
    //

    PSID SeUntrustedMandatorySid;
    PSID SeLowMandatorySid;
    PSID SeMediumMandatorySid;
    PSID SeHighMandatorySid;
    PSID SeSystemMandatorySid;

    PSID SeOwnerRightsSid;

    //
    // Package/Capability Sids.
    //

    PSID SeAllAppPackagesSid;
    PSID SeUserModeDriversSid;

    //
    // Trusted Installer SID.
    //

    PSID SeTrustedInstallerSid;

    //
    // New Privileges defined for Windows 10
    //

    LUID  SeDelegateSessionUserImpersonatePrivilege;

} SE_EXPORTS, *PSE_EXPORTS;

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
//              Logon session notification callback routines                 //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

//
//  These callback routines are used to notify file systems that have
//  registered of logon sessions being terminated, so they can cleanup state
//  associated with this logon session
//

typedef
NTSTATUS
SE_LOGON_SESSION_TERMINATED_ROUTINE(
    _In_ PLUID LogonId);
typedef SE_LOGON_SESSION_TERMINATED_ROUTINE *PSE_LOGON_SESSION_TERMINATED_ROUTINE;

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
typedef
NTSTATUS
SE_LOGON_SESSION_TERMINATED_ROUTINE_EX(
    _In_ PLUID LogonId,
    _In_ PESILO pServerSilo,
    _In_opt_ PVOID Context);
typedef SE_LOGON_SESSION_TERMINATED_ROUTINE_EX *PSE_LOGON_SESSION_TERMINATED_ROUTINE_EX;
#endif

//++
//
//  ULONG
//  SeLengthSid(
//      _In_ PSID Sid
//      );
//
//  Routine Description:
//
//      This routine computes the length of a SID.
//
//  Arguments:
//
//      Sid - Points to the SID whose length is to be returned.
//
//  Return Value:
//
//      The length, in bytes of the SID.
//
//--

#define SeLengthSid( Sid ) \
    (8 + (4 * ((SID *)Sid)->SubAuthorityCount))

//
//VOID
//SeDeleteClientSecurity(
//    _In_ PSECURITY_CLIENT_CONTEXT ClientContext
//    )
//
///*++
//
//Routine Description:
//
//    This service deletes a client security context block,
//    performing whatever cleanup might be necessary to do so.  In
//    particular, reference to any client token is removed.
//
//Arguments:
//
//    ClientContext - Points to the client security context block to be
//        deleted.
//
//
//Return Value:
//
//
//
//--*/
//--

// begin_ntosp
#define SeDeleteClientSecurity(C)  {                                           \
            if (SeTokenType((C)->ClientToken) == TokenPrimary) {               \
                PsDereferencePrimaryToken( (C)->ClientToken );                 \
            } else {                                                           \
                PsDereferenceImpersonationToken( (C)->ClientToken );           \
            }                                                                  \
        }


//++
//VOID
//SeStopImpersonatingClient()
//
///*++
//
//Routine Description:
//
//    This service is used to stop impersonating a client using an
//    impersonation token.  This service must be called in the context
//    of the server thread which wishes to stop impersonating its
//    client.
//
//
//Arguments:
//
//    None.
//
//Return Value:
//
//    None.
//
//--*/
//--

#define SeStopImpersonatingClient() PsRevertToSelf()


//++
//
//  PACCESS_TOKEN
//  SeQuerySubjectContextToken(
//      _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
//      );
//
//  Routine Description:
//
//      This routine returns the effective token from the subject context,
//      either the client token, if present, or the process token.
//
//  Arguments:
//
//      SubjectContext - Context to query
//
//  Return Value:
//
//      This routine returns the PACCESS_TOKEN for the effective token.
//      The pointer may be passed to SeQueryInformationToken.  This routine
//      does not affect the lock status of the token, i.e. the token is not
//      locked.  If the SubjectContext has been locked, the token remains locked,
//      if not, the token remains unlocked.
//
//--

#define SeQuerySubjectContextToken( SubjectContext ) \
        ( ARGUMENT_PRESENT( ((PSECURITY_SUBJECT_CONTEXT) SubjectContext)->ClientToken) ? \
            ((PSECURITY_SUBJECT_CONTEXT) SubjectContext)->ClientToken : \
            ((PSECURITY_SUBJECT_CONTEXT) SubjectContext)->PrimaryToken )


#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeCaptureSubjectContextEx (
    _In_opt_ PETHREAD Thread,
    _In_ PEPROCESS Process,
    _Out_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
#endif

// begin_wdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeCaptureSubjectContext (
    _Out_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeLockSubjectContext(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeUnlockSubjectContext(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeReleaseSubjectContext (
    _Inout_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
#endif


NTSTATUS
SeReportSecurityEventWithSubCategory(
    _In_ ULONG Flags,
    _In_ PUNICODE_STRING SourceName,
    _In_opt_ PSID UserSid,
    _In_ PSE_ADT_PARAMETER_ARRAY AuditParameters,
    _In_ ULONG AuditSubcategoryId
    );

BOOLEAN
SeAccessCheckFromState (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
    _In_opt_ PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK PreviouslyGrantedAccess,
    _Outptr_opt_result_maybenull_ PPRIVILEGE_SET *Privileges,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );

#if (NTDDI_VERSION >= NTDDI_WIN8)
BOOLEAN
SeAccessCheckFromStateEx (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_TOKEN PrimaryToken,
    _In_opt_ PACCESS_TOKEN ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK PreviouslyGrantedAccess,
    _Outptr_opt_result_maybenull_ PPRIVILEGE_SET *Privileges,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTSTATUS
SeTokenFromAccessInformation(
    _In_opt_ PTOKEN_ACCESS_INFORMATION AccessInformation,
    _Inout_opt_ PACCESS_TOKEN Token,
    _In_ ULONG Length,
    _Out_ PULONG RequiredLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
SePrivilegeCheck(
    _Inout_ PPRIVILEGE_SET RequiredPrivileges,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _In_ KPROCESSOR_MODE AccessMode
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeFreePrivileges(
    _In_ PPRIVILEGE_SET Privileges
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeOpenObjectAuditAlarm (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeOpenObjectAuditAlarmWithTransaction (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_opt_ GUID *TransactionId,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeOpenObjectForDeleteAuditAlarm (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeOpenObjectForDeleteAuditAlarmWithTransaction (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_opt_ GUID *TransactionId,
    _Out_ PBOOLEAN GenerateOnClose
    );

NTKERNELAPI
VOID
SeExamineSacl(
    _In_ PACL Sacl,
    _In_ PACL ResourceSacl,
    _In_ PACCESS_TOKEN Token,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN AccessGranted,
    _Out_ PBOOLEAN GenerateAudit,
    _Out_ PBOOLEAN GenerateAlarm
    );

#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeDeleteObjectAuditAlarm(
    _In_ PVOID Object,
    _In_ HANDLE Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeDeleteObjectAuditAlarmWithTransaction(
    _In_ PVOID Object,
    _In_ HANDLE Handle,
    _In_opt_ GUID *TransactionId
    );



#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)              
NTKERNELAPI                                     
TOKEN_TYPE                                      
SeTokenType(                                    
    _In_ PACCESS_TOKEN Token                    
    );                                          
#endif                                          
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
SeTokenIsAdmin(
    _In_ PACCESS_TOKEN Token
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
SeTokenIsRestricted(
    _In_ PACCESS_TOKEN Token
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA || (NTDDI_VERSION >= NTDDI_WINXPSP2 && NTDDI_VERSION < NTDDI_WS03))
NTKERNELAPI
BOOLEAN
SeTokenIsWriteRestricted(
    _In_ PACCESS_TOKEN Token
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
NTKERNELAPI
BOOLEAN
SeTokenIsNoChildProcessRestrictionEnforced(
    _In_ PACCESS_TOKEN Token,
    _Out_opt_ PBOOLEAN UnlessSecure
    );

NTKERNELAPI
VOID
SeTokenSetNoChildProcessRestricted(
    _In_ PACCESS_TOKEN Token,
    _In_ BOOLEAN UnlessSecure,
    _In_ BOOLEAN AuditOnly
    );

NTKERNELAPI
VOID
SeTokenGetNoChildProcessRestricted(
    _In_ PACCESS_TOKEN Token,
    _Out_ PBOOLEAN Enforced,
    _Out_ PBOOLEAN UnlessSecure,
    _Out_ PBOOLEAN AuditOnly
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
NTSTATUS
SeFilterToken (
    _In_ PACCESS_TOKEN ExistingToken,
    _In_ ULONG Flags,
    _In_opt_ PTOKEN_GROUPS SidsToDisable,
    _In_opt_ PTOKEN_PRIVILEGES PrivilegesToDelete,
    _In_opt_ PTOKEN_GROUPS RestrictedSids,
    _Outptr_ PACCESS_TOKEN * FilteredToken
    );
#endif

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeQueryAuthenticationIdToken(
    _In_ PACCESS_TOKEN Token,
    _Out_ PLUID AuthenticationId
    );
#endif

// end_ntosp

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeQueryTokenIntegrity(
    _In_ PACCESS_TOKEN Token,
    _Inout_ PSID_AND_ATTRIBUTES IntegritySA
    );
#endif
// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeQuerySessionIdToken(
    _In_ PACCESS_TOKEN Token,
    _Out_ PULONG SessionId
    );

NTKERNELAPI
NTSTATUS
SeQuerySessionIdTokenEx(
    _In_ PACCESS_TOKEN Token,
    _Out_ PULONG SessionId,
    _Out_ PBOOLEAN IsServiceSession
    );
#endif

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
NTKERNELAPI
NTSTATUS
SeQueryServerSiloToken(
    _In_ PACCESS_TOKEN Token,
    _Out_ PESILO *pServerSilo
    );
#endif
// end_ntosp

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
NTSTATUS
SeSetSessionIdToken(
    _In_ PACCESS_TOKEN Token,
    _In_ ULONG SessionId
    );
#endif

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeCreateClientSecurity (
    _In_ PETHREAD ClientThread,
    _In_ PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
    _In_ BOOLEAN RemoteSession,
    _Out_ PSECURITY_CLIENT_CONTEXT ClientContext
    );
#endif
// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
SeImpersonateClient(
    _In_ PSECURITY_CLIENT_CONTEXT ClientContext,
    _In_opt_ PETHREAD ServerThread
    );
#endif

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeImpersonateClientEx(
    _In_ PSECURITY_CLIENT_CONTEXT ClientContext,
    _In_opt_ PETHREAD ServerThread
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeCreateClientSecurityFromSubjectContext (
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_ PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
    _In_ BOOLEAN ServerIsRemote,
    _Out_ PSECURITY_CLIENT_CONTEXT ClientContext
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeQuerySecurityDescriptorInfo (
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_(*Length) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PULONG Length,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeSetSecurityDescriptorInfo (
    _In_opt_ PVOID Object,
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR ModificationDescriptor,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    _In_ POOL_TYPE PoolType,
    _In_ PGENERIC_MAPPING GenericMapping
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeSetSecurityDescriptorInfoEx (
    _In_opt_ PVOID Object,
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR ModificationDescriptor,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    _In_ ULONG AutoInheritFlags,
    _In_ POOL_TYPE PoolType,
    _In_ PGENERIC_MAPPING GenericMapping
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeAppendPrivileges(
    _Inout_ PACCESS_STATE AccessState,
    _In_ PPRIVILEGE_SET Privileges
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
SeAuditHardLinkCreation(
    _In_ _In_ PUNICODE_STRING FileName,
    _In_ _In_ PUNICODE_STRING LinkName,
    _In_ _In_ BOOLEAN bSuccess
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeAuditHardLinkCreationWithTransaction(
    _In_ PUNICODE_STRING FileName,
    _In_ PUNICODE_STRING LinkName,
    _In_ BOOLEAN bSuccess,
    _In_opt_ GUID *TransactionId
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
NTKERNELAPI
VOID
SeAuditFipsCryptoSelftests(
    _In_ BOOLEAN bSuccess,
    _In_ ULONG SelftestCode
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
SeAuditTransactionStateChange(
    _In_ GUID *TransactionId,
    _In_ GUID *ResourceManagerId,
    _In_ ULONG NewTransactionState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
SeAuditingFileEvents(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
NTKERNELAPI
BOOLEAN
SeAuditingFileEventsWithContext(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
BOOLEAN
SeAuditingAnyFileEventsWithContext(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
    BOOLEAN
    SeAuditingFileEventsWithContextEx(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _Out_opt_ PBOOLEAN StagingEnabled
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
    BOOLEAN
    SeAuditingAnyFileEventsWithContextEx(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _Out_opt_ PBOOLEAN StagingEnabled
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
VOID
SeAdjustAccessStateForTrustLabel(
    _In_ PVOID ObjectType,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PACCESS_STATE AccessState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
VOID
SeAdjustAccessStateForAccessConstraints(
    _In_ PVOID ObjectType,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PACCESS_STATE AccessState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
BOOLEAN
SeShouldCheckForAccessRightsFromParent(
    _In_ PVOID ObjectType,
    _In_ PSECURITY_DESCRIPTOR ChildDescriptor,
    _In_ PACCESS_STATE AccessState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2KSP3)
NTKERNELAPI
BOOLEAN
SeAuditingHardLinkEvents(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXPSP2)
NTKERNELAPI
BOOLEAN
SeAuditingHardLinkEventsWithContext(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
SeAuditingFileOrGlobalEvents(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
VOID
SeSetAccessStateGenericMapping (
    _Inout_ PACCESS_STATE AccessState,
    _In_ PGENERIC_MAPPING GenericMapping
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeRegisterLogonSessionTerminatedRoutine(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeUnregisterLogonSessionTerminatedRoutine(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
NTKERNELAPI
NTSTATUS
SeRegisterLogonSessionTerminatedRoutineEx(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE_EX CallbackRoutine,
    _In_ PVOID Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
NTKERNELAPI
NTSTATUS
SeUnregisterLogonSessionTerminatedRoutineEx(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE_EX CallbackRoutine,
    _In_ PVOID Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
SeMarkLogonSessionForTerminationNotification(
    _In_ PLUID LogonId
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
NTKERNELAPI
NTSTATUS
SeMarkLogonSessionForTerminationNotificationEx(
    _In_ PLUID LogonId,
    _In_ PESILO pServerSilo
    );
#endif
// begin_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define QUERY_TYPE_ULONG(TokenInformationClass) TokenInformationClass == TokenIntegrityLevel        || \
                                                TokenInformationClass == TokenIsAppContainer        || \
                                                TokenInformationClass == TokenVirtualizationAllowed || \
                                                TokenInformationClass == TokenVirtualizationEnabled || \
                                                TokenInformationClass == TokenUIAccess              || \
                                                TokenInformationClass == TokenSessionId             || \
                                                TokenInformationClass == TokenHasRestrictions       || \
                                                TokenInformationClass == TokenAppContainerNumber    || \
                                                TokenInformationClass == TokenPrivateNameSpace

_When_(QUERY_TYPE_ULONG(TokenInformationClass), _At_((PULONG)TokenInformation, _Out_))
_When_(!QUERY_TYPE_ULONG(TokenInformationClass), _At_(TokenInformation, _Outptr_result_buffer_(_Inexpressible_(token-dependent))))
NTKERNELAPI
NTSTATUS
SeQueryInformationToken (
    _In_ PACCESS_TOKEN Token,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
         PVOID *TokenInformation
    );
#endif


NTSTATUS
SeLocateProcessImageName(
    _Inout_ PEPROCESS Process,
    _Outptr_ PUNICODE_STRING *pImageFileName
    );

//
//  Grants access to SeExports structure
//

extern NTKERNELAPI PSE_EXPORTS SeExports;


#if (NTDDI_VERSION >= NTDDI_WIN7)

NTKERNELAPI
VOID
SeExamineGlobalSacl(
    _In_ PUNICODE_STRING ObjectType,
    _In_ PACL ResourceSacl,
    _In_ PACCESS_TOKEN Token,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN AccessGranted,
    _Inout_ PBOOLEAN GenerateAudit,
    _Inout_opt_ PBOOLEAN GenerateAlarm
);

NTKERNELAPI
VOID
SeMaximumAuditMaskFromGlobalSacl(
    _In_opt_ PUNICODE_STRING ObjectTypeName,
    _In_ ACCESS_MASK GrantedAccess,
    _In_ PACCESS_TOKEN Token,
    _Inout_ PACCESS_MASK AuditMask
    );

#endif


#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
NTSYSAPI
BOOLEAN
NTAPI
RtlIsSandboxedToken (
    _In_opt_ PSECURITY_SUBJECT_CONTEXT Context,
    _In_ KPROCESSOR_MODE PreviousMode
    );
#endif


#if !defined(_PSGETCURRENTTHREAD_)

#define _PSGETCURRENTTHREAD_

_IRQL_requires_max_(DISPATCH_LEVEL)
CFORCEINLINE
PETHREAD
PsGetCurrentThread (
    VOID
    )

/*++

Routine Description:

    This function returns a pointer to the current executive thread object.

Arguments:

    None.

Return Value:

    A pointer to the current executive thread object.

--*/

{

    return (PETHREAD)KeGetCurrentThread();
}

#endif


//
// Security Support
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsAssignImpersonationToken(
    _In_ PETHREAD Thread,
    _In_opt_ HANDLE Token
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PACCESS_TOKEN
PsReferencePrimaryToken (
    _Inout_ PEPROCESS Process
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsDereferencePrimaryToken(
    _In_ PACCESS_TOKEN PrimaryToken
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsDereferenceImpersonationToken(
    _In_ PACCESS_TOKEN ImpersonationToken
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PACCESS_TOKEN
PsReferenceImpersonationToken(
    _Inout_ PETHREAD Thread,
    _Out_ PBOOLEAN CopyOnOpen,
    _Out_ PBOOLEAN EffectiveOnly,
    _Out_ PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
LARGE_INTEGER
PsGetProcessExitTime(
    VOID
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PsIsThreadTerminating(
    _In_ PETHREAD Thread
    );
#endif

// begin_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsImpersonateClient(
    _Inout_ PETHREAD Thread,
    _In_opt_ PACCESS_TOKEN Token,
    _In_ BOOLEAN CopyOnOpen,
    _In_ BOOLEAN EffectiveOnly,
    _In_ SECURITY_IMPERSONATION_LEVEL ImpersonationLevel
    );
#endif

// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
PsDisableImpersonation(
    _Inout_ PETHREAD Thread,
    _Inout_ PSE_IMPERSONATION_STATE ImpersonationState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsRestoreImpersonation(
    _Inout_ PETHREAD Thread,
    _In_ PSE_IMPERSONATION_STATE ImpersonationState
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsRevertToSelf(
    VOID
    );
#endif


_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsLookupProcessByProcessId(
    _In_ HANDLE ProcessId,
    _Outptr_ PEPROCESS *Process
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsLookupThreadByThreadId(
    _In_ HANDLE ThreadId,
    _Outptr_ PETHREAD *Thread
    );

//
// Quota Operations
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PsChargePoolQuota (
    _In_ PEPROCESS Process,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR Amount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsChargeProcessPoolQuota (
    _In_ PEPROCESS Process,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR Amount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PsReturnPoolQuota(
    _In_ PEPROCESS Process,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR Amount
    );
#endif


NTKERNELAPI
PEPROCESS
PsGetThreadProcess(
    _In_ PETHREAD Thread
    );

#if (NTDDI_VERSION >= NTDDI_WINXP)  
NTKERNELAPI                         
BOOLEAN                             
PsIsSystemThread(                   
    _In_ PETHREAD Thread            
    );                              
#endif                              

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
PsUpdateDiskCounters (
    _Inout_ PEPROCESS Process,
    _In_ ULONG64 BytesRead,
    _In_ ULONG64 BytesWritten,
    _In_ ULONG ReadOperationCount,
    _In_ ULONG WriteOperationCount,
    _In_ ULONG FlushOperationCount
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
BOOLEAN
PsIsDiskCountersEnabled (
    VOID
    );
#endif


#define IO_OPEN_PAGING_FILE             0x0002
#define IO_OPEN_TARGET_DIRECTORY        0x0004

#define IO_STOP_ON_SYMLINK              0x0008


#define IO_MM_PAGING_FILE               0x0010


#define IO_IGNORE_READONLY_ATTRIBUTE    0x0040


//
// Define driver FS notification change routine type.
//

typedef
VOID
DRIVER_FS_NOTIFICATION (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _In_ BOOLEAN FsActive
    );

typedef DRIVER_FS_NOTIFICATION *PDRIVER_FS_NOTIFICATION;


//
//  Valid values for FS_FILTER_PARAMETERS.AcquireForSectionSynchronization.SyncType
//

typedef enum _FS_FILTER_SECTION_SYNC_TYPE {
    SyncTypeOther = 0,
    SyncTypeCreateSection
} FS_FILTER_SECTION_SYNC_TYPE, *PFS_FILTER_SECTION_SYNC_TYPE;


#define FS_FILTER_SECTION_SYNC_SUPPORTS_ASYNC_PARALLEL_IO         (0x00000001)
#define FS_FILTER_SECTION_SYNC_SUPPORTS_DIRECT_MAP_DATA           (0x00000002)
#define FS_FILTER_SECTION_SYNC_SUPPORTS_DIRECT_MAP_IMAGE          (0x00000004)

typedef struct _FS_FILTER_SECTION_SYNC_OUTPUT {
    ULONG StructureSize;
    ULONG SizeReturned;
    ULONG Flags;
    ULONG DesiredReadAlignment;
} FS_FILTER_SECTION_SYNC_OUTPUT, *PFS_FILTER_SECTION_SYNC_OUTPUT;

//
//  Valid values for FS_FILTER_PARAMETERS.NotifyStreamFileObject.NotificationType
//

typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE {
    NotifyTypeCreate = 0,
    NotifyTypeRetired
} FS_FILTER_STREAM_FO_NOTIFICATION_TYPE, *PFS_FILTER_STREAM_FO_NOTIFICATION_TYPE;

//
//  Parameters union for the operations that
//  are exposed to the filters through the
//  FsFilterCallbacks registration mechanism.
//

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4324) // structure was padded due to __declspec(align())
#endif

typedef struct _IRP *PIRP;

typedef union _FS_FILTER_PARAMETERS {

    //
    //  AcquireForModifiedPageWriter
    //

    struct {
        PLARGE_INTEGER EndingOffset;
        PERESOURCE *ResourceToRelease;
    } AcquireForModifiedPageWriter;

    //
    //  ReleaseForModifiedPageWriter
    //

    struct {
        PERESOURCE ResourceToRelease;
    } ReleaseForModifiedPageWriter;

    //
    //  AcquireForSectionSynchronization
    //

    struct {
        FS_FILTER_SECTION_SYNC_TYPE SyncType;
        ULONG PageProtection;
        PFS_FILTER_SECTION_SYNC_OUTPUT OutputInformation;
    } AcquireForSectionSynchronization;

    //
    //  NotifyStreamFileObjectCreation
    //

    struct {
        FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType;
        BOOLEAN POINTER_ALIGNMENT SafeToRecurse;
    } NotifyStreamFileObject;

    //
    // QueryOpen
    //

    struct {
        PIRP Irp;
        PVOID FileInformation;
        PULONG Length;
        FILE_INFORMATION_CLASS FileInformationClass;
        NTSTATUS CompletionStatus;
    } QueryOpen;

    //
    //  Other
    //

    struct {
        PVOID Argument1;
        PVOID Argument2;
        PVOID Argument3;
        PVOID Argument4;
        PVOID Argument5;
    } Others;

} FS_FILTER_PARAMETERS, *PFS_FILTER_PARAMETERS;

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

//
//  These are the valid values for the Operation field
//  of the FS_FILTER_CALLBACK_DATA structure.
//

#define FS_FILTER_ACQUIRE_FOR_SECTION_SYNCHRONIZATION      (UCHAR)-1
#define FS_FILTER_RELEASE_FOR_SECTION_SYNCHRONIZATION      (UCHAR)-2
#define FS_FILTER_ACQUIRE_FOR_MOD_WRITE                    (UCHAR)-3
#define FS_FILTER_RELEASE_FOR_MOD_WRITE                    (UCHAR)-4
#define FS_FILTER_ACQUIRE_FOR_CC_FLUSH                     (UCHAR)-5
#define FS_FILTER_RELEASE_FOR_CC_FLUSH                     (UCHAR)-6
#define FS_FILTER_QUERY_OPEN                               (UCHAR)-7

typedef struct _FS_FILTER_CALLBACK_DATA {

    ULONG SizeOfFsFilterCallbackData;
    UCHAR Operation;
    UCHAR Reserved;

    struct _DEVICE_OBJECT *DeviceObject;
    struct _FILE_OBJECT *FileObject;

    FS_FILTER_PARAMETERS Parameters;

} FS_FILTER_CALLBACK_DATA, *PFS_FILTER_CALLBACK_DATA;

//
//  Prototype for the callbacks received before an operation
//  is passed to the base file system.
//
//  A filter can fail this operation, but consistant failure
//  will halt system progress.
//

typedef
NTSTATUS
(*PFS_FILTER_CALLBACK) (
    _In_ PFS_FILTER_CALLBACK_DATA Data,
    _Out_ PVOID *CompletionContext
    );

//
//  Prototype for the completion callback received after an
//  operation is completed.
//

typedef
VOID
(*PFS_FILTER_COMPLETION_CALLBACK) (
    _In_ PFS_FILTER_CALLBACK_DATA Data,
    _In_ NTSTATUS OperationStatus,
    _In_ PVOID CompletionContext
    );

//
//  This is the structure that the file system filter fills in to
//  receive notifications for these locking operations.
//
//  A filter should set the field to NULL for any notification callback
//  it doesn't wish to receive.
//

typedef struct _FS_FILTER_CALLBACKS {

    ULONG SizeOfFsFilterCallbacks;
    ULONG Reserved; //  For alignment

    PFS_FILTER_CALLBACK PreAcquireForSectionSynchronization;
    PFS_FILTER_COMPLETION_CALLBACK PostAcquireForSectionSynchronization;
    PFS_FILTER_CALLBACK PreReleaseForSectionSynchronization;
    PFS_FILTER_COMPLETION_CALLBACK PostReleaseForSectionSynchronization;
    PFS_FILTER_CALLBACK PreAcquireForCcFlush;
    PFS_FILTER_COMPLETION_CALLBACK PostAcquireForCcFlush;
    PFS_FILTER_CALLBACK PreReleaseForCcFlush;
    PFS_FILTER_COMPLETION_CALLBACK PostReleaseForCcFlush;
    PFS_FILTER_CALLBACK PreAcquireForModifiedPageWriter;
    PFS_FILTER_COMPLETION_CALLBACK PostAcquireForModifiedPageWriter;
    PFS_FILTER_CALLBACK PreReleaseForModifiedPageWriter;
    PFS_FILTER_COMPLETION_CALLBACK PostReleaseForModifiedPageWriter;
    PFS_FILTER_CALLBACK PreQueryOpen;
    PFS_FILTER_COMPLETION_CALLBACK PostQueryOpen;

} FS_FILTER_CALLBACKS, *PFS_FILTER_CALLBACKS;

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
NTSTATUS
FsRtlRegisterFileSystemFilterCallbacks (
    _In_ struct _DRIVER_OBJECT *FilterDriverObject,
    _In_ PFS_FILTER_CALLBACKS Callbacks
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
NTSTATUS
FsRtlNotifyStreamFileObject (
    _In_ struct _FILE_OBJECT * StreamFileObject,
    _In_opt_ struct _DEVICE_OBJECT *DeviceObjectHint,
    _In_ FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType,
    _In_ BOOLEAN SafeToRecurse
    );
#endif // NTDDI_VERSION >= NTDDI_VISTA

#define DO_VERIFY_VOLUME                    0x00000002      
#define DO_BUFFERED_IO                      0x00000004      
#define DO_EXCLUSIVE                        0x00000008      
#define DO_DIRECT_IO                        0x00000010      
#define DO_MAP_IO_BUFFER                    0x00000020      
#define DO_DEVICE_HAS_NAME                  0x00000040      
#define DO_DEVICE_INITIALIZING              0x00000080      
#define DO_SYSTEM_BOOT_PARTITION            0x00000100      
#define DO_LONG_TERM_REQUESTS               0x00000200      
#define DO_NEVER_LAST_DEVICE                0x00000400      
#define DO_SHUTDOWN_REGISTERED              0x00000800      
#define DO_BUS_ENUMERATED_DEVICE            0x00001000      
#define DO_POWER_PAGABLE                    0x00002000      
#define DO_POWER_INRUSH                     0x00004000      
#define DO_LOW_PRIORITY_FILESYSTEM          0x00010000      
#define DO_SUPPORTS_PERSISTENT_ACLS         0x00020000      
#define DO_SUPPORTS_TRANSACTIONS            0x00040000      
#define DO_FORCE_NEITHER_IO                 0x00080000      
#define DO_VOLUME_DEVICE_OBJECT             0x00100000      
#define DO_SYSTEM_SYSTEM_PARTITION          0x00200000      
#define DO_SYSTEM_CRITICAL_PARTITION        0x00400000      
#define DO_DISALLOW_EXECUTE                 0x00800000      
#define DO_DEVICE_TO_BE_RESET               0x04000000      
#define DO_DEVICE_IRP_REQUIRES_EXTENSION    0x08000000      
#define DO_DAX_VOLUME                       0x10000000      

//
// The following are global counters used by the I/O system to indicate the
// amount of I/O being performed in the system.  The first three counters
// are just that, counts of operations that have been requested, while the
// last three counters track the amount of data transferred for each type
// of I/O request.
//

extern KSPIN_LOCK IoStatisticsLock;
extern ULONG IoReadOperationCount;
extern ULONG IoWriteOperationCount;
extern ULONG IoOtherOperationCount;
extern LARGE_INTEGER IoReadTransferCount;
extern LARGE_INTEGER IoWriteTransferCount;
extern LARGE_INTEGER IoOtherTransferCount;

//
// It is difficult for cached file systems to properly charge quota
// for the storage that they allocate on behalf of user file handles,
// so the following amount of additional quota is charged against each
// handle as a "best guess" as to the amount of quota the file system
// will allocate on behalf of this handle.
//

//
// These numbers are totally arbitrary, and can be changed if it turns out
// that the file systems actually allocate more (or less) on behalf of
// their file objects.  The non-paged pool charge constant is added to the
// size of a FILE_OBJECT to get the actual charge amount.
//

#define IO_FILE_OBJECT_NON_PAGED_POOL_CHARGE    64
#define IO_FILE_OBJECT_PAGED_POOL_CHARGE        1024



#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
IoAcquireVpbSpinLock(
    _Out_ PKIRQL Irql
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoCheckDesiredAccess(
    _Inout_ PACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK GrantedAccess
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoCheckEaBufferValidity(
    _In_  PFILE_FULL_EA_INFORMATION EaBuffer,
    _In_  ULONG EaLength,
    _Out_ PULONG ErrorOffset
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoCheckFunctionAccess(
    _In_ ACCESS_MASK GrantedAccess,
    _In_ UCHAR MajorFunction,
    _In_ UCHAR MinorFunction,
    _In_ ULONG IoControlCode,
    _In_opt_ PVOID Arg1,
    _In_opt_ PVOID Arg2
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoCheckQuerySetFileInformation(
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG Length,
    _In_ BOOLEAN SetOperation
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoCheckQuerySetVolumeInformation(
    _In_ FS_INFORMATION_CLASS FsInformationClass,
    _In_ ULONG Length,
    _In_ BOOLEAN SetOperation
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoCheckQuotaBufferValidity(
    _In_  PFILE_QUOTA_INFORMATION QuotaBuffer,
    _In_  ULONG QuotaLength,
    _Out_ PULONG ErrorOffset
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_OBJECT
IoCreateStreamFileObject(
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_OBJECT
IoCreateStreamFileObjectEx(
    _In_opt_  PFILE_OBJECT FileObject,
    _In_opt_  PDEVICE_OBJECT DeviceObject,
    _Out_opt_ PHANDLE FileHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_OBJECT
IoCreateStreamFileObjectLite(
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define IO_CREATE_STREAM_FILE_RAISE_ON_ERROR    0x0001
#define IO_CREATE_STREAM_FILE_LITE              0x0002

typedef struct _IO_CREATE_STREAM_FILE_OPTIONS {
    USHORT Size;
    USHORT Flags;
    PDEVICE_OBJECT TargetDeviceObject;
} IO_CREATE_STREAM_FILE_OPTIONS, *PIO_CREATE_STREAM_FILE_OPTIONS;

_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoCreateStreamFileObjectEx2(
    _In_ PIO_CREATE_STREAM_FILE_OPTIONS CreateOptions,
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _Out_ PFILE_OBJECT* StreamFileObject,
    _Out_opt_ PHANDLE FileHandle
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
IoFastQueryNetworkAttributes(
    _In_  POBJECT_ATTRIBUTES ObjectAttributes,
    _In_  ACCESS_MASK DesiredAccess,
    _In_  ULONG OpenOptions,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _Out_ PFILE_NETWORK_OPEN_INFORMATION Buffer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoPageRead(
    _In_  PFILE_OBJECT FileObject,
    _In_  PMDL MemoryDescriptorList,
    _In_  PLARGE_INTEGER StartingOffset,
    _In_  PKEVENT Event,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PDEVICE_OBJECT
IoGetAttachedDevice(
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)          // wdm
_IRQL_requires_max_(DISPATCH_LEVEL)               // wdm
NTKERNELAPI                                 // wdm
PDEVICE_OBJECT                              // wdm
IoGetAttachedDeviceReference(               // wdm
    _In_ PDEVICE_OBJECT DeviceObject        // wdm
    );                                      // wdm
#endif                                      // wdm
                                            // wdm
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PDEVICE_OBJECT
IoGetBaseFileSystemDeviceObject(
    _In_ PFILE_OBJECT FileObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)          // ntddk
_IRQL_requires_max_(PASSIVE_LEVEL)                // ntddk ntosp
NTKERNELAPI                                 // ntddk ntosp
PCONFIGURATION_INFORMATION                  // ntddk ntosp
IoGetConfigurationInformation( VOID );      // ntddk ntosp
#endif                                      // ntddk


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PDEVICE_OBJECT
IoGetDeviceToVerify(
    _In_ PETHREAD Thread
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
ULONG
IoGetRequestorProcessId(
    _In_ PIRP Irp
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PEPROCESS
IoGetRequestorProcess(
    _In_ PIRP Irp
    );
#endif

// begin_wdm

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PIRP
IoGetTopLevelIrp(
    VOID
    );
#endif


//++
//
// BOOLEAN
// IoIsFileOpenedExclusively(
//     _In_ PFILE_OBJECT FileObject
//     )
//
// Routine Description:
//
//     This routine is invoked to determine whether the file open represented
//     by the specified file object is opened exclusively.
//
// Arguments:
//
//     FileObject - Pointer to the file object that represents the open instance
//         of the target file to be tested for exclusive access.
//
// Return Value:
//
//     The function value is TRUE if the open instance of the file is exclusive;
//     otherwise FALSE is returned.
//
//--

#define IoIsFileOpenedExclusively( FileObject ) (\
    (BOOLEAN) !((FileObject)->SharedRead || (FileObject)->SharedWrite || (FileObject)->SharedDelete))

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
IoIsOperationSynchronous(
    _In_ PIRP Irp
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
IoIsSystemThread(
    _In_ PETHREAD Thread
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#if defined(_X86_) || defined(_AMD64_)
NTKERNELAPI
BOOLEAN
IoIsValidNameGraftingBuffer(
    _In_ PIRP Irp,
    _In_ PREPARSE_DATA_BUFFER ReparseBuffer
    );
#endif
#endif


#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
NTSTATUS
IoQueryFileDosDeviceName(
    _In_  PFILE_OBJECT FileObject,
    _Out_ POBJECT_NAME_INFORMATION *ObjectNameInformation
    );
#endif

// begin_ntosp
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoQueryFileInformation(
    _In_  PFILE_OBJECT FileObject,
    _In_  FILE_INFORMATION_CLASS FileInformationClass,
    _In_  ULONG Length,
    _Out_ PVOID FileInformation,
    _Out_ PULONG ReturnedLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoQueryVolumeInformation(
    _In_  PFILE_OBJECT FileObject,
    _In_  FS_INFORMATION_CLASS FsInformationClass,
    _In_  ULONG Length,
    _Out_ PVOID FsInformation,
    _Out_ PULONG ReturnedLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
IoQueueThreadIrp(
    _In_ PIRP Irp
    );
#endif

// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
IoRegisterFileSystem(
    _In_ __drv_aliasesMem PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoRegisterFsRegistrationChange(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
NTSTATUS
IoRegisterFsRegistrationChangeMountAware(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
    _In_ BOOLEAN SynchronizeWithMounts
    );
#endif

#if (NTDDI_VERSION == NTDDI_WIN2K)
//  This API only exists in W2K, it does not exist in any later OS
NTKERNELAPI
NTSTATUS
IoRegisterFsRegistrationChangeEx(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03SP1)
NTKERNELAPI
NTSTATUS
IoEnumerateRegisteredFiltersList(
    _Out_writes_bytes_to_opt_(DriverObjectListSize,(*ActualNumberDriverObjects)*sizeof(PDRIVER_OBJECT)) PDRIVER_OBJECT *DriverObjectList,
    _In_  ULONG  DriverObjectListSize,          //in bytes
    _Out_ PULONG ActualNumberDriverObjects      //in elements
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
NTSTATUS
IoReplaceFileObjectName (
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(FileNameLength) PWSTR NewFileName,
    _In_ USHORT FileNameLength
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
IoReleaseVpbSpinLock(
    _In_ KIRQL Irql
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoSetDeviceToVerify(
    _In_ PETHREAD Thread,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoSetInformation(
    _In_ PFILE_OBJECT FileObject,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG Length,
    _In_ PVOID FileInformation
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
IoSetTopLevelIrp(
    _In_opt_ PIRP Irp
    );
#endif


//++
//
// USHORT
// IoSizeOfIrp(
//     _In_ CCHAR StackSize
//     )
//
// Routine Description:
//
//     Determines the size of an IRP given the number of stack locations
//     the IRP will have.
//
// Arguments:
//
//     StackSize - Number of stack locations for the IRP.
//
// Return Value:
//
//     Size in bytes of the IRP.
//
//--

#define IoSizeOfIrp( StackSize ) \
    ((USHORT) (sizeof( IRP ) + ((StackSize) * (sizeof( IO_STACK_LOCATION )))))

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
_IRQL_requires_max_(DISPATCH_LEVEL) _IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
USHORT
IoSizeOfIrpEx(
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ CCHAR StackSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL) _IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartNextPacket(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN Cancelable
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartNextPacketByKey(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN Cancelable,
    _In_ ULONG Key
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartPacket(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_opt_ PULONG Key,
    _In_opt_ PDRIVER_CANCEL CancelFunction
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
VOID
IoSetStartIoAttributes(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN DeferredStartIo,
    _In_ BOOLEAN NonCancelable
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#if defined(_AMD64_) || defined(_X86_)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartTimer(
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#if defined(_AMD64_) || defined(_X86_)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStopTimer(
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif
#endif

// end_wdm end_ntosp
// begin_ntifs

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoSynchronousPageWrite(
    _In_  PFILE_OBJECT FileObject,
    _In_  PMDL MemoryDescriptorList,
    _In_  PLARGE_INTEGER StartingOffset,
    _In_  PKEVENT Event,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
#endif

// begin_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PEPROCESS
IoThreadToProcess(
    _In_ PETHREAD Thread
    );
#endif
// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
IoUnregisterFileSystem(
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
IoUnregisterFsRegistrationChange(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoVerifyVolume(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN AllowRawMount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)              // wdm
_IRQL_requires_max_(DISPATCH_LEVEL)                   // wdm
NTKERNELAPI                                     // wdm
VOID                                            // wdm
IoWriteErrorLogEntry(                           // wdm
    _In_ PVOID ElEntry                          // wdm
    );                                          // wdm
#endif                                          // wdm


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
IoGetRequestorSessionId(
    _In_  PIRP Irp,
    _Out_ PULONG pSessionId
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
NTSTATUS
IoEnumerateDeviceObjectList(
    _In_  PDRIVER_OBJECT DriverObject,
    _Out_writes_bytes_to_opt_(DeviceObjectListSize,(*ActualNumberDeviceObjects)*sizeof(PDEVICE_OBJECT)) PDEVICE_OBJECT *DeviceObjectList,
    _In_  ULONG          DeviceObjectListSize,
    _Out_ PULONG         ActualNumberDeviceObjects
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
PDEVICE_OBJECT
IoGetLowerDeviceObject(
    _In_  PDEVICE_OBJECT  DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
PDEVICE_OBJECT
IoGetDeviceAttachmentBaseRef(
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
NTSTATUS
IoGetDiskDeviceObject(
    _In_  PDEVICE_OBJECT FileSystemDeviceObject,
    _Out_ PDEVICE_OBJECT *DiskDeviceObject
    );
#endif


//
//  IoPrioirityHint support
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _IO_PRIORITY_INFO {
    ULONG Size;
    ULONG ThreadPriority;
    ULONG PagePriority;
    IO_PRIORITY_HINT IoPriority;
} IO_PRIORITY_INFO, *PIO_PRIORITY_INFO;
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
VOID
FORCEINLINE
IoInitializePriorityInfo(
    _Out_ PIO_PRIORITY_INFO PriorityInfo
    )
{
    PriorityInfo->Size = sizeof(IO_PRIORITY_INFO);
    PriorityInfo->ThreadPriority = 0xffff;
    PriorityInfo->IoPriority = IoPriorityNormal;
    PriorityInfo->PagePriority = 0;
}
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSTATUS
IoRetrievePriorityInfo (
    _In_opt_ PIRP Irp,
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PETHREAD Thread,
    _Inout_ PIO_PRIORITY_INFO PriorityInfo
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSTATUS
IoApplyPriorityInfoThread(
    _In_ PIO_PRIORITY_INFO InputPriorityInfo,
    _Out_opt_ PIO_PRIORITY_INFO OutputPriorityInfo,
    _In_ PETHREAD Thread
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

NTSTATUS
IoGetFsZeroingOffset (
    _In_ PIRP Irp,
    _Out_ PULONG ZeroingOffset
    );

NTSTATUS
IoSetFsZeroingOffsetRequired (
    _Inout_ PIRP Irp
    );

NTSTATUS
IoSetFsZeroingOffset (
    _Inout_ PIRP Irp,
    _In_ ULONG ZeroingOffset
    );

#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

NTSTATUS
IoGetFsZeroingOffset (
    _In_ PIRP Irp,
    _Out_ PULONG ZeroingOffset
    );

NTSTATUS
IoSetFsZeroingOffsetRequired (
    _Inout_ PIRP Irp
    );

NTSTATUS
IoSetFsZeroingOffset (
    _Inout_ PIRP Irp,
    _In_ ULONG ZeroingOffset
    );

#endif

// begin_winioctl
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

//
//  This is a function prototype for a routine that will be called from the
//  IoPropagateIrpExtensionEx routine whenever the IopFsTrackOffsetType
//  extension type is set for a given IRP
//

#ifndef _IO_IRP_EXT_TRACK_OFFSET_HEADER_
#define _IO_IRP_EXT_TRACK_OFFSET_HEADER_

struct _IO_IRP_EXT_TRACK_OFFSET_HEADER;

typedef VOID
(*PIO_IRP_EXT_PROCESS_TRACKED_OFFSET_CALLBACK)(
    _In_ struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *SourceContext,
    _Inout_ struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *TargetContext,
    _In_ LONGLONG RelativeOffset
    );

//
//  When any IRP extension exists which has an OFFSET which needs processing,
//  the Irp extension field in the IRP must point to one of these structures.
//  This is so IoPropagateIrpExtensionEx can calculate proper file offset
//  adjustments for the sub IRPS as they are split and shifted
//

#define IRP_EXT_TRACK_OFFSET_HEADER_VALIDATION_VALUE 'TO'    //Track Offset

typedef struct _IO_IRP_EXT_TRACK_OFFSET_HEADER {

    USHORT Validation;

    //  Each consumer of this IRP extension must define a flag that helps
    //  identify the usage of the header. eg: EFS_TRACKED_OFFSET_HEADER_FLAG
    USHORT Flags;

    PIO_IRP_EXT_PROCESS_TRACKED_OFFSET_CALLBACK TrackedOffsetCallback;

} IO_IRP_EXT_TRACK_OFFSET_HEADER, *PIO_IRP_EXT_TRACK_OFFSET_HEADER;

//
//  When using the TrackedOffset IRP extension one of the following
//  flag must be specified so that we can distinguish it from other
//  components setting this IRP extension
//

#define EFS_TRACKED_OFFSET_HEADER_FLAG 0x0001 //EFS Flag
#define SPACES_TRACKED_OFFSET_HEADER_FLAG 0x0002 //SPACES Flag

#endif // _IO_IRP_EXT_TRACK_OFFSET_HEADER_
#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

//end_winioctl

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

NTSTATUS
IoGetFsTrackOffsetState(
    _In_ PIRP Irp,
    _Out_ PIO_IRP_EXT_TRACK_OFFSET_HEADER *RetFsTrackOffsetBlob,
    _Out_ LONGLONG *RetTrackedOffset);


NTSTATUS
IoSetFsTrackOffsetState(
    _Inout_ PIRP Irp,
    _In_ PIO_IRP_EXT_TRACK_OFFSET_HEADER FsTrackOffsetBlob,
    _In_ LONGLONG TrackedOffset);

NTSTATUS
IoClearFsTrackOffsetState(
    _Inout_ PIRP Irp
    );

BOOLEAN
IoIrpHasFsTrackOffsetExtensionType(
    _In_ PIRP Irp );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
PoRegisterSystemState (
    _Inout_opt_ PVOID StateHandle,
    _In_ EXECUTION_STATE Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoCreatePowerRequest (
    _Outptr_ PVOID *PowerRequest,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PCOUNTED_REASON_CONTEXT Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoSetPowerRequest (
    _Inout_ PVOID PowerRequest,
    _In_ POWER_REQUEST_TYPE Type
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoClearPowerRequest (
    _Inout_ PVOID PowerRequest,
    _In_ POWER_REQUEST_TYPE Type
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoDeletePowerRequest (
    _Inout_ PVOID PowerRequest
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoUnregisterSystemState (
    _Inout_ PVOID StateHandle
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
POWER_STATE
PoSetPowerState (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ POWER_STATE_TYPE Type,
    _In_ POWER_STATE State
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoCallDriver (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ __drv_aliasesMem PIRP Irp
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoStartNextPowerIrp(
    _Inout_ PIRP Irp
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PULONG
PoRegisterDeviceForIdleDetection (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG ConservationIdleTime,
    _In_ ULONG PerformanceIdleTime,
    _In_ DEVICE_POWER_STATE State
    );
#endif

#define PoSetDeviceBusy(IdlePointer) \
    *IdlePointer = 0

#if (NTDDI_VERSION >= NTDDI_WIN6SP1)
NTKERNELAPI
VOID
PoSetDeviceBusyEx (
    _Inout_ PULONG IdlePointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
VOID
PoStartDeviceBusy (
    _Inout_ PULONG IdlePointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
VOID
PoEndDeviceBusy (
    _Inout_ PULONG IdlePointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PoQueryWatchdogTime (
    _In_ PDEVICE_OBJECT Pdo,
    _Out_ PULONG SecondsRemaining
    );
#endif

typedef
_Function_class_(POWER_SETTING_CALLBACK)
_IRQL_requires_same_
NTSTATUS
POWER_SETTING_CALLBACK (
    _In_ LPCGUID SettingGuid,
    _In_reads_bytes_(ValueLength) PVOID Value,
    _In_ ULONG ValueLength,
    _Inout_opt_ PVOID Context
);

typedef POWER_SETTING_CALLBACK *PPOWER_SETTING_CALLBACK;

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoRegisterPowerSettingCallback (
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ LPCGUID SettingGuid,
    _In_ PPOWER_SETTING_CALLBACK Callback,
    _In_opt_ PVOID Context,
    _Outptr_opt_ PVOID *Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoUnregisterPowerSettingCallback (
    _Inout_ PVOID Handle
    );
#endif

// begin_wudfwdm
//
// \Callback\PowerState values
//

#define PO_CB_SYSTEM_POWER_POLICY       0
#define PO_CB_AC_STATUS                 1
#define PO_CB_BUTTON_COLLISION          2 // deprecated
#define PO_CB_SYSTEM_STATE_LOCK         3
#define PO_CB_LID_SWITCH_STATE          4
#define PO_CB_PROCESSOR_POWER_POLICY    5 // deprecated


// Used for queuing work items to be performed at shutdown time.  Same
// rules apply as per Ex work queues.
#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoQueueShutdownWorkItem(
    _Inout_ __drv_aliasesMem PWORK_QUEUE_ITEM WorkItem
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
MmIsRecursiveIoFault (
    VOID
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmForceSectionClosed (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ BOOLEAN DelayClose
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
ULONGLONG
MmGetMaximumFileSectionSize (
    VOID
    );
#endif


typedef enum _MMFLUSH_TYPE {
    MmFlushForDelete,
    MmFlushForWrite
} MMFLUSH_TYPE;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmFlushImageSection (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ MMFLUSH_TYPE FlushType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmCanFileBeTruncated (
    _In_ PSECTION_OBJECT_POINTERS SectionPointer,
    _In_opt_ PLARGE_INTEGER NewFileSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmSetAddressRangeModified (
    _In_reads_bytes_ (Length) PVOID Address,
    _In_ SIZE_T Length
    );
#endif


//
// Prefetch public interface.
//

typedef struct _READ_LIST {
    PFILE_OBJECT FileObject;
    ULONG NumberOfEntries;
    LOGICAL IsImage;
    FILE_SEGMENT_ELEMENT List[ANYSIZE_ARRAY];
} READ_LIST, *PREAD_LIST;

#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef union _MM_PREFETCH_FLAGS {
    struct {
        ULONG Priority : SYSTEM_PAGE_PRIORITY_BITS;
        ULONG RepurposePriority : SYSTEM_PAGE_PRIORITY_BITS;
        ULONG PriorityProtection : 1;
        ULONG MustBeZero : 2;
        ULONG CannotBeUsedAsFlags : 23;
    } Flags;
    ULONG AllFlags;

} MM_PREFETCH_FLAGS, *PMM_PREFETCH_FLAGS;

#define MM_PREFETCH_FLAGS_MASK  ((1 << (2*SYSTEM_PAGE_PRIORITY_BITS+1)) - 1)

_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
MmPrefetchPages (
    _In_ ULONG NumberOfLists,
    _In_reads_ (NumberOfLists) PREAD_LIST *ReadLists
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
//
//  This routine is used by local file systems to detect  the case where the
//  user has closed the file handles and the section handles, but still has
//  open writable views to the file
//

_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
ULONG
MmDoesFileHaveUserWritableReferences (
    _In_ PSECTION_OBJECT_POINTERS SectionPointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
_IRQL_requires_max_ (APC_LEVEL)
LOGICAL
MmMdlPagesAreZero (
    _In_  PMDL Mdl
    );
#endif


typedef struct _PHYSICAL_MEMORY_RUN {
    PFN_NUMBER BasePage;
    PFN_NUMBER PageCount;
} PHYSICAL_MEMORY_RUN, *PPHYSICAL_MEMORY_RUN;

typedef struct _PHYSICAL_MEMORY_DESCRIPTOR {
    ULONG NumberOfRuns;
    PFN_NUMBER NumberOfPages;
    PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR, *PPHYSICAL_MEMORY_DESCRIPTOR;

typedef struct _PHYSICAL_EXTENTS_DESCRIPTOR {
    ULONG NumberOfRuns;
    ULONG NumberOfValidRuns;
    PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_EXTENTS_DESCRIPTOR, *PPHYSICAL_EXTENTS_DESCRIPTOR;

                                                
#if defined(_M_IX86) || defined(_M_AMD64)       
                                                
#define HalGetDmaAlignmentRequirement() 1L      
                                                
#elif defined(_M_ARM) || defined(_M_ARM64)      
                                                
#define HalGetDmaAlignmentRequirement() 1L      
                                                
#endif                                          
                                                
#if defined(_ARM_) || defined(_ARM64_)          
                                                
#endif                                          
                                                
//
// Performance counter function.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTHALAPI
LARGE_INTEGER
KeQueryPerformanceCounter (
   _Out_opt_ PLARGE_INTEGER PerformanceFrequency
   );
#endif

// begin_ntndis
//
// Stall processor execution function.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTHALAPI
VOID
KeStallExecutionProcessor (
    _In_ ULONG MicroSeconds
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
ObInsertObject(
    _In_ PVOID Object,
    _Inout_opt_ PACCESS_STATE PassedAccessState,
    _In_opt_ ACCESS_MASK DesiredAccess,
    _In_ ULONG ObjectPointerBias,
    _Out_opt_ PVOID *NewObject,
    _Out_opt_ PHANDLE Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
ObOpenObjectByPointer(
    _In_ PVOID Object,
    _In_ ULONG HandleAttributes,
    _In_opt_ PACCESS_STATE PassedAccessState,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PHANDLE Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
NTSTATUS
ObOpenObjectByPointerWithTag(
    _In_ PVOID Object,
    _In_ ULONG HandleAttributes,
    _In_opt_ PACCESS_STATE PassedAccessState,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ ULONG Tag,
    _Out_ PHANDLE Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
ObMakeTemporaryObject(
    _In_ PVOID Object
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
ObQueryNameString(
    _In_ PVOID Object,
    _Out_writes_bytes_opt_(Length) POBJECT_NAME_INFORMATION ObjectNameInfo,
    _In_ ULONG Length,
    _Out_ PULONG ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
BOOLEAN
ObIsKernelHandle (
    _In_ HANDLE Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
ObQueryObjectAuditingByHandle(
    _In_ HANDLE Handle,
    _Out_ PBOOLEAN GenerateOnClose
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define DEVICE_RESET_IGNORE_OPEN_HANDLES 0x1

_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoRequestDeviceRemovalForReset(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG Flags
    );
#endif


//
//  The following are globally used definitions for an LBN and a VBN
//

typedef ULONG LBN;
typedef LBN *PLBN;

typedef ULONG VBN;
typedef VBN *PVBN;


//
//  An OPLOCK is an opaque structure, we declare it as a PVOID and
//  allocate the actual memory only when needed.  We declare it here
//  because the FSRTL_ADVANCED_FCB_HEADER needs it.
//

typedef PVOID OPLOCK, *POPLOCK;

//
//  Every file system that uses the cache manager must have FsContext
//  of the file object point to a common fcb header structure.
//

typedef enum _FAST_IO_POSSIBLE {
    FastIoIsNotPossible = 0,
    FastIoIsPossible,
    FastIoIsQuestionable
} FAST_IO_POSSIBLE;


typedef struct _FSRTL_COMMON_FCB_HEADER {

    CSHORT NodeTypeCode;
    CSHORT NodeByteSize;

    //
    //  General flags available to FsRtl.
    //

    UCHAR Flags;

    //
    //  Indicates if fast I/O is possible or if we should be calling
    //  the check for fast I/O routine which is found via the driver
    //  object.
    //

    UCHAR IsFastIoPossible; // really type FAST_IO_POSSIBLE

    //
    //  Second Flags Field
    //

    UCHAR Flags2;

    //
    //  The following reserved field should always be 0
    //

    UCHAR Reserved : 4 ;

    //
    //  Indicates the version of this header
    //

    UCHAR Version : 4 ;

    PERESOURCE Resource;

    PERESOURCE PagingIoResource;

    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER FileSize;
    LARGE_INTEGER ValidDataLength;

} FSRTL_COMMON_FCB_HEADER;
typedef FSRTL_COMMON_FCB_HEADER *PFSRTL_COMMON_FCB_HEADER;


//
//  NodeTypeCode values used ranges
//
//  CDFS                    - 0x0300 - 0x033F
//  CLFS                    - 0x0400 - 0x043F
//  WINFS                   - 0x0440 - 0x047F
//  FASTFAT                 - 0x0500 - 0x053F
//  RAW                     - 0x0600 - 0x063F
//  NTFS                    - 0x0700 - 0x07FF
//  UDFS                    - 0x0900 - 0x093F
//  EXFAT                   - 0x0D00 - 0x0D3F
//                          - 0x8000 - 0xBFFF       reserved for 3rd party file systems
//  WIMFilter               - 0x1000 - 0x103F
//  NCFILTER                - 0x2200 - 0x223F       sample minifilter
//  RDBSS                   - 0xEB00 - 0xECFF
//  NULMRX                  - 0xFF00 - 0xFF3F       sample redirector



//
//  This Fcb header is used for files which support caching
//  of compressed data, and related new support.
//
//  We start out by prefixing this structure with the normal
//  FsRtl header from above, which we have to do two different
//  ways for c++ or c.
//

#ifdef __cplusplus
typedef struct _FSRTL_ADVANCED_FCB_HEADER:FSRTL_COMMON_FCB_HEADER {
#else   // __cplusplus

typedef struct _FSRTL_ADVANCED_FCB_HEADER {

    //
    //  Put in the standard FsRtl header fields
    //

    FSRTL_COMMON_FCB_HEADER DUMMYSTRUCTNAME;

#endif  // __cplusplus

    //
    //  The following two fields are supported only if
    //  Flags2 contains FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS
    //

    //
    //  This is a pointer to a Fast Mutex which may be used to
    //  properly synchronize access to the FsRtl header.  The
    //  Fast Mutex must be nonpaged.
    //

    PFAST_MUTEX FastMutex;

    //
    // This is a pointer to a list of stream context structures belonging to
    // filesystem filter drivers that are linked above the filesystem.
    // Each structure is headed by FSRTL_FILTER_CONTEXT.
    //

    LIST_ENTRY FilterContexts;


#if (NTDDI_VERSION >= NTDDI_VISTA)
    //
    //  The following fields are valid only if the Version
    //  field in the FSRTL_COMMON_FCB_HEADER is greater than
    //  or equal to FSRTL_FCB_HEADER_V1
    //  These fields are present in VISTA and beyond
    //

    //
    //  This is a pushlock which is used to properly synchronize access
    //  to the list of stream contexts
    //

    EX_PUSH_LOCK PushLock;

    //
    //  This is a pointer to a blob of information that is
    //  associated with the opened file in the filesystem
    //  corresponding to the structure containing this
    //  FSRTL_ADVANCED_FCB_HEADER.
    //

    PVOID* FileContextSupportPointer;
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)

    //
    //  The following fields are valid only if the Version
    //  field in the FSRTL_COMMON_FCB_HEADER is greater than
    //  or equal to FSRTL_FCB_HEADER_V2.  These fields are
    //  present in Windows 8 and beyond.
    //

    //
    //  For local file system this is the oplock field used
    //  by the oplock package to maintain current information
    //  about opportunistic locks on this file/directory.
    //
    //  For remote file systems this field is reserved.
    //

    union {

        OPLOCK Oplock;
        PVOID ReservedForRemote;

    };

#endif


#if (NTDDI_VERSION >= NTDDI_WINBLUE)

    //
    //  This field is used internally by the FSRTL to assist in context lookup.
    //

    PVOID ReservedContext;

#endif

} FSRTL_ADVANCED_FCB_HEADER;
typedef FSRTL_ADVANCED_FCB_HEADER *PFSRTL_ADVANCED_FCB_HEADER;

//
//  Define FsRtl common header versions
//

#define FSRTL_FCB_HEADER_V0             (0x00)
#define FSRTL_FCB_HEADER_V1             (0x01)
#define FSRTL_FCB_HEADER_V2             (0x02)
#define FSRTL_FCB_HEADER_V3             (0x03)

//
//  Define FsRtl common header flags
//

#define FSRTL_FLAG_FILE_MODIFIED        (0x01)
#define FSRTL_FLAG_FILE_LENGTH_CHANGED  (0x02)
#define FSRTL_FLAG_LIMIT_MODIFIED_PAGES (0x04)

//
//  Following flags determine how the modified page writer should
//  acquire the file.  These flags can't change while either resource
//  is acquired.  If neither of these flags is set then the
//  modified/mapped page writer will attempt to acquire the paging io
//  resource shared.
//

#define FSRTL_FLAG_ACQUIRE_MAIN_RSRC_EX (0x08)
#define FSRTL_FLAG_ACQUIRE_MAIN_RSRC_SH (0x10)

//
//  This flag will be set by the Cache Manager if a view is mapped
//  to a file.
//

#define FSRTL_FLAG_USER_MAPPED_FILE     (0x20)

//  This flag indicates that the file system is using the
//  FSRTL_ADVANCED_FCB_HEADER structure instead of the FSRTL_COMMON_FCB_HEADER
//  structure.
//

#define FSRTL_FLAG_ADVANCED_HEADER      (0x40)

//  This flag determines whether there currently is an Eof advance
//  in progress.  All such advances must be serialized.
//

#define FSRTL_FLAG_EOF_ADVANCE_ACTIVE   (0x80)

//
//  Flag values for Flags2
//
//  All unused bits are reserved and should NOT be modified.
//

//
//  If this flag is set, the Cache Manager will allow modified writing
//  in spite of the value of FsContext2.
//

#define FSRTL_FLAG2_DO_MODIFIED_WRITE        (0x01)

//
//  If this flag is set, the additional fields FilterContexts and FastMutex
//  are supported in FSRTL_COMMON_HEADER, and can be used to associate
//  context for filesystem filters with streams.
//

#define FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS  (0x02)

//
//  If this flag is set, the cache manager will flush and purge the cache map when
//  a user first maps a file
//

#define FSRTL_FLAG2_PURGE_WHEN_MAPPED (0x04)

//  If set this represents a PAGING file
//

#define FSRTL_FLAG2_IS_PAGING_FILE (0x08)

//
//  If set, there's writable mapped section.
//  This helps Cc in deciding whether it needs to call Mm to flush before it uses its own
//  dirty pages hint during a flush.  Once set, this flag is never cleared.
//

#define FSRTL_FLAG2_WRITABLE_USER_MAPPED_FILE (0x10)


// begin_ntosp
//
//
//  The following constants are used to block top level Irp processing when
//  (in either the fast io or cc case) file system resources have been
//  acquired above the file system, or we are in an Fsp thread.
//

#define FSRTL_FSP_TOP_LEVEL_IRP                 ((LONG_PTR)0x01)
#define FSRTL_CACHE_TOP_LEVEL_IRP               ((LONG_PTR)0x02)
#define FSRTL_MOD_WRITE_TOP_LEVEL_IRP           ((LONG_PTR)0x03)
#define FSRTL_FAST_IO_TOP_LEVEL_IRP             ((LONG_PTR)0x04)
#define FSRTL_NETWORK1_TOP_LEVEL_IRP            ((LONG_PTR)0x05)
#define FSRTL_NETWORK2_TOP_LEVEL_IRP            ((LONG_PTR)0x06)
#define FSRTL_ASYNC_CACHED_READ_TOP_LEVEL_IRP   ((LONG_PTR)0x07)
#define FSRTL_MAX_TOP_LEVEL_IRP_FLAG            ((LONG_PTR)0xFFFF)

// end_ntosp

//
//  The following structure is used to synchronize Eof extends.
//

typedef struct _EOF_WAIT_BLOCK {

    LIST_ENTRY EofWaitLinks;
    KEVENT Event;

} EOF_WAIT_BLOCK;

typedef EOF_WAIT_BLOCK *PEOF_WAIT_BLOCK;

// begin_ntosp
//
//  Normal uncompressed Copy and Mdl Apis
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_READ)
NTKERNELAPI
BOOLEAN
FsRtlCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_WRITE)
NTKERNELAPI
BOOLEAN
FsRtlCopyWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _In_reads_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlMdlReadEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
_Function_class_(FAST_IO_MDL_READ)
NTKERNELAPI
BOOLEAN
FsRtlMdlReadDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_MDL_READ_COMPLETE)
NTKERNELAPI
BOOLEAN
FsRtlMdlReadCompleteDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlPrepareMdlWriteEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
_Function_class_(FAST_IO_PREPARE_MDL_WRITE)
NTKERNELAPI
BOOLEAN
FsRtlPrepareMdlWriteDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_MDL_WRITE_COMPLETE)
NTKERNELAPI
BOOLEAN
FsRtlMdlWriteCompleteDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
#endif

//
//  In Irps, compressed reads and writes are  designated by the
//  subfunction IRP_MN_COMPRESSED must be set and the Compressed
//  Data Info buffer must be described by the following structure
//  pointed to by Irp->Tail.Overlay.AuxiliaryBuffer.
//

typedef struct _FSRTL_AUXILIARY_BUFFER {

    //
    //  Buffer description with length.
    //

    PVOID Buffer;
    ULONG Length;

    //
    //  Flags
    //

    ULONG Flags;

    //
    //  Pointer to optional Mdl mapping buffer for file system use
    //

    PMDL Mdl;

} FSRTL_AUXILIARY_BUFFER;
typedef FSRTL_AUXILIARY_BUFFER *PFSRTL_AUXILIARY_BUFFER;

//
//  If this flag is set, the auxiliary buffer structure is
//  deallocated on Irp completion.  The caller has the
//  option in this case of appending this structure to the
//  structure being described, causing it all to be
//  deallocated at once.  If this flag is clear, no deallocate
//  occurs.
//

#define FSRTL_AUXILIARY_FLAG_DEALLOCATE 0x00000001

//
//  The following two routines are called from NtCreateSection to avoid
//  deadlocks with the file systems.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlAcquireFileExclusive (
    _In_ PFILE_OBJECT FileObject
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlReleaseFile (
    _In_ PFILE_OBJECT FileObject
    );
#endif

//
//  These routines provide a simple interface for the common operations
//  of query/set file size.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlGetFileSize(
    _In_ PFILE_OBJECT FileObject,
    _Out_ PLARGE_INTEGER FileSize
    );
#endif

//
// Determine if there is a complete device failure on an error.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
FsRtlIsTotalDeviceFailure(
    _In_ NTSTATUS Status
    );

#define FsRtlIsChecksumError(STS) ((BOOLEAN)!FsRtlIsTotalDeviceFailure(STS))
#endif

// end_ntddk end_ntosp

//
//  Byte range file lock routines, implemented in FileLock.c
//
//  The file lock info record is used to return enumerated information
//  about a file lock
//

typedef struct _FILE_LOCK_INFO {

    //
    //  A description of the current locked range, and if the lock
    //  is exclusive or shared
    //

    LARGE_INTEGER StartingByte;
    LARGE_INTEGER Length;
    BOOLEAN ExclusiveLock;

    //
    //  The following fields describe the owner of the lock.
    //

    ULONG Key;
    PFILE_OBJECT FileObject;
    PVOID ProcessId;

    //
    //  The following field is used internally by FsRtl
    //

    LARGE_INTEGER EndingByte;

} FILE_LOCK_INFO;
typedef FILE_LOCK_INFO *PFILE_LOCK_INFO;

//
//  The following two procedure prototypes are used by the caller of the
//  file lock package to supply an alternate routine to call when
//  completing an IRP and when unlocking a byte range.  Note that the only
//  utility to us this interface is currently the redirector, all other file
//  system will probably let the IRP complete normally with IoCompleteRequest.
//  The user supplied routine returns any value other than success then the
//  lock package will remove any lock that we just inserted.
//

typedef NTSTATUS (*PCOMPLETE_LOCK_IRP_ROUTINE) (
    _In_ PVOID Context,
    _In_ PIRP Irp
    );

typedef VOID (*PUNLOCK_ROUTINE) (
    _In_ PVOID Context,
    _In_ PFILE_LOCK_INFO FileLockInfo
    );

//
//  A FILE_LOCK is an opaque structure but we need to declare the size of
//  it here so that users can allocate space for one.
//

typedef struct _FILE_LOCK {

    //
    //  The optional procedure to call to complete a request
    //

    PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine;

    //
    //  The optional procedure to call when unlocking a byte range
    //

    PUNLOCK_ROUTINE UnlockRoutine;

    //
    //  FastIoIsQuestionable is set to true whenever the filesystem require
    //  additional checking about whether the fast path can be taken.  As an
    //  example Ntfs requires checking for disk space before the writes can
    //  occur.
    //

    BOOLEAN FastIoIsQuestionable;
    BOOLEAN SpareC[3];

    //
    //  FsRtl lock information
    //

    PVOID   LockInformation;

    //
    //  Contains continuation information for FsRtlGetNextFileLock
    //

    FILE_LOCK_INFO  LastReturnedLockInfo;
    PVOID           LastReturnedLock;

    //
    //  Number of lock requests in progress. Used for synchronization purposes
    //  (so far, this only means byte range locks vs. oplocks).
    //

    LONG volatile LockRequestsInProgress;

} FILE_LOCK;
typedef FILE_LOCK *PFILE_LOCK;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_LOCK
FsRtlAllocateFileLock (
    _In_opt_ PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
    _In_opt_ PUNLOCK_ROUTINE UnlockRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlFreeFileLock (
    _In_ PFILE_LOCK FileLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeFileLock (
    _Out_ PFILE_LOCK FileLock,
    _In_opt_ PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
    _In_opt_ PUNLOCK_ROUTINE UnlockRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeFileLock (
    _Inout_ PFILE_LOCK FileLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlProcessFileLock (
    _In_ PFILE_LOCK FileLock,
    _In_ PIRP Irp,
    _In_opt_ PVOID Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCheckLockForReadAccess (
    _In_ PFILE_LOCK FileLock,
    _In_ PIRP Irp
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCheckLockForWriteAccess (
    _In_ PFILE_LOCK FileLock,
    _In_ PIRP Irp
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCheckLockForOplockRequest (
    _In_ PFILE_LOCK FileLock,
    _In_ PLARGE_INTEGER AllocationSize
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFastCheckLockForRead (
    _In_ PFILE_LOCK FileLock,
    _In_ PLARGE_INTEGER StartingByte,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID ProcessId
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFastCheckLockForWrite (
    _In_ PFILE_LOCK FileLock,
    _In_ PLARGE_INTEGER StartingByte,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ PVOID FileObject,
    _In_ PVOID ProcessId
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_LOCK_INFO
FsRtlGetNextFileLock (
    _In_ PFILE_LOCK FileLock,
    _In_ BOOLEAN Restart
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreThereCurrentOrInProgressFileLocks (
    _In_ PFILE_LOCK FileLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreThereWaitingFileLocks (
    _In_ PFILE_LOCK FileLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFastUnlockSingle (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ LARGE_INTEGER UNALIGNED *FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_opt_ PVOID Context,
    _In_ BOOLEAN AlreadySynchronized
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFastUnlockAll (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ PEPROCESS ProcessId,
    _In_opt_ PVOID Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFastUnlockAllByKey (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_opt_ PVOID Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
__drv_preferredFunction(FsRtlFastLock, "Obsolete")
NTKERNELAPI
BOOLEAN
FsRtlPrivateLock (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock,
    _Out_ PIO_STATUS_BLOCK Iosb,
    _In_opt_ PIRP Irp,
    _In_opt_ __drv_aliasesMem PVOID Context,
    _In_ BOOLEAN AlreadySynchronized
    );
#endif

//
//  BOOLEAN
//  FsRtlFastLock (
//      _In_ PFILE_LOCK FileLock,
//      _In_ PFILE_OBJECT FileObject,
//      _In_ PLARGE_INTEGER FileOffset,
//      _In_ PLARGE_INTEGER Length,
//      _In_ PEPROCESS ProcessId,
//      _In_ ULONG Key,
//      _In_ BOOLEAN FailImmediately,
//      _In_ BOOLEAN ExclusiveLock,
//      _Out_ PIO_STATUS_BLOCK Iosb,
//      _In_ PVOID Context OPTIONAL,
//      _In_ BOOLEAN AlreadySynchronized
//      );
//

#define FsRtlFastLock(A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11) ( \
    FsRtlPrivateLock( A1,   /* FileLock            */       \
                      A2,   /* FileObject          */       \
                      A3,   /* FileOffset          */       \
                      A4,   /* Length              */       \
                      A5,   /* ProcessId           */       \
                      A6,   /* Key                 */       \
                      A7,   /* FailImmediately     */       \
                      A8,   /* ExclusiveLock       */       \
                      A9,   /* Iosb                */       \
                      NULL, /* Irp                 */       \
                      A10,  /* Context             */       \
                      A11   /* AlreadySynchronized */ )     \
)

//
//  BOOLEAN
//  FsRtlAreThereCurrentFileLocks (
//      _In_ PFILE_LOCK FileLock
//      );
//

#define FsRtlAreThereCurrentFileLocks(FL) ( \
    ((FL)->FastIoIsQuestionable))

//
//  These macros are used by file systems to increment or decrement the
//  number of lock requests in progress, in order to prevent races with
//  oplocks etc.
//

#define FsRtlIncrementLockRequestsInProgress(FL) {                           \
    NT_ASSERT( (FL)->LockRequestsInProgress >= 0 );                          \
    (void)                                                                   \
    (InterlockedIncrement((LONG volatile *)&((FL)->LockRequestsInProgress)));\
}

#define FsRtlDecrementLockRequestsInProgress(FL) {                           \
    NT_ASSERT( (FL)->LockRequestsInProgress > 0 );                           \
    (void)                                                                   \
    (InterlockedDecrement((LONG volatile *)&((FL)->LockRequestsInProgress)));\
}



//
//  Filesystem property tunneling, implemented in tunnel.c
//

//
//  Tunnel cache structure
//

typedef struct {

    //
    //  Mutex for cache manipulation
    //

    FAST_MUTEX          Mutex;

    //
    //  Splay Tree of tunneled information keyed by
    //  DirKey ## Name
    //

    PRTL_SPLAY_LINKS    Cache;

    //
    //  Timer queue used to age entries out of the main cache
    //

    LIST_ENTRY          TimerQueue;

    //
    //  Keep track of the number of entries in the cache to prevent
    //  excessive use of memory
    //

    USHORT              NumEntries;

} TUNNEL, *PTUNNEL;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeTunnelCache (
    _Out_ TUNNEL *Cache
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlAddToTunnelCache (
    _Inout_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey,
    _In_ UNICODE_STRING *ShortName,
    _In_ UNICODE_STRING *LongName,
    _In_ BOOLEAN KeyByShortName,
    _In_ ULONG DataLength,
    _In_reads_bytes_(DataLength) VOID *Data
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_At_(ShortName->MaximumLength, _In_range_(>=,8+1+3))
_Unchanged_(ShortName->MaximumLength)
_Unchanged_(ShortName->Buffer)
_When_(_Old_(LongName->Buffer) != LongName->Buffer, _At_(LongName->Buffer, __drv_allocatesMem(Mem)))
_At_(LongName->Buffer, _Must_inspect_result_)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFindInTunnelCache (
    _In_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey,
    _In_ UNICODE_STRING *Name,
    _Inout_ UNICODE_STRING *ShortName,
    _Inout_ UNICODE_STRING *LongName,
    _Inout_ ULONG  *DataLength,
    _Out_writes_bytes_to_(*DataLength, *DataLength) VOID *Data
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlDeleteKeyFromTunnelCache (
    _Inout_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlDeleteTunnelCache (
    _Inout_ TUNNEL *Cache
    );
#endif


//
//  Dbcs name support routines, implemented in DbcsName.c
//

//
//  The following enumerated type is used to denote the result of name
//  comparisons
//

typedef enum _FSRTL_COMPARISON_RESULT {
    LessThan = -1,
    EqualTo = 0,
    GreaterThan = 1
} FSRTL_COMPARISON_RESULT;

#ifdef NLS_MB_CODE_PAGE_TAG
#undef NLS_MB_CODE_PAGE_TAG
#endif // NLS_MB_CODE_PAGE_TAG


#define LEGAL_ANSI_CHARACTER_ARRAY        (*FsRtlLegalAnsiCharacterArray) // ntosp
#define NLS_MB_CODE_PAGE_TAG              (*NlsMbOemCodePageTag)
#define NLS_OEM_LEAD_BYTE_INFO            (*NlsOemLeadByteInfo) // ntosp


extern UCHAR const* const LEGAL_ANSI_CHARACTER_ARRAY;
extern PUSHORT NLS_OEM_LEAD_BYTE_INFO;  // Lead byte info. for ACP

//
//  These following bit values are set in the FsRtlLegalDbcsCharacterArray
//

#define FSRTL_FAT_LEGAL         0x01
#define FSRTL_HPFS_LEGAL        0x02
#define FSRTL_NTFS_LEGAL        0x04
#define FSRTL_WILD_CHARACTER    0x08
#define FSRTL_OLE_LEGAL         0x10
#define FSRTL_NTFS_STREAM_LEGAL (FSRTL_NTFS_LEGAL | FSRTL_OLE_LEGAL)

//
//  The following macro is used to determine if an Ansi character is wild.
//

#define FsRtlIsAnsiCharacterWild(C) (                               \
    FsRtlTestAnsiCharacter((C), FALSE, FALSE, FSRTL_WILD_CHARACTER) \
)

//
//  The following macro is used to determine if an Ansi character is Fat legal.
//

#define FsRtlIsAnsiCharacterLegalFat(C,WILD_OK) (                 \
    FsRtlTestAnsiCharacter((C), TRUE, (WILD_OK), FSRTL_FAT_LEGAL) \
)

//
//  The following macro is used to determine if an Ansi character is Hpfs legal.
//

#define FsRtlIsAnsiCharacterLegalHpfs(C,WILD_OK) (                 \
    FsRtlTestAnsiCharacter((C), TRUE, (WILD_OK), FSRTL_HPFS_LEGAL) \
)

//
//  The following macro is used to determine if an Ansi character is Ntfs legal.
//

#define FsRtlIsAnsiCharacterLegalNtfs(C,WILD_OK) (                 \
    FsRtlTestAnsiCharacter((C), TRUE, (WILD_OK), FSRTL_NTFS_LEGAL) \
)

//
//  The following macro is used to determine if an Ansi character is
//  legal in an Ntfs stream name
//

#define FsRtlIsAnsiCharacterLegalNtfsStream(C,WILD_OK) (                    \
    FsRtlTestAnsiCharacter((C), TRUE, (WILD_OK), FSRTL_NTFS_STREAM_LEGAL)   \
)

//
//  The following macro is used to determine if an Ansi character is legal,
//  according to the caller's specification.
//

#define FsRtlIsAnsiCharacterLegal(C,FLAGS) (          \
    FsRtlTestAnsiCharacter((C), TRUE, FALSE, (FLAGS)) \
)

//
//  The following macro is used to test attributes of an Ansi character,
//  according to the caller's specified flags.
//

#define FsRtlTestAnsiCharacter(C, DEFAULT_RET, WILD_OK, FLAGS) (            \
        ((SCHAR)(C) < 0) ? DEFAULT_RET :                                    \
                           FlagOn( LEGAL_ANSI_CHARACTER_ARRAY[(C)],         \
                                   (FLAGS) |                                \
                                   ((WILD_OK) ? FSRTL_WILD_CHARACTER : 0) ) \
)


//
//  The following two macros use global data defined in ntos\rtl\nlsdata.c
//
//  BOOLEAN
//  FsRtlIsLeadDbcsCharacter (
//      _In_ UCHAR DbcsCharacter
//      );
//
//  /*++
//
//  Routine Description:
//
//      This routine takes the first bytes of a Dbcs character and
//      returns whether it is a lead byte in the system code page.
//
//  Arguments:
//
//      DbcsCharacter - Supplies the input character being examined
//
//  Return Value:
//
//      BOOLEAN - TRUE if the input character is a dbcs lead and
//              FALSE otherwise
//
//  --*/
//
//

#define FsRtlIsLeadDbcsCharacter(DBCS_CHAR) (                      \
    (BOOLEAN)((UCHAR)(DBCS_CHAR) < 0x80 ? FALSE :                  \
              (NLS_MB_CODE_PAGE_TAG &&                             \
               (NLS_OEM_LEAD_BYTE_INFO[(UCHAR)(DBCS_CHAR)] != 0))) \
)

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlDissectDbcs (
    _In_ ANSI_STRING Path,
    _Out_ PANSI_STRING FirstName,
    _Out_ PANSI_STRING RemainingName
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlDoesDbcsContainWildCards (
    _In_ PANSI_STRING Name
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsDbcsInExpression (
    _In_ PANSI_STRING Expression,
    _In_ PANSI_STRING Name
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsFatDbcsLegal (
    _In_ ANSI_STRING DbcsName,
    _In_ BOOLEAN WildCardsPermissible,
    _In_ BOOLEAN PathNamePermissible,
    _In_ BOOLEAN LeadingBackslashPermissible
    );
#endif

// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsHpfsDbcsLegal (
    _In_ ANSI_STRING DbcsName,
    _In_ BOOLEAN WildCardsPermissible,
    _In_ BOOLEAN PathNamePermissible,
    _In_ BOOLEAN LeadingBackslashPermissible
    );
#endif


//
//  Exception filter routines, implemented in Filter.c
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
FsRtlNormalizeNtstatus (
    _In_ NTSTATUS Exception,
    _In_ NTSTATUS GenericException
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
FsRtlIsNtstatusExpected (
    _In_ NTSTATUS Exception
    );
#endif

//
//  The following procedures are used to allocate executive pool and raise
//  insufficient resource status if pool isn't currently available.
//

#define FsRtlAllocatePoolWithTag(PoolType, NumberOfBytes, Tag)                \
    ExAllocatePoolWithTag((POOL_TYPE)((PoolType) | POOL_RAISE_IF_ALLOCATION_FAILURE), \
                          NumberOfBytes,                                      \
                          Tag)


#define FsRtlAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, Tag)           \
    ExAllocatePoolWithQuotaTag((POOL_TYPE)((PoolType) | POOL_RAISE_IF_ALLOCATION_FAILURE), \
                               NumberOfBytes,                                 \
                               Tag)

//
//  The following function allocates a resource from the FsRtl pool.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
__drv_preferredFunction(ExAllocateFromNPagedLookasideList, "The FsRtlAllocateResource routine is obsolete, but is exported to support existing driver binaries. Use ExAllocateFromNPagedLookasideList and ExInitializeResourceLite instead.")
NTKERNELAPI
PERESOURCE
FsRtlAllocateResource (
    VOID
    );
#endif


//
//  Large Integer Mapped Control Blocks routines, implemented in LargeMcb.c
//
//  Originally this structure was truly opaque and code outside largemcb was
//  never allowed to examine or alter the structures.  However, for performance
//  reasons we want to allow ntfs the ability to quickly truncate down the
//  mcb without the overhead of an actual call to largemcb.c.  So to do that we
//  need to export the structure.  This structure is not exact.  The Mapping field
//  is declared here as a pvoid but largemcb.c it is a pointer to mapping pairs.
//

typedef struct _BASE_MCB {
    ULONG MaximumPairCount;
    ULONG PairCount;
    USHORT PoolType;
    USHORT Flags;
    PVOID Mapping;
} BASE_MCB;
typedef BASE_MCB *PBASE_MCB;

typedef struct _LARGE_MCB {
    PKGUARDED_MUTEX GuardedMutex;
    BASE_MCB BaseMcb;
} LARGE_MCB;
typedef LARGE_MCB *PLARGE_MCB;

#define MCB_FLAG_RAISE_ON_ALLOCATION_FAILURE 1

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeLargeMcb (
    _Out_ PLARGE_MCB Mcb,
    _In_ POOL_TYPE PoolType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeLargeMcb (
    _Inout_ PLARGE_MCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlResetLargeMcb (
    _Inout_ PLARGE_MCB Mcb,
    _In_ BOOLEAN SelfSynchronized
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTruncateLargeMcb (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAddLargeMcbEntry (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Lbn,
    _In_ LONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlRemoveLargeMcbEntry (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLargeMcbEntry (
    _In_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _Out_opt_ PLONGLONG Lbn,
    _Out_opt_ PLONGLONG SectorCountFromLbn,
    _Out_opt_ PLONGLONG StartingLbn,
    _Out_opt_ PLONGLONG SectorCountFromStartingLbn,
    _Out_opt_ PULONG Index
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastLargeMcbEntry (
    _In_ PLARGE_MCB Mcb,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastLargeMcbEntryAndIndex (
    _In_ PLARGE_MCB OpaqueMcb,
    _Out_ PLONGLONG LargeVbn,
    _Out_ PLONGLONG LargeLbn,
    _Out_ PULONG Index
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
FsRtlNumberOfRunsInLargeMcb (
    _In_ PLARGE_MCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlGetNextLargeMcbEntry (
    _In_ PLARGE_MCB Mcb,
    _In_ ULONG RunIndex,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn,
    _Out_ PLONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlSplitLargeMcb (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Amount
    );
#endif

//
//  Unsynchronized base mcb functions. There is one of these for every
//  large mcb equivalent function - they are identical other than lack of
//  synchronization
//

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeBaseMcb (
    _Out_ PBASE_MCB Mcb,
    _In_ POOL_TYPE PoolType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_When_(!Flags & MCB_FLAG_RAISE_ON_ALLOCATION_FAILURE, _Must_inspect_result_)
_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FsRtlInitializeBaseMcbEx (
    _Out_ PBASE_MCB Mcb,
    _In_ POOL_TYPE PoolType,
    _In_ USHORT Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeBaseMcb (
    _In_ PBASE_MCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlResetBaseMcb (
    _Out_ PBASE_MCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTruncateBaseMcb (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAddBaseMcbEntry (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Lbn,
    _In_ LONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FsRtlAddBaseMcbEntryEx (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Lbn,
    _In_ LONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlRemoveBaseMcbEntry (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupBaseMcbEntry (
    _In_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _Out_opt_ PLONGLONG Lbn,
    _Out_opt_ PLONGLONG SectorCountFromLbn,
    _Out_opt_ PLONGLONG StartingLbn,
    _Out_opt_ PLONGLONG SectorCountFromStartingLbn,
    _Out_opt_ PULONG Index
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastBaseMcbEntry (
    _In_ PBASE_MCB Mcb,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastBaseMcbEntryAndIndex (
    _In_ PBASE_MCB OpaqueMcb,
    _Inout_ PLONGLONG LargeVbn,
    _Inout_ PLONGLONG LargeLbn,
    _Inout_ PULONG Index
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
FsRtlNumberOfRunsInBaseMcb (
    _In_ PBASE_MCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlGetNextBaseMcbEntry (
    _In_ PBASE_MCB Mcb,
    _In_ ULONG RunIndex,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn,
    _Out_ PLONGLONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WS03)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlSplitBaseMcb (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Amount
    );
#endif


//
//  Mapped Control Blocks routines, implemented in Mcb.c
//
//  An MCB is an opaque structure but we need to declare the size of
//  it here so that users can allocate space for one.  Consequently the
//  size computation here must be updated by hand if the MCB changes.
//

typedef struct _MCB {
    LARGE_MCB DummyFieldThatSizesThisStructureCorrectly;
} MCB;
typedef MCB *PMCB;

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
__drv_preferredFunction(FsRtlInitializeLargeMcb, "Obsolete")
NTKERNELAPI
VOID
FsRtlInitializeMcb (
    _Out_ PMCB Mcb,
    _In_ POOL_TYPE PoolType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeMcb (
    _Inout_ PMCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTruncateMcb (
    _Inout_ PMCB Mcb,
    _In_ VBN Vbn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAddMcbEntry (
    _Inout_ PMCB Mcb,
    _In_ VBN Vbn,
    _In_ LBN Lbn,
    _In_ ULONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlRemoveMcbEntry (
    _Inout_ PMCB Mcb,
    _In_ VBN Vbn,
    _In_ ULONG SectorCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupMcbEntry (
    _In_ PMCB Mcb,
    _In_ VBN Vbn,
    _Out_ PLBN Lbn,
    _Out_opt_ PULONG SectorCount,
    _Out_ PULONG Index
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastMcbEntry (
    _In_ PMCB Mcb,
    _Out_ PVBN Vbn,
    _Out_ PLBN Lbn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
FsRtlNumberOfRunsInMcb (
    _In_ PMCB Mcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlGetNextMcbEntry (
    _In_ PMCB Mcb,
    _In_ ULONG RunIndex,
    _Out_ PVBN Vbn,
    _Out_ PLBN Lbn,
    _Out_ PULONG SectorCount
    );
#endif


//
//  Fault Tolerance routines, implemented in FaultTol.c
//
//  The routines in this package implement routines that help file
//  systems interact with the FT device drivers.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlBalanceReads (
    _In_ PDEVICE_OBJECT TargetDevice
    );
#endif


//
//  Oplock routines, implemented in Oplock.c
//

typedef
VOID
(*POPLOCK_WAIT_COMPLETE_ROUTINE) (
    _In_ PVOID Context,

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
        _In_opt_ PIRP Irp
#else
        _In_ PIRP Irp
#endif
    );

typedef
VOID
(*POPLOCK_FS_PREPOST_IRP) (
    _In_ PVOID Context,

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
    _In_opt_ PIRP Irp
#else
    _In_ PIRP Irp
#endif
    );

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeOplock (
    _Out_ POPLOCK Oplock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeOplock (
    _Inout_ POPLOCK Oplock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockFsctrl (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG OpenCount
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_When_(CompletionRoutine != NULL, _Must_inspect_result_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlCheckOplock (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTASP1)
//
//  Flags for FsRtlCheckOplockEx.
//

#define OPLOCK_FLAG_COMPLETE_IF_OPLOCKED    0x00000001
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define OPLOCK_FLAG_OPLOCK_KEY_CHECK_ONLY   0x00000002
#define OPLOCK_FLAG_BACK_OUT_ATOMIC_OPLOCK  0x00000004
#define OPLOCK_FLAG_IGNORE_OPLOCK_KEYS      0x00000008
#endif
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define OPLOCK_FLAG_PARENT_OBJECT           0x00000010
#define OPLOCK_FLAG_CLOSING_DELETE_ON_CLOSE 0x00000020
#define OPLOCK_FLAG_REMOVING_FILE_OR_LINK   0x00000040
#endif


#if (NTDDI_VERSION >= NTDDI_WINBLUE)
//
//  Flags for FsRtlCheckUpperOplock.
//

#define OPLOCK_UPPER_FLAG_CHECK_NO_BREAK        0x00010000
#define OPLOCK_UPPER_FLAG_NOTIFY_REFRESH_READ   0x00020000
#endif


#if (NTDDI_VERSION >= NTDDI_WIN7)
//
//  Flags for FsRtlOplockFsctrlEx
//

#define OPLOCK_FSCTRL_FLAG_ALL_KEYS_MATCH   0x00000001
#endif

#if (NTDDI_VERSION >= NTDDI_VISTASP1)
_When_(Flags | OPLOCK_FLAG_BACK_OUT_ATOMIC_OPLOCK, _Must_inspect_result_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlCheckOplockEx (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );

#endif


#if (NTDDI_VERSION >= NTDDI_WINBLUE)
_When_(CompletionRoutine != NULL, _Must_inspect_result_)
__drv_maxIRQL(APC_LEVEL)
NTSTATUS
FsRtlCheckUpperOplock (
    _In_ POPLOCK Oplock,
    _In_ ULONG NewLowerOplockState,
    _In_opt_ PVOID CompletionRoutineContext,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PrePendRoutine,
    _In_ ULONG Flags
    );

_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTSTATUS
FsRtlUpperOplockFsctrl (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG OpenCount,
    _In_ ULONG LowerOplockState,
    _In_ ULONG Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlOplockIsFastIoPossible (
    _In_ POPLOCK Oplock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCurrentBatchOplock (
    _In_ POPLOCK Oplock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCurrentOplock (
    _In_ POPLOCK Oplock
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockBreakToNone (
    _Inout_ POPLOCK Oplock,
    _In_opt_ PIO_STACK_LOCATION IrpSp,
    _In_ PIRP Irp,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
//
// ECP context for an oplock key.
//

typedef struct _OPLOCK_KEY_ECP_CONTEXT {

    //
    //  The caller places a GUID of their own devising here to serve as
    //  the oplock key.
    //

    GUID OplockKey;

    //
    //  This must be set to zero.
    //

    ULONG Reserved;

} OPLOCK_KEY_ECP_CONTEXT, *POPLOCK_KEY_ECP_CONTEXT;

//
//  The GUID used for the OPLOCK_KEY_ECP_CONTEXT structure.
//
//  {48850596-3050-4be7-9863-fec350ce8d7f}
//

DEFINE_GUID( GUID_ECP_OPLOCK_KEY, 0x48850596, 0x3050, 0x4be7, 0x98, 0x63, 0xfe, 0xc3, 0x50, 0xce, 0x8d, 0x7f );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlOplockIsSharedRequest(
    _In_ PIRP Irp
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockBreakH (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCurrentOplockH (
    _In_ POPLOCK Oplock
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockBreakToNoneEx (
    _Inout_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockFsctrlEx (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG OpenCount,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlOplockKeysEqual (
    _In_opt_ PFILE_OBJECT Fo1,
    _In_opt_ PFILE_OBJECT Fo2
    );
#endif // NTDDI_VERSION >= NTDDI_WIN7

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
//  ECP context for a target and parent oplock key.
//

typedef struct _DUAL_OPLOCK_KEY_ECP_CONTEXT {

    //
    //  The caller places a GUID of their own devising here to serve as the
    //  parent oplock key.
    //

    GUID ParentOplockKey;

    //
    //  The caller places a GUID of their own devising here to serve as the
    //  target oplock key.
    //

    GUID TargetOplockKey;

    //
    //  Caller sets this to TRUE if ParentOplockKey contains a valid GUID,
    //  FALSE otherwise.
    //

    BOOLEAN ParentOplockKeySet;

    //
    //  Caller sets this to TRUE if TargetOplockKey contains a valid GUID,
    //  FALSE otherwise.
    //

    BOOLEAN TargetOplockKeySet;

} DUAL_OPLOCK_KEY_ECP_CONTEXT, *PDUAL_OPLOCK_KEY_ECP_CONTEXT;

//
//  The GUID used for the DUAL_OPLOCK_KEY_ECP_CONTEXT structure.
//
//  {41621a14-b08b-4df1-b676-a05ffdf01bea}
//

DEFINE_GUID( GUID_ECP_DUAL_OPLOCK_KEY, 0x41621a14, 0xb08b, 0x4df1, 0xb6, 0x76, 0xa0, 0x5f, 0xfd, 0xf0, 0x1b, 0xea );


#endif // NTDDI_VERSION >= NTDDI_WIN8


//
//  Volume lock/unlock notification routines, implemented in PnP.c
//
//  These routines provide PnP volume lock notification support
//  for all filesystems.
//

#define FSRTL_VOLUME_DISMOUNT           1
#define FSRTL_VOLUME_DISMOUNT_FAILED    2
#define FSRTL_VOLUME_LOCK               3
#define FSRTL_VOLUME_LOCK_FAILED        4
#define FSRTL_VOLUME_UNLOCK             5
#define FSRTL_VOLUME_MOUNT              6
#define FSRTL_VOLUME_NEEDS_CHKDSK       7
#define FSRTL_VOLUME_WORM_NEAR_FULL     8
#define FSRTL_VOLUME_WEARING_OUT        9
#define FSRTL_VOLUME_FORCED_CLOSED      10
#define FSRTL_VOLUME_INFO_MAKE_COMPAT   11
#define FSRTL_VOLUME_PREPARING_EJECT    12
#define FSRTL_VOLUME_CHANGE_SIZE        13
#define FSRTL_VOLUME_BACKGROUND_FORMAT  14

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlNotifyVolumeEvent (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG EventCode
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlNotifyVolumeEventEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG EventCode,
    _In_ PTARGET_DEVICE_CUSTOM_NOTIFICATION Event
    );
#endif


//
//  Notify Change routines, implemented in Notify.c
//
//  These routines provide Notify Change support for all filesystems.
//  Any of the 'Full' notify routines will support returning the
//  change information into the user's buffer.
//

typedef struct _REAL_NOTIFY_SYNC *PNOTIFY_SYNC;

typedef
BOOLEAN (*PCHECK_FOR_TRAVERSE_ACCESS) (
    _In_ PVOID NotifyContext,
    _In_opt_ PVOID TargetContext,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );

typedef
BOOLEAN (*PFILTER_REPORT_CHANGE) (
    _In_ PVOID NotifyContext,
    _In_ PVOID FilterContext
    );

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyInitializeSync (
    _Outptr_result_maybenull_ PNOTIFY_SYNC *NotifySync
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyUninitializeSync (
    _Inout_ PNOTIFY_SYNC *NotifySync
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(NotifyIrp == NULL, _At_(FullDirectoryName, _In_opt_))
_When_(NotifyIrp != NULL, _At_(FullDirectoryName, _In_))
NTKERNELAPI
VOID
FsRtlNotifyFullChangeDirectory (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext,
    PSTRING FullDirectoryName,
    _In_ BOOLEAN WatchTree,
    _In_ BOOLEAN IgnoreBuffer,
    _In_ ULONG CompletionFilter,
    _In_opt_ PIRP NotifyIrp,
    _In_opt_ PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFilterChangeDirectory (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext,
    _In_ PSTRING FullDirectoryName,
    _In_ BOOLEAN WatchTree,
    _In_ BOOLEAN IgnoreBuffer,
    _In_ ULONG CompletionFilter,
    _In_opt_ PIRP NotifyIrp,
    _In_opt_ PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_opt_ PFILTER_REPORT_CHANGE FilterCallback
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFilterReportChange (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PSTRING FullTargetName,
    _In_ USHORT TargetNameOffset,
    _In_opt_ PSTRING StreamName,
    _In_opt_ PSTRING NormalizedParentName,
    _In_ ULONG FilterMatch,
    _In_ ULONG Action,
    _In_opt_ PVOID TargetContext,
    _In_opt_ PVOID FilterContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFullReportChange (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PSTRING FullTargetName,
    _In_ USHORT TargetNameOffset,
    _In_opt_ PSTRING StreamName,
    _In_opt_ PSTRING NormalizedParentName,
    _In_ ULONG FilterMatch,
    _In_ ULONG Action,
    _In_opt_ PVOID TargetContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyCleanup (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyCleanupAll (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList
    );
#endif


//
//  Unicode Name support routines, implemented in Name.c
//
//  The routines here are used to manipulate unicode names
//

//
//  The following macro is used to determine if a character is wild.
//

#define FsRtlIsUnicodeCharacterWild(C) (                                \
      (((C) >= 0x40) ? FALSE : FlagOn( LEGAL_ANSI_CHARACTER_ARRAY[(C)], \
                                       FSRTL_WILD_CHARACTER ) )         \
)

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlDissectName (
    _In_ UNICODE_STRING Path,
    _Out_ PUNICODE_STRING FirstName,
    _Out_ PUNICODE_STRING RemainingName
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlDoesNameContainWildCards (
    _In_ PUNICODE_STRING Name
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreNamesEqual (
    _In_ PCUNICODE_STRING ConstantNameA,
    _In_ PCUNICODE_STRING ConstantNameB,
    _In_ BOOLEAN IgnoreCase,
    _In_reads_opt_(0x10000) PCWCH UpcaseTable
    );
#endif

// begin_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsNameInExpression (
    _In_ PUNICODE_STRING Expression,
    _In_ PUNICODE_STRING Name,
    _In_ BOOLEAN IgnoreCase,
    _In_opt_ PWCH UpcaseTable
    );
#endif

// end_ntosp


//
//  Stack Overflow support routine, implemented in StackOvf.c
//

typedef
VOID
(*PFSRTL_STACK_OVERFLOW_ROUTINE) (
    _In_ PVOID Context,
    _In_ PKEVENT Event
    );

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FsRtlPostStackOverflow (
    _In_ PVOID Context,
    _In_ PKEVENT Event,
    _In_ PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FsRtlPostPagingFileStackOverflow (
    _In_ PVOID Context,
    _In_ PKEVENT Event,
    _In_ PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine
    );
#endif


//
// UNC Provider support
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlRegisterUncProvider(
    _Out_ PHANDLE MupHandle,
    _In_ PCUNICODE_STRING RedirectorDeviceName,
    _In_ BOOLEAN MailslotsSupported
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
//  Flags passed in to FsRtlRegisterUncProviderEx
//

typedef ULONG FSRTL_UNC_PROVIDER_FLAGS;

#define FSRTL_UNC_PROVIDER_FLAGS_MAILSLOTS_SUPPORTED    0x00000001
#define FSRTL_UNC_PROVIDER_FLAGS_CSC_ENABLED            0x00000002
#define FSRTL_UNC_PROVIDER_FLAGS_DOMAIN_SVC_AWARE       0x00000004

//
//  This flag is available in post threshold only.
//  Change NTDDI_WINTHRESHOLD to appropriate value when new
//  version is available.
//
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#define FSRTL_UNC_PROVIDER_FLAGS_CONTAINER_AWARE        0x00000008
#endif

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlRegisterUncProviderEx(
    _Out_ PHANDLE MupHandle,
    _In_ PCUNICODE_STRING RedirDevName,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ FSRTL_UNC_PROVIDER_FLAGS Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)    /* ABRACADABRA_THRESHOLD */

#define FSRTL_UNC_REGISTRATION_VERSION_0200  0x0200

//
//  Registration version post threshold.
//
#define FSRTL_UNC_REGISTRATION_VERSION_0201  0x0201

#endif

//
//  FSRTL_UNC_REGISTRATION_VERSION_0201 is available in post threshold only.
//  Change NTDDI_WINTHRESHOLD to appropriate value when new
//  version is available.
//
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)    /* ABRACADABRA_THRESHOLD */

#define FSRTL_UNC_REGISTRATION_CURRENT_VERSION FSRTL_UNC_REGISTRATION_VERSION_0201  // Current version is 2.1

#elif (NTDDI_VERSION >= NTDDI_WINBLUE)    /* ABRACADABRA_THRESHOLD */

#define FSRTL_UNC_REGISTRATION_CURRENT_VERSION FSRTL_UNC_REGISTRATION_VERSION_0200  // Current version is 2.0

#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)    /* ABRACADABRA_THRESHOLD */

typedef ULONG FSRTL_UNC_HARDENING_CAPABILITIES;

#define FSRTL_UNC_HARDENING_CAPABILITIES_MUTUAL_AUTH    0x00000001
#define FSRTL_UNC_HARDENING_CAPABILITIES_INTEGRITY      0x00000002
#define FSRTL_UNC_HARDENING_CAPABILITIES_PRIVACY        0x00000004

typedef struct _Struct_size_bytes_(Size) _FSRTL_UNC_PROVIDER_REGISTRATION {

    //
    //  The size, in bytes, of this registration structure.
    //

    USHORT Size;
    USHORT Version;

    //
    //  Provider Flag values
    //

    union {
        FSRTL_UNC_PROVIDER_FLAGS ProviderFlags;
        struct {
            ULONG MailslotsSupported : 1;
            ULONG CscEnabled : 1;
            ULONG DomainSvcAware : 1;
            ULONG ContainersAware : 1;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;

    //
    // UNC Path Hardened Access
    //
    union {
        FSRTL_UNC_HARDENING_CAPABILITIES HardeningCapabilities;
        struct {
            ULONG SupportsMutualAuth : 1;
            ULONG SupportsIntegrity : 1;
            ULONG SupportsPrivacy : 1;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME2;

} FSRTL_UNC_PROVIDER_REGISTRATION, *PFSRTL_UNC_PROVIDER_REGISTRATION;

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlRegisterUncProviderEx2(
    _In_  PCUNICODE_STRING RedirDevName,
    _In_  PDEVICE_OBJECT  DeviceObject,
    _In_  CONST FSRTL_UNC_PROVIDER_REGISTRATION *Registration,
    _Out_ PHANDLE MupHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlDeregisterUncProvider(
    _In_ HANDLE Handle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

_Must_inspect_result_
_When_(Irp!=NULL, _IRQL_requires_max_(PASSIVE_LEVEL))
_When_(Irp==NULL, _IRQL_requires_max_(APC_LEVEL))
NTKERNELAPI
NTSTATUS
FsRtlCancellableWaitForSingleObject(
    _In_ PVOID Object,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PIRP Irp
    );

_Must_inspect_result_
_When_(Irp != NULL, _IRQL_requires_max_(PASSIVE_LEVEL))
_When_(Irp == NULL, _IRQL_requires_max_(APC_LEVEL))
NTKERNELAPI
NTSTATUS
FsRtlCancellableWaitForMultipleObjects(
    _In_ ULONG Count,
    _In_reads_(Count) PVOID ObjectArray[],
    _In_ WAIT_TYPE WaitType,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PKWAIT_BLOCK WaitBlockArray,
    _In_opt_ PIRP Irp
    );

#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
//  For use by filter drivers to get information on provider corresponding to a given
//  fileobject on the remote filesystem stack. Without this, filters will always end up
//  getting \Device\Mup for providers registering with FsRtlRegisterUncProviderEx().
//


_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlMupGetProviderInfoFromFileObject(
    _In_                        PFILE_OBJECT    pFileObject,
    _In_                        ULONG           Level,
    _Out_writes_bytes_(*pBufferSize)  PVOID           pBuffer,
    _Inout_                     PULONG          pBufferSize
    );

//
//  Format of output in pBuffer.
//

//
//  Level 1.
//


typedef struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_1 {
    ULONG32         ProviderId;         // ID for quick comparison, stable across provider load/unload.

} FSRTL_MUP_PROVIDER_INFO_LEVEL_1, *PFSRTL_MUP_PROVIDER_INFO_LEVEL_1;

typedef struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_2 {
    ULONG32         ProviderId;         // ID for quick comparison, stable across provider load/unload.
    UNICODE_STRING  ProviderName;       // Device name of provider.

} FSRTL_MUP_PROVIDER_INFO_LEVEL_2, *PFSRTL_MUP_PROVIDER_INFO_LEVEL_2;


_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlMupGetProviderIdFromName(
    _In_    PCUNICODE_STRING    pProviderName,
    _Out_   PULONG32            pProviderId
    );


#endif



//
//  File System Filter PerFile Context Support
//

//
//  Filesystem filter drivers use these APIs to associate context
//  with open files (for filesystems that support this).
//

//
//  OwnerId should uniquely identify a particular filter driver
//  (e.g. the address of the driver's device object).
//  InstanceId can be used to distinguish distinct contexts associated
//  by a filter driver with a single file
//

//
//  This structure needs to be embedded within the users context that
//  they want to associate with a given file
//

typedef struct _FSRTL_PER_FILE_CONTEXT {
    //
    //  This is linked into the FileContext list maintained by the
    //  kernel
    //

    LIST_ENTRY Links;

    //
    //  A Unique ID for this filter (ex: address of Driver Object, Device
    //  Object, or Device Extension)
    //

    PVOID OwnerId;

    //
    //  An optional ID to differentiate different contexts for the same
    //  filter.
    //

    PVOID InstanceId;

    //
    //  A callback routine which is called by the underlying file system
    //  when the per-file structure is being torn down.  When this routine is called
    //  the given context has already been removed from the context linked
    //  list.  The callback routine cannot recursively call down into the
    //  filesystem or acquire any of their resources which they might hold
    //  when calling the filesystem outside of the callback.  This must
    //  be defined.
    //

    PFREE_FUNCTION FreeCallback;

} FSRTL_PER_FILE_CONTEXT, *PFSRTL_PER_FILE_CONTEXT;


//
//  This will initialize the given FSRTL_PER_FILE_CONTEXT structure.  This
//  should be used before calling "FsRtlInsertPerFileContext".
//

#define FsRtlInitPerFileContext( _fc, _owner, _inst, _cb)   \
    ((_fc)->OwnerId = (_owner),                               \
     (_fc)->InstanceId = (_inst),                             \
     (_fc)->FreeCallback = (_cb))

//
//  Given a FileObject this will return the FileContext pointer that
//  needs to be passed into the other FsRtl PerFile Context routines.
//  If the file system does not support filter file contexts then
//  NULL is returned
//

#define FsRtlGetPerFileContextPointer(_fo) \
    (FsRtlSupportsPerFileContexts(_fo) ? \
        FsRtlGetPerStreamContextPointer(_fo)->FileContextSupportPointer : \
        NULL)

//
//  This will test to see if PerFile contexts are supported for the given
//  FileObject
//

#define FsRtlSupportsPerFileContexts(_fo)                     \
    ((FsRtlGetPerStreamContextPointer(_fo) != NULL) &&        \
     (FsRtlGetPerStreamContextPointer(_fo)->Version >= FSRTL_FCB_HEADER_V1) &&  \
     (FsRtlGetPerStreamContextPointer(_fo)->FileContextSupportPointer != NULL))


//
//  Associate the context at Ptr with the given file.  The Ptr structure
//  should be filled in by the caller before calling this routine (see
//  FsRtlInitPerFileContext).  If the underlying filesystem does not support
//  filter file contexts, STATUS_INVALID_DEVICE_REQUEST will be returned.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertPerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_ PFSRTL_PER_FILE_CONTEXT Ptr
    );

//
//  Lookup a filter context associated with the file specified.  The first
//  context matching OwnerId (and InstanceId, if present) is returned.  By not
//  specifying InstanceId, a filter driver can search for any context that it
//  has previously associated with a stream.  If no matching context is found,
//  NULL is returned.  If the file system does not support filter contexts,
//  NULL is returned.
//


_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILE_CONTEXT
FsRtlLookupPerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );


//
//  Normally, contexts should be deleted when the file system notifies the
//  filter that the file is being closed.  There are cases when a filter
//  may want to remove all existing contexts for a specific volume.  This
//  routine should be called at those times.  This routine should NOT be
//  called for the following cases:
//      - Inside your FreeCallback handler - The underlying file system has
//        already removed it from the linked list).
//      - Inside your IRP_CLOSE handler - If you do this then you will not
//        be notified when the stream is torn down.
//
//  This functions identically to FsRtlLookupPerFileContext, except that the
//  returned context has been removed from the list.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILE_CONTEXT
FsRtlRemovePerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );


//
//  APIs for file systems to use for initializing and cleaning up
//  the Advanced FCB Header fields for PerStreamContext and
//  PerFileContext support
//

//
//  This will properly initialize the advanced header so that it can be
//  used with PerStream contexts and PerFile contexts.
//  Note:  A fast mutex must be placed in an advanced header.  It is the
//         caller's responsibility to properly create and initialize this
//         mutex before calling this macro.  The mutex field is only set
//         if a non-NULL value is passed in.
//  If the file system supports filter file contexts then it must
//  initialize the FileContextSupportPointer field to point to a PVOID
//  embedded in its per-file structure (FCB). If a NULL is passed in,
//  then the macro assumes that the file system does not support filter
//  file contexts
//

#define FsRtlSetupAdvancedHeaderEx( _advhdr, _fmutx, _fctxptr )                     \
{                                                                                   \
    FsRtlSetupAdvancedHeader( _advhdr, _fmutx );                                    \
    if ((_fctxptr) != NULL) {                                                       \
        (_advhdr)->FileContextSupportPointer = (_fctxptr);                          \
    }                                                                               \
}

//
//  File systems call this API to free any filter contexts still associated
//  with a per-file structure (FCB) that they are tearing down.
//  The FreeCallback routine for each filter context will be called.
//

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTeardownPerFileContexts (
    _In_ PVOID* PerFileContextPointer
    );


//
//  File System Filter PerStream Context Support
//

//
//  Filesystem filter drivers use these APIs to associate context
//  with open streams (for filesystems that support this).
//

//
//  OwnerId should uniquely identify a particular filter driver
//  (e.g. the address of the driver's device object).
//  InstanceId can be used to distinguish distinct contexts associated
//  by a filter driver with a single stream (e.g. the address of the
//  PerStream Context structure).
//

//
//  This structure needs to be embedded within the users context that
//  they want to associate with a given stream
//

typedef struct _FSRTL_PER_STREAM_CONTEXT {
    //
    //  This is linked into the StreamContext list inside the
    //  FSRTL_ADVANCED_FCB_HEADER structure.
    //

    LIST_ENTRY Links;

    //
    //  A Unique ID for this filter (ex: address of Driver Object, Device
    //  Object, or Device Extension)
    //

    PVOID OwnerId;

    //
    //  An optional ID to differentiate different contexts for the same
    //  filter.
    //

    PVOID InstanceId;

    //
    //  A callback routine which is called by the underlying file system
    //  when the stream is being torn down.  When this routine is called
    //  the given context has already been removed from the context linked
    //  list.  The callback routine cannot recursively call down into the
    //  filesystem or acquire any of their resources which they might hold
    //  when calling the filesystem outside of the callback.  This must
    //  be defined.
    //

    PFREE_FUNCTION FreeCallback;

} FSRTL_PER_STREAM_CONTEXT, *PFSRTL_PER_STREAM_CONTEXT;


//
//  This will initialize the given FSRTL_PER_STREAM_CONTEXT structure.  This
//  should be used before calling "FsRtlInsertPerStreamContext".
//

#define FsRtlInitPerStreamContext( _fc, _owner, _inst, _cb)   \
    ((_fc)->OwnerId = (_owner),                               \
     (_fc)->InstanceId = (_inst),                             \
     (_fc)->FreeCallback = (_cb))

//
//  Given a FileObject this will return the StreamContext pointer that
//  needs to be passed into the other FsRtl PerStream Context routines.
//

#define FsRtlGetPerStreamContextPointer(_fo) \
    ((PFSRTL_ADVANCED_FCB_HEADER)((_fo)->FsContext))

//
//  This will test to see if PerStream contexts are supported for the given
//  FileObject
//

#define FsRtlSupportsPerStreamContexts(_fo)                     \
    ((NULL != FsRtlGetPerStreamContextPointer(_fo)) &&          \
     FlagOn(FsRtlGetPerStreamContextPointer(_fo)->Flags2,       \
                    FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS))

//
//  Associate the context at Ptr with the given stream.  The Ptr structure
//  should be filled in by the caller before calling this routine (see
//  FsRtlInitPerStreamContext).  If the underlying filesystem does not support
//  filter contexts, STATUS_INVALID_DEVICE_REQUEST will be returned.
//

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertPerStreamContext (
    _In_ PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
    _In_ PFSRTL_PER_STREAM_CONTEXT Ptr
    );
#endif

//
//  Lookup a filter context associated with the stream specified.  The first
//  context matching OwnerId (and InstanceId, if present) is returned.  By not
//  specifying InstanceId, a filter driver can search for any context that it
//  has previously associated with a stream.  If no matching context is found,
//  NULL is returned.  If the file system does not support filter contexts,
//  NULL is returned.
//

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_STREAM_CONTEXT
FsRtlLookupPerStreamContextInternal (
    _In_ PFSRTL_ADVANCED_FCB_HEADER StreamContext,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );
#endif

#define FsRtlLookupPerStreamContext(_sc, _oid, _iid)                          \
 (((NULL != (_sc)) &&                                                         \
   FlagOn((_sc)->Flags2,FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS) &&              \
   !IsListEmpty(&(_sc)->FilterContexts)) ?                                    \
        FsRtlLookupPerStreamContextInternal((_sc), (_oid), (_iid)) :          \
        NULL)

//
//  Normally, contexts should be deleted when the file system notifies the
//  filter that the stream is being closed.  There are cases when a filter
//  may want to remove all existing contexts for a specific volume.  This
//  routine should be called at those times.  This routine should NOT be
//  called for the following cases:
//      - Inside your FreeCallback handler - The underlying file system has
//        already removed it from the linked list).
//      - Inside your IRP_CLOSE handler - If you do this then you will not
//        be notified when the stream is torn down.
//
//  This functions identically to FsRtlLookupPerStreamContext, except that the
//  returned context has been removed from the list.
//

#if (NTDDI_VERSION >= NTDDI_WINXP)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_STREAM_CONTEXT
FsRtlRemovePerStreamContext (
    _In_ PFSRTL_ADVANCED_FCB_HEADER StreamContext,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );
#endif


//
//  APIs for file systems to use for initializing and cleaning up
//  the Advaned FCB Header fields for PerStreamContext support
//

//
//  This will properly initialize the advanced header so that it can be
//  used with PerStream contexts.
//  Note:  A fast mutex must be placed in an advanced header.  It is the
//         caller's responsibility to properly create and initialize this
//         mutex before calling this macro.  The mutex field is only set
//         if a non-NULL value is passed in.
//

_IRQL_requires_max_(APC_LEVEL)
VOID
FORCEINLINE
FsRtlSetupAdvancedHeader(
    _In_ PVOID AdvHdr,
    _In_ PFAST_MUTEX FMutex )

/*
    The AdvHdr parameter should have a type of PFSRTL_ADVANCED_FCB_HEADER but
    I had to make it a PVOID because there are cases where this routine is
    called where a different type is passed in (where the advanced header
    is at the front of this other type).  This routine used to be a macro and
    I changed it to an INLINE so we could put the NTDDI_VERSION conditional into
    it.  To maintain compatiblity I made the AdvHdr parameter a PVOID and cast
    it to the correct type internally.
*/

{
    PFSRTL_ADVANCED_FCB_HEADER localAdvHdr = (PFSRTL_ADVANCED_FCB_HEADER)AdvHdr;

    localAdvHdr->Flags |= FSRTL_FLAG_ADVANCED_HEADER;
    localAdvHdr->Flags2 |= FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS;


#if (NTDDI_VERSION >= NTDDI_WINBLUE)
    localAdvHdr->Version = FSRTL_FCB_HEADER_V3;
#elif (NTDDI_VERSION >= NTDDI_WIN8)
    localAdvHdr->Version = FSRTL_FCB_HEADER_V2;
#elif (NTDDI_VERSION >= NTDDI_VISTA)
    localAdvHdr->Version = FSRTL_FCB_HEADER_V1;
#else
    localAdvHdr->Version = FSRTL_FCB_HEADER_V0;
#endif

    InitializeListHead( &localAdvHdr->FilterContexts );

    if (FMutex != NULL) {

        localAdvHdr->FastMutex = FMutex;
    }

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
//  API not avaialble down level
//  We want to support a driver compiled to the last version running downlevel,
//  so continue to use use the direct init of the push lock and not call
//  ExInitializePushLock.
//

    *((PULONG_PTR)(&localAdvHdr->PushLock)) = 0;
    /*ExInitializePushLock( &localAdvHdr->PushLock ); API not avaialble down level*/

    localAdvHdr->FileContextSupportPointer = NULL;
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)
    localAdvHdr->Oplock = NULL;
#endif


#if (NTDDI_VERSION >= NTDDI_WINBLUE)
    localAdvHdr->ReservedContext = NULL;
#endif

}


//
// File systems call this API to free any filter contexts still associated
// with an FSRTL_COMMON_FCB_HEADER that they are tearing down.
// The FreeCallback routine for each filter context will be called.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTeardownPerStreamContexts (
    _In_ PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader
    );

//
//  Function pointer to above routine for modules that need to dynamically import
//

typedef VOID (*PFN_FSRTLTEARDOWNPERSTREAMCONTEXTS) (_In_ PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader);
#endif

//
//  File System Filter PerFileObject Context Support
//

//
//  Filesystem filter drivers use these APIs to associate context
//  with individual open files.  For now these are only supported on file
//  objects with a FileObject extension which are only created by using
//  IoCreateFileSpecifyDeviceObjectHint.
//

//
//  OwnerId should uniquely identify a particular filter driver
//  (e.g. the address of the driver's device object).
//  InstanceId can be used to distinguish distinct contexts associated
//  by a filter driver with a single stream (e.g. the address of the
//  fileobject).
//

//
//  This structure needs to be embedded within the users context that
//  they want to associate with a given stream
//

typedef struct _FSRTL_PER_FILEOBJECT_CONTEXT {
    //
    //  This is linked into the File Object
    //

    LIST_ENTRY Links;

    //
    //  A Unique ID for this filter (ex: address of Driver Object, Device
    //  Object, or Device Extension)
    //

    PVOID OwnerId;

    //
    //  An optional ID to differentiate different contexts for the same
    //  filter.
    //

    PVOID InstanceId;

} FSRTL_PER_FILEOBJECT_CONTEXT, *PFSRTL_PER_FILEOBJECT_CONTEXT;


//
//  This will initialize the given FSRTL_PER_FILEOBJECT_CONTEXT structure.  This
//  should be used before calling "FsRtlInsertPerFileObjectContext".
//

#define FsRtlInitPerFileObjectContext( _fc, _owner, _inst )         \
    ((_fc)->OwnerId = (_owner),                                     \
     (_fc)->InstanceId = (_inst))                                   \

//
//  Associate the context at Ptr with the given FileObject.  The Ptr
//  structure should be filled in by the caller before calling this
//  routine (see FsRtlInitPerFileObjectContext).  If this file object does not
//  support filter contexts, STATUS_INVALID_DEVICE_REQUEST will be returned.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertPerFileObjectContext (
    _In_ PFILE_OBJECT FileObject,
    _In_ PFSRTL_PER_FILEOBJECT_CONTEXT Ptr
    );

//
//  Lookup a filter context associated with the FileObject specified.  The first
//  context matching OwnerId (and InstanceId, if present) is returned.  By not
//  specifying InstanceId, a filter driver can search for any context that it
//  has previously associated with a stream.  If no matching context is found,
//  NULL is returned.  If the FileObject does not support contexts,
//  NULL is returned.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILEOBJECT_CONTEXT
FsRtlLookupPerFileObjectContext (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );

//
//  Normally, contexts should be deleted when the IoManager notifies the
//  filter that the FileObject is being freed.  There are cases when a filter
//  may want to remove all existing contexts for a specific volume.  This
//  routine should be called at those times.  This routine should NOT be
//  called for the following case:
//      - Inside your FreeCallback handler - The IoManager has already removed
//        it from the linked list.
//
//  This functions identically to FsRtlLookupPerFileObjectContext, except that
//  the returned context has been removed from the list.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILEOBJECT_CONTEXT
FsRtlRemovePerFileObjectContext (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );

//++
//
//  VOID
//  FsRtlCompleteRequest (
//      _In_ PIRP Irp,
//      _In_ NTSTATUS Status
//      );
//
//  Routine Description:
//
//      This routine is used to complete an IRP with the indicated
//      status.  It does the necessary raise and lower of IRQL.
//
//  Arguments:
//
//      Irp - Supplies a pointer to the Irp to complete
//
//      Status - Supplies the completion status for the Irp
//
//  Return Value:
//
//      None.
//
//--

#define FsRtlCompleteRequest(IRP,STATUS) {         \
    (IRP)->IoStatus.Status = (STATUS);             \
    IoCompleteRequest( (IRP), IO_DISK_INCREMENT ); \
}


//++
//
//  VOID
//  FsRtlEnterFileSystem (
//      );
//
//  Routine Description:
//
//      This routine is used when entering a file system (e.g., through its
//      Fsd entry point).  It ensures that the file system cannot be suspended
//      while running and thus block other file I/O requests.  Upon exit
//      the file system must call FsRtlExitFileSystem.
//
//  Arguments:
//
//  Return Value:
//
//      None.
//
//--

#define FsRtlEnterFileSystem() { \
    KeEnterCriticalRegion();     \
}

//++
//
//  VOID
//  FsRtlExitFileSystem (
//      );
//
//  Routine Description:
//
//      This routine is used when exiting a file system (e.g., through its
//      Fsd entry point).
//
//  Arguments:
//
//  Return Value:
//
//      None.
//
//--

#define FsRtlExitFileSystem() { \
    KeLeaveCriticalRegion();    \
}

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadNotPossible(
    VOID
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadWait(
    VOID
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadNoWait(
    VOID
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadResourceMiss(
    VOID
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
FsRtlIncrementCcFastMdlReadWait(
    VOID
    );
#endif

//
//  Returns TRUE if the given fileObject represents a paging file, returns
//  FALSE otherwise.
//

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
LOGICAL
FsRtlIsPagingFile (
    _In_ PFILE_OBJECT FileObject
    );
#endif

// begin_ntosp
//
//  Returns TRUE if the given fileObject represents a system paging file,
//  returns FALSE otherwise.
//

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LOGICAL
FsRtlIsSystemPagingFile (
    _In_ PFILE_OBJECT FileObject
    );
#endif

// end_ntosp

#if (NTDDI_VERSION >= NTDDI_WIN2K)
//
//  This routine is available on:
//  * Windows 2000 SP4 plus URP
//  * Windows XP SP2 plus QFE ?
//  * Windows Server 2003 SP1
//
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlCreateSectionForDataScan(
    _Out_ PHANDLE SectionHandle,
    _Outptr_ PVOID *SectionObject,
    _Out_opt_ PLARGE_INTEGER SectionFileSize,
    _In_ PFILE_OBJECT FileObject,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_ ULONG Flags
    );
#endif

//
// Reparse Routines
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlValidateReparsePointBuffer (
    _In_ ULONG BufferLength,
    _In_reads_bytes_(BufferLength) PREPARSE_DATA_BUFFER ReparseBuffer
);

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlRemoveDotsFromPath(
    _Inout_updates_bytes_(PathLength) PWSTR OriginalString,
    _In_ USHORT PathLength,
    _Out_ USHORT *NewLength
);
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)
NTKERNELAPI
BOOLEAN
FsRtlIsNonEmptyDirectoryReparsePointAllowed(
    _In_ ULONG ReparseTag
);
#endif

// begin_ntosp
//////////////////////////////////////////////////////////////////////////
//
//              Extra Create Parameter Support routines
//
//  These routines are used when processing a create IRP to allow passing
//  extra information up and down the file system stack.  This is used by
//  file system filters, Client Side Encryption, Transactions etc.
//
//////////////////////////////////////////////////////////////////////////

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _ECP_LIST ECP_LIST;
typedef struct _ECP_LIST *PECP_LIST;
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef struct _ECP_HEADER ECP_HEADER;
typedef struct _ECP_HEADER *PECP_HEADER;
#endif

//
//  Prototype for the ECP cleanup routine callback
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef VOID
(*PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK) (
    _Inout_ PVOID EcpContext,
    _In_ LPCGUID EcpType
    );
#endif



//
//  Basic ECP functions
//

//
//  Flags used by FsRtlAllocateExtraCreateParameterList
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef ULONG FSRTL_ALLOCATE_ECPLIST_FLAGS;

    //
    //  Charge this memory against the quota of the current process
    //

    #define FSRTL_ALLOCATE_ECPLIST_FLAG_CHARGE_QUOTA    0x00000001
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlAllocateExtraCreateParameterList (
    _In_ FSRTL_ALLOCATE_ECPLIST_FLAGS Flags,
    _Outptr_ PECP_LIST *EcpList
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlFreeExtraCreateParameterList (
    _In_ PECP_LIST EcpList
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
NTSTATUS
FsRtlInitializeExtraCreateParameterList (
    _Inout_ PECP_LIST EcpList
    );
#endif

//
//  Flags used by FsRtlAllocateExtraCreateParameter
//            and FsRtlAllocateExtraCreateParameterFromLookasideList
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef ULONG FSRTL_ALLOCATE_ECP_FLAGS;

    //
    //  If set charge quota against the current process for this
    //  allocation.  This flag is ignored if using a lookaside list
    //

    #define FSRTL_ALLOCATE_ECP_FLAG_CHARGE_QUOTA    0x00000001

    //
    //  If set allocate the ECP from non-paged pool
    //  Else use paged pool
    //

    #define FSRTL_ALLOCATE_ECP_FLAG_NONPAGED_POOL   0x00000002
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlAllocateExtraCreateParameter (
    _In_ LPCGUID EcpType,
    _In_ ULONG SizeOfContext,
    _In_ FSRTL_ALLOCATE_ECP_FLAGS Flags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _In_ ULONG PoolTag,
    _Outptr_result_bytebuffer_(SizeOfContext) PVOID *EcpContext
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlFreeExtraCreateParameter (
    _In_ PVOID EcpContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
VOID
FsRtlInitializeExtraCreateParameter(
    _Out_ PECP_HEADER Ecp,
    _In_ ULONG EcpFlags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _In_ ULONG TotalSize,
    _In_ LPCGUID EcpType,
    _In_opt_ PVOID ListAllocatedFrom
    );
#endif

//
//  Flags used by FsRtlInitExtraCreateParameterLookasideList
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef ULONG FSRTL_ECP_LOOKASIDE_FLAGS;

    //
    //  If set this is a NON-PAGED lookaside list
    //  ELSE this is a PAGED lookaside list
    //

    #define FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL 0x00000002
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_When_(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(!(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL), _IRQL_requires_max_(APC_LEVEL))
NTKERNELAPI
VOID
FsRtlInitExtraCreateParameterLookasideList (
    _Inout_ PVOID Lookaside,
    _In_ FSRTL_ECP_LOOKASIDE_FLAGS Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_When_(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(!(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL), _IRQL_requires_max_(APC_LEVEL))
VOID
FsRtlDeleteExtraCreateParameterLookasideList (
    _Inout_ PVOID Lookaside,
    _In_ FSRTL_ECP_LOOKASIDE_FLAGS Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlAllocateExtraCreateParameterFromLookasideList (
    _In_ LPCGUID EcpType,
     ULONG SizeOfContext,
    _In_ FSRTL_ALLOCATE_ECP_FLAGS Flags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _Inout_ PVOID LookasideList,
    _Outptr_ PVOID *EcpContext
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertExtraCreateParameter (
    _Inout_ PECP_LIST EcpList,
    _Inout_ PVOID EcpContext
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFindExtraCreateParameter (
    _In_ PECP_LIST EcpList,
    _In_ LPCGUID EcpType,
    _Outptr_opt_ PVOID *EcpContext,
    _Out_opt_ ULONG *EcpContextSize
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlRemoveExtraCreateParameter (
    _Inout_ PECP_LIST EcpList,
    _In_ LPCGUID EcpType,
    _Outptr_ PVOID *EcpContext,
    _Out_opt_ ULONG *EcpContextSize
    );
#endif

//
//  Functions to get and set Extra Create Parameters into/out of a create IRP
//


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlGetEcpListFromIrp (
    _In_ PIRP Irp,
    _Outptr_result_maybenull_ PECP_LIST *EcpList
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlSetEcpListIntoIrp (
    _Inout_ PIRP Irp,
    _In_ PECP_LIST EcpList
    );
#endif


//
//   Additional functions used for full functionality
//


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlGetNextExtraCreateParameter (
    _In_ PECP_LIST EcpList,
    _In_opt_ PVOID CurrentEcpContext,
    _Out_opt_ LPGUID NextEcpType,
    _Outptr_opt_ PVOID *NextEcpContext,
    _Out_opt_ ULONG *NextEcpContextSize
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlAcknowledgeEcp (
    _In_ PVOID EcpContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_(APC_LEVEL)
VOID
FsRtlPrepareToReuseEcp (
    _In_ PVOID EcpContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsEcpAcknowledged (
    _In_ PVOID EcpContext
    );
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsEcpFromUserMode (
    _In_ PVOID EcpContext
    );
#endif

// end_ntosp

//////////////////////////////////////////////////////////////////////////////
//
//      This contains public ECP definitions
//
//////////////////////////////////////////////////////////////////////////////

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
// Start of NETWORK_OPEN_ECP_CONTEXT structures and definitions.
// This ECP can be used as a way to pass extra information at create time
// to network redirectors.
//

typedef enum {

    NetworkOpenLocationAny,         // No restrictions.
    NetworkOpenLocationRemote,      // Restrict to remote only.
    NetworkOpenLocationLoopback     // Restrict to local-machine only.

} NETWORK_OPEN_LOCATION_QUALIFIER;


typedef enum {

    NetworkOpenIntegrityAny,        // No restrictions on signing/encryption etc.
    NetworkOpenIntegrityNone,       // No signing/encryption.
    NetworkOpenIntegritySigned,     // Signed end to end.
    NetworkOpenIntegrityEncrypted,  // encrypted end-end.
    NetworkOpenIntegrityMaximum     // Best available.

} NETWORK_OPEN_INTEGRITY_QUALIFIER;




//
// ECP context for network create parameters.
//


#if (NTDDI_VERSION >= NTDDI_WIN7)

//
// Below we have the structures and definitions for Win7
//

// in flags.

typedef ULONG NETWORK_OPEN_IN_FLAGS;

#define NETWORK_OPEN_ECP_IN_FLAG_DISABLE_HANDLE_COLLAPSING 0x1
#define NETWORK_OPEN_ECP_IN_FLAG_DISABLE_HANDLE_DURABILITY 0x2
#define NETWORK_OPEN_ECP_IN_FLAG_FORCE_BUFFERED_SYNCHRONOUS_IO_HACK 0x80000000


#if (NTDDI_VERSION >= NTDDI_WIN8)
#define NETWORK_OPEN_ECP_IN_FLAG_DISABLE_OPLOCKS 0x4
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)    // ABRACADABRA_THRESHOLD
#define NETWORK_OPEN_ECP_IN_FLAG_REQ_MUTUAL_AUTH 0x8
#endif

// out flags

typedef ULONG NETWORK_OPEN_OUT_FLAGS;

#if (NTDDI_VERSION >= NTDDI_WINBLUE)    // ABRACADABRA_THRESHOLD
#define NETWORK_OPEN_ECP_OUT_FLAG_RET_MUTUAL_AUTH 0x8
#endif

typedef struct _NETWORK_OPEN_ECP_CONTEXT {

    USHORT Size;        // Must be set to the size of this structure.
    USHORT Reserved;    // Must be set to zero.

    struct {

        //
        // Pre-create restrictions
        //

        struct {

            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;
            NETWORK_OPEN_IN_FLAGS Flags;

        } in;

        //
        // Post create information returned to the caller.
        //

        struct {

            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;
            NETWORK_OPEN_OUT_FLAGS Flags;

        } out;

    } DUMMYSTRUCTNAME;

} NETWORK_OPEN_ECP_CONTEXT, *PNETWORK_OPEN_ECP_CONTEXT;

//
// This version of the NETWORK_OPEN_ECP_CONTEXT was used on
// Windows Vista. Drivers interpreting "Network ECP Contexts" on
// Vista OSes should use this version.
//

typedef struct _NETWORK_OPEN_ECP_CONTEXT_V0 {

    USHORT Size;        // Must be set to the size of this structure.
    USHORT Reserved;    // Must be set to zero.

    struct {

        //
        // Pre-create restrictions
        //

        struct {

            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;

        } in;

        //
        // Post create information returned to the caller.
        //

        struct {

            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;

        } out;

    } DUMMYSTRUCTNAME;

} NETWORK_OPEN_ECP_CONTEXT_V0, *PNETWORK_OPEN_ECP_CONTEXT_V0;

#elif (NTDDI_VERSION >= NTDDI_VISTA)

//
// Here is the definition of Network Open ECP for native Vista Drivers.
//

typedef struct _NETWORK_OPEN_ECP_CONTEXT {

    USHORT Size;        // Must be set to the size of this structure.
    USHORT Reserved;    // Must be set to zero.

    struct {

        //
        // Pre-create restrictions
        //

        struct {

            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;

        } in;

        //
        // Post create information returned to the caller.
        //

        struct {

            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;

        } out;

    } DUMMYSTRUCTNAME;

} NETWORK_OPEN_ECP_CONTEXT, *PNETWORK_OPEN_ECP_CONTEXT;
#endif

//
//  The GUID used for the NETWORK_OPEN_ECP_CONTEXT structure
//

DEFINE_GUID( GUID_ECP_NETWORK_OPEN_CONTEXT, 0xc584edbf, 0x00df, 0x4d28, 0xb8, 0x84, 0x35, 0xba, 0xca, 0x89, 0x11, 0xe8 );

//
// End NETWORK_OPEN_ECP_CONTEXT definitions
//

#endif //(NTDDI_VERSION >= NTDDI_VISTA)

//
// Here is the NETWORK_APP_INSTANCE_ECP_CONTEXT definitions
//

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// ECP context for an application to provide its instance ID.
//

typedef struct _NETWORK_APP_INSTANCE_ECP_CONTEXT {
    //
    //  This must be set to the size of this structure.
    //

    USHORT Size;

    //
    //  This must be set to zero.
    //

    USHORT Reserved;

    //
    //  The caller places a GUID that should always be unique for a single instance of
    //  the application.
    //

    GUID AppInstanceID;

} NETWORK_APP_INSTANCE_ECP_CONTEXT, *PNETWORK_APP_INSTANCE_ECP_CONTEXT;

//
//  The GUID used for the NETWORK_APP_INSTANCE_ECP_CONTEXT structure.
//  {6AA6BC45-A7EF-4af7-9008-FA462E144D74}
//
DEFINE_GUID(GUID_ECP_NETWORK_APP_INSTANCE, 0x6aa6bc45, 0xa7ef, 0x4af7, 0x90, 0x8, 0xfa, 0x46, 0x2e, 0x14, 0x4d, 0x74);

#endif // NTDDI_VERSION >= NTDDI_WIN8

//
// Here is the NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT definitions
//

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
//
// ECP context for an application to provide its instance ID.
//

typedef struct _NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT {
    //
    //  This must be set to the size of this structure.
    //

    USHORT Size;

    //
    //  This must be set to zero.
    //

    USHORT Reserved;

    //
    //  The caller places the major version and minor version.
    //  This ECP must accompany a NETWORK_APP_INSTANCE_ECP to be
    //  valid.
    //

    UINT64 VersionHigh;
    UINT64 VersionLow;

} NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT, *PNETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT;

//
//  The GUID used for the NETWORK_APP_INSTANCE_ECP_CONTEXT structure.
//  {6AA6BC45-A7EF-4af7-9008-FA462E144D74}
//
DEFINE_GUID(GUID_ECP_NETWORK_APP_INSTANCE_VERSION, 0xb7d082b9, 0x563b, 0x4f07, 0xa0, 0x7b, 0x52, 0x4a, 0x81, 0x16, 0xa0, 0x10);

#endif // NTDDI_VERSION >= NTDDI_WINBLUE

//
// End NETWORK_INSTANCE_ECP_CONTEXT definitions
//

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
// Start of PREFETCH_OPEN_ECP_CONTEXT structures and definitions.
// This ECP is used to communicate the fact that a given open request is done
// by the prefetcher.
//

//
// ECP structure for prefetcher opens.
//

typedef struct _PREFETCH_OPEN_ECP_CONTEXT {

    PVOID Context;      // Opaque context associated with the open.

} PREFETCH_OPEN_ECP_CONTEXT, *PPREFETCH_OPEN_ECP_CONTEXT;

//
//  The GUID used for the PREFETCH_OPEN_ECP_CONTEXT structure
//

DEFINE_GUID( GUID_ECP_PREFETCH_OPEN, 0xe1777b21, 0x847e, 0x4837, 0xaa, 0x45, 0x64, 0x16, 0x1d, 0x28, 0x6, 0x55 );

//
// End PREFETCH_OPEN_ECP_CONTEXT definitions
//

#endif


#if (NTDDI_VERSION >= NTDDI_WIN7)
//
//  The type GUID and structure for NFS (Network File System) extra create parameters
//
//
// {f326d30c-e5f8-4fe7-ab74-f5a3196d92db}
//

typedef struct sockaddr_storage *PSOCKADDR_STORAGE_NFS;


DEFINE_GUID (GUID_ECP_NFS_OPEN,
             0xf326d30c,
             0xe5f8,
             0x4fe7,
             0xab, 0x74, 0xf5, 0xa3, 0x19, 0x6d, 0x92, 0xdb);


typedef struct _NFS_OPEN_ECP_CONTEXT {

    //
    //  Export alias (share name) for the create with type PUNICODE_STRING. This is a
    //  hint and may be a name, NULL or zero length string
    //
    PUNICODE_STRING             ExportAlias;


    //
    // Socket address of client
    //
    PSOCKADDR_STORAGE_NFS       ClientSocketAddress;

} NFS_OPEN_ECP_CONTEXT, *PNFS_OPEN_ECP_CONTEXT, **PPNFS_OPEN_ECP_CONTEXT;

//
// ECP context for SRV create parameters.
//

//
// The GUID used for the SRV_OPEN_ECP_CONTEXT structure
// {BEBFAEBC-AABF-489d-9D2C-E9E361102853}
//
//typedef struct sockaddr_storage *PSOCKADDR_STORAGE_SMB;

DEFINE_GUID( GUID_ECP_SRV_OPEN,
             0xbebfaebc,
             0xaabf,
             0x489d,
             0x9d, 0x2c, 0xe9, 0xe3, 0x61, 0x10, 0x28, 0x53 );


typedef enum _SRV_INSTANCE_TYPE {

    SrvInstanceTypeUndefined = 0,

    //
    // Primary instance of SRV with user facing shares.
    //

    SrvInstanceTypePrimary = 1,

    //
    // Internal instance of SRV used by CSVFS
    //

    SrvInstanceTypeCsv     = 2,

    //
    // Internal instance of SRV used by S2D
    // at Software Bus Layer (SBL)
    //

    SrvInstanceTypeSBL     = 3,

    //
    // Internal instance of SRV used by Storage Replica
    //

    SrvInstanceTypeSR      = 4,

} SRV_INSTANCE_TYPE, *PSRV_INSTANCE_TYPE;

//
// Version of SRV_OPEN_ECP_CONTEXT. User first need to check
// size of the ECP, and only if size is at least 
// RTL_SIZEOF_THROUGH_FIELD(SRV_OPEN_ECP_CONTEXT, Version) then
// she can touch the Version filed. 
//

#define SRV_OPEN_ECP_CONTEXT_VERSION_2 2

typedef struct _SRV_OPEN_ECP_CONTEXT {

    //
    //  Share name for the create with type PUNICODE_STRING
    //

    PUNICODE_STRING ShareName;

    //
    // Socket address of client
    //

    PSOCKADDR_STORAGE_NFS SocketAddress;

    //
    //  Oplock state of open (for SMB/SMB2 oplock breaking logic)
    //

    BOOLEAN OplockBlockState;
    BOOLEAN OplockAppState;
    BOOLEAN OplockFinalState;

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

    //
    // User first need to check size of the ECP, and only if 
    // size is at least RTL_SIZEOF_THROUGH_FIELD(SRV_OPEN_ECP_CONTEXT, Version) 
    // then she can touch the Version filed. 
    // If this field is present then you can rely of it to
    // detect what other fields are present.
    //
    
    USHORT Version;

    //
    // What SRV instance this open is coming from
    // File system minifilters that attach to NTFS/REFS used by CSVFS
    // can use this filed to detect if this open is bypassing CSVFS.
    // If open goes through CSVFS then this ECP is either absent or instance
    // type is SrvInstacneTypeCsv.
    // If open is bypassing CSVFS and goes directly to the hiden volume then
    // instance is SrvInstanceTypeDefault.
    //
    // This field is present if Version is equal or above 
    // SRV_OPEN_ECP_CONTEXT_VERSION_2
    //

    SRV_INSTANCE_TYPE InstanceType;

#endif // (NTDDI_VERSION >= NTDDI_WIN10_RS2)

} SRV_OPEN_ECP_CONTEXT, *PSRV_OPEN_ECP_CONTEXT;

//
// End SRV_OPEN_ECP_CONTEXT definitions
//

#endif //(NTDDI_VERSION >= NTDDI_WIN7)

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// Begin Resume Key Filter definitions
//

//
// Extra Create Parameter GUID for the RKF_BYPASS_ECP_CONTEXT block.
//

DEFINE_GUID( GUID_ECP_RKF_BYPASS,
             0x02378cc6L,
             0xf73c,
             0x489c,
             0x82, 0x82, 0x56, 0x4d, 0x1a, 0x99, 0x13, 0x1b );

//
// The definition of the Resume Key Filter ECP for a Resume Key Filter bypass handle. The
// bypass handle bypasses all the protections that the Resume Key Filter provides for file
// state.
//
// Filters may create bypass ECP's for their own internal creates as needed for their work.
// However, if a bypass ECP is used the handle created MUST NOT change the file state that's
// being protected by the Resume Key Filter.
//
// If the Resume Key Filter is present and processes the ECP then the ECP is acknowledged.
//

typedef struct _RKF_BYPASS_ECP_CONTEXT {

    //
    // Reserved for future use. This must be initialized to 0.
    //

    INT Reserved;

    //
    // The version of the ECP context. This must be initialized to 0.
    //

    INT Version;

} RKF_BYPASS_ECP_CONTEXT, *PRKF_BYPASS_ECP_CONTEXT;

//
// End Resume Key Filter definitions
//

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// This GUID and structure are for passing back information from the I/O
// manager to the filter manager about a reparse when the reparse target
// goes to a new device.
//

DEFINE_GUID( GUID_ECP_IO_DEVICE_HINT,
             0xf315b732,
             0xac6b,
             0x4d4d,
             0xbe, 0xc, 0xb3, 0x12, 0x64, 0x90, 0xe1, 0xa3);

typedef struct _IO_DEVICE_HINT_ECP_CONTEXT {
    PDEVICE_OBJECT TargetDevice;
    UNICODE_STRING RemainingName;
} IO_DEVICE_HINT_ECP_CONTEXT, *PIO_DEVICE_HINT_ECP_CONTEXT;


#endif //(NTDDI_VERSION >= NTDDI_WIN8)

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// This GUID is used to identify ECP that is sent by CsvFs to the
// Metadata Node (MDS a.k.a. Coordinating Node), and contains information
// about the type of the create.
//
// {4248BE44-647F-488F-8BE5-A08AAF70F028}
//

DEFINE_GUID( GUID_ECP_CSV_DOWN_LEVEL_OPEN,
             0x4248be44,
             0x647f,
             0x488f,
             0x8b, 0xe5, 0xa0, 0x8a, 0xaf, 0x70, 0xf0, 0x28);

typedef enum _CSV_DOWN_LEVEL_FILE_TYPE {

    //
    // This is a file object that corresponds to the file being
    // opened on top of CsvFs by a user
    //

    CsvDownLevelFileObject      = 0,

    //
    // This is an internal file object that CsvFs opens. It might
    // be shared between multiple top-level opens from the same
    // node.
    //

    CsvCsvFsInternalFileObject = 1,

} CSV_DOWN_LEVEL_FILE_TYPE;


#define CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT_V1 1;


typedef struct _CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT {

    //
    // This field is used to distinguish version of the structure.
    //

    ULONG Version;

    //
    // Set to TRUE when create is part of CsvFs reestablishing its state
    // after being paused, and is set to FALSE otherwise
    //

    BOOLEAN IsResume;

    //
    // Type of the down level CsvFs file object that is being [re]opened
    //

    CSV_DOWN_LEVEL_FILE_TYPE FileType;

    //
    // Cluster Id of the node that has originated this create.
    //

    ULONG SourceNodeId;

    //
    // Cluster Id of the node that is the target for this create.
    //

    ULONG DestinationNodeId;

} CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT, *PCSV_DOWN_LEVEL_OPEN_ECP_CONTEXT;

//
// This GUID is used to identify ECP that can be sent to CsvFs to request
// file revision number. File revision number is tracked by the Metadata Node.
//
// {44AEC90B-DE65-4D46-8FBF-763F9D970B1D}
//

DEFINE_GUID(GUID_ECP_CSV_QUERY_FILE_REVISION,
            0x44aec90b,
            0xde65,
            0x4d46,
            0x8f, 0xbf, 0x76, 0x3f, 0x9d, 0x97, 0xb, 0x1d);

typedef struct _CSV_QUERY_FILE_REVISION_ECP_CONTEXT {

    //
    // NTFS File Id
    //
    LONGLONG FileId;

    //
    // FileRevision[0] increases each time the CSV MDS
    // stack is rebuilt and CSVFLT loses its state.
    //
    // FileRevision[1] increases each time CSV MDS
    // stack purges the cached revision # for the
    // file.
    //
    // FileRevision[2] increases each time CSV MDS
    // observes that file sizes might have
    // changed or the file might have been written
    // to. It also is incremented when one of the
    // nodes performs the first direct IO on a stream
    // associated with this file after opening this stream.
    //
    // If any of the numbers are 0 the caller should
    // assume that the file was modified
    //
    LONGLONG FileRevision[3];


} CSV_QUERY_FILE_REVISION_ECP_CONTEXT, *PCSV_QUERY_FILE_REVISION_ECP_CONTEXT;

//
// This GUID is used to identify ECP that can be sent to CsvFs to request
// file revision number. File revision number is tracked by the Metadata Node.
//
// {7A3A4AA1-AA74-4BC6-B070-AB56A38C1FED}
//

DEFINE_GUID(GUID_ECP_CSV_QUERY_FILE_REVISION_FILE_ID_128,
            0x7a3a4aa1,
            0xaa74,
            0x4bc6,
            0xb0, 0x70, 0xab, 0x56, 0xa3, 0x8c, 0x1f, 0xed);

typedef struct _CSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128 {

    //
    // 128 bit File Id
    //
    FILE_ID_128 FileId;

    //
    // FileRevision[0] increases each time the CSV MDS
    // stack is rebuilt and CSVFLT loses its state.
    //
    // FileRevision[1] increases each time CSV MDS
    // stack purges the cached revision # for the
    // file.
    //
    // FileRevision[2] increases each time CSV MDS
    // observes that file sizes might have
    // changed or the file might have been written
    // to. It also is incremented when one of the
    // nodes performs the first direct IO on a stream
    // associated with this file after opening this stream.
    //
    // If any of the numbers are 0 the caller should
    // assume that the file was modified
    //
    LONGLONG FileRevision[3];


} CSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128, *PCSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128;

//
// This GUID is used to identify ECP that can be sent to CsvFs to set
// properties how it should behaves for IOs arriving on this open.
//
// {7A9FDD94-7B58-42BB-9740-3CB86983A615}
//

DEFINE_GUID ( GUID_ECP_CSV_SET_HANDLE_PROPERTIES,
            0x7a9fdd94,
            0x7b58,
            0x42bb,
            0x97, 0x40, 0x3c, 0xb8, 0x69, 0x83, 0xa6, 0x15 );

//
// Is used only when file is opened directly on CSVFS. This flag is ignored when file
// is opened over SMB.
// Tells CSVFS that this file open should be valid only on coordinating node. 
// If open comes to CSVFS, and this node is not a coordinating then open would fail.
// If file is opened, and coordinating node is moved then file open will be invalidated
//
#define CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT_FLAGS_VALID_ONLY_IF_CSV_COORDINATOR 0x00000001

typedef struct _CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT {

    //
    // Size of the structure
    //
    SIZE_T Size;

    //
    // Hom many seconds CSVFS is allowed to hold IO issued on this file object
    // in pending state in case of CSV volume pause. Once time expires CSV will
    // complete all IO issued on this file object with status STATUS_CSV_IO_PAUSE_TIMEOUT.
    // Value 0xFFFFFFFF means taht there is no timeout and default behavior is requested.
    // Value 0 means CSV will not pause IO, and would complete IO immediately.
    // Any other value is rounded up to 10 seconds and is used as timeout.
    // Maximum supported timeout value is 30 minutes. If provided value is greater then
    // CSV will silently round it up to the maximum value;
    //
    ULONG PauseTimeoutInSeconds;

    //
    // A combination of the CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT_FLAGS_* flags
    //
    // Lower 16 bits are for the flags that would cause create to fail with STATUS_INVALID_PARAMETER 
    // if CSV does not recognise them, and upper 16 bits are for the flags that would be silently 
    // ignored if CSVFS does not know how to handle them.
    //
    ULONG Flags;

} CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT, *PCSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT;

#endif //(NTDDI_VERSION >= NTDDI_WIN8)

//
//  Structures to support callers opening specific reparse points without
//  inhibiting reparse behavior for all classes of reparse points.
//  OPEN_REPARSE_LIST is a structure used in an ECP with the below GUID,
//  and the OPEN_REPARSE_LIST points to a list of OPEN_REPARSE_LIST_ENTRY
//  structures specifying the tag and possibly GUID that should be
//  opened directly without returning STATUS_REPARSE.
//
//  If a match is found, the corresponding OPEN_REPARSE_LIST_ENTRY
//  structure will have the ENCOUNTERED flag set to indicate that
//  the object that was opened matched the given criteria.
//
//  If a match is found for a directory that is not the final path
//  component and STATUS_REPARSE is returned, the unprocessed path
//  length will be set in the RemainingLength field.
//
//  The following flags control behavior when a reparse point is encountered
//  on a directory that may be non-empty (one whose reparse tag is
//  recognized by FsRtlIsNonEmptyDirectoryReparsePointAllowed):
//
//    OPEN_REPARSE_POINT_REPARSE_IF_CHILD_EXISTS -
//    If the reparse point is on a directory that is not the final path
//    component and the next path component exists, reparse on the directory.
//
//    OPEN_REPARSE_POINT_REPARSE_IF_CHILD_NOT_EXISTS -
//    If the reparse point is on a directory that is not the final path
//    component and the next path component does not exist, reparse on the
//    directory.
//
//    OPEN_REPARSE_POINT_REPARSE_IF_DIRECTORY_FINAL_COMPONENT -
//    If the reparse point is on a directory that is the final path
//    component, reparse on the directory unless FILE_OPEN_REPARSE_POINT
//    is specified.
//
//  Specifying all three of the above flags is legal and simply means always
//  reparse on any directory reparse point.
//

#if (NTDDI_VERSION >= NTDDI_WINBLUE) || (defined(INCLUDE_OPEN_REPARSE_SUPPORT))

#define OPEN_REPARSE_POINT_TAG_ENCOUNTERED                       (0x00000001)
#define OPEN_REPARSE_POINT_REPARSE_IF_CHILD_EXISTS               (0x00000002)
#define OPEN_REPARSE_POINT_REPARSE_IF_CHILD_NOT_EXISTS           (0x00000004)
#define OPEN_REPARSE_POINT_REPARSE_IF_DIRECTORY_FINAL_COMPONENT  (0x00000008)
#define OPEN_REPARSE_POINT_VERSION_EX                            (0x80000000)

typedef struct _OPEN_REPARSE_LIST_ENTRY {
    LIST_ENTRY OpenReparseListEntry;
    ULONG      ReparseTag;
    ULONG      Flags;
    GUID       ReparseGuid;

    //
    //  Fields valid only if OPEN_REPARSE_POINT_VERSION_EX flag is set.
    //

    //
    //  Size of this structure
    //

    USHORT     Size;

    //
    //  Set to the unprocessed path length when the reparse point was
    //  encountered.
    //

    USHORT     RemainingLength;

} OPEN_REPARSE_LIST_ENTRY, *POPEN_REPARSE_LIST_ENTRY;

typedef struct _OPEN_REPARSE_LIST {
    LIST_ENTRY OpenReparseList;
} OPEN_REPARSE_LIST, *POPEN_REPARSE_LIST;

DEFINE_GUID( /* 323eb6a8-affd-4d95-8230-863bce09d37a */
    ECP_TYPE_OPEN_REPARSE_GUID,
    0x323eb6a8,
    0xaffd,
    0x4d95,
    0x82, 0x30, 0x86, 0x3b, 0xce, 0x09, 0xd3, 0x7a
);

#endif

#if (NTDDI_VERSION >= NTDDI_THRESHOLD)

//
// This GUID is used to identify ECP that can be sent to 
// NTFS to insert new CLFS container during volume mount
//
// {8650C9FE-0CEC-8BF6-BD1E-835956541090}
//

DEFINE_GUID ( ECP_TYPE_CLFS_CREATE_CONTAINER,
              0x8650c9fe,
              0x0cec,
              0x8bf6,
              0xbd, 0x1e, 0x83, 0x59, 0x56, 0x54, 0x10, 0x90 );

//
// This GUID is used to identify ECP that can be sent to
// query the redirection state of a file for a specific
// create operation
//
// {188d6bd6-a126-4fa8-bdf2-1ccdf896f3e0}
//

DEFINE_GUID( GUID_ECP_CREATE_REDIRECTION,
             0x188d6bd6,
             0xa126,
             0x4fa8,
             0xbd, 0xf2, 0x1c, 0xcd, 0xf8, 0x96, 0xf3, 0xe0 );

//
// ECP context for querying the redirection state of a file
// for a specific create operation
//

typedef struct _CREATE_REDIRECTION_ECP_CONTEXT {

    //
    //  This must be set to the size of this structure.
    //

    USHORT Size;

    //
    // Redirection state flags.
    //

    USHORT Flags;

    //
    // File Id
    //

    FILE_ID_128 FileId;

    //
    // Volume Guid
    //

    GUID VolumeGuid;

} CREATE_REDIRECTION_ECP_CONTEXT, *PCREATE_REDIRECTION_ECP_CONTEXT;

//
// Redirection state flags for GUID_ECP_CREATE_REDIRECTION
//

#define CREATE_REDIRECTION_FLAGS_SERVICED_FROM_LAYER                   0x0001
#define CREATE_REDIRECTION_FLAGS_SERVICED_FROM_SCRATCH                 0x0002
#define CREATE_REDIRECTION_FLAGS_SERVICED_FROM_REGISTERED_LAYER        0x0004
#define CREATE_REDIRECTION_FLAGS_SERVICED_FROM_REMOTE_LAYER            0x0008
#define CREATE_REDIRECTION_FLAGS_SERVICED_FROM_USER_MODE               0x0010

//
// To maintain compatibility with the code that has already used WCIFS_REDIRECTION ECP 
//

#define GUID_ECP_WCIFS_REDIRECTION GUID_ECP_CREATE_REDIRECTION

#define _WCIFS_REDIRECTION_ECP_CONTEXT _CREATE_REDIRECTION_ECP_CONTEXT
#define WCIFS_REDIRECTION_ECP_CONTEXT  CREATE_REDIRECTION_ECP_CONTEXT
#define PWCIFS_REDIRECTION_ECP_CONTEXT PCREATE_REDIRECTION_ECP_CONTEXT

#define WCIFS_REDIRECTION_FLAGS_CREATE_SERVICED_FROM_LAYER             CREATE_REDIRECTION_FLAGS_SERVICED_FROM_LAYER
#define WCIFS_REDIRECTION_FLAGS_CREATE_SERVICED_FROM_SCRATCH           CREATE_REDIRECTION_FLAGS_SERVICED_FROM_SCRATCH
#define WCIFS_REDIRECTION_FLAGS_CREATE_SERVICED_FROM_REGISTERED_LAYER  CREATE_REDIRECTION_FLAGS_SERVICED_FROM_REGISTERED_LAYER
#define WCIFS_REDIRECTION_FLAGS_CREATE_SERVICED_FROM_REMOTE_LAYER      CREATE_REDIRECTION_FLAGS_SERVICED_FROM_REMOTE_LAYER

#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_TH2)

//
//  The ATOMIC_CREATE extra create parameter allows a certain supplemental
//  operations to be performed on a file atomically during create.
//
//  There are input flags specifying which operations are requested, and
//  corresponding output flags indicating which operations were actually
//  performed on a successful create.
//
//
//  Operation flags:
//
//  SPARSE -- Requests that the sparse flag be set on the file.
//
//  REPARSE_POINT -- Requests that a reparse point be set on the file.
//
//  EOF -- Requests that a file size be set on the file.  This also implies
//  that on-disk allocation will occur to support the requested file size.
//
//  VDL -- Requests that a valid data length be set on the file.  This also
//  implies that the file size be set to at least the requested valid data
//  length.  This is considered a privileged operation if it could potentially
//  expose uninitialized data.
//
//  TIMESTAMPS -- Requests that timestamps be set.  For creation time, a value
//  of 0 means use the tunneled creation time (if applicable), otherwise use
//  the current time.  For the other 3 timestamps, a value of 0 means use the
//  current time.  A value of -1 tells NTFS to suspend its automatic updating
//  of that timestamp on this handle, as per setting of FileBasicInformation.
//
//  FILE_ATTRIBUTES -- Requests that specific high-order file attributes (in
//  the mask 0xFFFF0000) be set, as per setting of FileBasicInformation.  The
//  low-order file attributes (in the mask 0x0000FFFF) are purposely ignored
//  as IrpSp->Parameters.Create.FileAttributes are considered authoritative.
//
//
//  Additional input flags:
//
//  BEST_EFFORT -- If specified, then the file system should still try to
//  succeed the create even if some of the requested operations could not be
//  performed or are not supported by the file system; the caller may check
//  the outflags to see which operations were performed.  If not specified,
//  then the file system should fail the create if it cannot successfully
//  perform all of the requested operations.
//
//  SUPPRESS_PARENT_TIMESTAMPS_UPDATE -- If specified, then the parent's
//  timestamps will not be updated upon file creation.
//
//  SUPPRESS_DIR_CHANGE_NOTIFY -- If specified, then the create process will
//  not send directory change notification.
//
//  MARK_USN_SOURCE_INFO -- If specified, then the USN records for the create
//  carry the given UsnSourceInfo.  The handle is also marked with the given
//  UsnSourceInfo for future operations, as per FSCTL_MARK_HANDLE.
//
//  WRITE_USN_CLOSE_RECORD -- If specified, write a USN close record as part
//  of the create.  This mainly has value only if the caller does not make
//  further changes to the file before closing the file handle.
//
//
//  Additional output flags:
//
//  TIMESTAMPS_RETURNED - The file system stored the final timestamps in the
//  ECP structure for the caller to inspect.
//
//  FILE_ATTRIBUTES_RETURNED - The file system stored the final file
//  attributes in the ECP structure for the caller to inspect.
//
//  USN_CLOSE_RECORD_WRITTEN -- The file system wrote a USN close record as
//  part of the create (see WRITE_USN_CLOSE_RECORD above).
//
//  USN_RETURNED - The file system stored the final USN in the ECP structure
//  for the caller to inspect.  This will only be stable if a close record
//  was also written as part of the create.
//

#define ATOMIC_CREATE_ECP_IN_FLAG_SPARSE_SPECIFIED                  0x0001
#define ATOMIC_CREATE_ECP_IN_FLAG_REPARSE_POINT_SPECIFIED           0x0002
#define ATOMIC_CREATE_ECP_IN_FLAG_EOF_SPECIFIED                     0x0004
#define ATOMIC_CREATE_ECP_IN_FLAG_VDL_SPECIFIED                     0x0008
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#define ATOMIC_CREATE_ECP_IN_FLAG_TIMESTAMPS_SPECIFIED              0x0010
#endif
#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
#define ATOMIC_CREATE_ECP_IN_FLAG_FILE_ATTRIBUTES_SPECIFIED         0x0020
#endif
#define ATOMIC_CREATE_ECP_IN_FLAG_OPERATION_MASK                    0x00ff

#define ATOMIC_CREATE_ECP_IN_FLAG_BEST_EFFORT                       0x0100
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#define ATOMIC_CREATE_ECP_IN_FLAG_SUPPRESS_PARENT_TIMESTAMPS_UPDATE 0x0200
#define ATOMIC_CREATE_ECP_IN_FLAG_SUPPRESS_DIR_CHANGE_NOTIFY        0x0400
#endif
#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
#define ATOMIC_CREATE_ECP_IN_FLAG_MARK_USN_SOURCE_INFO              0x0800
#define ATOMIC_CREATE_ECP_IN_FLAG_WRITE_USN_CLOSE_RECORD            0x1000
#endif

//
// We set these out flags if operations are performed.
//

#define ATOMIC_CREATE_ECP_OUT_FLAG_SPARSE_SET                       0x0001
#define ATOMIC_CREATE_ECP_OUT_FLAG_REPARSE_POINT_SET                0x0002
#define ATOMIC_CREATE_ECP_OUT_FLAG_EOF_SET                          0x0004
#define ATOMIC_CREATE_ECP_OUT_FLAG_VDL_SET                          0x0008
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#define ATOMIC_CREATE_ECP_OUT_FLAG_TIMESTAMPS_SET                   0x0010
#endif
#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
#define ATOMIC_CREATE_ECP_OUT_FLAG_FILE_ATTRIBUTES_SET              0x0020
#endif
#define ATOMIC_CREATE_ECP_OUT_FLAG_OPERATION_MASK                   0x00ff
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#define ATOMIC_CREATE_ECP_OUT_FLAG_TIMESTAMPS_RETURNED              0x0100
#define ATOMIC_CREATE_ECP_OUT_FLAG_FILE_ATTRIBUTES_RETURNED         0x0200
#define ATOMIC_CREATE_ECP_OUT_FLAG_USN_SOURCE_INFO_MARKED           0x0400
#define ATOMIC_CREATE_ECP_OUT_FLAG_USN_CLOSE_RECORD_WRITTEN         0x0800
#define ATOMIC_CREATE_ECP_OUT_FLAG_USN_RETURNED                     0x1000
#endif

typedef struct _FILE_TIMESTAMPS {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
} FILE_TIMESTAMPS, *PFILE_TIMESTAMPS;

typedef struct _ATOMIC_CREATE_ECP_CONTEXT {

    //
    //  Size of this context structure.
    //

    USHORT Size;

    //
    //  ATOMIC_CREATE_ECP_IN_FLAG_xxx flags.
    //

    USHORT InFlags;

    //
    //  ATOMIC_CREATE_ECP_OUT_FLAG_xxx flags.
    //

    USHORT OutFlags;

    //
    //  Size of the ReparseBuffer below.
    //
    //  This can't exceed MAXIMUM_REPARSE_DATA_BUFFER_SIZE (16K).
    //

    USHORT ReparseBufferLength;

    //
    //  Optional REPARSE_DATA_BUFFER or REPARSE_GUID_DATA_BUFFER.
    //

    _Field_size_bytes_opt_(ReparseBufferLength) PREPARSE_DATA_BUFFER ReparseBuffer;

    //
    //  Optional file size.
    //

    LONGLONG FileSize;

    //
    //  Optional valid data length.
    //

    LONGLONG ValidDataLength;

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
    //
    //  Optional timestamps (input/output).
    //

    PFILE_TIMESTAMPS FileTimestamps;
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
    //
    //  File attributes (input/output).
    //

    ULONG FileAttributes;

    //
    //  Optional USN source info flags.
    //

    ULONG UsnSourceInfo;

    //
    //  USN at the end of create (output only).
    //

    USN Usn;
#endif

} ATOMIC_CREATE_ECP_CONTEXT, *PATOMIC_CREATE_ECP_CONTEXT;

//
//  The GUID used for the ATOMIC_CREATE_ECP_CONTEXT structure.
//
//  {4720bd83-52ac-4104-a130-d1ec6a8cc8e5}
//

DEFINE_GUID( GUID_ECP_ATOMIC_CREATE,
             0x4720bd83,
             0x52ac,
             0x4104,
             0xa1, 0x30, 0xd1, 0xec, 0x6a, 0x8c, 0xc8, 0xe5 );

#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)

#define ECP_OPEN_PARAMETERS_FLAG_OPEN_FOR_READ      0x1
#define ECP_OPEN_PARAMETERS_FLAG_OPEN_FOR_WRITE     0x2
#define ECP_OPEN_PARAMETERS_FLAG_OPEN_FOR_DELETE    0x4

//
//  The ECP_OPEN_PARAMETERS extra create parameter allows the caller
//  to specify the real intention of the open without interfering
//  with existing handles and/or oplocks on the file.
//

typedef struct _ECP_OPEN_PARAMETERS {

    //
    //  Size of this context structure.
    //

    USHORT Size;

    //
    // Reserved for future use. This must be initialized to 0.
    //

    USHORT Reserved;


    ULONG Flags;

} ECP_OPEN_PARAMETERS, *PECP_OPEN_PARAMETERS;


//
// Extra Create Parameter GUID for open.
//

// {CD0A93C3-3BB7-463d-ACCB-969D3435A5A5}
DEFINE_GUID(GUID_ECP_OPEN_PARAMETERS,
            0xcd0a93c3,
            0x3bb7,
            0x463d,
            0xac, 0xcb, 0x96, 0x9d, 0x34, 0x35, 0xa5, 0xa5);

#endif //(NTDDI_VERSION >= NTDDI_WIN10_RS3)

//
//  This routine allows the caller to change the referenced file object that
//  is pointed to by either:
//  - One of Mm's image control areas for this stream
//  - Mm's data control area for this stream
//  - Cc's shared cache map for this stream
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef enum _FSRTL_CHANGE_BACKING_TYPE {

    ChangeDataControlArea,
    ChangeImageControlArea,
    ChangeSharedCacheMap

} FSRTL_CHANGE_BACKING_TYPE, *PFSRTL_CHANGE_BACKING_TYPE;

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlChangeBackingFileObject (
    _In_opt_ PFILE_OBJECT CurrentFileObject,
    _In_ PFILE_OBJECT NewFileObject,
    _In_ FSRTL_CHANGE_BACKING_TYPE ChangeBackingType,
    _In_ ULONG Flags                //reserved, must be zero
    );

#endif

//
// Flags for FsRtlLogCcFlushError
//

#define FSRTL_CC_FLUSH_ERROR_FLAG_NO_HARD_ERROR  0x1
#define FSRTL_CC_FLUSH_ERROR_FLAG_NO_LOG_ENTRY   0x2

#if (NTDDI_VERSION >= NTDDI_VISTA)

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlLogCcFlushError(
    _In_ PUNICODE_STRING FileName,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ NTSTATUS FlushError,
    _In_ ULONG Flags
    );

#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
//  Routine to query whether volume startup application such as autochk
//  have completed.
//

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreVolumeStartupApplicationsComplete(
    VOID
    );

#endif

// begin_ntosp

#if (NTDDI_VERSION > NTDDI_VISTA)

//
//  Routine to query maximum depth of virtual disk layering support.
//

NTKERNELAPI
ULONG
FsRtlQueryMaximumVirtualDiskNestingLevel (
    VOID
    );

//
//  Routine to query virtual disk info for a given disk or volume object
//

NTKERNELAPI
NTSTATUS
FsRtlGetVirtualDiskNestingLevel (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PULONG NestingLevel,
    _Out_opt_ PULONG NestingFlags
    );

//
//  Current possible values for NestingFlags.
//

#define FSRTL_VIRTDISK_FULLY_ALLOCATED         0x00000001
#define FSRTL_VIRTDISK_NO_DRIVE_LETTER         0x00000002

#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)

//
//  Routine to get a correlation ID (currently a GUID) that is common across
//  the volume stack and can be used to correlate events.
//

NTSTATUS
FsRtlVolumeDeviceToCorrelationId (
    _In_ PDEVICE_OBJECT VolumeDeviceObject,
    _Out_ GUID *Guid
    );

#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)

//
//  Routine to synchronously issue a device IO control operation and wait for
//  it to complete
//

NTSTATUS
FsRtlIssueDeviceIoControl (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG IoCtl,
    _In_ UCHAR Flags,
    _In_opt_ PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _In_opt_ PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_opt_ PULONG_PTR IosbInformation
    );

//
//  Routine used by file systems to retrieve the logical and physical sector
//  size information for the give storage stack device object.
//

NTSTATUS
FsRtlGetSectorSizeInformation (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PFILE_FS_SECTOR_SIZE_INFORMATION SectorSizeInfo
    );

#endif

//
//  Routine to get supported features for a volume that a device object is attached to
//

#if (NTDDI_VERSION >= NTDDI_WIN8)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlGetSupportedFeatures (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PULONG SupportedFeatures
    );

//
//  Routines to support the following operations using a file object
//

NTSTATUS
FsRtlKernelFsControlFile(
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_to_(OutputBufferLength, *RetOutputBufferSize) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_ PULONG RetOutputBufferSize
    );

NTSTATUS
FsRtlQueryKernelEaFile(
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*LengthReturned) PVOID ReturnedEaData,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(EaListLength) PVOID EaList,
    _In_ ULONG EaListLength,
    _In_opt_ PULONG EaIndex,
    _In_ BOOLEAN RestartScan,
    _Out_opt_ PULONG LengthReturned
    );

NTSTATUS
FsRtlSetKernelEaFile(
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(Length) PVOID EaBuffer,
    _In_ ULONG Length
    );

#endif

#if (NTDDI_VERSION >= NTDDI_THRESHOLD)
//
//  Routines to support the following operations using a file object
//

NTSTATUS
FsRtlQueryInformationFile(
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*RetFileInformationSize) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _Out_ PULONG RetFileInformationSize
    );

#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
//  Routine for Querying the VDL of a file
//

NTSTATUS
FsRtlQueryCachedVdl(
    _In_ PFILE_OBJECT FileObject,
    _Out_ PLONGLONG Vdl
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
//  Routine to update disk IO counters for filesystems
//

VOID
FsRtlUpdateDiskCounters (
    _In_ ULONG64 BytesRead,
    _In_ ULONG64 BytesWritten
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FsRtlDismountComplete (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ NTSTATUS DismountStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
_IRQL_requires_max_ (APC_LEVEL)
NTSTATUS
FsRtlSetDriverBacking(
    _In_ PDRIVER_OBJECT DriverObj,
    _In_ ULONG Flags                        //see below flag definitions
    );

//
//  If set back this driver using the PageFile
//

#define FSRTL_DRIVER_BACKING_FLAG_USE_PAGE_FILE        0x00000001

#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

BOOLEAN
NTKERNELAPI
FsRtlIsMobileOS();

#endif

// TODO_NTDDI_WIN10_TH2
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
_IRQL_requires_max_(APC_LEVEL)
PFN_NUMBER
FsRtlIsExtentDangling (
    _In_ PFN_NUMBER StartPage,
    _In_ PFN_NUMBER NumberOfPages,
    _In_ ULONG Flags
    );

BOOLEAN
FsRtlIsDaxVolume (
    _In_ PFILE_OBJECT FileObject
    );
#endif

//
//  Define two constants describing the view size (and alignment)
//  that the Cache Manager uses to map files.
//

#define VACB_MAPPING_GRANULARITY         (0x40000)
#define VACB_OFFSET_SHIFT                (18)

//
// Public portion of BCB
//

typedef struct _PUBLIC_BCB {

    //
    // Type and size of this record
    //
    // NOTE: The first four fields must be the same as the BCB in cc.h.
    //

    CSHORT NodeTypeCode;
    CSHORT NodeByteSize;

    //
    // Description of range of file which is currently mapped.
    //

    ULONG MappedLength;
    LARGE_INTEGER MappedFileOffset;
} PUBLIC_BCB, *PPUBLIC_BCB;

//
//  File Sizes structure.
//

typedef struct _CC_FILE_SIZES {

    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER FileSize;
    LARGE_INTEGER ValidDataLength;

} CC_FILE_SIZES, *PCC_FILE_SIZES;

//
//  Read ahead parameters exposed publicly
//

typedef struct _READ_AHEAD_PARAMETERS {

    CSHORT NodeByteSize;

    //
    //  Granularity of read aheads, which must be an even power of 2 and >= PAGE_SIZE
    //  See Also: CcSetReadAheadGranularity.

    ULONG Granularity;

    //
    //  The request size in number of bytes, to be used when performing pipelined read-aheads.
    //  Each read ahead request that is pipelined is broken into smaller PipelinedRequestSize
    //  sized requests. This is typically used to increase the throughput by parallelizing
    //  multiple requests instead of one single big one.
    //
    //  Special behavior:
    //   If this value is zero, then Cc will break every read-ahead request into two.
    //   This is used for backward compatibility where we used to break every read-ahead
    //   request for remote FS into two.
    //

    ULONG PipelinedRequestSize;

    //
    //  Growth of read ahead in percentage of the data that has already been
    //  read by the application so far
    //

    ULONG ReadAheadGrowthPercentage;

} READ_AHEAD_PARAMETERS, *PREAD_AHEAD_PARAMETERS;


//
// Define a Cache Manager callback structure.  These routines are required
// by the Lazy Writer, so that it can acquire resources in the right order
// to avoid deadlocks.  Note that otherwise you would have most FS requests
// acquiring FS resources first and caching structures second, while the
// Lazy Writer needs to acquire its own resources first, and then FS
// structures later as it calls the file system.
//

//
// First define the procedure pointer typedefs
//

//
// This routine is called by the Lazy Writer prior to doing a write,
// since this will require some file system resources associated with
// this cached file. The context parameter supplied is whatever the FS
// passed as the LazyWriteContext parameter when is called
// CcInitializeCacheMap.
//

typedef
BOOLEAN (*PACQUIRE_FOR_LAZY_WRITE) (
     _In_ PVOID Context,
     _In_ BOOLEAN Wait
     );

//
// This routine releases the Context acquired above.
//

typedef
VOID (*PRELEASE_FROM_LAZY_WRITE) (
     _In_ PVOID Context
     );

//
// This routine is called by the Lazy Writer prior to doing a readahead.
//

typedef
BOOLEAN (*PACQUIRE_FOR_READ_AHEAD) (
     _In_ PVOID Context,
     _In_ BOOLEAN Wait
     );

//
// This routine releases the Context acquired above.
//

typedef
VOID (*PRELEASE_FROM_READ_AHEAD) (
     _In_ PVOID Context
     );

typedef struct _CACHE_MANAGER_CALLBACKS {

    PACQUIRE_FOR_LAZY_WRITE AcquireForLazyWrite;
    PRELEASE_FROM_LAZY_WRITE ReleaseFromLazyWrite;
    PACQUIRE_FOR_READ_AHEAD AcquireForReadAhead;
    PRELEASE_FROM_READ_AHEAD ReleaseFromReadAhead;

} CACHE_MANAGER_CALLBACKS, *PCACHE_MANAGER_CALLBACKS;

//
//  This structure is passed into CcUninitializeCacheMap
//  if the caller wants to know when the cache map is deleted.
//

typedef struct _CACHE_UNINITIALIZE_EVENT {
    struct _CACHE_UNINITIALIZE_EVENT *Next;
    KEVENT Event;
} CACHE_UNINITIALIZE_EVENT, *PCACHE_UNINITIALIZE_EVENT;

//
// Callback routine for retrieving dirty pages from Cache Manager.
//

typedef
VOID (*PDIRTY_PAGE_ROUTINE) (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ PLARGE_INTEGER OldestLsn,
    _In_ PLARGE_INTEGER NewestLsn,
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );

//
// Callback routine for doing log file flushes to Lsn.
//

typedef
VOID (*PFLUSH_TO_LSN) (
    _In_ PVOID LogHandle,
    _In_ LARGE_INTEGER Lsn
    );

//
//  Callback routine into FS to get the percentage of fullness of the log
//

typedef
VOID (*PQUERY_LOG_USAGE) (
    _In_ PVOID LogHandle,
    _Out_ PUSHORT PercentageFull
    );

//
//  Callback routine into FS to perform FS-side of processing to complete
//  the async read request.  Like completing the original IRP.
//

typedef
BOOLEAN (*PASYNC_READ_COMPLETION_CALLBACK) (
     _In_ PVOID Context
     );


//
// Macro to test whether a file is cached or not.
//

#define CcIsFileCached(FO) (                                                         \
    ((FO)->SectionObjectPointer != NULL) &&                                          \
    (((PSECTION_OBJECT_POINTERS)(FO)->SectionObjectPointer)->SharedCacheMap != NULL) \
)

extern ULONG CcFastMdlReadWait;

//
//  Async read request context
//

typedef struct _CC_ASYNC_READ_CONTEXT {

    //
    //  Completion callback routine
    //

    PASYNC_READ_COMPLETION_CALLBACK CompletionRoutine;

    //
    //  Context to send to completion callback routine
    //

    PVOID Context;

    //
    //  Mdl describing user's buffer
    //

    PMDL Mdl;

    //
    //  The mode of the requester.
    //  Used to lock the MDL.
    //

    KPROCESSOR_MODE RequestorMode;

    //
    //  Virtual Disk Nesting Level
    //

    ULONG NestingLevel;

} CC_ASYNC_READ_CONTEXT, *PCC_ASYNC_READ_CONTEXT;

//
// The following routines are intended for use by File Systems Only.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcInitializeCacheMap (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes,
    _In_ BOOLEAN PinAccess,
    _In_ PCACHE_MANAGER_CALLBACKS Callbacks,
    _In_ PVOID LazyWriteContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcUninitializeCacheMap (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PLARGE_INTEGER TruncateSize,
    _In_opt_ PCACHE_UNINITIALIZE_EVENT UninitializeEvent
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcSetFileSizes (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
NTSTATUS
CcSetFileSizesEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes
    );
#endif

#define CcGetFileSizePointer(FO) (                                     \
    ((PLARGE_INTEGER)((FO)->SectionObjectPointer->SharedCacheMap) + 1) \
)

//
//  Flags for CcPurgeCacheSection
//

//
//  UNINITIALIZE_CACHE_MAPS - All private cache maps will be uninitialized
//     before purging the data.  This pattern may be specified as TRUE.
//

#define UNINITIALIZE_CACHE_MAPS          (1)

//
//  DO_NOT_RETRY_PURGE - CcPurgeCacheSection will not retry purging the file
//     on purge failure even if Mm says the file can be truncated.  The return
//     value will specify whether or not the purge succeeded.
//

#define DO_NOT_RETRY_PURGE               (2)

//
//  DO_NOT_PURGE_DIRTY_PAGES - Instructs CcPurgeCacheSection to fail any
//      purge requests that would cause the caller to throw away dirty data. This
//      flag should be used when initiating a coherency flush/purge to ensure that
//      the file system does not throw away data generated in the gap between a
//      flush and purge.
//

#define DO_NOT_PURGE_DIRTY_PAGES         (4)

//
//  PURGE_WITH_ACTIVE_VIEWS - Instructs CcPurgeCacheSection to not attempt t
//      drain out references to a VACB before purging.  Instead, individual
//      pages are trimmed.  It is the responsibility of the caller to
//      synchronize such that trimmed pages do not become mapped.
//

#define PURGE_WITH_ACTIVE_VIEWS          (8)

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
BOOLEAN
CcPurgeCacheSection (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags
    );

#elif (NTDDI_VERSION >= NTDDI_WIN2K)

NTKERNELAPI
BOOLEAN
CcPurgeCacheSection (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN UninitializeCacheMaps
    );
#endif

#define CC_FLUSH_AND_PURGE_NO_PURGE             (0x1)
#define CC_FLUSH_AND_PURGE_GATHER_DIRTY_BITS    (0x2)

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
VOID
CcCoherencyFlushAndPurgeCache (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_opt_ ULONG Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcSetDirtyPageThreshold (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG DirtyPageThreshold
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcFlushCache (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_opt_ PIO_STATUS_BLOCK IoStatus
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
LARGE_INTEGER
CcGetFlushedValidData (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ BOOLEAN BcbListHeld
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcZeroData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER StartOffset,
    _In_ PLARGE_INTEGER EndOffset,
    _In_ BOOLEAN Wait
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PVOID
CcRemapBcb (
    _In_ PVOID Bcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcRepinBcb (
    _In_ PVOID Bcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcUnpinRepinnedBcb (
    _In_ PVOID Bcb,
    _In_ BOOLEAN WriteThrough,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PFILE_OBJECT
CcGetFileObjectFromSectionPtrs (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
PFILE_OBJECT
CcGetFileObjectFromSectionPtrsRef (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
PFILE_OBJECT
CcGetFileObjectFromBcb (
    _In_ PVOID Bcb
    );
#endif


//
// These routines are implemented to support write throttling.
//

//
//  BOOLEAN
//  CcCopyWriteWontFlush (
//      IN PFILE_OBJECT FileObject,
//      IN PLARGE_INTEGER FileOffset,
//      IN ULONG Length
//      );
//

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
BOOLEAN
CcCopyWriteWontFlush (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length
    );
#else
#define CcCopyWriteWontFlush(FO,FOFF,LEN) ((LEN) <= 0X1000000)
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcCanIWrite (
    _In_opt_ PFILE_OBJECT FileObject,
    _In_ ULONG BytesToWrite,
    _In_ BOOLEAN Wait,
    _In_ UCHAR Retrying
    );
#endif

typedef
VOID (*PCC_POST_DEFERRED_WRITE) (
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcDeferWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_POST_DEFERRED_WRITE PostRoutine,
    _In_ PVOID Context1,
    _In_ PVOID Context2,
    _In_ ULONG BytesToWrite,
    _In_ BOOLEAN Retrying
    );
#endif

//
// The following routines provide a data copy interface to the cache, and
// are intended for use by File Servers and File Systems.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcFastCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FileOffset,
    _In_ ULONG Length,
    _In_ ULONG PageCount,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcCopyWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_reads_bytes_(Length) PVOID Buffer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcFastCopyWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FileOffset,
    _In_ ULONG Length,
    _In_reads_bytes_(Length) PVOID Buffer
    );
#endif

//
//  The following routines provide an Mdl interface for transfers to and
//  from the cache, and are primarily intended for File Servers.
//
//  NOBODY SHOULD BE CALLING THESE MDL ROUTINES DIRECTLY, USE FSRTL AND
//  FASTIO INTERFACES.
//

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcMdlRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

//
//  This routine is now a wrapper for FastIo if present or CcMdlReadComplete2
//
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcMdlReadComplete (
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcPrepareMdlWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif
//
//  This routine is now a wrapper for FastIo if present or CcMdlWriteComplete2
//
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcMdlWriteComplete (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
CcMdlWriteAbort (
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

//
// Common ReadAhead call for Copy Read and Mdl Read.
//
// ReadAhead should always be invoked by calling the CcReadAhead macro,
// which tests first to see if the read is large enough to warrant read
// ahead.  Measurements have shown that, calling the read ahead routine
// actually decreases performance for small reads, such as issued by
// many compilers and linkers.  Compilers simply want all of the include
// files to stay in memory after being read the first time.
//

#define CcReadAhead(FO,FOFF,LEN) {                       \
    if ((LEN) >= 256) {                                  \
        CcScheduleReadAhead((FO),(FOFF),(LEN));          \
    }                                                    \
}

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcScheduleReadAhead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length
    );
#endif

//
//  The following routine allows a caller to wait for the next batch
//  of lazy writer work to complete.  In particular, this provides a
//  mechanism for a caller to be sure that all available lazy closes
//  at the time of this call have issued.
//
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
NTSTATUS
CcWaitForCurrentLazyWriterActivity (
    VOID
    );
#endif

//
// This routine changes the read ahead granularity for a file, which is
// PAGE_SIZE by default.
//
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcSetReadAheadGranularity (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG Granularity
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
BOOLEAN
CcCopyWriteEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ PETHREAD IoIssuerThread
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
BOOLEAN
CcCopyReadEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PETHREAD IoIssuerThread
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
NTKERNELAPI
BOOLEAN
CcAsyncCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PETHREAD IoIssuerThread,
    _In_ PCC_ASYNC_READ_CONTEXT AsyncReadContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
CcScheduleReadAheadEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ PETHREAD IoIssuerThread
    );
#endif

//  TODO_NTDDI_WIN10_REDSTONE
//  TODO_NTDDI_ABRACADABRA
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
NTKERNELAPI
VOID
CcInitializeCacheMapEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes,
    _In_ BOOLEAN PinAccess,
    _In_ PCACHE_MANAGER_CALLBACKS Callbacks,
    _In_ PVOID LazyWriteContext,
    _In_ ULONG Flags
    );
#endif

//
// The following routines provide direct access data which is pinned in the
// cache, and is primarily intended for use by File Systems.  In particular,
// this mode of access is ideal for dealing with volume structures.
//

//
//  Flags for pinning
//
//  Note: The flags for pinning and the flags for mapping cannot overlap unless
//     the flag has the same meaning.
//

//
//  Synchronous Wait - normally specified.  This pattern may be specified as TRUE.
//

#define PIN_WAIT                         (1)

//
//  Acquire metadata Bcb exclusive (default is shared, Lazy Writer uses exclusive).
//
//  Must be set with PIN_WAIT.
//

#define PIN_EXCLUSIVE                    (2)

//
//  Acquire metadata Bcb but do not fault data in.  Default is to fault the data in.
//  This unusual flag is only used by Ntfs for cache coherency synchronization between
//  compressed and uncompressed streams for the same compressed file.
//
//  Must be set with PIN_WAIT.
//

#define PIN_NO_READ                      (4)

//
//  This option may be used to pin data only if the Bcb already exists.  If the Bcb
//  does not already exist - the pin is unsuccessful and no Bcb is returned.  This routine
//  provides a way to see if data is already pinned (and possibly dirty) in the cache,
//  without forcing a fault if the data is not there.
//

#define PIN_IF_BCB                       (8)

//
//  If this option is specified, the caller is responsible for tracking the
//  dirty ranges and calling MmSetAddressRangeModified on these ranges before
//  they are flushed.  Ranges should only be pinned via this manner if the
//  entire range will be written or purged (one or the other must occur).
//

#define PIN_CALLER_TRACKS_DIRTY_DATA      (32)

//
//  If this option is specified, Cc will used reserved views to map the data
//  requested if Mm has no views to give Cc at the time of mapping the data.
//  This flag should only be used for critical data, like file system metadata
//  or other data critical to the file system remaining consistent.  This is
//  a best effort attempt to ensure that we have enough kernel VA space for
//  critical system mappings, but once they are all gone, the call will fail
//  with insufficient resources.
//
//

#define PIN_HIGH_PRIORITY                 (64)

//
//  If this option is specified, Cc will always assume VerifyRequired when flushing the BCB.
//

#define PIN_VERIFY_REQUIRED                 (128)

//
//  Flags for mapping
//

//
//  Synchronous Wait - normally specified.  This pattern may be specified as TRUE.
//

#define MAP_WAIT                          (1)

//
//  Acquire metadata Bcb but do not fault data in.  Default is to fault the data in.
//  This should not overlap with any of the PIN_ flags so they can be passed down to
//  CcPinFileData
//

#define MAP_NO_READ                       (16)

//
//  If this option is specified, Cc will used reserved views to map the data
//  requested if Mm has no views to give Cc at the time of mapping the data.
//  This flag should only be used for critical data, like file system metadata
//  or other data critical to the file system remaining consistent.  This is
//  a best effort attempt to ensure that we have enough kernel VA space for
//  critical system mappings, but once they are all gone, the call will fail
//  with insufficient resources.
//
//

#define MAP_HIGH_PRIORITY                 (64)

//
// The following flags are valid Flags parameter that CcInitializeCacheMapEx accepts
//

#define CACHE_USE_DIRECT_ACCESS_MAPPING         (0x00000001)

#define CACHE_VALID_FLAGS               \
    (CACHE_USE_DIRECT_ACCESS_MAPPING)


#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcPinRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
BOOLEAN
CcMapData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
#elif (NTDDI_VERSION >= NTDDI_WIN2K)

NTKERNELAPI
BOOLEAN
CcMapData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcPinMappedData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _Inout_ PVOID *Bcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcPreparePinWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Zero,
    _In_ ULONG Flags,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcSetDirtyPinnedData (
    _In_ PVOID BcbVoid,
    _In_opt_ PLARGE_INTEGER Lsn
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcUnpinData (
    _In_ PVOID Bcb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcSetBcbOwnerPointer (
    _In_ PVOID Bcb,
    _In_ PVOID OwnerPointer
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcUnpinDataForThread (
    _In_ PVOID Bcb,
    _In_ ERESOURCE_THREAD ResourceThreadId
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
VOID
CcSetAdditionalCacheAttributes (
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN DisableReadAhead,
    _In_ BOOLEAN DisableWriteBehind
    );
#endif

//
//  Flags for use with CcSetAdditionalCacheAttributesEx()
//

//
//  This flag tells Cc that the FS wants to request aggressive unmap behind
//  on a particular stream.
//

#define CC_AGGRESSIVE_UNMAP_BEHIND             (0x00000001)

//
//  Indicates that Cc should not perform read ahead on this stream irrespective
//  of any handle level hints (i.e. Sequential Scan)
//

#define CC_DISABLE_READ_AHEAD                  (0x00000002)

//
//  Indicates that Cc should not perform write behind on this stream.
//

#define CC_DISABLE_WRITE_BEHIND                (0x00000004)

//
//  Indicates that Cc should not track dirty pages on this stream. It is the callers
//  responsibility to track and flush and clean dirty pages that the memory manager is
//  aware of.
//

#define CC_DISABLE_DIRTY_PAGE_TRACKING         (0x00000008)

//
//  This flag tells Cc that the FS wants to coordinate in charging Disk IO to
//  the appropriate process. This is a volume level setting.
//

#define CC_ENABLE_DISK_IO_ACCOUNTING           (0x00000010)

//
//  Flag to tell Cc to disable unmap behind.
//  Currently, used only for Ntfs' MFT file.
//

#define CC_DISABLE_UNMAP_BEHIND                 (0x00000020)

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
CcSetAdditionalCacheAttributesEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG Flags
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
VOID
CcSetParallelFlushFile (
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN EnableParallelFlush
    );
#endif // NTDDI_VERSION >= NTDDI_VISTA

#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
VOID
CcSetLogHandleForFile (
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID LogHandle,
    _In_ PFLUSH_TO_LSN FlushToLsnRoutine
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WINXP)
NTKERNELAPI
LARGE_INTEGER
CcGetDirtyPages (
    _In_ PVOID LogHandle,
    _In_ PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );
#endif // NTDDI_VERSION >= NTDDI_WINXP

#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTKERNELAPI
BOOLEAN
CcIsThereDirtyData (
    _In_ PVPB Vpb
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTKERNELAPI
BOOLEAN
CcIsThereDirtyDataEx (
    _In_ PVPB Vpb,
    _In_opt_ PULONG NumberOfDirtyPages
    );
#endif

#ifndef __SSPI_H__
#define __SSPI_H__
#define ISSP_LEVEL  32          
#define ISSP_MODE   0           

#if defined(_NO_KSECDD_IMPORT_)

#define KSECDDDECLSPEC

#else

#define KSECDDDECLSPEC __declspec(dllimport)

#endif

typedef WCHAR SEC_WCHAR;
typedef CHAR SEC_CHAR;

#ifndef __SECSTATUS_DEFINED__
typedef LONG SECURITY_STATUS;
#define __SECSTATUS_DEFINED__
#endif

#define SEC_TEXT TEXT
#define SEC_FAR
#define SEC_ENTRY __stdcall


#ifndef __SECHANDLE_DEFINED__
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;

#define __SECHANDLE_DEFINED__
#endif // __SECHANDLE_DEFINED__

#define SecInvalidateHandle( x )    \
            ((PSecHandle) (x))->dwLower = ((PSecHandle) (x))->dwUpper = ((ULONG_PTR) ((INT_PTR)-1)) ;

#define SecIsValidHandle( x ) \
            ( ( ((PSecHandle) (x))->dwLower != ((ULONG_PTR) ((INT_PTR) -1 ))) && \
              ( ((PSecHandle) (x))->dwUpper != ((ULONG_PTR) ((INT_PTR) -1 ))) )

//
// pseudo handle value: the handle has already been deleted
//

#define SEC_DELETED_HANDLE  ((ULONG_PTR) (-2))

typedef SecHandle CredHandle;
typedef PSecHandle PCredHandle;

typedef SecHandle CtxtHandle;
typedef PSecHandle PCtxtHandle;

typedef LARGE_INTEGER _SECURITY_INTEGER, SECURITY_INTEGER, *PSECURITY_INTEGER; 
typedef SECURITY_INTEGER TimeStamp;                 
typedef SECURITY_INTEGER * PTimeStamp;      
typedef UNICODE_STRING SECURITY_STRING, *PSECURITY_STRING;  

//
// SecPkgInfo structure
//
//  Provides general information about a security provider
//

typedef struct _SecPkgInfoW
{
    unsigned long fCapabilities;        // Capability bitmask
    unsigned short wVersion;            // Version of driver
    unsigned short wRPCID;              // ID for RPC Runtime
    unsigned long cbMaxToken;           // Size of authentication token (max)
#ifdef MIDL_PASS
    [string]
#endif
    SEC_WCHAR * Name;           // Text name

#ifdef MIDL_PASS
    [string]
#endif
    SEC_WCHAR * Comment;        // Comment
} SecPkgInfoW, * PSecPkgInfoW;

#  define SecPkgInfo SecPkgInfoW        
#  define PSecPkgInfo PSecPkgInfoW      

//
//  Security Package Capabilities
//
#define SECPKG_FLAG_INTEGRITY                   0x00000001  // Supports integrity on messages
#define SECPKG_FLAG_PRIVACY                     0x00000002  // Supports privacy (confidentiality)
#define SECPKG_FLAG_TOKEN_ONLY                  0x00000004  // Only security token needed
#define SECPKG_FLAG_DATAGRAM                    0x00000008  // Datagram RPC support
#define SECPKG_FLAG_CONNECTION                  0x00000010  // Connection oriented RPC support
#define SECPKG_FLAG_MULTI_REQUIRED              0x00000020  // Full 3-leg required for re-auth.
#define SECPKG_FLAG_CLIENT_ONLY                 0x00000040  // Server side functionality not available
#define SECPKG_FLAG_EXTENDED_ERROR              0x00000080  // Supports extended error msgs
#define SECPKG_FLAG_IMPERSONATION               0x00000100  // Supports impersonation
#define SECPKG_FLAG_ACCEPT_WIN32_NAME           0x00000200  // Accepts Win32 names
#define SECPKG_FLAG_STREAM                      0x00000400  // Supports stream semantics
#define SECPKG_FLAG_NEGOTIABLE                  0x00000800  // Can be used by the negotiate package
#define SECPKG_FLAG_GSS_COMPATIBLE              0x00001000  // GSS Compatibility Available
#define SECPKG_FLAG_LOGON                       0x00002000  // Supports common LsaLogonUser
#define SECPKG_FLAG_ASCII_BUFFERS               0x00004000  // Token Buffers are in ASCII
#define SECPKG_FLAG_FRAGMENT                    0x00008000  // Package can fragment to fit
#define SECPKG_FLAG_MUTUAL_AUTH                 0x00010000  // Package can perform mutual authentication
#define SECPKG_FLAG_DELEGATION                  0x00020000  // Package can delegate
#define SECPKG_FLAG_READONLY_WITH_CHECKSUM      0x00040000  // Package can delegate
#define SECPKG_FLAG_RESTRICTED_TOKENS           0x00080000  // Package supports restricted callers
#define SECPKG_FLAG_NEGO_EXTENDER               0x00100000  // this package extends SPNEGO, there is at most one
#define SECPKG_FLAG_NEGOTIABLE2                 0x00200000  // this package is negotiated under the NegoExtender
#define SECPKG_FLAG_APPCONTAINER_PASSTHROUGH    0x00400000  // this package receives all calls from appcontainer apps
#define SECPKG_FLAG_APPCONTAINER_CHECKS         0x00800000  // this package receives calls from appcontainer apps
                                                            // if the following checks succeed
                                                            // 1. Caller has domain auth capability or
                                                            // 2. Target is a proxy server or
                                                            // 3. The caller has supplied creds
#define SECPKG_FLAG_CREDENTIAL_ISOLATION_ENABLED 0x01000000 // this package is running with Credential Guard enabled

#define SECPKG_ID_NONE      0xFFFF

//
// Extended Call Flags that currently contains
// Appcontainer related information about the caller.
// Packages can query for these
// via an LsaFunction GetExtendedCallFlags
//

#define SECPKG_CALLFLAGS_APPCONTAINER                   0x00000001
#define SECPKG_CALLFLAGS_APPCONTAINER_AUTHCAPABLE       0x00000002
#define SECPKG_CALLFLAGS_FORCE_SUPPLIED                 0x00000004
#define SECPKG_CALLFLAGS_APPCONTAINER_UPNCAPABLE        0x00000008

//
// SecBuffer
//
//  Generic memory descriptors for buffers passed in to the security
//  API
//

typedef struct _SecBuffer {
    unsigned long cbBuffer;             // Size of the buffer, in bytes
    unsigned long BufferType;           // Type of the buffer (below)
#ifdef MIDL_PASS
    [size_is(cbBuffer)] char * pvBuffer;                         // Pointer to the buffer
#else
    _Field_size_bytes_(cbBuffer) void SEC_FAR * pvBuffer;            // Pointer to the buffer
#endif
} SecBuffer, * PSecBuffer;

typedef struct _SecBufferDesc {
    unsigned long ulVersion;            // Version number
    unsigned long cBuffers;             // Number of buffers
#ifdef MIDL_PASS
    [size_is(cBuffers)]
#endif
    _Field_size_(cBuffers) PSecBuffer pBuffers;                // Pointer to array of buffers
} SecBufferDesc, SEC_FAR * PSecBufferDesc;

#define SECBUFFER_VERSION           0

#define SECBUFFER_EMPTY             0   // Undefined, replaced by provider
#define SECBUFFER_DATA              1   // Packet data
#define SECBUFFER_TOKEN             2   // Security token
#define SECBUFFER_PKG_PARAMS        3   // Package specific parameters
#define SECBUFFER_MISSING           4   // Missing Data indicator
#define SECBUFFER_EXTRA             5   // Extra data
#define SECBUFFER_STREAM_TRAILER    6   // Security Trailer
#define SECBUFFER_STREAM_HEADER     7   // Security Header
#define SECBUFFER_NEGOTIATION_INFO  8   // Hints from the negotiation pkg
#define SECBUFFER_PADDING           9   // non-data padding
#define SECBUFFER_STREAM            10  // whole encrypted message
#define SECBUFFER_MECHLIST          11
#define SECBUFFER_MECHLIST_SIGNATURE 12
#define SECBUFFER_TARGET            13  // obsolete
#define SECBUFFER_CHANNEL_BINDINGS  14
#define SECBUFFER_CHANGE_PASS_RESPONSE 15
#define SECBUFFER_TARGET_HOST       16
#define SECBUFFER_ALERT             17
#define SECBUFFER_APPLICATION_PROTOCOLS 18  // Lists of application protocol IDs, one per negotiation extension
#define SECBUFFER_SRTP_PROTECTION_PROFILES      19  // List of SRTP protection profiles, in descending order of preference
#define SECBUFFER_SRTP_MASTER_KEY_IDENTIFIER    20  // SRTP master key identifier
#define SECBUFFER_TOKEN_BINDING                 21  // Supported Token Binding protocol version and key parameters
#define SECBUFFER_PRESHARED_KEY                 22  // Preshared key
#define SECBUFFER_PRESHARED_KEY_IDENTITY        23  // Preshared key identity
#define SECBUFFER_DTLS_MTU                      24  // DTLS path MTU setting


#define SECBUFFER_ATTRMASK                      0xF0000000
#define SECBUFFER_READONLY                      0x80000000  // Buffer is read-only, no checksum
#define SECBUFFER_READONLY_WITH_CHECKSUM        0x10000000  // Buffer is read-only, and checksummed
#define SECBUFFER_RESERVED                      0x60000000  // Flags reserved to security system


typedef struct _SEC_NEGOTIATION_INFO {
    unsigned long       Size;           // Size of this structure
    unsigned long       NameLength;     // Length of name hint
    SEC_WCHAR * Name;           // Name hint
    void *      Reserved;       // Reserved
} SEC_NEGOTIATION_INFO, * PSEC_NEGOTIATION_INFO ;

typedef struct _SEC_CHANNEL_BINDINGS {
    unsigned long  dwInitiatorAddrType;
    unsigned long  cbInitiatorLength;
    unsigned long  dwInitiatorOffset;
    unsigned long  dwAcceptorAddrType;
    unsigned long  cbAcceptorLength;
    unsigned long  dwAcceptorOffset;
    unsigned long  cbApplicationDataLength;
    unsigned long  dwApplicationDataOffset;
} SEC_CHANNEL_BINDINGS, * PSEC_CHANNEL_BINDINGS ;


typedef enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT
{
    SecApplicationProtocolNegotiationExt_None,
    SecApplicationProtocolNegotiationExt_NPN,
    SecApplicationProtocolNegotiationExt_ALPN
} SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT, *PSEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT;

typedef struct _SEC_APPLICATION_PROTOCOL_LIST {
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT ProtoNegoExt; // Protocol negotiation extension type to use with this list of protocols
    unsigned short ProtocolListSize;                       // Size in bytes of the protocol ID list
    unsigned char ProtocolList[ANYSIZE_ARRAY];             // 8-bit length-prefixed application protocol IDs, most preferred first
} SEC_APPLICATION_PROTOCOL_LIST, *PSEC_APPLICATION_PROTOCOL_LIST;

typedef struct _SEC_APPLICATION_PROTOCOLS {
    unsigned long ProtocolListsSize;                            // Size in bytes of the protocol ID lists array
    SEC_APPLICATION_PROTOCOL_LIST ProtocolLists[ANYSIZE_ARRAY]; // Array of protocol ID lists
} SEC_APPLICATION_PROTOCOLS, *PSEC_APPLICATION_PROTOCOLS;


typedef struct _SEC_SRTP_PROTECTION_PROFILES {
    unsigned short ProfilesSize;                // Size in bytes of the SRTP protection profiles array
    unsigned short ProfilesList[ANYSIZE_ARRAY]; // Array of SRTP protection profiles
} SEC_SRTP_PROTECTION_PROFILES, *PSEC_SRTP_PROTECTION_PROFILES;

typedef struct _SEC_SRTP_MASTER_KEY_IDENTIFIER {
    unsigned char MasterKeyIdentifierSize;             // Size in bytes of the SRTP master key identifier
    unsigned char MasterKeyIdentifier[ANYSIZE_ARRAY];  // SRTP master key identifier
} SEC_SRTP_MASTER_KEY_IDENTIFIER, *PSEC_SRTP_MASTER_KEY_IDENTIFIER;


typedef struct _SEC_TOKEN_BINDING {
    unsigned char MajorVersion;                 // Supported major version of the Token Binding protocol
    unsigned char MinorVersion;                 // Supported minor version of the Token Binding protocol
    unsigned short KeyParametersSize;           // Size in bytes of the Token Binding key parameter IDs array
    unsigned char KeyParameters[ANYSIZE_ARRAY]; // Token Binding key parameter IDs, most preferred first
} SEC_TOKEN_BINDING, *PSEC_TOKEN_BINDING;

typedef struct _SEC_PRESHAREDKEY {
    unsigned short KeySize;                     // Size in bytes of the PSK
    unsigned char  Key[ANYSIZE_ARRAY];          // PSK
} SEC_PRESHAREDKEY, *PSEC_PRESHAREDKEY;

typedef struct _SEC_PRESHAREDKEY_IDENTITY {
    unsigned short KeyIdentitySize;             // Size in bytes of the PSK Identity
    unsigned char  KeyIdentity[ANYSIZE_ARRAY];  // PSK Identity
} SEC_PRESHAREDKEY_IDENTITY, *PSEC_PRESHAREDKEY_IDENTITY;

typedef struct _SEC_DTLS_MTU {
    unsigned short PathMTU;                     // Path MTU for the connection
} SEC_DTLS_MTU, *PSEC_DTLS_MTU;


//
//  Data Representation Constant:
//
#define SECURITY_NATIVE_DREP        0x00000010
#define SECURITY_NETWORK_DREP       0x00000000

//
//  Credential Use Flags
//
#define SECPKG_CRED_INBOUND         0x00000001
#define SECPKG_CRED_OUTBOUND        0x00000002
#define SECPKG_CRED_BOTH            0x00000003
#define SECPKG_CRED_DEFAULT         0x00000004
#define SECPKG_CRED_RESERVED        0xF0000000

//
//  SSP SHOULD prompt the user for credentials/consent, independent
//  of whether credentials to be used are the 'logged on' credentials
//  or retrieved from credman.
//
//  An SSP may choose not to prompt, however, in circumstances determined
//  by the SSP.
//

#define SECPKG_CRED_AUTOLOGON_RESTRICTED    0x00000010

//
// auth will always fail, ISC() is called to process policy data only
//

#define SECPKG_CRED_PROCESS_POLICY_ONLY     0x00000020


//
//  InitializeSecurityContext Requirement and return flags:
//

#define ISC_REQ_DELEGATE                0x00000001
#define ISC_REQ_MUTUAL_AUTH             0x00000002
#define ISC_REQ_REPLAY_DETECT           0x00000004
#define ISC_REQ_SEQUENCE_DETECT         0x00000008
#define ISC_REQ_CONFIDENTIALITY         0x00000010
#define ISC_REQ_USE_SESSION_KEY         0x00000020
#define ISC_REQ_PROMPT_FOR_CREDS        0x00000040
#define ISC_REQ_USE_SUPPLIED_CREDS      0x00000080
#define ISC_REQ_ALLOCATE_MEMORY         0x00000100
#define ISC_REQ_USE_DCE_STYLE           0x00000200
#define ISC_REQ_DATAGRAM                0x00000400
#define ISC_REQ_CONNECTION              0x00000800
#define ISC_REQ_CALL_LEVEL              0x00001000
#define ISC_REQ_FRAGMENT_SUPPLIED       0x00002000
#define ISC_REQ_EXTENDED_ERROR          0x00004000
#define ISC_REQ_STREAM                  0x00008000
#define ISC_REQ_INTEGRITY               0x00010000
#define ISC_REQ_IDENTIFY                0x00020000
#define ISC_REQ_NULL_SESSION            0x00040000
#define ISC_REQ_MANUAL_CRED_VALIDATION  0x00080000
#define ISC_REQ_RESERVED1               0x00100000
#define ISC_REQ_FRAGMENT_TO_FIT         0x00200000
// This exists only in Windows Vista and greater
#define ISC_REQ_FORWARD_CREDENTIALS     0x00400000
#define ISC_REQ_NO_INTEGRITY            0x00800000 // honored only by SPNEGO
#define ISC_REQ_USE_HTTP_STYLE          0x01000000
#define ISC_REQ_UNVERIFIED_TARGET_NAME  0x20000000
#define ISC_REQ_CONFIDENTIALITY_ONLY    0x40000000 // honored by SPNEGO/Kerberos

#define ISC_RET_DELEGATE                0x00000001
#define ISC_RET_MUTUAL_AUTH             0x00000002
#define ISC_RET_REPLAY_DETECT           0x00000004
#define ISC_RET_SEQUENCE_DETECT         0x00000008
#define ISC_RET_CONFIDENTIALITY         0x00000010
#define ISC_RET_USE_SESSION_KEY         0x00000020
#define ISC_RET_USED_COLLECTED_CREDS    0x00000040
#define ISC_RET_USED_SUPPLIED_CREDS     0x00000080
#define ISC_RET_ALLOCATED_MEMORY        0x00000100
#define ISC_RET_USED_DCE_STYLE          0x00000200
#define ISC_RET_DATAGRAM                0x00000400
#define ISC_RET_CONNECTION              0x00000800
#define ISC_RET_INTERMEDIATE_RETURN     0x00001000
#define ISC_RET_CALL_LEVEL              0x00002000
#define ISC_RET_EXTENDED_ERROR          0x00004000
#define ISC_RET_STREAM                  0x00008000
#define ISC_RET_INTEGRITY               0x00010000
#define ISC_RET_IDENTIFY                0x00020000
#define ISC_RET_NULL_SESSION            0x00040000
#define ISC_RET_MANUAL_CRED_VALIDATION  0x00080000
#define ISC_RET_RESERVED1               0x00100000
#define ISC_RET_FRAGMENT_ONLY           0x00200000
// This exists only in Windows Vista and greater
#define ISC_RET_FORWARD_CREDENTIALS     0x00400000

#define ISC_RET_USED_HTTP_STYLE         0x01000000
#define ISC_RET_NO_ADDITIONAL_TOKEN     0x02000000 // *INTERNAL*
#define ISC_RET_REAUTHENTICATION        0x08000000 // *INTERNAL*
#define ISC_RET_CONFIDENTIALITY_ONLY    0x40000000 // honored by SPNEGO/Kerberos

#define ASC_REQ_DELEGATE                0x00000001
#define ASC_REQ_MUTUAL_AUTH             0x00000002
#define ASC_REQ_REPLAY_DETECT           0x00000004
#define ASC_REQ_SEQUENCE_DETECT         0x00000008
#define ASC_REQ_CONFIDENTIALITY         0x00000010
#define ASC_REQ_USE_SESSION_KEY         0x00000020
#define ASC_REQ_SESSION_TICKET          0x00000040
#define ASC_REQ_ALLOCATE_MEMORY         0x00000100
#define ASC_REQ_USE_DCE_STYLE           0x00000200
#define ASC_REQ_DATAGRAM                0x00000400
#define ASC_REQ_CONNECTION              0x00000800
#define ASC_REQ_CALL_LEVEL              0x00001000
#define ASC_REQ_FRAGMENT_SUPPLIED       0x00002000
#define ASC_REQ_EXTENDED_ERROR          0x00008000
#define ASC_REQ_STREAM                  0x00010000
#define ASC_REQ_INTEGRITY               0x00020000
#define ASC_REQ_LICENSING               0x00040000
#define ASC_REQ_IDENTIFY                0x00080000
#define ASC_REQ_ALLOW_NULL_SESSION      0x00100000
#define ASC_REQ_ALLOW_NON_USER_LOGONS   0x00200000
#define ASC_REQ_ALLOW_CONTEXT_REPLAY    0x00400000
#define ASC_REQ_FRAGMENT_TO_FIT         0x00800000

#define ASC_REQ_NO_TOKEN                0x01000000
#define ASC_REQ_PROXY_BINDINGS          0x04000000
//      SSP_RET_REAUTHENTICATION        0x08000000  // *INTERNAL*
#define ASC_REQ_ALLOW_MISSING_BINDINGS  0x10000000

#define ASC_RET_DELEGATE                0x00000001
#define ASC_RET_MUTUAL_AUTH             0x00000002
#define ASC_RET_REPLAY_DETECT           0x00000004
#define ASC_RET_SEQUENCE_DETECT         0x00000008
#define ASC_RET_CONFIDENTIALITY         0x00000010
#define ASC_RET_USE_SESSION_KEY         0x00000020
#define ASC_RET_SESSION_TICKET          0x00000040
#define ASC_RET_ALLOCATED_MEMORY        0x00000100
#define ASC_RET_USED_DCE_STYLE          0x00000200
#define ASC_RET_DATAGRAM                0x00000400
#define ASC_RET_CONNECTION              0x00000800
#define ASC_RET_CALL_LEVEL              0x00002000 // skipped 1000 to be like ISC_
#define ASC_RET_THIRD_LEG_FAILED        0x00004000
#define ASC_RET_EXTENDED_ERROR          0x00008000
#define ASC_RET_STREAM                  0x00010000
#define ASC_RET_INTEGRITY               0x00020000
#define ASC_RET_LICENSING               0x00040000
#define ASC_RET_IDENTIFY                0x00080000
#define ASC_RET_NULL_SESSION            0x00100000
#define ASC_RET_ALLOW_NON_USER_LOGONS   0x00200000
#define ASC_RET_ALLOW_CONTEXT_REPLAY    0x00400000  // deprecated - don't use this flag!!!
#define ASC_RET_FRAGMENT_ONLY           0x00800000
#define ASC_RET_NO_TOKEN                0x01000000
#define ASC_RET_NO_ADDITIONAL_TOKEN     0x02000000  // *INTERNAL*
//      SSP_RET_REAUTHENTICATION        0x08000000  // *INTERNAL*

//
//  Security Credentials Attributes:
//

#define SECPKG_CRED_ATTR_NAMES        1
#define SECPKG_CRED_ATTR_SSI_PROVIDER 2
#define SECPKG_CRED_ATTR_KDC_PROXY_SETTINGS 3
#define SECPKG_CRED_ATTR_CERT         4
#define SECPKG_CRED_ATTR_PAC_BYPASS   5

typedef struct _SecPkgCredentials_NamesW
{
#ifdef MIDL_PASS
    [string]
#endif
    SEC_WCHAR * sUserName;

} SecPkgCredentials_NamesW, * PSecPkgCredentials_NamesW;

#  define SecPkgCredentials_Names SecPkgCredentials_NamesW      
#  define PSecPkgCredentials_Names PSecPkgCredentials_NamesW    

#if NTDDI_VERSION > NTDDI_WS03
typedef struct _SecPkgCredentials_SSIProviderW
{
    SEC_WCHAR * sProviderName;
    unsigned long       ProviderInfoLength;
    char *      ProviderInfo;
} SecPkgCredentials_SSIProviderW, * PSecPkgCredentials_SSIProviderW;
#endif // End W2k3SP1 and greater
#  define SecPkgCredentials_SSIProvider SecPkgCredentials_SSIProviderW      
#  define PSecPkgCredentials_SSIProvider PSecPkgCredentials_SSIProviderW    

#define KDC_PROXY_SETTINGS_V1                 1
#define KDC_PROXY_SETTINGS_FLAGS_FORCEPROXY 0x1

typedef struct _SecPkgCredentials_KdcProxySettingsW
{
    ULONG  Version;             // KDC_PROXY_SETTINGS_V1
    ULONG  Flags;               // KDC_PROXY_SETTINGS_FLAGS_*
    USHORT ProxyServerOffset;   // ProxyServer, optional
    USHORT ProxyServerLength;
    USHORT ClientTlsCredOffset; // ClientTlsCred, optional
    USHORT ClientTlsCredLength;
} SecPkgCredentials_KdcProxySettingsW, *PSecPkgCredentials_KdcProxySettingsW;


typedef struct _SecPkgCredentials_Cert
{
    unsigned long  EncodedCertSize;
    unsigned char* EncodedCert;
} SecPkgCredentials_Cert, * PSecPkgCredentials_Cert;


//
//  Security Context Attributes:
//

#define SECPKG_ATTR_SIZES           0
#define SECPKG_ATTR_NAMES           1
#define SECPKG_ATTR_LIFESPAN        2
#define SECPKG_ATTR_DCE_INFO        3
#define SECPKG_ATTR_STREAM_SIZES    4
#define SECPKG_ATTR_KEY_INFO        5
#define SECPKG_ATTR_AUTHORITY       6
#define SECPKG_ATTR_PROTO_INFO      7
#define SECPKG_ATTR_PASSWORD_EXPIRY 8
#define SECPKG_ATTR_SESSION_KEY     9
#define SECPKG_ATTR_PACKAGE_INFO    10
#define SECPKG_ATTR_USER_FLAGS      11
#define SECPKG_ATTR_NEGOTIATION_INFO 12
#define SECPKG_ATTR_NATIVE_NAMES    13
#define SECPKG_ATTR_FLAGS           14
// These attributes exist only in Win XP and greater
#define SECPKG_ATTR_USE_VALIDATED   15
#define SECPKG_ATTR_CREDENTIAL_NAME 16
#define SECPKG_ATTR_TARGET_INFORMATION 17
#define SECPKG_ATTR_ACCESS_TOKEN    18
// These attributes exist only in Win2K3 and greater
#define SECPKG_ATTR_TARGET          19
#define SECPKG_ATTR_AUTHENTICATION_ID  20
// These attributes exist only in Win2K3SP1 and greater
#define SECPKG_ATTR_LOGOFF_TIME     21
//
// win7 or greater
//
#define SECPKG_ATTR_NEGO_KEYS         22
#define SECPKG_ATTR_PROMPTING_NEEDED  24
#define SECPKG_ATTR_UNIQUE_BINDINGS   25
#define SECPKG_ATTR_ENDPOINT_BINDINGS 26
#define SECPKG_ATTR_CLIENT_SPECIFIED_TARGET 27

#define SECPKG_ATTR_LAST_CLIENT_TOKEN_STATUS 30
#define SECPKG_ATTR_NEGO_PKG_INFO        31 // contains nego info of packages
#define SECPKG_ATTR_NEGO_STATUS          32 // contains the last error
#define SECPKG_ATTR_CONTEXT_DELETED      33 // a context has been deleted

//
// win8 or greater
//
#define SECPKG_ATTR_DTLS_MTU        34
#define SECPKG_ATTR_DATAGRAM_SIZES  SECPKG_ATTR_STREAM_SIZES

#define SECPKG_ATTR_SUBJECT_SECURITY_ATTRIBUTES 128

//
// win8.1 or greater
//
#define SECPKG_ATTR_APPLICATION_PROTOCOL 35

//
// win10 or greater
//
#define SECPKG_ATTR_NEGOTIATED_TLS_EXTENSIONS 36
#define SECPKG_ATTR_IS_LOOPBACK 37  // indicates authentication to localhost

typedef struct _SecPkgContext_SubjectAttributes {
    void* AttributeInfo; // contains a PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION structure
} SecPkgContext_SubjectAttributes, *PSecPkgContext_SubjectAttributes;

#define SECPKG_ATTR_NEGO_INFO_FLAG_NO_KERBEROS 0x1
#define SECPKG_ATTR_NEGO_INFO_FLAG_NO_NTLM     0x2

//
// types of credentials, used by SECPKG_ATTR_PROMPTING_NEEDED
//

typedef enum _SECPKG_CRED_CLASS {
    SecPkgCredClass_None = 0,  // no creds
    SecPkgCredClass_Ephemeral = 10,  // logon creds
    SecPkgCredClass_PersistedGeneric = 20, // saved creds, not target specific
    SecPkgCredClass_PersistedSpecific = 30, // saved creds, target specific
    SecPkgCredClass_Explicit = 40, // explicitly supplied creds
} SECPKG_CRED_CLASS, * PSECPKG_CRED_CLASS;

typedef struct _SecPkgContext_CredInfo {
    SECPKG_CRED_CLASS CredClass;
    unsigned long IsPromptingNeeded;
} SecPkgContext_CredInfo, *PSecPkgContext_CredInfo;

typedef struct _SecPkgContext_NegoPackageInfo
{
    unsigned long PackageMask;
} SecPkgContext_NegoPackageInfo, * PSecPkgContext_NegoPackageInfo;

typedef struct _SecPkgContext_NegoStatus
{
    unsigned long LastStatus;
} SecPkgContext_NegoStatus, * PSecPkgContext_NegoStatus;

typedef struct _SecPkgContext_Sizes
{
    unsigned long cbMaxToken;
    unsigned long cbMaxSignature;
    unsigned long cbBlockSize;
    unsigned long cbSecurityTrailer;
} SecPkgContext_Sizes, * PSecPkgContext_Sizes;

typedef struct _SecPkgContext_StreamSizes
{
    unsigned long   cbHeader;
    unsigned long   cbTrailer;
    unsigned long   cbMaximumMessage;
    unsigned long   cBuffers;
    unsigned long   cbBlockSize;
} SecPkgContext_StreamSizes, * PSecPkgContext_StreamSizes;

typedef SecPkgContext_StreamSizes SecPkgContext_DatagramSizes;
typedef PSecPkgContext_StreamSizes PSecPkgContext_DatagramSizes;

typedef struct _SecPkgContext_NamesW
{
    SEC_WCHAR * sUserName;
} SecPkgContext_NamesW, * PSecPkgContext_NamesW;

#  define SecPkgContext_Names SecPkgContext_NamesW          
#  define PSecPkgContext_Names PSecPkgContext_NamesW        

typedef struct _SecPkgContext_Lifespan
{
    TimeStamp tsStart;
    TimeStamp tsExpiry;
} SecPkgContext_Lifespan, * PSecPkgContext_Lifespan;

typedef struct _SecPkgContext_DceInfo
{
    unsigned long AuthzSvc;
    void * pPac;
} SecPkgContext_DceInfo, * PSecPkgContext_DceInfo;


typedef struct _SecPkgContext_KeyInfoW
{
    SEC_WCHAR * sSignatureAlgorithmName;
    SEC_WCHAR * sEncryptAlgorithmName;
    unsigned long       KeySize;
    unsigned long       SignatureAlgorithm;
    unsigned long       EncryptAlgorithm;
} SecPkgContext_KeyInfoW, * PSecPkgContext_KeyInfoW;

#define SecPkgContext_KeyInfo   SecPkgContext_KeyInfoW      
#define PSecPkgContext_KeyInfo  PSecPkgContext_KeyInfoW     

typedef struct _SecPkgContext_AuthorityW
{
    SEC_WCHAR * sAuthorityName;
} SecPkgContext_AuthorityW, * PSecPkgContext_AuthorityW;

#define SecPkgContext_Authority SecPkgContext_AuthorityW        
#define PSecPkgContext_Authority    PSecPkgContext_AuthorityW   

typedef struct _SecPkgContext_ProtoInfoW
{
    SEC_WCHAR * sProtocolName;
    unsigned long majorVersion;
    unsigned long minorVersion;
} SecPkgContext_ProtoInfoW, * PSecPkgContext_ProtoInfoW;

#define SecPkgContext_ProtoInfo   SecPkgContext_ProtoInfoW      
#define PSecPkgContext_ProtoInfo  PSecPkgContext_ProtoInfoW     

typedef struct _SecPkgContext_PasswordExpiry
{
    TimeStamp tsPasswordExpires;
} SecPkgContext_PasswordExpiry, * PSecPkgContext_PasswordExpiry;

#if NTDDI_VERSION > NTDDI_WS03
typedef struct _SecPkgContext_LogoffTime
{
    TimeStamp tsLogoffTime;
} SecPkgContext_LogoffTime, * PSecPkgContext_LogoffTime;
#endif // Greater than Windows Server 2003 RTM (SP1 and greater contains this)

typedef struct _SecPkgContext_SessionKey
{
    unsigned long SessionKeyLength;
    _Field_size_bytes_(SessionKeyLength) unsigned char * SessionKey;
} SecPkgContext_SessionKey, *PSecPkgContext_SessionKey;

// used by nego2
typedef struct _SecPkgContext_NegoKeys
{
  unsigned long KeyType;
  unsigned short KeyLength;
  _Field_size_bytes_(KeyLength) unsigned char* KeyValue;
  unsigned long  VerifyKeyType;
  unsigned short VerifyKeyLength;
  _Field_size_bytes_(VerifyKeyLength) unsigned char* VerifyKeyValue;
} SecPkgContext_NegoKeys, * PSecPkgContext_NegoKeys;

typedef struct _SecPkgContext_PackageInfoW
{
    PSecPkgInfoW PackageInfo;
} SecPkgContext_PackageInfoW, * PSecPkgContext_PackageInfoW;


typedef struct _SecPkgContext_UserFlags
{
    unsigned long UserFlags;
} SecPkgContext_UserFlags, * PSecPkgContext_UserFlags;

typedef struct _SecPkgContext_Flags
{
    unsigned long Flags;
} SecPkgContext_Flags, * PSecPkgContext_Flags;

#define SecPkgContext_PackageInfo   SecPkgContext_PackageInfoW      
#define PSecPkgContext_PackageInfo  PSecPkgContext_PackageInfoW     
typedef struct _SecPkgContext_NegotiationInfoW
{
    PSecPkgInfoW    PackageInfo ;
    unsigned long   NegotiationState ;
} SecPkgContext_NegotiationInfoW, * PSecPkgContext_NegotiationInfoW ;

#  define SecPkgContext_NativeNames SecPkgContext_NativeNamesW          
#  define PSecPkgContext_NativeNames PSecPkgContext_NativeNamesW        

#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K

typedef struct _SecPkgContext_CredentialNameW
{
    unsigned long CredentialType;
    SEC_WCHAR *sCredentialName;
} SecPkgContext_CredentialNameW, * PSecPkgContext_CredentialNameW;

#endif // Later than win2k
#  define SecPkgContext_CredentialName SecPkgContext_CredentialNameW          
#  define PSecPkgContext_CredentialName PSecPkgContext_CredentialNameW        

typedef void
(SEC_ENTRY * SEC_GET_KEY_FN) (
    void * Arg,                 // Argument passed in
    void * Principal,           // Principal ID
    unsigned long KeyVer,               // Key Version
    void * * Key,       // Returned ptr to key
    SECURITY_STATUS * Status    // returned status
    );

//
// Flags for ExportSecurityContext
//

#define SECPKG_CONTEXT_EXPORT_RESET_NEW         0x00000001      // New context is reset to initial state
#define SECPKG_CONTEXT_EXPORT_DELETE_OLD        0x00000002      // Old context is deleted during export
// This is only valid in W2K3SP1 and greater
#define SECPKG_CONTEXT_EXPORT_TO_KERNEL         0x00000004      // Context is to be transferred to the kernel


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AcquireCredentialsHandleW(
#if ISSP_MODE == 0     // For Kernel mode
    _In_opt_  PSECURITY_STRING pPrincipal,
    _In_      PSECURITY_STRING pPackage,
#else
    _In_opt_  LPWSTR pszPrincipal,                // Name of principal
    _In_      LPWSTR pszPackage,                  // Name of package
#endif
    _In_      unsigned long fCredentialUse,       // Flags indicating use
    _In_opt_  void * pvLogonId,                   // Pointer to logon ID
    _In_opt_  void * pAuthData,                   // Package specific data
    _In_opt_  SEC_GET_KEY_FN pGetKeyFn,           // Pointer to GetKey() func
    _In_opt_  void * pvGetKeyArgument,            // Value to pass to GetKey()
    _Out_     PCredHandle phCredential,           // (out) Cred Handle
    _Out_opt_ PTimeStamp ptsExpiry                // (out) Lifetime (optional)
    );

typedef SECURITY_STATUS
(SEC_ENTRY * ACQUIRE_CREDENTIALS_HANDLE_FN_W)(
#if ISSP_MODE == 0
    PSECURITY_STRING,
    PSECURITY_STRING,
#else
    SEC_WCHAR *,
    SEC_WCHAR *,
#endif
    unsigned long,
    void *,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PCredHandle,
    PTimeStamp);

#  define AcquireCredentialsHandle AcquireCredentialsHandleW                  
#  define ACQUIRE_CREDENTIALS_HANDLE_FN ACQUIRE_CREDENTIALS_HANDLE_FN_W       

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
FreeCredentialsHandle(
    _In_ PCredHandle phCredential            // Handle to free
    );

typedef SECURITY_STATUS
(SEC_ENTRY * FREE_CREDENTIALS_HANDLE_FN)(
    PCredHandle );

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AddCredentialsW(
    _In_      PCredHandle hCredentials,
#if ISSP_MODE == 0      // For Kernel mode
    _In_opt_  PSECURITY_STRING pPrincipal,
    _In_      PSECURITY_STRING pPackage,
#else
    _In_opt_  LPWSTR pszPrincipal,                // Name of principal
    _In_      LPWSTR pszPackage,                  // Name of package
#endif
    _In_      unsigned long fCredentialUse,       // Flags indicating use
    _In_opt_  void * pAuthData,           // Package specific data
    _In_opt_  SEC_GET_KEY_FN pGetKeyFn,           // Pointer to GetKey() func
    _In_opt_  void * pvGetKeyArgument,    // Value to pass to GetKey()
    _Out_opt_ PTimeStamp ptsExpiry                // (out) Lifetime (optional)
    );

typedef SECURITY_STATUS
(SEC_ENTRY * ADD_CREDENTIALS_FN_W)(
    PCredHandle,
#if ISSP_MODE == 0
    PSECURITY_STRING,
    PSECURITY_STRING,
#else
    SEC_WCHAR *,
    SEC_WCHAR *,
#endif
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp);

SECURITY_STATUS SEC_ENTRY
AddCredentialsA(
    _In_ PCredHandle hCredentials,
    _In_opt_ LPSTR pszPrincipal,             // Name of principal
    _In_ LPSTR pszPackage,                   // Name of package
    _In_ unsigned long fCredentialUse,       // Flags indicating use
    _In_opt_ void * pAuthData,           // Package specific data
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,           // Pointer to GetKey() func
    _In_opt_ void * pvGetKeyArgument,    // Value to pass to GetKey()
    _Out_opt_ PTimeStamp ptsExpiry                // (out) Lifetime (optional)
    );

typedef SECURITY_STATUS
(SEC_ENTRY * ADD_CREDENTIALS_FN_A)(
    PCredHandle,
    SEC_CHAR *,
    SEC_CHAR *,
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp);

#ifdef UNICODE
#define AddCredentials  AddCredentialsW
#define ADD_CREDENTIALS_FN  ADD_CREDENTIALS_FN_W
#else
#define AddCredentials  AddCredentialsA
#define ADD_CREDENTIALS_FN ADD_CREDENTIALS_FN_A
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

////////////////////////////////////////////////////////////////////////
///
/// Asynchronous interface. Kernel-only (for now).
///
////////////////////////////////////////////////////////////////////////

#if ISSP_MODE == 0      // For Kernel mode

typedef struct _SspiAsyncContext SspiAsyncContext;

//
// Callback used for notifying completion of an async SSPI call.
//
typedef void (*SspiAsyncNotifyCallback)(
    _In_     SspiAsyncContext* Handle,
    _In_opt_ PVOID CallbackData
);

//
// Return a newly initialized context.
//
SspiAsyncContext* SspiCreateAsyncContext();

//
// Free up a context.
//
void SspiFreeAsyncContext(
    _In_opt_ SspiAsyncContext* Handle
);

//
// Mark an async context for reuse. Only the context state is altered.
// Client notification info, such as callback, is left alone
//
// If the context is invalid or currently in use, an error will be returned.
//
NTSTATUS SspiReinitAsyncContext(
    _Inout_ SspiAsyncContext* Handle
);

//
// Installs a callback which will be notified on async call completion.
//
SECURITY_STATUS SspiSetAsyncNotifyCallback(
    _In_ SspiAsyncContext* Context,
    _In_ SspiAsyncNotifyCallback Callback,
    _In_opt_ void* CallbackData
);

//
// Determines if the given async context requires notification on completion
// of the call.
//
BOOLEAN SspiAsyncContextRequiresNotify(
    _In_ SspiAsyncContext* AsyncContext
);

//
// Gets the current status of an async call. Until the call is completed,
// status will be SEC_I_ASYNC_CALL_PENDING.
//
SECURITY_STATUS SspiGetAsyncCallStatus(
    _In_ SspiAsyncContext* Handle
);

SECURITY_STATUS SspiAcquireCredentialsHandleAsyncW(
    _Inout_   SspiAsyncContext* AsyncContext,
#if ISSP_MODE == 0
    _In_opt_  PSECURITY_STRING pszPrincipal,            // Name of principal
    _In_      PSECURITY_STRING pszPackage,              // Name of package
#else
    _In_opt_  LPWSTR pszPrincipal,                      // Name of principal
    _In_      LPWSTR pszPackage,                        // Name of package
#endif
    _In_      unsigned long fCredentialUse,             // Flags indicating use
    _In_opt_  void * pvLogonId,                         // Pointer to logon ID
    _In_opt_  void * pAuthData,                         // Package specific data
    _In_opt_  SEC_GET_KEY_FN pGetKeyFn,                 // Pointer to GetKey() func
    _In_opt_  void * pvGetKeyArgument,                  // Value to pass to GetKey()
    _In_      PCredHandle phCredential,                 // (out) Cred Handle
    _In_opt_  PTimeStamp ptsExpiry                      // (out) Lifetime (optional)
);

SECURITY_STATUS SspiAcquireCredentialsHandleAsyncA(
    _Inout_   SspiAsyncContext* AsyncContext,
    _In_opt_  LPSTR pszPrincipal,                       // Name of principal
    _In_      LPSTR pszPackage,                         // Name of package
    _In_      unsigned long fCredentialUse,             // Flags indicating use
    _In_opt_  void * pvLogonId,                         // Pointer to logon ID
    _In_opt_  void * pAuthData,                         // Package specific data
    _In_opt_  SEC_GET_KEY_FN pGetKeyFn,                 // Pointer to GetKey() func
    _In_opt_  void * pvGetKeyArgument,                  // Value to pass to GetKey()
    _In_      PCredHandle phCredential,                 // (out) Cred Handle
    _In_opt_  PTimeStamp ptsExpiry                      // (out) Lifetime (optional)
);

SECURITY_STATUS SspiInitializeSecurityContextAsyncW(
    _Inout_     SspiAsyncContext* AsyncContext,
    _In_opt_    PCredHandle phCredential,               // Cred to base context
    _In_opt_    PCtxtHandle phContext,                  // Existing context (OPT)    
#if ISSP_MODE == 0
    _In_opt_    PSECURITY_STRING pszTargetName,         // Name of target
#else
    _In_opt_    LPWSTR pszTargetName,                   // Name of target
#endif
    _In_        unsigned long fContextReq,              // Context Requirements
    _In_        unsigned long Reserved1,                // Reserved, MBZ
    _In_        unsigned long TargetDataRep,            // Data rep of target
    _In_opt_    PSecBufferDesc pInput,                  // Input Buffers
    _In_        unsigned long Reserved2,                // Reserved, MBZ
    _In_opt_    PCtxtHandle phNewContext,               // (out) New Context handle
    _In_opt_    PSecBufferDesc pOutput,                 // (inout) Output Buffers
    _In_        unsigned long * pfContextAttr,          // (out) Context attrs
    _In_opt_    PTimeStamp ptsExpiry                    // (out) Life span (OPT)
);

SECURITY_STATUS SspiInitializeSecurityContextAsyncA(
    _Inout_     SspiAsyncContext* AsyncContext,
    _In_opt_    PCredHandle phCredential,               // Cred to base context
    _In_opt_    PCtxtHandle phContext,                  // Existing context (OPT)    
    _In_opt_    LPSTR pszTargetName,                    // Name of target
    _In_        unsigned long fContextReq,              // Context Requirements
    _In_        unsigned long Reserved1,                // Reserved, MBZ
    _In_        unsigned long TargetDataRep,            // Data rep of target
    _In_opt_    PSecBufferDesc pInput,                  // Input Buffers
    _In_        unsigned long Reserved2,                // Reserved, MBZ
    _In_opt_    PCtxtHandle phNewContext,               // (out) New Context handle
    _In_opt_    PSecBufferDesc pOutput,                 // (inout) Output Buffers
    _In_        unsigned long * pfContextAttr,          // (out) Context attrs
    _In_opt_    PTimeStamp ptsExpiry                    // (out) Life span (OPT)
);

SECURITY_STATUS SspiAcceptSecurityContextAsync(
    _Inout_   SspiAsyncContext* AsyncContext,       
    _In_opt_  PCredHandle phCredential,               // Cred to base context
    _In_opt_  PCtxtHandle phContext,                  // Existing context (OPT)
    _In_opt_  PSecBufferDesc pInput,                  // Input buffer
    _In_      unsigned long fContextReq,              // Context Requirements
    _In_      unsigned long TargetDataRep,            // Target Data Rep
    _In_opt_  PCtxtHandle phNewContext,               // (out) New context handle
    _In_opt_  PSecBufferDesc pOutput,                 // (inout) Output buffers
    _In_      unsigned long* pfContextAttr,           // (out) Context attributes
    _In_opt_  PTimeStamp ptsExpiry                    // (out) Life span (OPT)
);

SECURITY_STATUS SspiFreeCredentialsHandleAsync(
    _Inout_   SspiAsyncContext* AsyncContext,
    _In_      PCredHandle phCredential                  // Handle to free
);

SECURITY_STATUS SspiDeleteSecurityContextAsync(
    _Inout_   SspiAsyncContext* AsyncContext,
    _In_      PCtxtHandle phContext                     // Context to delete
);

#ifdef UNICODE
#    define SspiAcquireCredentialsHandleAsync SspiAcquireCredentialsHandleAsyncW
#    define SspiInitializeSecurityContextAsync SspiInitializeSecurityContextAsyncW
#else
#    define SspiAcquireCredentialsHandleAsync SspiAcquireCredentialsHandleAsyncA
#    define SspiInitializeSecurityContextAsync SspiInitializeSecurityContextAsync
#endif

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

////////////////////////////////////////////////////////////////////////
///
/// Password Change Functions
///
////////////////////////////////////////////////////////////////////////

#if ISSP_MODE != 0

SECURITY_STATUS SEC_ENTRY
ChangeAccountPasswordW(
    _In_    SEC_WCHAR *  pszPackageName,
    _In_    SEC_WCHAR *  pszDomainName,
    _In_    SEC_WCHAR *  pszAccountName,
    _In_    SEC_WCHAR *  pszOldPassword,
    _In_    SEC_WCHAR *  pszNewPassword,
    _In_    BOOLEAN              bImpersonating,
    _In_    unsigned long        dwReserved,
    _Inout_ PSecBufferDesc       pOutput
    );

typedef SECURITY_STATUS
(SEC_ENTRY * CHANGE_PASSWORD_FN_W)(
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    SEC_WCHAR *,
    BOOLEAN,
    unsigned long,
    PSecBufferDesc
    );



SECURITY_STATUS SEC_ENTRY
ChangeAccountPasswordA(
    _In_    SEC_CHAR *  pszPackageName,
    _In_    SEC_CHAR *  pszDomainName,
    _In_    SEC_CHAR *  pszAccountName,
    _In_    SEC_CHAR *  pszOldPassword,
    _In_    SEC_CHAR *  pszNewPassword,
    _In_    BOOLEAN             bImpersonating,
    _In_    unsigned long       dwReserved,
    _Inout_ PSecBufferDesc      pOutput
    );

typedef SECURITY_STATUS
(SEC_ENTRY * CHANGE_PASSWORD_FN_A)(
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    SEC_CHAR *,
    BOOLEAN,
    unsigned long,
    PSecBufferDesc
    );

#ifdef UNICODE
#  define ChangeAccountPassword ChangeAccountPasswordW
#  define CHANGE_PASSWORD_FN CHANGE_PASSWORD_FN_W
#else
#  define ChangeAccountPassword ChangeAccountPasswordA
#  define CHANGE_PASSWORD_FN CHANGE_PASSWORD_FN_A
#endif // !UNICODE

#endif // ISSP_MODE


////////////////////////////////////////////////////////////////////////
///
/// Context Management Functions
///
////////////////////////////////////////////////////////////////////////

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
InitializeSecurityContextW(
    _In_opt_    PCredHandle phCredential,               // Cred to base context
    _In_opt_    PCtxtHandle phContext,                  // Existing context (OPT)
#if ISSP_MODE == 0
    _In_opt_ PSECURITY_STRING pTargetName,
#else
    _In_opt_ SEC_WCHAR * pszTargetName,         // Name of target
#endif
    _In_        unsigned long fContextReq,              // Context Requirements
    _In_        unsigned long Reserved1,                // Reserved, MBZ
    _In_        unsigned long TargetDataRep,            // Data rep of target
    _In_opt_    PSecBufferDesc pInput,                  // Input Buffers
    _In_        unsigned long Reserved2,                // Reserved, MBZ
    _Inout_opt_ PCtxtHandle phNewContext,               // (out) New Context handle
    _Inout_opt_ PSecBufferDesc pOutput,                 // (inout) Output Buffers
    _Out_       unsigned long * pfContextAttr,  // (out) Context attrs
    _Out_opt_   PTimeStamp ptsExpiry                    // (out) Life span (OPT)
    );

typedef SECURITY_STATUS
(SEC_ENTRY * INITIALIZE_SECURITY_CONTEXT_FN_W)(
    PCredHandle,
    PCtxtHandle,
#if ISSP_MODE == 0
    PSECURITY_STRING,
#else
    SEC_WCHAR *,
#endif
    unsigned long,
    unsigned long,
    unsigned long,
    PSecBufferDesc,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);

#  define InitializeSecurityContext InitializeSecurityContextW              
#  define INITIALIZE_SECURITY_CONTEXT_FN INITIALIZE_SECURITY_CONTEXT_FN_W   

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AcceptSecurityContext(
    _In_opt_    PCredHandle phCredential,               // Cred to base context
    _In_opt_    PCtxtHandle phContext,                  // Existing context (OPT)
    _In_opt_    PSecBufferDesc pInput,                  // Input buffer
    _In_        unsigned long fContextReq,              // Context Requirements
    _In_        unsigned long TargetDataRep,            // Target Data Rep
    _Inout_opt_ PCtxtHandle phNewContext,               // (out) New context handle
    _Inout_opt_ PSecBufferDesc pOutput,                 // (inout) Output buffers
    _Out_       unsigned long * pfContextAttr,  // (out) Context attributes
    _Out_opt_   PTimeStamp ptsExpiry                    // (out) Life span (OPT)
    );

typedef SECURITY_STATUS
(SEC_ENTRY * ACCEPT_SECURITY_CONTEXT_FN)(
    PCredHandle,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);



SECURITY_STATUS SEC_ENTRY
CompleteAuthToken(
    _In_ PCtxtHandle phContext,              // Context to complete
    _In_ PSecBufferDesc pToken               // Token to complete
    );

typedef SECURITY_STATUS
(SEC_ENTRY * COMPLETE_AUTH_TOKEN_FN)(
    PCtxtHandle,
    PSecBufferDesc);

KSECDDDECLSPEC
_Check_return_
SECURITY_STATUS SEC_ENTRY
ImpersonateSecurityContext(
    _In_ PCtxtHandle phContext               // Context to impersonate
    );

typedef SECURITY_STATUS
(SEC_ENTRY * IMPERSONATE_SECURITY_CONTEXT_FN)(
    PCtxtHandle);


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
RevertSecurityContext(
    _In_ PCtxtHandle phContext               // Context from which to re
    );

typedef SECURITY_STATUS
(SEC_ENTRY * REVERT_SECURITY_CONTEXT_FN)(
    PCtxtHandle);


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QuerySecurityContextToken(
    _In_  PCtxtHandle phContext,
    _Out_ void * * Token
    );

typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_CONTEXT_TOKEN_FN)(
    PCtxtHandle, void * *);


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
DeleteSecurityContext(
    _In_ PCtxtHandle phContext               // Context to delete
    );

typedef SECURITY_STATUS
(SEC_ENTRY * DELETE_SECURITY_CONTEXT_FN)(
    PCtxtHandle);


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ApplyControlToken(
    _In_ PCtxtHandle phContext,              // Context to modify
    _In_ PSecBufferDesc pInput               // Input token to apply
    );

typedef SECURITY_STATUS
(SEC_ENTRY * APPLY_CONTROL_TOKEN_FN)(
    PCtxtHandle, PSecBufferDesc);


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesW(
    _In_  PCtxtHandle phContext,              // Context to query
    _In_  unsigned long ulAttribute,          // Attribute to query
    _Out_ void * pBuffer              // Buffer for attributes
    );

typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *);

SECURITY_STATUS SEC_ENTRY
QueryContextAttributesExW(
    _In_  PCtxtHandle phContext,              // Context to query
    _In_  unsigned long ulAttribute,          // Attribute to query
    _Out_writes_bytes_(cbBuffer) void * pBuffer,    // Buffer for attributes
    _In_  unsigned long cbBuffer              // Length of buffer
    );

typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_EX_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long);

#  define QueryContextAttributes QueryContextAttributesW            
#  define QUERY_CONTEXT_ATTRIBUTES_FN QUERY_CONTEXT_ATTRIBUTES_FN_W 
#  define QueryContextAttributesEx QueryContextAttributesExW        
#  define QUERY_CONTEXT_ATTRIBUTES_EX_FN QUERY_CONTEXT_ATTRIBUTES_EX_FN_W 

#if (OSVER(NTDDI_VERSION) > NTDDI_WIN2K)

SECURITY_STATUS SEC_ENTRY
SetContextAttributesW(
    _In_ PCtxtHandle phContext,                   // Context to Set
    _In_ unsigned long ulAttribute,               // Attribute to Set
    _In_reads_bytes_(cbBuffer) void * pBuffer, // Buffer for attributes
    _In_ unsigned long cbBuffer                   // Size (in bytes) of Buffer
    );

typedef SECURITY_STATUS
(SEC_ENTRY * SET_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long );

#endif // Greater than w2k

#  define SetContextAttributes SetContextAttributesW            
#  define SET_CONTEXT_ATTRIBUTES_FN SET_CONTEXT_ATTRIBUTES_FN_W 

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesW(
    _In_    PCredHandle phCredential,           // Credential to query
    _In_    unsigned long ulAttribute,          // Attribute to query
    _Inout_ void * pBuffer              // Buffer for attributes
    );

typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_FN_W)(
    PCredHandle,
    unsigned long,
    void *);

SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesExW(
    _In_    PCredHandle phCredential,           // Credential to query
    _In_    unsigned long ulAttribute,          // Attribute to query
    _Inout_updates_bytes_(cbBuffer) void * pBuffer, // Buffer for attributes
    _In_    unsigned long cbBuffer              // Length of buffer
    );

typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long);

#  define QueryCredentialsAttributes QueryCredentialsAttributesW            
#  define QUERY_CREDENTIALS_ATTRIBUTES_FN QUERY_CREDENTIALS_ATTRIBUTES_FN_W 
#  define QueryCredentialsAttributesEx QueryCredentialsAttributesExW        
#  define QUERY_CREDENTIALS_ATTRIBUTES_EX_FN QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W 

#if NTDDI_VERSION > NTDDI_WS03

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
SetCredentialsAttributesW(
    _In_ PCredHandle phCredential,                // Credential to Set
    _In_ unsigned long ulAttribute,               // Attribute to Set
    _In_reads_bytes_(cbBuffer) void * pBuffer, // Buffer for attributes
    _In_ unsigned long cbBuffer                   // Size (in bytes) of Buffer
    );

typedef SECURITY_STATUS
(SEC_ENTRY * SET_CREDENTIALS_ATTRIBUTES_FN_W)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long );

#endif // For W2k3SP1 and greater

#  define SetCredentialsAttributes SetCredentialsAttributesW            
#  define SET_CREDENTIALS_ATTRIBUTES_FN SET_CREDENTIALS_ATTRIBUTES_FN_W 

SECURITY_STATUS SEC_ENTRY
FreeContextBuffer(
    _Inout_ PVOID pvContextBuffer      // buffer to free
    );

typedef SECURITY_STATUS
(SEC_ENTRY * FREE_CONTEXT_BUFFER_FN)(
    _Inout_ PVOID
    );

///////////////////////////////////////////////////////////////////
////
////    Message Support API
////
//////////////////////////////////////////////////////////////////

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
MakeSignature(
    _In_ PCtxtHandle phContext,              // Context to use
    _In_ unsigned long fQOP,                 // Quality of Protection
    _In_ PSecBufferDesc pMessage,            // Message to sign
    _In_ unsigned long MessageSeqNo          // Message Sequence Num.
    );

typedef SECURITY_STATUS
(SEC_ENTRY * MAKE_SIGNATURE_FN)(
    PCtxtHandle,
    unsigned long,
    PSecBufferDesc,
    unsigned long);


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
VerifySignature(
    _In_  PCtxtHandle phContext,              // Context to use
    _In_  PSecBufferDesc pMessage,            // Message to verify
    _In_  unsigned long MessageSeqNo,         // Sequence Num.
    _Out_ unsigned long * pfQOP       // QOP used
    );

typedef SECURITY_STATUS
(SEC_ENTRY * VERIFY_SIGNATURE_FN)(
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long *);

// This only exists win Win2k3 and Greater
#define SECQOP_WRAP_NO_ENCRYPT      0x80000001
#define SECQOP_WRAP_OOB_DATA        0x40000000

SECURITY_STATUS SEC_ENTRY
EncryptMessage( _In_    PCtxtHandle         phContext,
                _In_    unsigned long       fQOP,
                _In_    PSecBufferDesc      pMessage,
                _In_    unsigned long       MessageSeqNo);

typedef SECURITY_STATUS
(SEC_ENTRY * ENCRYPT_MESSAGE_FN)(
    PCtxtHandle, unsigned long, PSecBufferDesc, unsigned long);


SECURITY_STATUS SEC_ENTRY
DecryptMessage( _In_      PCtxtHandle         phContext,
                _In_      PSecBufferDesc      pMessage,
                _In_      unsigned long       MessageSeqNo,
                _Out_opt_ unsigned long *     pfQOP);


typedef SECURITY_STATUS
(SEC_ENTRY * DECRYPT_MESSAGE_FN)(
    PCtxtHandle, PSecBufferDesc, unsigned long,
    unsigned long *);


///////////////////////////////////////////////////////////////////////////
////
////    Misc.
////
///////////////////////////////////////////////////////////////////////////

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
EnumerateSecurityPackagesW(
    _Out_       unsigned long * pcPackages,     // Receives num. packages
    _Outptr_ PSecPkgInfoW  * ppPackageInfo    // Receives array of info
    );

typedef SECURITY_STATUS
(SEC_ENTRY * ENUMERATE_SECURITY_PACKAGES_FN_W)(
    unsigned long *,
    PSecPkgInfoW *);

#  define EnumerateSecurityPackages EnumerateSecurityPackagesW              
#  define ENUMERATE_SECURITY_PACKAGES_FN ENUMERATE_SECURITY_PACKAGES_FN_W   

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QuerySecurityPackageInfoW(
#if ISSP_MODE == 0
    _In_        PSECURITY_STRING pPackageName,
#else
    _In_        LPWSTR pszPackageName,          // Name of package
#endif
    _Outptr_ PSecPkgInfoW *ppPackageInfo     // Receives package info
    );

typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_PACKAGE_INFO_FN_W)(
#if ISSP_MODE == 0
    PSECURITY_STRING,
#else
    SEC_WCHAR *,
#endif
    PSecPkgInfoW *);

#  define QuerySecurityPackageInfo QuerySecurityPackageInfoW                
#  define QUERY_SECURITY_PACKAGE_INFO_FN QUERY_SECURITY_PACKAGE_INFO_FN_W   

///////////////////////////////////////////////////////////////////////////
////
////    Context export/import
////
///////////////////////////////////////////////////////////////////////////


KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ExportSecurityContext(
    _In_  PCtxtHandle          phContext,             // (in) context to export
    _In_  ULONG                fFlags,                // (in) option flags
    _Out_ PSecBuffer           pPackedContext,        // (out) marshalled context
    _Out_ void * * pToken             // (out, optional) token handle for impersonation
    );

typedef SECURITY_STATUS
(SEC_ENTRY * EXPORT_SECURITY_CONTEXT_FN)(
    PCtxtHandle,
    ULONG,
    PSecBuffer,
    void * *
    );

KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ImportSecurityContextW(
#if ISSP_MODE == 0
    _In_  PSECURITY_STRING     pszPackage,
#else
    _In_  LPWSTR               pszPackage,
#endif
    _In_  PSecBuffer           pPackedContext,        // (in) marshalled context
    _In_  void *               Token,                 // (in, optional) handle to token for context
    _Out_ PCtxtHandle          phContext              // (out) new context handle
    );

typedef SECURITY_STATUS
(SEC_ENTRY * IMPORT_SECURITY_CONTEXT_FN_W)(
#if ISSP_MODE == 0
    PSECURITY_STRING,
#else
    SEC_WCHAR *,
#endif
    PSecBuffer,
    VOID *,
    PCtxtHandle
    );

#  define ImportSecurityContext ImportSecurityContextW              
#  define IMPORT_SECURITY_CONTEXT_FN IMPORT_SECURITY_CONTEXT_FN_W   

#if ISSP_MODE == 0
KSECDDDECLSPEC
NTSTATUS
NTAPI
SecMakeSPN(
    IN PUNICODE_STRING ServiceClass,
    IN PUNICODE_STRING ServiceName,
    IN PUNICODE_STRING InstanceName OPTIONAL,
    IN USHORT InstancePort OPTIONAL,
    IN PUNICODE_STRING Referrer OPTIONAL,
    IN OUT PUNICODE_STRING Spn,
    OUT PULONG Length OPTIONAL,
    IN BOOLEAN Allocate
    );

#if OSVER(NTDDI_VERSION) > NTDD_WIN2K

KSECDDDECLSPEC
NTSTATUS
NTAPI
SecMakeSPNEx(
    IN PUNICODE_STRING ServiceClass,
    IN PUNICODE_STRING ServiceName,
    IN PUNICODE_STRING InstanceName OPTIONAL,
    IN USHORT InstancePort OPTIONAL,
    IN PUNICODE_STRING Referrer OPTIONAL,
    IN PUNICODE_STRING TargetInfo OPTIONAL,
    IN OUT PUNICODE_STRING Spn,
    OUT PULONG Length OPTIONAL,
    IN BOOLEAN Allocate
    );

#if OSVER(NTDDI_VERSION) > NTDDI_WS03

KSECDDDECLSPEC
NTSTATUS
NTAPI
SecMakeSPNEx2(
    IN PUNICODE_STRING ServiceClass,
    IN PUNICODE_STRING ServiceName,
    IN PUNICODE_STRING InstanceName OPTIONAL,
    IN USHORT InstancePort OPTIONAL,
    IN PUNICODE_STRING Referrer OPTIONAL,
    IN PUNICODE_STRING InTargetInfo OPTIONAL,
    IN OUT PUNICODE_STRING Spn,
    OUT PULONG TotalSize OPTIONAL,
    IN BOOLEAN Allocate,
    IN BOOLEAN IsTargetInfoMarshaled
    );

#endif // Windows Vista and greater

KSECDDDECLSPEC
NTSTATUS
SEC_ENTRY
SecLookupAccountSid(
    _In_      PSID Sid,
    _Out_     PULONG NameSize,
    _Inout_   PUNICODE_STRING NameBuffer,
    _Out_     PULONG DomainSize OPTIONAL,
    _Out_opt_ PUNICODE_STRING DomainBuffer OPTIONAL,
    _Out_     PSID_NAME_USE NameUse
    );

KSECDDDECLSPEC
NTSTATUS
SEC_ENTRY
SecLookupAccountName(
    _In_        PUNICODE_STRING Name,
    _Inout_     PULONG SidSize,
    _Out_       PSID Sid,
    _Out_       PSID_NAME_USE NameUse,
    _Out_       PULONG DomainSize OPTIONAL,
    _Inout_opt_ PUNICODE_STRING ReferencedDomain OPTIONAL
    );

#endif // Greater than W2k

#if OSVER(NTDDI_VERSION) > NTDDI_WINXP

KSECDDDECLSPEC
NTSTATUS
SEC_ENTRY
SecLookupWellKnownSid(
    _In_        WELL_KNOWN_SID_TYPE SidType,
    _Out_       PSID Sid,
    _In_        ULONG SidBufferSize,
    _Inout_opt_ PULONG SidSize OPTIONAL
    );

#endif // Greater than XP


#endif

#define SECURITY_ENTRYPOINTW SEC_TEXT("InitSecurityInterfaceW")     
#    define SECURITY_ENTRYPOINT SECURITY_ENTRYPOINTW                

#define FreeCredentialHandle FreeCredentialsHandle

typedef struct _SECURITY_FUNCTION_TABLE_W {
    unsigned long                       dwVersion;
    ENUMERATE_SECURITY_PACKAGES_FN_W    EnumerateSecurityPackagesW;
    QUERY_CREDENTIALS_ATTRIBUTES_FN_W   QueryCredentialsAttributesW;
    ACQUIRE_CREDENTIALS_HANDLE_FN_W     AcquireCredentialsHandleW;
    FREE_CREDENTIALS_HANDLE_FN          FreeCredentialsHandle;
    void *                      Reserved2;
    INITIALIZE_SECURITY_CONTEXT_FN_W    InitializeSecurityContextW;
    ACCEPT_SECURITY_CONTEXT_FN          AcceptSecurityContext;
    COMPLETE_AUTH_TOKEN_FN              CompleteAuthToken;
    DELETE_SECURITY_CONTEXT_FN          DeleteSecurityContext;
    APPLY_CONTROL_TOKEN_FN              ApplyControlToken;
    QUERY_CONTEXT_ATTRIBUTES_FN_W       QueryContextAttributesW;
    IMPERSONATE_SECURITY_CONTEXT_FN     ImpersonateSecurityContext;
    REVERT_SECURITY_CONTEXT_FN          RevertSecurityContext;
    MAKE_SIGNATURE_FN                   MakeSignature;
    VERIFY_SIGNATURE_FN                 VerifySignature;
    FREE_CONTEXT_BUFFER_FN              FreeContextBuffer;
    QUERY_SECURITY_PACKAGE_INFO_FN_W    QuerySecurityPackageInfoW;
    void *                      Reserved3;
    void *                      Reserved4;
    EXPORT_SECURITY_CONTEXT_FN          ExportSecurityContext;
    IMPORT_SECURITY_CONTEXT_FN_W        ImportSecurityContextW;
    ADD_CREDENTIALS_FN_W                AddCredentialsW ;
    void *                      Reserved8;
    QUERY_SECURITY_CONTEXT_TOKEN_FN     QuerySecurityContextToken;
    ENCRYPT_MESSAGE_FN                  EncryptMessage;
    DECRYPT_MESSAGE_FN                  DecryptMessage;
#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
    // Fields below this are available in OSes after w2k
    SET_CONTEXT_ATTRIBUTES_FN_W         SetContextAttributesW;
#endif // greater thean 2K

#if NTDDI_VERSION > NTDDI_WS03SP1
    // Fields below this are available in OSes after W2k3SP1
    SET_CREDENTIALS_ATTRIBUTES_FN_W     SetCredentialsAttributesW;
#endif
#if ISSP_MODE != 0
    CHANGE_PASSWORD_FN_W                ChangeAccountPasswordW;
#else
    void *                      Reserved9;
#endif
#if NTDDI_VERSION > NTDDI_WINBLUE
    // Fields below this are available in OSes after Windows 8.1
    QUERY_CONTEXT_ATTRIBUTES_EX_FN_W    QueryContextAttributesExW;
    QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W QueryCredentialsAttributesExW;
#endif
} SecurityFunctionTableW, * PSecurityFunctionTableW;

#  define SecurityFunctionTable SecurityFunctionTableW      
#  define PSecurityFunctionTable PSecurityFunctionTableW    
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION     1   
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_2   2   
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_3   3   
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_4   4   
#define SECURITY_SUPPORT_PROVIDER_INTERFACE_VERSION_5   5   

KSECDDDECLSPEC
PSecurityFunctionTableW SEC_ENTRY
InitSecurityInterfaceW(
    void
    );

typedef PSecurityFunctionTableW
(SEC_ENTRY * INIT_SECURITY_INTERFACE_W)(void);

#  define InitSecurityInterface InitSecurityInterfaceW          
#  define INIT_SECURITY_INTERFACE INIT_SECURITY_INTERFACE_W     

#ifndef _AUTH_IDENTITY_EX2_DEFINED
#define _AUTH_IDENTITY_EX2_DEFINED

#define SEC_WINNT_AUTH_IDENTITY_VERSION_2 0x201

typedef struct _SEC_WINNT_AUTH_IDENTITY_EX2 {
   unsigned long Version; // contains SEC_WINNT_AUTH_IDENTITY_VERSION_2
   unsigned short cbHeaderLength;
   unsigned long cbStructureLength;
   unsigned long UserOffset;                // Non-NULL terminated string, unicode only
   unsigned short UserLength;               // # of bytes (NOT WCHARs), not including NULL.
   unsigned long DomainOffset;              // Non-NULL terminated string, unicode only
   unsigned short DomainLength;             // # of bytes (NOT WCHARs), not including NULL.
   unsigned long PackedCredentialsOffset;   // Non-NULL terminated string, unicode only
   unsigned short PackedCredentialsLength;  // # of bytes (NOT WCHARs), not including NULL.
   unsigned long Flags;
   unsigned long PackageListOffset;         // Non-NULL terminated string, unicode only
   unsigned short PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EX2, *PSEC_WINNT_AUTH_IDENTITY_EX2;

#endif // _AUTH_IDENTITY_EX2_DEFINED

#ifndef _AUTH_IDENTITY_DEFINED
#define _AUTH_IDENTITY_DEFINED

//
// This was not defined in NTIFS.h for windows 2000 however
// this struct has always been there and are safe to use
// in windows 2000 and above.
//

#define SEC_WINNT_AUTH_IDENTITY_ANSI    0x1
#define SEC_WINNT_AUTH_IDENTITY_UNICODE 0x2

typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
  unsigned short *User;         //  Non-NULL terminated string.
  unsigned long UserLength;     //  # of characters (NOT bytes), not including NULL.
  unsigned short *Domain;       //  Non-NULL terminated string.
  unsigned long DomainLength;   //  # of characters (NOT bytes), not including NULL.
  unsigned short *Password;     //  Non-NULL terminated string.
  unsigned long PasswordLength; //  # of characters (NOT bytes), not including NULL.
  unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W;

#define SEC_WINNT_AUTH_IDENTITY SEC_WINNT_AUTH_IDENTITY_W       
#define PSEC_WINNT_AUTH_IDENTITY PSEC_WINNT_AUTH_IDENTITY_W     
#define _SEC_WINNT_AUTH_IDENTITY _SEC_WINNT_AUTH_IDENTITY_W     

#endif //_AUTH_IDENTITY_DEFINED                                 // ntifs

//
// This is the combined authentication identity structure that may be
// used with the negotiate package, NTLM, Kerberos, or SCHANNEL
//

#ifndef SEC_WINNT_AUTH_IDENTITY_VERSION
#define SEC_WINNT_AUTH_IDENTITY_VERSION 0x200

typedef struct _SEC_WINNT_AUTH_IDENTITY_EXW {
    unsigned long Version;
    unsigned long Length;
    unsigned short *User;           //  Non-NULL terminated string.
    unsigned long UserLength;       //  # of characters (NOT bytes), not including NULL.
    unsigned short *Domain;         //  Non-NULL terminated string.
    unsigned long DomainLength;     //  # of characters (NOT bytes), not including NULL.
    unsigned short *Password;       //  Non-NULL terminated string.
    unsigned long PasswordLength;   //  # of characters (NOT bytes), not including NULL.
    unsigned long Flags;
    unsigned short *PackageList;
    unsigned long PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EXW, *PSEC_WINNT_AUTH_IDENTITY_EXW;

#define SEC_WINNT_AUTH_IDENTITY_EX  SEC_WINNT_AUTH_IDENTITY_EXW    
#define PSEC_WINNT_AUTH_IDENTITY_EX PSEC_WINNT_AUTH_IDENTITY_EXW   

#endif // SEC_WINNT_AUTH_IDENTITY_VERSION


typedef PVOID PSEC_WINNT_AUTH_IDENTITY_OPAQUE; // the credential structure is opaque


#if (NTDDI_VERSION >= NTDDI_WIN7)
//
//  Convert the _OPAQUE structure passed in to the
//  3 tuple <username, domainname, 'password'>.
//
//  Note: The 'strings' returned need not necessarily be
//  in user recognisable form. The purpose of this API
//  is to 'flatten' the _OPAQUE structure into the 3 tuple.
//  User recognisable <username, domainname> can always be
//  obtained by passing NULL to the pszPackedCredentialsString
//  parameter.
//
// zero out the pszPackedCredentialsString then
// free the returned memory using SspiLocalFree()
//

SECURITY_STATUS
SEC_ENTRY
SspiEncodeAuthIdentityAsStrings(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE pAuthIdentity,
    _Outptr_result_maybenull_ PCWSTR* ppszUserName,
    _Outptr_result_maybenull_ PCWSTR* ppszDomainName,
    _Outptr_opt_result_maybenull_ PCWSTR* ppszPackedCredentialsString
    );

SECURITY_STATUS
SEC_ENTRY
SspiValidateAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );

//
// free the returned memory using SspiFreeAuthIdentity()
//

SECURITY_STATUS
SEC_ENTRY
SspiCopyAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* AuthDataCopy
    );

//
// use only for the memory returned by SspiCopyAuthIdentity().
// Internally calls SspiZeroAuthIdentity().
//

VOID
SEC_ENTRY
SspiFreeAuthIdentity(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );

VOID
SEC_ENTRY
SspiZeroAuthIdentity(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );

VOID
SEC_ENTRY
SspiLocalFree(
    _In_opt_ PVOID DataBuffer
    );

//
// call SspiFreeAuthIdentity to free the returned AuthIdentity
// which zeroes out the credentials blob before freeing it
//

SECURITY_STATUS
SEC_ENTRY
SspiEncodeStringsAsAuthIdentity(
    _In_opt_ PCWSTR pszUserName,
    _In_opt_ PCWSTR pszDomainName,
    _In_opt_ PCWSTR pszPackedCredentialsString,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
    );

SECURITY_STATUS
SEC_ENTRY
SspiCompareAuthIdentities(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity1,
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity2,
    _Out_opt_ PBOOLEAN SameSuppliedUser,
    _Out_opt_ PBOOLEAN SameSuppliedIdentity
    );

//
// zero out the returned AuthIdentityByteArray then
// free the returned memory using SspiLocalFree()
//

SECURITY_STATUS
SEC_ENTRY
SspiMarshalAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _Out_ unsigned long* AuthIdentityLength,
    _Outptr_result_bytebuffer_(*AuthIdentityLength) char** AuthIdentityByteArray
    );

//
// free the returned auth identity using SspiFreeAuthIdentity()
//

SECURITY_STATUS
SEC_ENTRY
SspiUnmarshalAuthIdentity(
    _In_ unsigned long AuthIdentityLength,
    _In_reads_bytes_(AuthIdentityLength) char* AuthIdentityByteArray,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

BOOLEAN
SEC_ENTRY
SspiIsPromptingNeeded(
    _In_ unsigned long ErrorOrNtStatus
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

SECURITY_STATUS
SEC_ENTRY
SspiGetTargetHostName(
    _In_ PCWSTR pszTargetName,
    _Outptr_ PWSTR* pszHostName
    );

SECURITY_STATUS
SEC_ENTRY
SspiExcludePackage(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _In_ PCWSTR pszPackageName,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppNewAuthIdentity
    );

#endif // NTDDI_VERSION

//
// Common types used by negotiable security packages
//
// These are defined after W2K
//

#define SEC_WINNT_AUTH_IDENTITY_MARSHALLED      0x4     // all data is in one buffer
#define SEC_WINNT_AUTH_IDENTITY_ONLY            0x8     // these credentials are for identity only - no PAC needed

#endif // __SSPI_H__

#ifndef SECURITY_USER_DATA_DEFINED
#define SECURITY_USER_DATA_DEFINED

typedef struct _SECURITY_USER_DATA {
    SECURITY_STRING UserName;           // User name
    SECURITY_STRING LogonDomainName;    // Domain the user logged on to
    SECURITY_STRING LogonServer;        // Server that logged the user on
    PSID            pSid;               // SID of user
} SECURITY_USER_DATA, *PSECURITY_USER_DATA;

typedef SECURITY_USER_DATA SecurityUserData, * PSecurityUserData;


#define UNDERSTANDS_LONG_NAMES  1
#define NO_LONG_NAMES           2

#endif // SECURITY_USER_DATA_DEFINED

NTSTATUS SEC_ENTRY
GetSecurityUserInfo(
    _In_opt_    PLUID LogonId,
    _In_        ULONG Flags,
    _Outptr_    PSecurityUserData * UserInformation
    );

NTSTATUS SEC_ENTRY
MapSecurityError( _In_ SECURITY_STATUS SecStatus );

#define DD_MUP_DEVICE_NAME L"\\Device\\Mup"    


//
// The actual prefix resolution IOCTL issued by MUP to
// redirectors to determine who is responsible for a
// \\server\share prefix.
//

//
// For use with legacy providers, which register with
// FsRtlRegisterUncProvider().
//

#define IOCTL_REDIR_QUERY_PATH              CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM, 99, METHOD_NEITHER, FILE_ANY_ACCESS)

//
// For use by redirectors conforming to the Vista redirector model.
// These register with FsRtlRegisterUncProviderEx().
//

#define IOCTL_REDIR_QUERY_PATH_EX       CTL_CODE(FILE_DEVICE_NETWORK_FILE_SYSTEM, 100, METHOD_NEITHER, FILE_ANY_ACCESS)

//
// Used by MUP prefix resolution.
// For use with legacy providers, which register with
// FsRtlRegisterUncProvider().
//

typedef struct _QUERY_PATH_REQUEST {
    ULONG                   PathNameLength;
    PIO_SECURITY_CONTEXT    SecurityContext;
    WCHAR                   FilePathName[1];
} QUERY_PATH_REQUEST, *PQUERY_PATH_REQUEST;

#if (NTDDI_VERSION >= NTDDI_VISTA)

//
// Used by MUP prefix resolution.
// Issued to providers which register with FsRtlRegisterUncProviderEx()
// These are providers conforming to the Vista redirector model.
//

typedef struct _QUERY_PATH_REQUEST_EX {
    PIO_SECURITY_CONTEXT    pSecurityContext;
    ULONG                   EaLength;
    PVOID                   pEaBuffer;

    //
    // Pointer to filename will be passed to provider.
    // Providers MUST NOT modify this string.
    //

    UNICODE_STRING          PathName;

    //
    // Pointer to optional domain service name.  Only providers which
    // register as FSRTL_UNC_PROVIDER_FLAGS_DOMAIN_SVC_AWARE will see
    // domain service names.
    //
    // This consumes 2 of the 5 ULONG_PTRs initially reserved in the
    // _EX query.  New as of Windows 7.
    //

    UNICODE_STRING          DomainServiceName;

    //
    // Pointer to the optional Extra Create Parameter list associated with the
    // Create IRP that initiated this query path request.
    //

    PECP_LIST               EcpList;

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)

    //
    // Pointer to a SILO, associated with the file object on the 
    // original IRP. This is required for redirectors to query
    // mini RDR context
    //
    //
    // This consumes 1 of the 5 ULONG_PTRs initially reserved in the
    // _EX query.
    //

    PESILO                  Silo;

    //
    // Reserved
    //

    ULONG_PTR               Reserved;

#else

    //
    // Reserved
    //

    ULONG_PTR               Reserved[2];

#endif
} QUERY_PATH_REQUEST_EX, *PQUERY_PATH_REQUEST_EX;

#endif

typedef struct _QUERY_PATH_RESPONSE {
    ULONG LengthAccepted;
} QUERY_PATH_RESPONSE, *PQUERY_PATH_RESPONSE;

#define EA_NAME_NETWORK_OPEN_ECP_PRIVACY       "ECP{c584edbf-00df-4d28-00b8-8435baca8911e8}-PRIVACY"
#define EA_NAME_NETWORK_OPEN_ECP_PRIVACY_U    L"ECP{c584edbf-00df-4d28-00b8-8435baca8911e8}-PRIVACY"
#define EA_NAME_NETWORK_OPEN_ECP_INTEGRITY     "ECP{c584edbf-00df-4d28-00b8-8435baca8911e8}-INTEGRITY"
#define EA_NAME_NETWORK_OPEN_ECP_INTEGRITY_U  L"ECP{c584edbf-00df-4d28-00b8-8435baca8911e8}-INTEGRITY"

#ifndef _WNNC_
#define _WNNC_

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

//
// Network types
//

#define     WNNC_NET_MSNET       0x00010000
#define     WNNC_NET_SMB         0x00020000
#define     WNNC_NET_NETWARE     0x00030000
#define     WNNC_NET_VINES       0x00040000
#define     WNNC_NET_10NET       0x00050000
#define     WNNC_NET_LOCUS       0x00060000
#define     WNNC_NET_SUN_PC_NFS  0x00070000
#define     WNNC_NET_LANSTEP     0x00080000
#define     WNNC_NET_9TILES      0x00090000
#define     WNNC_NET_LANTASTIC   0x000A0000
#define     WNNC_NET_AS400       0x000B0000
#define     WNNC_NET_FTP_NFS     0x000C0000
#define     WNNC_NET_PATHWORKS   0x000D0000
#define     WNNC_NET_LIFENET     0x000E0000
#define     WNNC_NET_POWERLAN    0x000F0000
#define     WNNC_NET_BWNFS       0x00100000
#define     WNNC_NET_COGENT      0x00110000
#define     WNNC_NET_FARALLON    0x00120000
#define     WNNC_NET_APPLETALK   0x00130000
#define     WNNC_NET_INTERGRAPH  0x00140000
#define     WNNC_NET_SYMFONET    0x00150000
#define     WNNC_NET_CLEARCASE   0x00160000
#define     WNNC_NET_FRONTIER    0x00170000
#define     WNNC_NET_BMC         0x00180000
#define     WNNC_NET_DCE         0x00190000
#define     WNNC_NET_AVID        0x001A0000
#define     WNNC_NET_DOCUSPACE   0x001B0000
#define     WNNC_NET_MANGOSOFT   0x001C0000
#define     WNNC_NET_SERNET      0x001D0000
#define     WNNC_NET_RIVERFRONT1 0X001E0000
#define     WNNC_NET_RIVERFRONT2 0x001F0000
#define     WNNC_NET_DECORB      0x00200000
#define     WNNC_NET_PROTSTOR    0x00210000
#define     WNNC_NET_FJ_REDIR    0x00220000
#define     WNNC_NET_DISTINCT    0x00230000
#define     WNNC_NET_TWINS       0x00240000
#define     WNNC_NET_RDR2SAMPLE  0x00250000
#define     WNNC_NET_CSC         0x00260000
#define     WNNC_NET_3IN1        0x00270000
#define     WNNC_NET_EXTENDNET   0x00290000
#define     WNNC_NET_STAC        0x002A0000
#define     WNNC_NET_FOXBAT      0x002B0000
#define     WNNC_NET_YAHOO       0x002C0000
#define     WNNC_NET_EXIFS       0x002D0000
#define     WNNC_NET_DAV         0x002E0000
#define     WNNC_NET_KNOWARE     0x002F0000
#define     WNNC_NET_OBJECT_DIRE 0x00300000
#define     WNNC_NET_MASFAX      0x00310000
#define     WNNC_NET_HOB_NFS     0x00320000
#define     WNNC_NET_SHIVA       0x00330000
#define     WNNC_NET_IBMAL       0x00340000
#define     WNNC_NET_LOCK        0x00350000
#define     WNNC_NET_TERMSRV     0x00360000
#define     WNNC_NET_SRT         0x00370000
#define     WNNC_NET_QUINCY      0x00380000
#define     WNNC_NET_OPENAFS     0x00390000
#define     WNNC_NET_AVID1       0X003A0000
#define     WNNC_NET_DFS         0x003B0000
#define     WNNC_NET_KWNP        0x003C0000
#define     WNNC_NET_ZENWORKS    0x003D0000
#define     WNNC_NET_DRIVEONWEB  0x003E0000
#define     WNNC_NET_VMWARE      0x003F0000
#define     WNNC_NET_RSFX        0x00400000
#define     WNNC_NET_MFILES      0x00410000
#define     WNNC_NET_MS_NFS      0x00420000
#define     WNNC_NET_GOOGLE      0x00430000
#define     WNNC_NET_NDFS        0x00440000
#define     WNNC_NET_DOCUSHARE   0x00450000

#define     WNNC_CRED_MANAGER   0xFFFF0000

//
// Network type aliases
//

#define     WNNC_NET_LANMAN      WNNC_NET_SMB


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif  // _WNNC_
#define VOLSNAPCONTROLTYPE                              0x00000053 // 'S'
#define IOCTL_VOLSNAP_FLUSH_AND_HOLD_WRITES             CTL_CODE(VOLSNAPCONTROLTYPE, 0, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) 

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryObject(
    _In_opt_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwNotifyChangeKey(
    _In_ HANDLE KeyHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG CompletionFilter,
    _In_ BOOLEAN WatchTree,
    _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN Asynchronous
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateEvent (
    _Out_ PHANDLE EventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ EVENT_TYPE EventType,
    _In_ BOOLEAN InitialState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteFile(
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeviceIoControlFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDirectoryFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN10_RS3)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDirectoryFileEx (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG QueryFlags,
    _In_opt_ PUNICODE_STRING FileName
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVolumeInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetVolumeInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFsControlFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
#endif

// begin_nthal

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDuplicateObject(
    _In_ HANDLE SourceProcessHandle,
    _In_ HANDLE SourceHandle,
    _In_opt_ HANDLE TargetProcessHandle,
    _Out_opt_ PHANDLE TargetHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _In_ ULONG Options
    );
#endif

// end_nthal

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenDirectoryObject(
    _Out_ PHANDLE DirectoryHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(return==0, __drv_allocatesMem(Region))
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG Protect
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(return==0, __drv_freesMem(Region))
NTSYSAPI
NTSTATUS
NTAPI
ZwFreeVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG FreeType
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ MEMORY_INFORMATION_CLASS MemoryInformationClass,
    _Out_writes_bytes_(MemoryInformationLength) PVOID MemoryInformation,
    _In_ SIZE_T MemoryInformationLength,
    _Out_opt_ PSIZE_T ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_ 
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _In_ VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
    _In_ ULONG_PTR NumberOfEntries,
    _In_reads_(NumberOfEntries) PMEMORY_RANGE_ENTRY VirtualAddresses,
    _In_reads_bytes_(VmInformationLength) PVOID VmInformation,
    _In_ ULONG VmInformationLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_When_(Timeout == NULL, _IRQL_requires_max_(APC_LEVEL))
_When_(Timeout->QuadPart != 0, _IRQL_requires_max_(APC_LEVEL))
_When_(Timeout->QuadPart == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitForSingleObject(
    _In_ HANDLE Handle,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetEvent (
    _In_ HANDLE EventHandle,
    _Out_opt_ PLONG PreviousState
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenProcessTokenEx(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenThreadTokenEx(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _Out_writes_bytes_to_opt_(TokenInformationLength,*ReturnLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength,
    _Out_ PULONG ReturnLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _In_reads_bytes_(TokenInformationLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSecurityObject(
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySecurityObject(
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_to_(Length,*LengthNeeded) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Length,
    _Out_ PULONG LengthNeeded
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLockFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnlockFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryQuotaInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_opt_ PSID StartSid,
    _In_ BOOLEAN RestartScan
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetQuotaInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
ZwFlushBuffersFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
ZwFlushBuffersFileEx(
    _In_ HANDLE FileHandle,
    _In_ ULONG FLags,
    _In_reads_bytes_(ParametersSize) PVOID Parameters,
    _In_ ULONG ParametersSize,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
#endif

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwQueryEaFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(EaListLength) PVOID EaList,
    _In_ ULONG EaListLength,
    _In_opt_ PULONG EaIndex,
    _In_ BOOLEAN RestartScan
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwSetEaFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDuplicateToken(
    _In_ HANDLE ExistingTokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN EffectiveOnly,
    _In_ TOKEN_TYPE TokenType,
    _Out_ PHANDLE NewTokenHandle
    );



#ifdef __cplusplus
}
#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4115)
#pragma warning(default:4201)
#pragma warning(default:4214)
#endif

#endif // _NTIFS_
