

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __isolation_h__
#define __isolation_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IReferenceIdentity_FWD_DEFINED__
#define __IReferenceIdentity_FWD_DEFINED__
typedef interface IReferenceIdentity IReferenceIdentity;

#endif 	/* __IReferenceIdentity_FWD_DEFINED__ */


#ifndef __IDefinitionIdentity_FWD_DEFINED__
#define __IDefinitionIdentity_FWD_DEFINED__
typedef interface IDefinitionIdentity IDefinitionIdentity;

#endif 	/* __IDefinitionIdentity_FWD_DEFINED__ */


#ifndef __IEnumIDENTITY_ATTRIBUTE_FWD_DEFINED__
#define __IEnumIDENTITY_ATTRIBUTE_FWD_DEFINED__
typedef interface IEnumIDENTITY_ATTRIBUTE IEnumIDENTITY_ATTRIBUTE;

#endif 	/* __IEnumIDENTITY_ATTRIBUTE_FWD_DEFINED__ */


#ifndef __IEnumDefinitionIdentity_FWD_DEFINED__
#define __IEnumDefinitionIdentity_FWD_DEFINED__
typedef interface IEnumDefinitionIdentity IEnumDefinitionIdentity;

#endif 	/* __IEnumDefinitionIdentity_FWD_DEFINED__ */


#ifndef __IEnumReferenceIdentity_FWD_DEFINED__
#define __IEnumReferenceIdentity_FWD_DEFINED__
typedef interface IEnumReferenceIdentity IEnumReferenceIdentity;

#endif 	/* __IEnumReferenceIdentity_FWD_DEFINED__ */


#ifndef __IDefinitionAppId_FWD_DEFINED__
#define __IDefinitionAppId_FWD_DEFINED__
typedef interface IDefinitionAppId IDefinitionAppId;

#endif 	/* __IDefinitionAppId_FWD_DEFINED__ */


#ifndef __IReferenceAppId_FWD_DEFINED__
#define __IReferenceAppId_FWD_DEFINED__
typedef interface IReferenceAppId IReferenceAppId;

#endif 	/* __IReferenceAppId_FWD_DEFINED__ */


#ifndef __IIdentityAuthority_FWD_DEFINED__
#define __IIdentityAuthority_FWD_DEFINED__
typedef interface IIdentityAuthority IIdentityAuthority;

#endif 	/* __IIdentityAuthority_FWD_DEFINED__ */


#ifndef __IAppIdAuthority_FWD_DEFINED__
#define __IAppIdAuthority_FWD_DEFINED__
typedef interface IAppIdAuthority IAppIdAuthority;

#endif 	/* __IAppIdAuthority_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_FWD_DEFINED__
#define __IEnumSTORE_CATEGORY_FWD_DEFINED__
typedef interface IEnumSTORE_CATEGORY IEnumSTORE_CATEGORY;

#endif 	/* __IEnumSTORE_CATEGORY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_SUBCATEGORY_FWD_DEFINED__
#define __IEnumSTORE_CATEGORY_SUBCATEGORY_FWD_DEFINED__
typedef interface IEnumSTORE_CATEGORY_SUBCATEGORY IEnumSTORE_CATEGORY_SUBCATEGORY;

#endif 	/* __IEnumSTORE_CATEGORY_SUBCATEGORY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_INSTANCE_FWD_DEFINED__
#define __IEnumSTORE_CATEGORY_INSTANCE_FWD_DEFINED__
typedef interface IEnumSTORE_CATEGORY_INSTANCE IEnumSTORE_CATEGORY_INSTANCE;

#endif 	/* __IEnumSTORE_CATEGORY_INSTANCE_FWD_DEFINED__ */


#ifndef __IStore_FWD_DEFINED__
#define __IStore_FWD_DEFINED__
typedef interface IStore IStore;

#endif 	/* __IStore_FWD_DEFINED__ */


#ifndef __IEnumSTORE_COMPONENT_DEPLOYMENT_FWD_DEFINED__
#define __IEnumSTORE_COMPONENT_DEPLOYMENT_FWD_DEFINED__
typedef interface IEnumSTORE_COMPONENT_DEPLOYMENT IEnumSTORE_COMPONENT_DEPLOYMENT;

#endif 	/* __IEnumSTORE_COMPONENT_DEPLOYMENT_FWD_DEFINED__ */


#ifndef __IEnumCOMPONENT_STORE_COMPONENT_CHANGE_FWD_DEFINED__
#define __IEnumCOMPONENT_STORE_COMPONENT_CHANGE_FWD_DEFINED__
typedef interface IEnumCOMPONENT_STORE_COMPONENT_CHANGE IEnumCOMPONENT_STORE_COMPONENT_CHANGE;

#endif 	/* __IEnumCOMPONENT_STORE_COMPONENT_CHANGE_FWD_DEFINED__ */


#ifndef __IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_FWD_DEFINED__
#define __IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_FWD_DEFINED__
typedef interface IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY;

#endif 	/* __IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_DEPLOYMENT_REFERENCE_FWD_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_REFERENCE_FWD_DEFINED__
typedef interface IEnumSTORE_DEPLOYMENT_REFERENCE IEnumSTORE_DEPLOYMENT_REFERENCE;

#endif 	/* __IEnumSTORE_DEPLOYMENT_REFERENCE_FWD_DEFINED__ */


#ifndef __IStorePendingTransactionProgress_FWD_DEFINED__
#define __IStorePendingTransactionProgress_FWD_DEFINED__
typedef interface IStorePendingTransactionProgress IStorePendingTransactionProgress;

#endif 	/* __IStorePendingTransactionProgress_FWD_DEFINED__ */


#ifndef __IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_FWD_DEFINED__
#define __IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_FWD_DEFINED__
typedef interface IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE;

#endif 	/* __IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_FWD_DEFINED__ */


#ifndef __IStorePendingTransaction_FWD_DEFINED__
#define __IStorePendingTransaction_FWD_DEFINED__
typedef interface IStorePendingTransaction IStorePendingTransaction;

#endif 	/* __IStorePendingTransaction_FWD_DEFINED__ */


#ifndef __IEnumSTORE_REPAIRED_COMPONENT_FWD_DEFINED__
#define __IEnumSTORE_REPAIRED_COMPONENT_FWD_DEFINED__
typedef interface IEnumSTORE_REPAIRED_COMPONENT IEnumSTORE_REPAIRED_COMPONENT;

#endif 	/* __IEnumSTORE_REPAIRED_COMPONENT_FWD_DEFINED__ */


#ifndef __IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_FWD_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_FWD_DEFINED__
typedef interface IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY;

#endif 	/* __IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_FWD_DEFINED__ */


#ifndef __IStorePendingRepairTransaction_FWD_DEFINED__
#define __IStorePendingRepairTransaction_FWD_DEFINED__
typedef interface IStorePendingRepairTransaction IStorePendingRepairTransaction;

#endif 	/* __IStorePendingRepairTransaction_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CORRUPT_COMPONENT_FWD_DEFINED__
#define __IEnumSTORE_CORRUPT_COMPONENT_FWD_DEFINED__
typedef interface IEnumSTORE_CORRUPT_COMPONENT IEnumSTORE_CORRUPT_COMPONENT;

#endif 	/* __IEnumSTORE_CORRUPT_COMPONENT_FWD_DEFINED__ */


#ifndef __IStorePendingStoreRepairTransaction_FWD_DEFINED__
#define __IStorePendingStoreRepairTransaction_FWD_DEFINED__
typedef interface IStorePendingStoreRepairTransaction IStorePendingStoreRepairTransaction;

#endif 	/* __IStorePendingStoreRepairTransaction_FWD_DEFINED__ */


#ifndef __IStore2_FWD_DEFINED__
#define __IStore2_FWD_DEFINED__
typedef interface IStore2 IStore2;

#endif 	/* __IStore2_FWD_DEFINED__ */


#ifndef __IEnumSTORE_PENDING_TRANSACTION_FWD_DEFINED__
#define __IEnumSTORE_PENDING_TRANSACTION_FWD_DEFINED__
typedef interface IEnumSTORE_PENDING_TRANSACTION IEnumSTORE_PENDING_TRANSACTION;

#endif 	/* __IEnumSTORE_PENDING_TRANSACTION_FWD_DEFINED__ */


#ifndef __IEnumSTORE_PENDING_TRANSACTION2_FWD_DEFINED__
#define __IEnumSTORE_PENDING_TRANSACTION2_FWD_DEFINED__
typedef interface IEnumSTORE_PENDING_TRANSACTION2 IEnumSTORE_PENDING_TRANSACTION2;

#endif 	/* __IEnumSTORE_PENDING_TRANSACTION2_FWD_DEFINED__ */


#ifndef __IAdvancedInstallerAwareStore_FWD_DEFINED__
#define __IAdvancedInstallerAwareStore_FWD_DEFINED__
typedef interface IAdvancedInstallerAwareStore IAdvancedInstallerAwareStore;

#endif 	/* __IAdvancedInstallerAwareStore_FWD_DEFINED__ */


#ifndef __IMigrateStore_FWD_DEFINED__
#define __IMigrateStore_FWD_DEFINED__
typedef interface IMigrateStore IMigrateStore;

#endif 	/* __IMigrateStore_FWD_DEFINED__ */


#ifndef __IEnumSTORE_DEPLOYMENT_METADATA_FWD_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_METADATA_FWD_DEFINED__
typedef interface IEnumSTORE_DEPLOYMENT_METADATA IEnumSTORE_DEPLOYMENT_METADATA;

#endif 	/* __IEnumSTORE_DEPLOYMENT_METADATA_FWD_DEFINED__ */


#ifndef __IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_FWD_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_FWD_DEFINED__
typedef interface IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY;

#endif 	/* __IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_FWD_DEFINED__ */


#ifndef __IEnumCOMPONENT_VERSION_FWD_DEFINED__
#define __IEnumCOMPONENT_VERSION_FWD_DEFINED__
typedef interface IEnumCOMPONENT_VERSION IEnumCOMPONENT_VERSION;

#endif 	/* __IEnumCOMPONENT_VERSION_FWD_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_FWD_DEFINED__
#define __IEnumSTORE_ASSEMBLY_FWD_DEFINED__
typedef interface IEnumSTORE_ASSEMBLY IEnumSTORE_ASSEMBLY;

#endif 	/* __IEnumSTORE_ASSEMBLY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_FILE_FWD_DEFINED__
#define __IEnumSTORE_ASSEMBLY_FILE_FWD_DEFINED__
typedef interface IEnumSTORE_ASSEMBLY_FILE IEnumSTORE_ASSEMBLY_FILE;

#endif 	/* __IEnumSTORE_ASSEMBLY_FILE_FWD_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_FWD_DEFINED__
#define __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_FWD_DEFINED__
typedef interface IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE;

#endif 	/* __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_FWD_DEFINED__ */


#ifndef __IEnumCATEGORY_FWD_DEFINED__
#define __IEnumCATEGORY_FWD_DEFINED__
typedef interface IEnumCATEGORY IEnumCATEGORY;

#endif 	/* __IEnumCATEGORY_FWD_DEFINED__ */


#ifndef __IEnumCATEGORY_SUBCATEGORY_FWD_DEFINED__
#define __IEnumCATEGORY_SUBCATEGORY_FWD_DEFINED__
typedef interface IEnumCATEGORY_SUBCATEGORY IEnumCATEGORY_SUBCATEGORY;

#endif 	/* __IEnumCATEGORY_SUBCATEGORY_FWD_DEFINED__ */


#ifndef __IEnumCATEGORY_INSTANCE_FWD_DEFINED__
#define __IEnumCATEGORY_INSTANCE_FWD_DEFINED__
typedef interface IEnumCATEGORY_INSTANCE IEnumCATEGORY_INSTANCE;

#endif 	/* __IEnumCATEGORY_INSTANCE_FWD_DEFINED__ */


#ifndef __IManifestInformation_FWD_DEFINED__
#define __IManifestInformation_FWD_DEFINED__
typedef interface IManifestInformation IManifestInformation;

#endif 	/* __IManifestInformation_FWD_DEFINED__ */


#ifndef __IActContext_FWD_DEFINED__
#define __IActContext_FWD_DEFINED__
typedef interface IActContext IActContext;

#endif 	/* __IActContext_FWD_DEFINED__ */


#ifndef __IStateManager_FWD_DEFINED__
#define __IStateManager_FWD_DEFINED__
typedef interface IStateManager IStateManager;

#endif 	/* __IStateManager_FWD_DEFINED__ */


#ifndef __IManifestParseErrorCallback_FWD_DEFINED__
#define __IManifestParseErrorCallback_FWD_DEFINED__
typedef interface IManifestParseErrorCallback IManifestParseErrorCallback;

#endif 	/* __IManifestParseErrorCallback_FWD_DEFINED__ */


#ifndef __IIdentityAuthority_FWD_DEFINED__
#define __IIdentityAuthority_FWD_DEFINED__
typedef interface IIdentityAuthority IIdentityAuthority;

#endif 	/* __IIdentityAuthority_FWD_DEFINED__ */


#ifndef __IAppIdAuthority_FWD_DEFINED__
#define __IAppIdAuthority_FWD_DEFINED__
typedef interface IAppIdAuthority IAppIdAuthority;

#endif 	/* __IAppIdAuthority_FWD_DEFINED__ */


#ifndef __IDefinitionIdentity_FWD_DEFINED__
#define __IDefinitionIdentity_FWD_DEFINED__
typedef interface IDefinitionIdentity IDefinitionIdentity;

#endif 	/* __IDefinitionIdentity_FWD_DEFINED__ */


#ifndef __IReferenceIdentity_FWD_DEFINED__
#define __IReferenceIdentity_FWD_DEFINED__
typedef interface IReferenceIdentity IReferenceIdentity;

#endif 	/* __IReferenceIdentity_FWD_DEFINED__ */


#ifndef __IDefinitionAppId_FWD_DEFINED__
#define __IDefinitionAppId_FWD_DEFINED__
typedef interface IDefinitionAppId IDefinitionAppId;

#endif 	/* __IDefinitionAppId_FWD_DEFINED__ */


#ifndef __IReferenceAppId_FWD_DEFINED__
#define __IReferenceAppId_FWD_DEFINED__
typedef interface IReferenceAppId IReferenceAppId;

#endif 	/* __IReferenceAppId_FWD_DEFINED__ */


#ifndef __IActContext_FWD_DEFINED__
#define __IActContext_FWD_DEFINED__
typedef interface IActContext IActContext;

#endif 	/* __IActContext_FWD_DEFINED__ */


#ifndef __IManifestParseErrorCallback_FWD_DEFINED__
#define __IManifestParseErrorCallback_FWD_DEFINED__
typedef interface IManifestParseErrorCallback IManifestParseErrorCallback;

#endif 	/* __IManifestParseErrorCallback_FWD_DEFINED__ */


#ifndef __IStore_FWD_DEFINED__
#define __IStore_FWD_DEFINED__
typedef interface IStore IStore;

#endif 	/* __IStore_FWD_DEFINED__ */


#ifndef __IMigrateStore_FWD_DEFINED__
#define __IMigrateStore_FWD_DEFINED__
typedef interface IMigrateStore IMigrateStore;

#endif 	/* __IMigrateStore_FWD_DEFINED__ */


#ifndef __IEnumIDENTITY_ATTRIBUTE_FWD_DEFINED__
#define __IEnumIDENTITY_ATTRIBUTE_FWD_DEFINED__
typedef interface IEnumIDENTITY_ATTRIBUTE IEnumIDENTITY_ATTRIBUTE;

#endif 	/* __IEnumIDENTITY_ATTRIBUTE_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_FWD_DEFINED__
#define __IEnumSTORE_CATEGORY_FWD_DEFINED__
typedef interface IEnumSTORE_CATEGORY IEnumSTORE_CATEGORY;

#endif 	/* __IEnumSTORE_CATEGORY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_INSTANCE_FWD_DEFINED__
#define __IEnumSTORE_CATEGORY_INSTANCE_FWD_DEFINED__
typedef interface IEnumSTORE_CATEGORY_INSTANCE IEnumSTORE_CATEGORY_INSTANCE;

#endif 	/* __IEnumSTORE_CATEGORY_INSTANCE_FWD_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_SUBCATEGORY_FWD_DEFINED__
#define __IEnumSTORE_CATEGORY_SUBCATEGORY_FWD_DEFINED__
typedef interface IEnumSTORE_CATEGORY_SUBCATEGORY IEnumSTORE_CATEGORY_SUBCATEGORY;

#endif 	/* __IEnumSTORE_CATEGORY_SUBCATEGORY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_FWD_DEFINED__
#define __IEnumSTORE_ASSEMBLY_FWD_DEFINED__
typedef interface IEnumSTORE_ASSEMBLY IEnumSTORE_ASSEMBLY;

#endif 	/* __IEnumSTORE_ASSEMBLY_FWD_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_FILE_FWD_DEFINED__
#define __IEnumSTORE_ASSEMBLY_FILE_FWD_DEFINED__
typedef interface IEnumSTORE_ASSEMBLY_FILE IEnumSTORE_ASSEMBLY_FILE;

#endif 	/* __IEnumSTORE_ASSEMBLY_FILE_FWD_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_FWD_DEFINED__
#define __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_FWD_DEFINED__
typedef interface IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE;

#endif 	/* __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_FWD_DEFINED__ */


#ifndef __IEnumDefinitionIdentity_FWD_DEFINED__
#define __IEnumDefinitionIdentity_FWD_DEFINED__
typedef interface IEnumDefinitionIdentity IEnumDefinitionIdentity;

#endif 	/* __IEnumDefinitionIdentity_FWD_DEFINED__ */


#ifndef __IEnumReferenceIdentity_FWD_DEFINED__
#define __IEnumReferenceIdentity_FWD_DEFINED__
typedef interface IEnumReferenceIdentity IEnumReferenceIdentity;

#endif 	/* __IEnumReferenceIdentity_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"
#include "cdf_types.h"
#include "propidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_isolation_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


























// {3B6DEF2E-5BB3-487f-B6C3-E888FF42A337}
DEFINE_GUID(
     SXS_INSTALL_REFERENCE_SCHEME_CSUTIL, 
     0x3b6def2e, 
     0x5bb3, 
     0x487f, 
     0xb6, 0xc3, 0xe8, 0x88, 0xff, 0x42, 0xa3, 0x37);

// {8cedc215-ac4b-488b-93c0-a50a49cb2fb8}
DEFINE_GUID(
    SXS_INSTALL_REFERENCE_SCHEME_UNINSTALLKEY, 
    0x8cedc215, 
    0xac4b, 
    0x488b, 
    0x93, 0xc0, 0xa5, 0x0a, 0x49, 0xcb, 0x2f, 0xb8);

// {b02f9d65-fb77-4f7a-afa5-b391309f11c9}
DEFINE_GUID(
    SXS_INSTALL_REFERENCE_SCHEME_KEYFILE, 
    0xb02f9d65, 
    0xfb77, 
    0x4f7a, 
    0xaf, 0xa5, 0xb3, 0x91, 0x30, 0x9f, 0x11, 0xc9);

// {2ec93463-b0c3-45e1-8364-327e96aea856}
DEFINE_GUID(
    SXS_INSTALL_REFERENCE_SCHEME_OPAQUESTRING, 
    0x2ec93463, 
    0xb0c3, 
    0x45e1, 
    0x83, 0x64, 0x32, 0x7e, 0x96, 0xae, 0xa8, 0x56);

// d16d444c-56d8-11d5-882d-0080c847b195
DEFINE_GUID(
    SXS_INSTALL_REFERENCE_SCHEME_OSINSTALL,
    0xd16d444c,
    0x56d8,
    0x11d5,
    0x88, 0x2d, 0x00, 0x80, 0xc8, 0x47, 0xb1, 0x95);

//
// Guid for the -installed by sxsinstallassemblyw, who knows?-
// 27dec61e-b43c-4ac8-88db-e209a8242d90
//
DEFINE_GUID(
    SXS_INSTALL_REFERENCE_SCHEME_SXS_INSTALL_ASSEMBLY,
    0x27dec61e,
    0xb43c,
    0x4ac8,
    0x88, 0xdb, 0xe2, 0x09, 0xa8, 0x24, 0x2d, 0x90);

#define POQEXEC_DISPOSITION_FLAG_COMPLETED_CRITICAL_POQ 0x00010000

#ifndef FEATURE_PAL
typedef struct _CULTURE_FALLBACK_LIST
    {
    SIZE_T nCultures;
    /* [size_is] */ const LPCWSTR *prgpszCultures;
    } 	CULTURE_FALLBACK_LIST;

typedef struct _CULTURE_FALLBACK_LIST *PCULTURE_FALLBACK_LIST;

typedef const CULTURE_FALLBACK_LIST *PCCULTURE_FALLBACK_LIST;

typedef union _COMPONENT_VERSION
    {
    ULONGLONG Version64;
    struct __MIDL___MIDL_itf_isolation_0000_0000_0001
        {
        ULONG BuildAndRevision;
        ULONG MajorAndMinor;
        } 	Version32;
    struct __MIDL___MIDL_itf_isolation_0000_0000_0002
        {
        USHORT Revision;
        USHORT Build;
        USHORT Minor;
        USHORT Major;
        } 	Version16;
    } 	COMPONENT_VERSION;

typedef union _COMPONENT_VERSION *PCOMPONENT_VERSION;

typedef const COMPONENT_VERSION *PCCOMPONENT_VERSION;

#endif // !FEATURE_PAL
typedef struct _IDENTITY_ATTRIBUTE
    {
    LPCWSTR pszNamespace;
    LPCWSTR pszName;
    LPCWSTR pszValue;
    } 	IDENTITY_ATTRIBUTE;

typedef struct _IDENTITY_ATTRIBUTE *PIDENTITY_ATTRIBUTE;

typedef const IDENTITY_ATTRIBUTE *PCIDENTITY_ATTRIBUTE;

/* [v1_enum] */ 
enum _STORE_ASSEMBLY_STATUS_FLAGS
    {
        STORE_ASSEMBLY_STATUS_INVALID	= 0,
        STORE_ASSEMBLY_STATUS_MANIFEST_ONLY	= 0x1,
        STORE_ASSEMBLY_STATUS_PAYLOAD_RESIDENT	= 0x2,
        STORE_ASSEMBLY_STATUS_PARTIAL_INSTALL	= 0x4
    } ;
typedef struct _STORE_ASSEMBLY
    {
    DWORD dwStatus;
    IDefinitionIdentity *pIDefinitionIdentity;
    } 	STORE_ASSEMBLY;

typedef struct _STORE_ASSEMBLY *PSTORE_ASSEMBLY;

typedef const STORE_ASSEMBLY *PCSTORE_ASSEMBLY;

/* [v1_enum] */ 
enum _STORE_ASSEMBLY_FILE_STATUS_FLAGS
    {
        STORE_ASSEMBLY_FILE_STATUS_FLAG_PRESENT	= 0x1
    } ;
typedef struct _STORE_ASSEMBLY_FILE
    {
    DWORD dwFlags;
    LPWSTR pszFileName;
    DWORD dwFileStatusFlags;
    } 	STORE_ASSEMBLY_FILE;

typedef struct _STORE_ASSEMBLY_FILE *PSTORE_ASSEMBLY_FILE;

typedef const STORE_ASSEMBLY_FILE *PCSTORE_ASSEMBLY_FILE;

typedef struct _STORE_ASSEMBLY_INSTALLATION_REFERENCE
    {
    DWORD cbSize;
    DWORD dwFlags;
    GUID guidScheme;
    LPWSTR pszIdentifier;
    LPWSTR pszNonCanonicalData;
    } 	STORE_ASSEMBLY_INSTALLATION_REFERENCE;

typedef struct _STORE_ASSEMBLY_INSTALLATION_REFERENCE *PSTORE_ASSEMBLY_INSTALLATION_REFERENCE;

typedef const STORE_ASSEMBLY_INSTALLATION_REFERENCE *PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE;

typedef struct _STORE_CATEGORY
    {
    IDefinitionIdentity *pIDefinitionIdentity;
    } 	STORE_CATEGORY;

typedef struct _STORE_CATEGORY *PSTORE_CATEGORY;

typedef const STORE_CATEGORY *PCSTORE_CATEGORY;

typedef struct _STORE_CATEGORY_SUBCATEGORY
    {
    LPWSTR pszSubcategory;
    } 	STORE_CATEGORY_SUBCATEGORY;

typedef struct _STORE_CATEGORY_SUBCATEGORY *PSTORE_CATEGORY_SUBCATEGORY;

typedef const STORE_CATEGORY_SUBCATEGORY *PCSTORE_CATEGORY_SUBCATEGORY;

typedef struct _STORE_CATEGORY_INSTANCE
    {
    IDefinitionAppId *pIDefinitionAppId_Application;
    LPWSTR pszXMLSnippet;
    } 	STORE_CATEGORY_INSTANCE;

typedef struct _STORE_CATEGORY_INSTANCE *PSTORE_CATEGORY_INSTANCE;

typedef const STORE_CATEGORY_INSTANCE *PCSTORE_CATEGORY_INSTANCE;

typedef struct _CATEGORY
    {
    IDefinitionIdentity *pIDefinitionIdentity;
    } 	CATEGORY;

typedef struct _CATEGORY *PCATEGORY;

typedef const CATEGORY *PCCATEGORY;

typedef struct _CATEGORY_SUBCATEGORY
    {
    LPCWSTR pszSubcategory;
    } 	CATEGORY_SUBCATEGORY;

typedef struct _CATEGORY_SUBCATEGORY *PCATEGORY_SUBCATEGORY;

typedef const CATEGORY_SUBCATEGORY *PCCATEGORY_SUBCATEGORY;

typedef struct _CATEGORY_INSTANCE
    {
    IDefinitionAppId *pIDefinitionAppId_Application;
    LPCWSTR pszXMLSnippet;
    } 	CATEGORY_INSTANCE;

typedef struct _CATEGORY_INSTANCE *PCATEGORY_INSTANCE;

typedef const CATEGORY_INSTANCE *PCCATEGORY_INSTANCE;

typedef struct _CREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST
    {
    DWORD dwSize;
    DWORD dwFlags;
    SIZE_T nProcessorArchitectures;
    /* [size_is] */ const USHORT *prgusProcessorArchitectures;
    } 	CREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST;

typedef struct _CREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST *PCREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST;

typedef const CREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST *PCCREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST;

typedef /* [v1_enum] */ 
enum _CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE
    {
        CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE_INVALID	= 0,
        CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE_SYSTEM_STORE	= 1,
        CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE_USER_STORE	= 2,
        CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE_PRIVATE_STORE	= 3
    } 	CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE;

typedef /* [v1_enum] */ enum _CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE *PCREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE;

typedef const CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE *PCCREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE;

typedef struct _CREATE_APP_CONTEXT_DATA_CUSTOM_STORE
    {
    DWORD dwSize;
    DWORD dwFlags;
    CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_TYPE iType;
    IStore *pIStore;
    PVOID pvReservedMustBeZero;
    } 	CREATE_APP_CONTEXT_DATA_CUSTOM_STORE;

typedef struct _CREATE_APP_CONTEXT_DATA_CUSTOM_STORE *PCREATE_APP_CONTEXT_DATA_CUSTOM_STORE;

typedef const CREATE_APP_CONTEXT_DATA_CUSTOM_STORE *PCCREATE_APP_CONTEXT_DATA_CUSTOM_STORE;

typedef struct _CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST
    {
    DWORD dwSize;
    DWORD dwFlags;
    SIZE_T Count;
    /* [size_is] */ const PCCREATE_APP_CONTEXT_DATA_CUSTOM_STORE *prgpStores;
    } 	CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST;

typedef struct _CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST *PCREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST;

typedef const CREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST *PCCREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST;

typedef /* [v1_enum] */ 
enum _CREATE_APP_CONTEXT_DATA_SOURCE_TYPES
    {
        CREATE_APP_CONTEXT_DATA_SOURCE_TYPE_APP_DEFINITION	= 1,
        CREATE_APP_CONTEXT_DATA_SOURCE_TYPE_APP_REFERENCE	= 2
    } 	CREATE_APP_CONTEXT_DATA_SOURCE_TYPES;

typedef /* [v1_enum] */ enum _CREATE_APP_CONTEXT_DATA_SOURCE_TYPES *PCREATE_APP_CONTEXT_DATA_SOURCE_TYPES;

typedef const CREATE_APP_CONTEXT_DATA_SOURCE_TYPES *PCCREATE_APP_CONTEXT_DATA_SOURCE_TYPES;

typedef struct _CREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION
    {
    DWORD dwSize;
    DWORD dwFlags;
    IDefinitionAppId *pIDefinitionAppId;
    } 	CREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION;

typedef struct _CREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION *PCREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION;

typedef const CREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION *PCCREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION;

typedef struct _CREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE
    {
    DWORD dwSize;
    DWORD dwFlags;
    IReferenceAppId *pIReferenceAppId;
    } 	CREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE;

typedef struct _CREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE *PCREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE;

typedef const CREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE *PCCREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE;

typedef /* [switch_type] */ union _CREATE_APP_CONTEXT_DATA_SOURCE_UNION
    {
    /* [case()] */ PCCREATE_APP_CONTEXT_DATA_SOURCE_APP_DEFINITION AppDefinition;
    /* [case()] */ PCCREATE_APP_CONTEXT_DATA_SOURCE_APP_REFERENCE AppReference;
    } 	CREATE_APP_CONTEXT_DATA_SOURCE_UNION;

typedef /* [switch_type] */ union _CREATE_APP_CONTEXT_DATA_SOURCE_UNION *PCREATE_APP_CONTEXT_DATA_SOURCE_UNION;

typedef const CREATE_APP_CONTEXT_DATA_SOURCE_UNION *PCCREATE_APP_CONTEXT_DATA_SOURCE_UNION;

typedef struct _CREATE_APP_CONTEXT_DATA_SOURCE
    {
    DWORD dwSize;
    DWORD dwFlags;
    CREATE_APP_CONTEXT_DATA_SOURCE_TYPES iSourceType;
    /* [switch_is] */ CREATE_APP_CONTEXT_DATA_SOURCE_UNION Data;
    } 	CREATE_APP_CONTEXT_DATA_SOURCE;

typedef struct _CREATE_APP_CONTEXT_DATA_SOURCE *PCREATE_APP_CONTEXT_DATA_SOURCE;

typedef const CREATE_APP_CONTEXT_DATA_SOURCE *PCCREATE_APP_CONTEXT_DATA_SOURCE;

/* [v1_enum] */ 
enum _CREATE_APP_CONTEXT_DATA_FLAGS
    {
        CREATE_APP_CONTEXT_DATA_FLAG_CUSTOM_STORE_LIST_VALID	= 0x1,
        CREATE_APP_CONTEXT_DATA_FLAG_CULTURE_FALLBACK_LIST_VALID	= 0x2,
        CREATE_APP_CONTEXT_DATA_FLAG_PROCESSOR_ARCHITECTURE_FALLBACK_LIST_VALID	= 0x4,
        CREATE_APP_CONTEXT_DATA_FLAG_PROCESSOR_ARCHITECTURE_VALID	= 0x8,
        CREATE_APP_CONTEXT_DATA_FLAG_SOURCE_VALID	= 0x10,
        CREATE_APP_CONTEXT_DATA_FLAG_IGNORE_VISIBILITY_FLAGS	= 0x100000
    } ;
typedef struct _CREATE_APP_CONTEXT_DATA
    {
    DWORD dwSize;
    DWORD dwFlags;
    PCCREATE_APP_CONTEXT_DATA_CUSTOM_STORE_LIST pCustomStoreList;
    PCCULTURE_FALLBACK_LIST pCultureFallbackList;
    PCCREATE_APP_CONTEXT_DATA_PROCESSOR_ARCHITECTURE_FALLBACK_LIST pProcessorArchitectureFallbackList;
    PCCREATE_APP_CONTEXT_DATA_SOURCE pSource;
    USHORT usProcessorArchitecture;
    } 	CREATE_APP_CONTEXT_DATA;

typedef struct _CREATE_APP_CONTEXT_DATA *PCREATE_APP_CONTEXT_DATA;

typedef const CREATE_APP_CONTEXT_DATA *PCCREATE_APP_CONTEXT_DATA;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0000_v0_0_s_ifspec;

#ifndef __IReferenceIdentity_INTERFACE_DEFINED__
#define __IReferenceIdentity_INTERFACE_DEFINED__

/* interface IReferenceIdentity */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IReferenceIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6eaf5ace-7917-4f3c-b129-e046a9704766")
    IReferenceIdentity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAttribute( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAttribute( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAttributes( 
            /* [annotation][retval][out] */ 
            _Out_  IEnumIDENTITY_ATTRIBUTE **ppIEnumIDENTITY_ATTRIBUTE) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][in] */ 
            _In_  SIZE_T cDeltas,
            /* [annotation][unique][size_is][in] */ 
            _In_reads_opt_(cDeltas)  const IDENTITY_ATTRIBUTE rgDeltas[  ],
            /* [annotation][out] */ 
            _Out_  IReferenceIdentity **ppIReferenceIdentity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReferenceIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferenceIdentity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferenceIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferenceIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )( 
            IReferenceIdentity * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )( 
            IReferenceIdentity * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszValue);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAttributes )( 
            IReferenceIdentity * This,
            /* [annotation][retval][out] */ 
            _Out_  IEnumIDENTITY_ATTRIBUTE **ppIEnumIDENTITY_ATTRIBUTE);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IReferenceIdentity * This,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeltas,
            /* [annotation][unique][size_is][in] */ 
            _In_reads_opt_(cDeltas)  const IDENTITY_ATTRIBUTE rgDeltas[  ],
            /* [annotation][out] */ 
            _Out_  IReferenceIdentity **ppIReferenceIdentity);
        
        END_INTERFACE
    } IReferenceIdentityVtbl;

    interface IReferenceIdentity
    {
        CONST_VTBL struct IReferenceIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferenceIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferenceIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferenceIdentity_GetAttribute(This,pszNamespace,pszName,ppszValue)	\
    ( (This)->lpVtbl -> GetAttribute(This,pszNamespace,pszName,ppszValue) ) 

#define IReferenceIdentity_SetAttribute(This,pszNamespace,pszName,pszValue)	\
    ( (This)->lpVtbl -> SetAttribute(This,pszNamespace,pszName,pszValue) ) 

#define IReferenceIdentity_EnumAttributes(This,ppIEnumIDENTITY_ATTRIBUTE)	\
    ( (This)->lpVtbl -> EnumAttributes(This,ppIEnumIDENTITY_ATTRIBUTE) ) 

#define IReferenceIdentity_Clone(This,cDeltas,rgDeltas,ppIReferenceIdentity)	\
    ( (This)->lpVtbl -> Clone(This,cDeltas,rgDeltas,ppIReferenceIdentity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferenceIdentity_INTERFACE_DEFINED__ */


#ifndef __IDefinitionIdentity_INTERFACE_DEFINED__
#define __IDefinitionIdentity_INTERFACE_DEFINED__

/* interface IDefinitionIdentity */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDefinitionIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("587bf538-4d90-4a3c-9ef1-58a200a8a9e7")
    IDefinitionIdentity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAttribute( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][retval][out] */ 
            _Outptr_  LPWSTR *ppszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAttribute( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAttributes( 
            /* [annotation][out] */ 
            _Out_  IEnumIDENTITY_ATTRIBUTE **ppIEAIA) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][in] */ 
            _In_  SIZE_T cDeltas,
            /* [annotation][unique][size_is][in] */ 
            _In_reads_opt_(cDeltas)  const IDENTITY_ATTRIBUTE prgDeltas[  ],
            /* [annotation][out] */ 
            _Out_  IDefinitionIdentity **ppIDefinitionIdentity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDefinitionIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDefinitionIdentity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDefinitionIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDefinitionIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )( 
            IDefinitionIdentity * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][retval][out] */ 
            _Outptr_  LPWSTR *ppszValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )( 
            IDefinitionIdentity * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszNamespace,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszName,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszValue);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAttributes )( 
            IDefinitionIdentity * This,
            /* [annotation][out] */ 
            _Out_  IEnumIDENTITY_ATTRIBUTE **ppIEAIA);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IDefinitionIdentity * This,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeltas,
            /* [annotation][unique][size_is][in] */ 
            _In_reads_opt_(cDeltas)  const IDENTITY_ATTRIBUTE prgDeltas[  ],
            /* [annotation][out] */ 
            _Out_  IDefinitionIdentity **ppIDefinitionIdentity);
        
        END_INTERFACE
    } IDefinitionIdentityVtbl;

    interface IDefinitionIdentity
    {
        CONST_VTBL struct IDefinitionIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDefinitionIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDefinitionIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDefinitionIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDefinitionIdentity_GetAttribute(This,pszNamespace,pszName,ppszValue)	\
    ( (This)->lpVtbl -> GetAttribute(This,pszNamespace,pszName,ppszValue) ) 

#define IDefinitionIdentity_SetAttribute(This,pszNamespace,pszName,pszValue)	\
    ( (This)->lpVtbl -> SetAttribute(This,pszNamespace,pszName,pszValue) ) 

#define IDefinitionIdentity_EnumAttributes(This,ppIEAIA)	\
    ( (This)->lpVtbl -> EnumAttributes(This,ppIEAIA) ) 

#define IDefinitionIdentity_Clone(This,cDeltas,prgDeltas,ppIDefinitionIdentity)	\
    ( (This)->lpVtbl -> Clone(This,cDeltas,prgDeltas,ppIDefinitionIdentity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDefinitionIdentity_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0002 */
/* [local] */ 

typedef struct _IDENTITY_ATTRIBUTE_BLOB
    {
    DWORD ofsNamespace;
    DWORD ofsName;
    DWORD ofsValue;
    } 	IDENTITY_ATTRIBUTE_BLOB;

typedef struct _IDENTITY_ATTRIBUTE_BLOB *PIDENTITY_ATTRIBUTE_BLOB;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0002_v0_0_s_ifspec;

#ifndef __IEnumIDENTITY_ATTRIBUTE_INTERFACE_DEFINED__
#define __IEnumIDENTITY_ATTRIBUTE_INTERFACE_DEFINED__

/* interface IEnumIDENTITY_ATTRIBUTE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumIDENTITY_ATTRIBUTE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9cdaae75-246e-4b00-a26d-b9aec137a3eb")
    IEnumIDENTITY_ATTRIBUTE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltWritten)  IDENTITY_ATTRIBUTE rgAttributes[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CurrentIntoBuffer( 
            /* [annotation][in] */ 
            _In_  SIZE_T cbAvailable,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(cbAvailable, *pcbUsed)  BYTE pbData[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcbUsed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumIDENTITY_ATTRIBUTE **ppIEnumIDENTITY_ATTRIBUTE) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CurrentSize( 
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcbRequired) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumIDENTITY_ATTRIBUTEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumIDENTITY_ATTRIBUTE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumIDENTITY_ATTRIBUTE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumIDENTITY_ATTRIBUTE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumIDENTITY_ATTRIBUTE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltWritten)  IDENTITY_ATTRIBUTE rgAttributes[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltWritten);
        
        HRESULT ( STDMETHODCALLTYPE *CurrentIntoBuffer )( 
            IEnumIDENTITY_ATTRIBUTE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T cbAvailable,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(cbAvailable, *pcbUsed)  BYTE pbData[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcbUsed);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumIDENTITY_ATTRIBUTE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumIDENTITY_ATTRIBUTE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumIDENTITY_ATTRIBUTE * This,
            /* [annotation][out] */ 
            _Out_  IEnumIDENTITY_ATTRIBUTE **ppIEnumIDENTITY_ATTRIBUTE);
        
        HRESULT ( STDMETHODCALLTYPE *CurrentSize )( 
            IEnumIDENTITY_ATTRIBUTE * This,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcbRequired);
        
        END_INTERFACE
    } IEnumIDENTITY_ATTRIBUTEVtbl;

    interface IEnumIDENTITY_ATTRIBUTE
    {
        CONST_VTBL struct IEnumIDENTITY_ATTRIBUTEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumIDENTITY_ATTRIBUTE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumIDENTITY_ATTRIBUTE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumIDENTITY_ATTRIBUTE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumIDENTITY_ATTRIBUTE_Next(This,celt,rgAttributes,pceltWritten)	\
    ( (This)->lpVtbl -> Next(This,celt,rgAttributes,pceltWritten) ) 

#define IEnumIDENTITY_ATTRIBUTE_CurrentIntoBuffer(This,cbAvailable,pbData,pcbUsed)	\
    ( (This)->lpVtbl -> CurrentIntoBuffer(This,cbAvailable,pbData,pcbUsed) ) 

#define IEnumIDENTITY_ATTRIBUTE_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumIDENTITY_ATTRIBUTE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumIDENTITY_ATTRIBUTE_Clone(This,ppIEnumIDENTITY_ATTRIBUTE)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumIDENTITY_ATTRIBUTE) ) 

#define IEnumIDENTITY_ATTRIBUTE_CurrentSize(This,pcbRequired)	\
    ( (This)->lpVtbl -> CurrentSize(This,pcbRequired) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumIDENTITY_ATTRIBUTE_INTERFACE_DEFINED__ */


#ifndef __IEnumDefinitionIdentity_INTERFACE_DEFINED__
#define __IEnumDefinitionIdentity_INTERFACE_DEFINED__

/* interface IEnumDefinitionIdentity */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumDefinitionIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f3549d9c-fc73-4793-9c00-1cd204254c0c")
    IEnumDefinitionIdentity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltWritten)  IDefinitionIdentity *rgpIDefinitionIdentity[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumDefinitionIdentity **ppIEnumDefinitionIdentity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumDefinitionIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumDefinitionIdentity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumDefinitionIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumDefinitionIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumDefinitionIdentity * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltWritten)  IDefinitionIdentity *rgpIDefinitionIdentity[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltWritten);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumDefinitionIdentity * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumDefinitionIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumDefinitionIdentity * This,
            /* [annotation][out] */ 
            _Out_  IEnumDefinitionIdentity **ppIEnumDefinitionIdentity);
        
        END_INTERFACE
    } IEnumDefinitionIdentityVtbl;

    interface IEnumDefinitionIdentity
    {
        CONST_VTBL struct IEnumDefinitionIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDefinitionIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDefinitionIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDefinitionIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDefinitionIdentity_Next(This,celt,rgpIDefinitionIdentity,pceltWritten)	\
    ( (This)->lpVtbl -> Next(This,celt,rgpIDefinitionIdentity,pceltWritten) ) 

#define IEnumDefinitionIdentity_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumDefinitionIdentity_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDefinitionIdentity_Clone(This,ppIEnumDefinitionIdentity)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumDefinitionIdentity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDefinitionIdentity_INTERFACE_DEFINED__ */


#ifndef __IEnumReferenceIdentity_INTERFACE_DEFINED__
#define __IEnumReferenceIdentity_INTERFACE_DEFINED__

/* interface IEnumReferenceIdentity */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumReferenceIdentity;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b30352cf-23da-4577-9b3f-b4e6573be53b")
    IEnumReferenceIdentity : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltWritten)  IReferenceIdentity **prgpIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumReferenceIdentity **ppIEnumReferenceIdentity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumReferenceIdentityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumReferenceIdentity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumReferenceIdentity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumReferenceIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumReferenceIdentity * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltWritten)  IReferenceIdentity **prgpIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltWritten);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumReferenceIdentity * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumReferenceIdentity * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumReferenceIdentity * This,
            /* [annotation][out] */ 
            _Out_  IEnumReferenceIdentity **ppIEnumReferenceIdentity);
        
        END_INTERFACE
    } IEnumReferenceIdentityVtbl;

    interface IEnumReferenceIdentity
    {
        CONST_VTBL struct IEnumReferenceIdentityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumReferenceIdentity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumReferenceIdentity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumReferenceIdentity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumReferenceIdentity_Next(This,celt,prgpIReferenceIdentity,pceltWritten)	\
    ( (This)->lpVtbl -> Next(This,celt,prgpIReferenceIdentity,pceltWritten) ) 

#define IEnumReferenceIdentity_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumReferenceIdentity_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumReferenceIdentity_Clone(This,ppIEnumReferenceIdentity)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumReferenceIdentity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumReferenceIdentity_INTERFACE_DEFINED__ */


#ifndef __IDefinitionAppId_INTERFACE_DEFINED__
#define __IDefinitionAppId_INTERFACE_DEFINED__

/* interface IDefinitionAppId */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IDefinitionAppId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d91e12d8-98ed-47fa-9936-39421283d59b")
    IDefinitionAppId : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SubscriptionId( 
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszSubscription) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SubscriptionId( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszSubscription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Codebase( 
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszCodebase) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Codebase( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszCodebase) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAppPath( 
            /* [annotation][out] */ 
            _Out_  IEnumDefinitionIdentity **ppIEnumDefinitionIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppPath( 
            /* [annotation][in] */ 
            _In_  SIZE_T cIDefinitionIdentity,
            /* [annotation][size_is][in] */ 
            _In_reads_(cIDefinitionIdentity)  IDefinitionIdentity *rgIDefinitionIdentity[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDefinitionAppIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDefinitionAppId * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDefinitionAppId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDefinitionAppId * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscriptionId )( 
            IDefinitionAppId * This,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszSubscription);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscriptionId )( 
            IDefinitionAppId * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszSubscription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Codebase )( 
            IDefinitionAppId * This,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszCodebase);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Codebase )( 
            IDefinitionAppId * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszCodebase);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAppPath )( 
            IDefinitionAppId * This,
            /* [annotation][out] */ 
            _Out_  IEnumDefinitionIdentity **ppIEnumDefinitionIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppPath )( 
            IDefinitionAppId * This,
            /* [annotation][in] */ 
            _In_  SIZE_T cIDefinitionIdentity,
            /* [annotation][size_is][in] */ 
            _In_reads_(cIDefinitionIdentity)  IDefinitionIdentity *rgIDefinitionIdentity[  ]);
        
        END_INTERFACE
    } IDefinitionAppIdVtbl;

    interface IDefinitionAppId
    {
        CONST_VTBL struct IDefinitionAppIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDefinitionAppId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDefinitionAppId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDefinitionAppId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDefinitionAppId_get_SubscriptionId(This,ppszSubscription)	\
    ( (This)->lpVtbl -> get_SubscriptionId(This,ppszSubscription) ) 

#define IDefinitionAppId_put_SubscriptionId(This,pszSubscription)	\
    ( (This)->lpVtbl -> put_SubscriptionId(This,pszSubscription) ) 

#define IDefinitionAppId_get_Codebase(This,ppszCodebase)	\
    ( (This)->lpVtbl -> get_Codebase(This,ppszCodebase) ) 

#define IDefinitionAppId_put_Codebase(This,pszCodebase)	\
    ( (This)->lpVtbl -> put_Codebase(This,pszCodebase) ) 

#define IDefinitionAppId_EnumAppPath(This,ppIEnumDefinitionIdentity)	\
    ( (This)->lpVtbl -> EnumAppPath(This,ppIEnumDefinitionIdentity) ) 

#define IDefinitionAppId_SetAppPath(This,cIDefinitionIdentity,rgIDefinitionIdentity)	\
    ( (This)->lpVtbl -> SetAppPath(This,cIDefinitionIdentity,rgIDefinitionIdentity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDefinitionAppId_INTERFACE_DEFINED__ */


#ifndef __IReferenceAppId_INTERFACE_DEFINED__
#define __IReferenceAppId_INTERFACE_DEFINED__

/* interface IReferenceAppId */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IReferenceAppId;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("054f0bef-9e45-4363-8f5a-2f8e142d9a3b")
    IReferenceAppId : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SubscriptionId( 
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszSubscription) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SubscriptionId( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszSubscription) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Codebase( 
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszCodebase) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Codebase( 
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszCodebase) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAppPath( 
            /* [annotation][out] */ 
            _Out_  IEnumReferenceIdentity **ppIReferenceAppId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IReferenceAppIdVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IReferenceAppId * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IReferenceAppId * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IReferenceAppId * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SubscriptionId )( 
            IReferenceAppId * This,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszSubscription);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SubscriptionId )( 
            IReferenceAppId * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszSubscription);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Codebase )( 
            IReferenceAppId * This,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppszCodebase);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Codebase )( 
            IReferenceAppId * This,
            /* [annotation][unique][in] */ 
            _In_opt_  LPCWSTR pszCodebase);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAppPath )( 
            IReferenceAppId * This,
            /* [annotation][out] */ 
            _Out_  IEnumReferenceIdentity **ppIReferenceAppId);
        
        END_INTERFACE
    } IReferenceAppIdVtbl;

    interface IReferenceAppId
    {
        CONST_VTBL struct IReferenceAppIdVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReferenceAppId_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IReferenceAppId_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IReferenceAppId_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IReferenceAppId_get_SubscriptionId(This,ppszSubscription)	\
    ( (This)->lpVtbl -> get_SubscriptionId(This,ppszSubscription) ) 

#define IReferenceAppId_put_SubscriptionId(This,pszSubscription)	\
    ( (This)->lpVtbl -> put_SubscriptionId(This,pszSubscription) ) 

#define IReferenceAppId_get_Codebase(This,ppszCodebase)	\
    ( (This)->lpVtbl -> get_Codebase(This,ppszCodebase) ) 

#define IReferenceAppId_put_Codebase(This,pszCodebase)	\
    ( (This)->lpVtbl -> put_Codebase(This,pszCodebase) ) 

#define IReferenceAppId_EnumAppPath(This,ppIReferenceAppId)	\
    ( (This)->lpVtbl -> EnumAppPath(This,ppIReferenceAppId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IReferenceAppId_INTERFACE_DEFINED__ */


#ifndef __IIdentityAuthority_INTERFACE_DEFINED__
#define __IIdentityAuthority_INTERFACE_DEFINED__

/* interface IIdentityAuthority */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _TEXT_TO_DEFINITION_IDENTITY_FLAGS
    {
        TEXT_TO_DEFINITION_IDENTITY_FLAG_ALLOW_UNKNOWN_ATTRIBUTES_IN_NULL_NAMESPACE	= 0x1,
        TEXT_TO_DEFINITION_IDENTITY_FLAG_MAKE_READONLY	= 0x2
    } ;
/* [v1_enum] */ 
enum _TEXT_TO_REFERENCE_IDENTITY_FLAGS
    {
        TEXT_TO_REFERENCE_IDENTITY_FLAG_ALLOW_UNKNOWN_ATTRIBUTES_IN_NULL_NAMESPACE	= 0x1,
        TEXT_TO_REFERENCE_IDENTITY_FLAG_MAKE_READONLY	= 0x2
    } ;
/* [v1_enum] */ 
enum _DEFINITION_IDENTITY_TO_TEXT_FLAGS
    {
        DEFINITION_IDENTITY_TO_TEXT_FLAG_CANONICAL	= 0x1
    } ;
/* [v1_enum] */ 
enum _REFERENCE_IDENTITY_TO_TEXT_FLAGS
    {
        REFERENCE_IDENTITY_TO_TEXT_FLAG_CANONICAL	= 0x1
    } ;
/* [v1_enum] */ 
enum _IIDENTITYAUTHORITY_DOES_DEFINITION_MATCH_REFERENCE_FLAGS
    {
        IIDENTITYAUTHORITY_DOES_DEFINITION_MATCH_REFERENCE_FLAG_EXACT_MATCH_REQUIRED	= 0x1
    } ;
/* [v1_enum] */ 
enum _IIDENTITYAUTHORITY_DOES_TEXTUAL_DEFINITION_MATCH_TEXTUAL_REFERENCE_FLAGS
    {
        IIDENTITYAUTHORITY_DOES_TEXTUAL_DEFINITION_MATCH_TEXTUAL_REFERENCE_FLAG_EXACT_MATCH_REQUIRED	= 0x1
    } ;
/* [v1_enum] */ 
enum _IIDENTITYAUTHORITY_GENERATE_DEFINITION_KEY_FLAGS
    {
        IIDENTITYAUTHORITY_GENERATE_DEFINITION_KEY_FLAG_IGNORE_VERSION	= 0x1
    } ;
/* [v1_enum] */ 
enum _IIDENTITYAUTHORITY_GENERATE_REFERENCE_KEY_FLAGS
    {
        IIDENTITYAUTHORITY_GENERATE_REFERENCE_KEY_FLAG_IGNORE_VERSION	= 0x1
    } ;

EXTERN_C const IID IID_IIdentityAuthority;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("261a6983-c35d-4d0d-aa5b-7867259e77bc")
    IIdentityAuthority : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TextToDefinition( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IDefinitionIdentity **ppIDefinitionIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TextToReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IReferenceIdentity **ppIReferenceIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefinitionToText( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefinitionToTextBuffer( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cchBufferSize,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(cchBufferSize, *pcchWritten)  WCHAR wchBuffer[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReferenceToText( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReferenceToTextBuffer( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cchBufferSize,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(cchBufferSize, *pcchWritten)  WCHAR wchBuffer[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchWritten) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreDefinitionsEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinition1,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinition2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreReferencesEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pReference1,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pReference2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreTextualDefinitionsEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreTextualReferencesEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesDefinitionMatchReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesTextualDefinitionMatchTextualReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszDefinition,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszReference,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HashReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HashDefinition( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateDefinitionKey( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateReferenceKey( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDefinition( 
            /* [annotation][retval][out] */ 
            _Out_  IDefinitionIdentity **ppNewIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReference( 
            /* [annotation][retval][out] */ 
            _Out_  IReferenceIdentity **ppNewIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefinitionToTextBufferLength( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchBufferRequired) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReferenceToTextBufferLength( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchBufferRequired) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIdentityAuthorityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIdentityAuthority * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIdentityAuthority * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIdentityAuthority * This);
        
        HRESULT ( STDMETHODCALLTYPE *TextToDefinition )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IDefinitionIdentity **ppIDefinitionIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *TextToReference )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IReferenceIdentity **ppIReferenceIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *DefinitionToText )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *DefinitionToTextBuffer )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cchBufferSize,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(cchBufferSize, *pcchWritten)  WCHAR wchBuffer[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchWritten);
        
        HRESULT ( STDMETHODCALLTYPE *ReferenceToText )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *ReferenceToTextBuffer )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cchBufferSize,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(cchBufferSize, *pcchWritten)  WCHAR wchBuffer[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchWritten);
        
        HRESULT ( STDMETHODCALLTYPE *AreDefinitionsEqual )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinition1,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinition2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual);
        
        HRESULT ( STDMETHODCALLTYPE *AreReferencesEqual )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pReference1,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pReference2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual);
        
        HRESULT ( STDMETHODCALLTYPE *AreTextualDefinitionsEqual )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual);
        
        HRESULT ( STDMETHODCALLTYPE *AreTextualReferencesEqual )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentityRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfEqual);
        
        HRESULT ( STDMETHODCALLTYPE *DoesDefinitionMatchReference )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches);
        
        HRESULT ( STDMETHODCALLTYPE *DoesTextualDefinitionMatchTextualReference )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszDefinition,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszReference,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches);
        
        HRESULT ( STDMETHODCALLTYPE *HashReference )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey);
        
        HRESULT ( STDMETHODCALLTYPE *HashDefinition )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateDefinitionKey )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateReferenceKey )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDefinition )( 
            IIdentityAuthority * This,
            /* [annotation][retval][out] */ 
            _Out_  IDefinitionIdentity **ppNewIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            IIdentityAuthority * This,
            /* [annotation][retval][out] */ 
            _Out_  IReferenceIdentity **ppNewIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *DefinitionToTextBufferLength )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchBufferRequired);
        
        HRESULT ( STDMETHODCALLTYPE *ReferenceToTextBufferLength )( 
            IIdentityAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  SIZE_T *pcchBufferRequired);
        
        END_INTERFACE
    } IIdentityAuthorityVtbl;

    interface IIdentityAuthority
    {
        CONST_VTBL struct IIdentityAuthorityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIdentityAuthority_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIdentityAuthority_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIdentityAuthority_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIdentityAuthority_TextToDefinition(This,dwFlags,pszIdentity,ppIDefinitionIdentity)	\
    ( (This)->lpVtbl -> TextToDefinition(This,dwFlags,pszIdentity,ppIDefinitionIdentity) ) 

#define IIdentityAuthority_TextToReference(This,dwFlags,pszIdentity,ppIReferenceIdentity)	\
    ( (This)->lpVtbl -> TextToReference(This,dwFlags,pszIdentity,ppIReferenceIdentity) ) 

#define IIdentityAuthority_DefinitionToText(This,dwFlags,pIDefinitionIdentity,ppszFormattedIdentity)	\
    ( (This)->lpVtbl -> DefinitionToText(This,dwFlags,pIDefinitionIdentity,ppszFormattedIdentity) ) 

#define IIdentityAuthority_DefinitionToTextBuffer(This,dwFlags,pIDefinitionIdentity,cchBufferSize,wchBuffer,pcchWritten)	\
    ( (This)->lpVtbl -> DefinitionToTextBuffer(This,dwFlags,pIDefinitionIdentity,cchBufferSize,wchBuffer,pcchWritten) ) 

#define IIdentityAuthority_ReferenceToText(This,dwFlags,pIReferenceIdentity,ppszFormattedIdentity)	\
    ( (This)->lpVtbl -> ReferenceToText(This,dwFlags,pIReferenceIdentity,ppszFormattedIdentity) ) 

#define IIdentityAuthority_ReferenceToTextBuffer(This,dwFlags,pIReferenceIdentity,cchBufferSize,wchBuffer,pcchWritten)	\
    ( (This)->lpVtbl -> ReferenceToTextBuffer(This,dwFlags,pIReferenceIdentity,cchBufferSize,wchBuffer,pcchWritten) ) 

#define IIdentityAuthority_AreDefinitionsEqual(This,dwFlags,pDefinition1,pDefinition2,pfEqual)	\
    ( (This)->lpVtbl -> AreDefinitionsEqual(This,dwFlags,pDefinition1,pDefinition2,pfEqual) ) 

#define IIdentityAuthority_AreReferencesEqual(This,dwFlags,pReference1,pReference2,pfEqual)	\
    ( (This)->lpVtbl -> AreReferencesEqual(This,dwFlags,pReference1,pReference2,pfEqual) ) 

#define IIdentityAuthority_AreTextualDefinitionsEqual(This,dwFlags,pszIdentityLeft,pszIdentityRight,pfEqual)	\
    ( (This)->lpVtbl -> AreTextualDefinitionsEqual(This,dwFlags,pszIdentityLeft,pszIdentityRight,pfEqual) ) 

#define IIdentityAuthority_AreTextualReferencesEqual(This,dwFlags,pszIdentityLeft,pszIdentityRight,pfEqual)	\
    ( (This)->lpVtbl -> AreTextualReferencesEqual(This,dwFlags,pszIdentityLeft,pszIdentityRight,pfEqual) ) 

#define IIdentityAuthority_DoesDefinitionMatchReference(This,dwFlags,pIDefinitionIdentity,pIReferenceIdentity,pfMatches)	\
    ( (This)->lpVtbl -> DoesDefinitionMatchReference(This,dwFlags,pIDefinitionIdentity,pIReferenceIdentity,pfMatches) ) 

#define IIdentityAuthority_DoesTextualDefinitionMatchTextualReference(This,dwFlags,pszDefinition,pszReference,pfMatches)	\
    ( (This)->lpVtbl -> DoesTextualDefinitionMatchTextualReference(This,dwFlags,pszDefinition,pszReference,pfMatches) ) 

#define IIdentityAuthority_HashReference(This,dwFlags,pIReferenceIdentity,pullPseudoKey)	\
    ( (This)->lpVtbl -> HashReference(This,dwFlags,pIReferenceIdentity,pullPseudoKey) ) 

#define IIdentityAuthority_HashDefinition(This,dwFlags,pIDefinitionIdentity,pullPseudoKey)	\
    ( (This)->lpVtbl -> HashDefinition(This,dwFlags,pIDefinitionIdentity,pullPseudoKey) ) 

#define IIdentityAuthority_GenerateDefinitionKey(This,dwFlags,pIDefinitionIdentity,ppszKeyForm)	\
    ( (This)->lpVtbl -> GenerateDefinitionKey(This,dwFlags,pIDefinitionIdentity,ppszKeyForm) ) 

#define IIdentityAuthority_GenerateReferenceKey(This,dwFlags,pIReferenceIdentity,ppszKeyForm)	\
    ( (This)->lpVtbl -> GenerateReferenceKey(This,dwFlags,pIReferenceIdentity,ppszKeyForm) ) 

#define IIdentityAuthority_CreateDefinition(This,ppNewIdentity)	\
    ( (This)->lpVtbl -> CreateDefinition(This,ppNewIdentity) ) 

#define IIdentityAuthority_CreateReference(This,ppNewIdentity)	\
    ( (This)->lpVtbl -> CreateReference(This,ppNewIdentity) ) 

#define IIdentityAuthority_DefinitionToTextBufferLength(This,dwFlags,pIDefinitionIdentity,pcchBufferRequired)	\
    ( (This)->lpVtbl -> DefinitionToTextBufferLength(This,dwFlags,pIDefinitionIdentity,pcchBufferRequired) ) 

#define IIdentityAuthority_ReferenceToTextBufferLength(This,dwFlags,pIReferenceIdentity,pcchBufferRequired)	\
    ( (This)->lpVtbl -> ReferenceToTextBufferLength(This,dwFlags,pIReferenceIdentity,pcchBufferRequired) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIdentityAuthority_INTERFACE_DEFINED__ */


#ifndef __IAppIdAuthority_INTERFACE_DEFINED__
#define __IAppIdAuthority_INTERFACE_DEFINED__

/* interface IAppIdAuthority */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum IAPPIDAUTHORITY_ARE_DEFINITIONS_EQUAL_FLAGS
    {
        IAPPIDAUTHORITY_ARE_DEFINITIONS_EQUAL_FLAG_IGNORE_VERSION	= 0x1
    } ;
/* [v1_enum] */ 
enum IAPPIDAUTHORITY_ARE_REFERENCES_EQUAL_FLAGS
    {
        IAPPIDAUTHORITY_ARE_REFERENCES_EQUAL_FLAG_IGNORE_VERSION	= 0x1
    } ;
/* [v1_enum] */ 
enum IAPPIDAUTHORITY_ARE_TEXTUAL_DEFINITIONS_EQUAL_FLAGS
    {
        IAPPIDAUTHORITY_ARE_TEXTUAL_DEFINITIONS_EQUAL_FLAG_IGNORE_VERSION	= 0x1
    } ;
/* [v1_enum] */ 
enum IAPPIDAUTHORITY_ARE_TEXTUAL_REFERENCES_EQUAL_FLAGS
    {
        IAPPIDAUTHORITY_ARE_TEXTUAL_REFERENCES_EQUAL_FLAG_IGNORE_VERSION	= 0x1
    } ;

EXTERN_C const IID IID_IAppIdAuthority;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8c87810c-2541-4f75-b2d0-9af515488e23")
    IAppIdAuthority : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TextToDefinition( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IDefinitionAppId **ppIDefinitionAppId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TextToReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IReferenceAppId **ppIReferenceAppId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefinitionToText( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionAppId,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReferenceToText( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceAppId,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreDefinitionsEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDefinition1,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDefinition2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreReferencesEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pReference1,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pReference2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreTextualDefinitionsEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreTextualReferencesEqual( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesDefinitionMatchReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoesTextualDefinitionMatchTextualReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszDefinition,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszReference,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HashReference( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HashDefinition( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateDefinitionKey( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GenerateReferenceKey( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateDefinition( 
            /* [annotation][retval][out] */ 
            _Out_  IDefinitionAppId **ppNewIdentity) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReference( 
            /* [annotation][retval][out] */ 
            _Out_  IReferenceAppId **ppNewIdentity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppIdAuthorityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAppIdAuthority * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAppIdAuthority * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAppIdAuthority * This);
        
        HRESULT ( STDMETHODCALLTYPE *TextToDefinition )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IDefinitionAppId **ppIDefinitionAppId);
        
        HRESULT ( STDMETHODCALLTYPE *TextToReference )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszIdentity,
            /* [annotation][out] */ 
            _Out_  IReferenceAppId **ppIReferenceAppId);
        
        HRESULT ( STDMETHODCALLTYPE *DefinitionToText )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionAppId,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *ReferenceToText )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceAppId,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszFormattedIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *AreDefinitionsEqual )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDefinition1,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDefinition2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual);
        
        HRESULT ( STDMETHODCALLTYPE *AreReferencesEqual )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pReference1,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pReference2,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual);
        
        HRESULT ( STDMETHODCALLTYPE *AreTextualDefinitionsEqual )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual);
        
        HRESULT ( STDMETHODCALLTYPE *AreTextualReferencesEqual )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdLeft,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppIdRight,
            /* [annotation][out] */ 
            _Out_  BOOL *pfAreEqual);
        
        HRESULT ( STDMETHODCALLTYPE *DoesDefinitionMatchReference )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches);
        
        HRESULT ( STDMETHODCALLTYPE *DoesTextualDefinitionMatchTextualReference )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszDefinition,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszReference,
            /* [annotation][out] */ 
            _Out_  BOOL *pfMatches);
        
        HRESULT ( STDMETHODCALLTYPE *HashReference )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey);
        
        HRESULT ( STDMETHODCALLTYPE *HashDefinition )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullPseudoKey);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateDefinitionKey )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm);
        
        HRESULT ( STDMETHODCALLTYPE *GenerateReferenceKey )( 
            IAppIdAuthority * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceAppId *pIReferenceIdentity,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszKeyForm);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDefinition )( 
            IAppIdAuthority * This,
            /* [annotation][retval][out] */ 
            _Out_  IDefinitionAppId **ppNewIdentity);
        
        HRESULT ( STDMETHODCALLTYPE *CreateReference )( 
            IAppIdAuthority * This,
            /* [annotation][retval][out] */ 
            _Out_  IReferenceAppId **ppNewIdentity);
        
        END_INTERFACE
    } IAppIdAuthorityVtbl;

    interface IAppIdAuthority
    {
        CONST_VTBL struct IAppIdAuthorityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppIdAuthority_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppIdAuthority_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppIdAuthority_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppIdAuthority_TextToDefinition(This,dwFlags,pszIdentity,ppIDefinitionAppId)	\
    ( (This)->lpVtbl -> TextToDefinition(This,dwFlags,pszIdentity,ppIDefinitionAppId) ) 

#define IAppIdAuthority_TextToReference(This,dwFlags,pszIdentity,ppIReferenceAppId)	\
    ( (This)->lpVtbl -> TextToReference(This,dwFlags,pszIdentity,ppIReferenceAppId) ) 

#define IAppIdAuthority_DefinitionToText(This,dwFlags,pIDefinitionAppId,ppszFormattedIdentity)	\
    ( (This)->lpVtbl -> DefinitionToText(This,dwFlags,pIDefinitionAppId,ppszFormattedIdentity) ) 

#define IAppIdAuthority_ReferenceToText(This,dwFlags,pIReferenceAppId,ppszFormattedIdentity)	\
    ( (This)->lpVtbl -> ReferenceToText(This,dwFlags,pIReferenceAppId,ppszFormattedIdentity) ) 

#define IAppIdAuthority_AreDefinitionsEqual(This,dwFlags,pDefinition1,pDefinition2,pfAreEqual)	\
    ( (This)->lpVtbl -> AreDefinitionsEqual(This,dwFlags,pDefinition1,pDefinition2,pfAreEqual) ) 

#define IAppIdAuthority_AreReferencesEqual(This,dwFlags,pReference1,pReference2,pfAreEqual)	\
    ( (This)->lpVtbl -> AreReferencesEqual(This,dwFlags,pReference1,pReference2,pfAreEqual) ) 

#define IAppIdAuthority_AreTextualDefinitionsEqual(This,dwFlags,pszAppIdLeft,pszAppIdRight,pfAreEqual)	\
    ( (This)->lpVtbl -> AreTextualDefinitionsEqual(This,dwFlags,pszAppIdLeft,pszAppIdRight,pfAreEqual) ) 

#define IAppIdAuthority_AreTextualReferencesEqual(This,dwFlags,pszAppIdLeft,pszAppIdRight,pfAreEqual)	\
    ( (This)->lpVtbl -> AreTextualReferencesEqual(This,dwFlags,pszAppIdLeft,pszAppIdRight,pfAreEqual) ) 

#define IAppIdAuthority_DoesDefinitionMatchReference(This,dwFlags,pIDefinitionIdentity,pIReferenceIdentity,pfMatches)	\
    ( (This)->lpVtbl -> DoesDefinitionMatchReference(This,dwFlags,pIDefinitionIdentity,pIReferenceIdentity,pfMatches) ) 

#define IAppIdAuthority_DoesTextualDefinitionMatchTextualReference(This,dwFlags,pszDefinition,pszReference,pfMatches)	\
    ( (This)->lpVtbl -> DoesTextualDefinitionMatchTextualReference(This,dwFlags,pszDefinition,pszReference,pfMatches) ) 

#define IAppIdAuthority_HashReference(This,dwFlags,pIReferenceIdentity,pullPseudoKey)	\
    ( (This)->lpVtbl -> HashReference(This,dwFlags,pIReferenceIdentity,pullPseudoKey) ) 

#define IAppIdAuthority_HashDefinition(This,dwFlags,pIDefinitionIdentity,pullPseudoKey)	\
    ( (This)->lpVtbl -> HashDefinition(This,dwFlags,pIDefinitionIdentity,pullPseudoKey) ) 

#define IAppIdAuthority_GenerateDefinitionKey(This,dwFlags,pIDefinitionIdentity,ppszKeyForm)	\
    ( (This)->lpVtbl -> GenerateDefinitionKey(This,dwFlags,pIDefinitionIdentity,ppszKeyForm) ) 

#define IAppIdAuthority_GenerateReferenceKey(This,dwFlags,pIReferenceIdentity,ppszKeyForm)	\
    ( (This)->lpVtbl -> GenerateReferenceKey(This,dwFlags,pIReferenceIdentity,ppszKeyForm) ) 

#define IAppIdAuthority_CreateDefinition(This,ppNewIdentity)	\
    ( (This)->lpVtbl -> CreateDefinition(This,ppNewIdentity) ) 

#define IAppIdAuthority_CreateReference(This,ppNewIdentity)	\
    ( (This)->lpVtbl -> CreateReference(This,ppNewIdentity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppIdAuthority_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_INTERFACE_DEFINED__
#define __IEnumSTORE_CATEGORY_INTERFACE_DEFINED__

/* interface IEnumSTORE_CATEGORY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_CATEGORY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b840a2f5-a497-4a6d-9038-cd3ec2fbd222")
    IEnumSTORE_CATEGORY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pulFetched)  STORE_CATEGORY rgElements[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_CATEGORY **ppIEnumSTORE_CATEGORY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_CATEGORYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_CATEGORY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_CATEGORY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_CATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_CATEGORY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pulFetched)  STORE_CATEGORY rgElements[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_CATEGORY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_CATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_CATEGORY * This,
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_CATEGORY **ppIEnumSTORE_CATEGORY);
        
        END_INTERFACE
    } IEnumSTORE_CATEGORYVtbl;

    interface IEnumSTORE_CATEGORY
    {
        CONST_VTBL struct IEnumSTORE_CATEGORYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_CATEGORY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_CATEGORY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_CATEGORY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_CATEGORY_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumSTORE_CATEGORY_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumSTORE_CATEGORY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_CATEGORY_Clone(This,ppIEnumSTORE_CATEGORY)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_CATEGORY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_CATEGORY_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_SUBCATEGORY_INTERFACE_DEFINED__
#define __IEnumSTORE_CATEGORY_SUBCATEGORY_INTERFACE_DEFINED__

/* interface IEnumSTORE_CATEGORY_SUBCATEGORY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_CATEGORY_SUBCATEGORY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19be1967-b2fc-4dc1-9627-f3cb6305d2a7")
    IEnumSTORE_CATEGORY_SUBCATEGORY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_CATEGORY_SUBCATEGORY rgElements[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_CATEGORY_SUBCATEGORY **ppIEnumSTORE_CATEGORY_SUBCATEGORY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_CATEGORY_SUBCATEGORYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_CATEGORY_SUBCATEGORY rgElements[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_CATEGORY_SUBCATEGORY * This,
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_CATEGORY_SUBCATEGORY **ppIEnumSTORE_CATEGORY_SUBCATEGORY);
        
        END_INTERFACE
    } IEnumSTORE_CATEGORY_SUBCATEGORYVtbl;

    interface IEnumSTORE_CATEGORY_SUBCATEGORY
    {
        CONST_VTBL struct IEnumSTORE_CATEGORY_SUBCATEGORYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_CATEGORY_SUBCATEGORY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_CATEGORY_SUBCATEGORY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_CATEGORY_SUBCATEGORY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_CATEGORY_SUBCATEGORY_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumSTORE_CATEGORY_SUBCATEGORY_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumSTORE_CATEGORY_SUBCATEGORY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_CATEGORY_SUBCATEGORY_Clone(This,ppIEnumSTORE_CATEGORY_SUBCATEGORY)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_CATEGORY_SUBCATEGORY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_CATEGORY_SUBCATEGORY_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_CATEGORY_INSTANCE_INTERFACE_DEFINED__
#define __IEnumSTORE_CATEGORY_INSTANCE_INTERFACE_DEFINED__

/* interface IEnumSTORE_CATEGORY_INSTANCE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_CATEGORY_INSTANCE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5ba7cb30-8508-4114-8c77-262fcda4fadb")
    IEnumSTORE_CATEGORY_INSTANCE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements,
            /* [length_is][size_is][out] */ STORE_CATEGORY_INSTANCE rgInstances[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_CATEGORY_INSTANCE **ppIEnumSTORE_CATEGORY_INSTANCE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_CATEGORY_INSTANCEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_CATEGORY_INSTANCE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_CATEGORY_INSTANCE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_CATEGORY_INSTANCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_CATEGORY_INSTANCE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements,
            /* [length_is][size_is][out] */ STORE_CATEGORY_INSTANCE rgInstances[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_CATEGORY_INSTANCE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_CATEGORY_INSTANCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_CATEGORY_INSTANCE * This,
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_CATEGORY_INSTANCE **ppIEnumSTORE_CATEGORY_INSTANCE);
        
        END_INTERFACE
    } IEnumSTORE_CATEGORY_INSTANCEVtbl;

    interface IEnumSTORE_CATEGORY_INSTANCE
    {
        CONST_VTBL struct IEnumSTORE_CATEGORY_INSTANCEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_CATEGORY_INSTANCE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_CATEGORY_INSTANCE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_CATEGORY_INSTANCE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_CATEGORY_INSTANCE_Next(This,ulElements,rgInstances,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,ulElements,rgInstances,pulFetched) ) 

#define IEnumSTORE_CATEGORY_INSTANCE_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumSTORE_CATEGORY_INSTANCE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_CATEGORY_INSTANCE_Clone(This,ppIEnumSTORE_CATEGORY_INSTANCE)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_CATEGORY_INSTANCE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_CATEGORY_INSTANCE_INTERFACE_DEFINED__ */


#ifndef __IStore_INTERFACE_DEFINED__
#define __IStore_INTERFACE_DEFINED__

/* interface IStore */
/* [local][unique][uuid][object] */ 

typedef struct _STORE_SET_CANONICALIZATION_CONTEXT
    {
    DWORD cbSize;
    DWORD dwFlags;
    LPCWSTR pszBaseAddressesFilePath;
    LPCWSTR pszExportsFilePath;
    } 	STORE_SET_CANONICALIZATION_CONTEXT;

typedef struct _STORE_SET_CANONICALIZATION_CONTEXT *PSTORE_SET_CANONICALIZATION_CONTEXT;

typedef const STORE_SET_CANONICALIZATION_CONTEXT *PCSTORE_SET_CANONICALIZATION_CONTEXT;

typedef struct _STORE_STAGE_COMPONENT
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    IDefinitionIdentity *pIComponentIdentity;
    LPCWSTR pszManifestSourcePath;
    } 	STORE_STAGE_COMPONENT;

typedef struct _STORE_STAGE_COMPONENT *PSTORE_STAGE_COMPONENT;

typedef const STORE_STAGE_COMPONENT *PCSTORE_STAGE_COMPONENT;

/* [v1_enum] */ 
enum _STORE_STAGE_COMPONENT_DISPOSITIONS
    {
        ISTORE_STAGE_COMPONENT_DISPOSITION_INSTALLED	= 0x1,
        ISTORE_STAGE_COMPONENT_DISPOSITION_REFRESHED_BITS	= 0x2,
        ISTORE_STAGE_COMPONENT_DISPOSITION_ALREADY_INSTALLED	= 0x3
    } ;
/* [v1_enum] */ 
enum _STORE_STAGE_COMPONENT_FLAGS
    {
        STORE_STAGE_COMPONENT_FLAG_HARDLINK_MANIFEST	= 0x1,
        STORE_STAGE_COMPONENT_FLAG_FLUSH_FILE	= 0x2,
        STORE_STAGE_COMPONENT_FLAG_MOVE_MANIFEST	= 0x4
    } ;
typedef struct _STORE_STAGE_COMPONENT_FILE
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pApplication;
    IDefinitionIdentity *pMemberComponent;
    LPCWSTR pszComponentRelativePath;
    LPCWSTR pszSourceFileName;
    } 	STORE_STAGE_COMPONENT_FILE;

typedef struct _STORE_STAGE_COMPONENT_FILE *PSTORE_STAGE_COMPONENT_FILE;

typedef const STORE_STAGE_COMPONENT_FILE *PCSTORE_STAGE_COMPONENT_FILE;

/* [v1_enum] */ 
enum _STORE_STAGE_COMPONENT_FILE_FLAGS
    {
        STORE_STAGE_COMPONENT_FILE_FLAG_HARDLINK_SOURCE	= 0x1,
        STORE_STAGE_COMPONENT_FILE_FLAG_FLUSH_FILE	= 0x2,
        STORE_STAGE_COMPONENT_FILE_FLAG_MOVE_SOURCE	= 0x4
    } ;
/* [v1_enum] */ 
enum _STORE_STAGE_COMPONENT_FILE_DISPOSITIONS
    {
        ISTORE_STAGE_COMPONENT_FILE_DISPOSITION_INSTALLED	= 0x1,
        ISTORE_STAGE_COMPONENT_FILE_DISPOSITION_REFRESHED_BITS	= 0x2,
        ISTORE_STAGE_COMPONENT_FILE_DISPOSITION_ALREADY_INSTALLED	= 0x3
    } ;
/* [v1_enum] */ 
enum _STORE_PIN_DEPLOYMENT_FLAGS
    {
        STORE_PIN_DEPLOYMENT_FLAG_NEVER_EXPIRES	= 0x1,
        STORE_PIN_DEPLOYMENT_FLAG_CATALOG_IS_VALID	= 0x2
    } ;
typedef struct _STORE_PIN_DEPLOYMENT
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    ULONGLONG ExpirationTime;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    LPCWSTR pszCatalogPath;
    } 	STORE_PIN_DEPLOYMENT;

typedef struct _STORE_PIN_DEPLOYMENT *PSTORE_PIN_DEPLOYMENT;

typedef const STORE_PIN_DEPLOYMENT *PCSTORE_PIN_DEPLOYMENT;

/* [v1_enum] */ 
enum _STORE_PIN_DEPLOYMENT_DISPOSITIONS
    {
        ISTORE_PIN_DEPLOYMENT_DISPOSITION_PINNED	= 0x1
    } ;
/* [v1_enum] */ 
enum _STORE_UNPIN_DEPLOYMENT_FLAGS
    {
        STORE_UNPIN_DEPLOYMENT_FLAG_NO_FAIL_IF_NOT_PINNED	= 0x1
    } ;
typedef struct _STORE_UNPIN_DEPLOYMENT
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    } 	STORE_UNPIN_DEPLOYMENT;

typedef struct _STORE_UNPIN_DEPLOYMENT *PSTORE_UNPIN_DEPLOYMENT;

typedef const STORE_UNPIN_DEPLOYMENT *PCSTORE_UNPIN_DEPLOYMENT;

/* [v1_enum] */ 
enum _STORE_UNPIN_DEPLOYMENT_DISPOSITIONS
    {
        ISTORE_UNPIN_DEPLOYMENT_DISPOSITION_REMOVED	= 0x1,
        ISTORE_UNPIN_DEPLOYMENT_DISPOSITION_NOT_PREVIOUSLY_PINNED	= 0x2
    } ;
/* [v1_enum] */ 
enum _STORE_INSTALL_DEPLOYMENT_FLAGS
    {
        STORE_INSTALL_DEPLOYMENT_FLAG_UNINSTALL_OTHERS	= 0x1,
        STORE_INSTALL_DEPLOYMENT_FLAG_CATALOG_IS_VALID	= 0x2
    } ;
typedef struct _STORE_INSTALL_DEPLOYMENT
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    LPCWSTR pszCatalogPath;
    } 	STORE_INSTALL_DEPLOYMENT;

typedef struct _STORE_INSTALL_DEPLOYMENT *PSTORE_INSTALL_DEPLOYMENT;

typedef const STORE_INSTALL_DEPLOYMENT *PCSTORE_INSTALL_DEPLOYMENT;

/* [v1_enum] */ 
enum _STORE_INSTALL_DEPLOYMENT_DISPOSITIONS
    {
        ISTORE_INSTALL_DEPLOYMENT_DISPOSITION_ALREADY_INSTALLED	= 0x1,
        ISTORE_INSTALL_DEPLOYMENT_DISPOSITION_INSTALLED	= 0x2
    } ;
typedef struct _STORE_UNINSTALL_DEPLOYMENT
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    } 	STORE_UNINSTALL_DEPLOYMENT;

typedef struct _STORE_UNINSTALL_DEPLOYMENT *PSTORE_UNINSTALL_DEPLOYMENT;

typedef const STORE_UNINSTALL_DEPLOYMENT *PCSTORE_UNINSTALL_DEPLOYMENT;

/* [v1_enum] */ 
enum _STORE_UNINSTALL_DEPLOYMENT_FLAGS
    {
        ISTORE_UNINSTALL_DEPLOYMENT_FLAG_NO_FAIL_IF_NOT_INSTALED	= 0x1
    } ;
/* [v1_enum] */ 
enum _STORE_UNINSTALL_DEPLOYMENT_DISPOSITIONS
    {
        ISTORE_UNINSTALL_DEPLOYMENT_DISPOSITION_NOT_EXIST	= 0x1,
        ISTORE_UNINSTALL_DEPLOYMENT_DISPOSITION_UNINSTALLED	= 0x2
    } ;
typedef struct _STORE_SET_DEPLOYMENT_METADATA_PROPERTY
    {
    GUID guidPropertySet;
    LPCWSTR pszName;
    SIZE_T nValueSize;
    /* [length_is][size_is] */ const BYTE *prgbValue;
    } 	STORE_SET_DEPLOYMENT_METADATA_PROPERTY;

typedef struct _STORE_SET_DEPLOYMENT_METADATA_PROPERTY *PSTORE_SET_DEPLOYMENT_METADATA_PROPERTY;

typedef const STORE_SET_DEPLOYMENT_METADATA_PROPERTY *PCSTORE_SET_DEPLOYMENT_METADATA_PROPERTY;

typedef struct _STORE_SET_DEPLOYMENT_METADATA
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pDeploymentIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE InstallReference;
    SIZE_T cPropertiesToTest;
    /* [length_is][size_is] */ const STORE_SET_DEPLOYMENT_METADATA_PROPERTY *rgPropertiesToTest;
    SIZE_T cPropertiesToSet;
    /* [length_is][size_is] */ const STORE_SET_DEPLOYMENT_METADATA_PROPERTY *rgPropertiesToSet;
    } 	STORE_SET_DEPLOYMENT_METADATA;

typedef struct _STORE_SET_DEPLOYMENT_METADATA *PSTORE_SET_DEPLOYMENT_METADATA;

typedef const STORE_SET_DEPLOYMENT_METADATA *PCSTORE_SET_DEPLOYMENT_METADATA;

/* [v1_enum] */ 
enum _STORE_SET_DEPLOYMENT_METADATA_DISPOSITIONS
    {
        ISTORE_SET_DEPLOYMENT_METADATA_DISPOSITION_SET	= 0x2
    } ;
/* [v1_enum] */ 
enum _STORE_SCAVENGE_FLAGS
    {
        STORE_SCAVENGE_FLAG_LIGHT_ONLY	= 0x1,
        STORE_SCAVENGE_FLAG_LIMIT_SIZE	= 0x2,
        STORE_SCAVENGE_FLAG_LIMIT_TIME	= 0x4,
        STORE_SCAVENGE_FLAG_LIMIT_COUNT	= 0x8,
        STORE_SCAVENGE_FLAG_COMPRESS_FILES	= 0x10,
        STORE_SCAVENGE_FLAG_IGNORE_COHERENCY_CHECK	= 0x20,
        STORE_SCAVENGE_FLAG_IGNORE_COMPRESSION_MENU_OPTIONS	= 0x40,
        STORE_SCAVENGE_FLAG_DECOMPRESS_FILES	= 0x80
    } ;
typedef struct _STORE_SCAVENGE
    {
    DWORD cbSize;
    DWORD dwFlags;
    ULONGLONG SizeReclaimationLimit;
    ULONGLONG RuntimeLimit;
    DWORD ComponentCountLimit;
    HANDLE hCancelEvent;
    } 	STORE_SCAVENGE;

typedef struct _STORE_SCAVENGE *PSTORE_SCAVENGE;

typedef const STORE_SCAVENGE *PCSTORE_SCAVENGE;

/* [v1_enum] */ 
enum _STORE_SCAVENGE_DISPOSITIONS
    {
        ISTORE_SCAVENGE_DISPOSITION_SCAVENGED	= 0x1,
        ISTORE_SCAVENGE_DISPOSITION_ENDED_EARLY	= 0x2
    } ;
/* [v1_enum] */ 
enum _STORE_ADD_CATALOG_FLAGS
    {
        STORE_ADD_CATALOG_FLAG_FLUSH_FILE	= 0x1,
        STORE_ADD_CATALOG_FLAG_HARDLINK_FILE	= 0x2
    } ;
typedef struct _STORE_ADD_CATALOG
    {
    DWORD cbSize;
    DWORD dwFlags;
    LPCWSTR pszCatalogPath;
    } 	STORE_ADD_CATALOG;

typedef struct _STORE_ADD_CATALOG *PSTORE_ADD_CATALOG;

typedef const STORE_ADD_CATALOG *PCSTORE_ADD_CATALOG;

typedef struct _STORE_ALLOW_FILE_CHANGE
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionIdentity *pComponent;
    LPCWSTR pszMemberFile;
    } 	STORE_ALLOW_FILE_CHANGE;

typedef struct _STORE_ALLOW_FILE_CHANGE *PSTORE_ALLOW_FILE_CHANGE;

typedef const STORE_ALLOW_FILE_CHANGE *PCSTORE_ALLOW_FILE_CHANGE;

/* [v1_enum] */ 
enum _STORE_UNSTAGE_DEPLOYMENT_PAYLOAD_FLAGS
    {
        STORE_UNSTAGE_DEPLOYMENT_PAYLOAD_FLAG_NO_FAIL_IF_CANNOT_UNSTAGE	= 0x1
    } ;
typedef struct _STORE_UNSTAGE_DEPLOYMENT_PAYLOAD
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    } 	STORE_UNSTAGE_DEPLOYMENT_PAYLOAD;

typedef struct _STORE_UNSTAGE_DEPLOYMENT_PAYLOAD *PSTORE_UNSTAGE_DEPLOYMENT_PAYLOAD;

typedef const STORE_UNSTAGE_DEPLOYMENT_PAYLOAD *PCSTORE_UNSTAGE_DEPLOYMENT_PAYLOAD;

/* [v1_enum] */ 
enum STORE_UNSTAGE_DEPLOYMENT_PAYLOAD_DISPOSITIONS
    {
        ISTORE_UNSTAGE_DEPLOYMENT_PAYLOAD_DISPOSITION_REMOVED	= 0x1,
        ISTORE_UNSTAGE_DEPLOYMENT_PAYLOAD_DISPOSITION_TLC_IS_INSTALLED	= 0x2,
        ISTORE_UNSTAGE_DEPLOYMENT_PAYLOAD_DISPOSITION_TLC_NOT_PINNED	= 0x3,
        ISTORE_UNSTAGE_DEPLOYMENT_PAYLOAD_DISPOSITION_TLC_NOT_PRESENT	= 0x4
    } ;
/* [v1_enum] */ 
enum STORE_MARK_DEPLOYMENT_DISPOSITIONS
    {
        ISTORE_MARK_DEPLOYMENT_DISPOSITION_MARKED	= 0x1,
        ISTORE_MARK_DEPLOYMENT_DISPOSITION_NOT_PRESENT	= 0x2
    } ;
typedef struct _STORE_MARK_DEPLOYMENT_STAGED
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    } 	STORE_MARK_DEPLOYMENT_STAGED;

typedef struct _STORE_MARK_DEPLOYMENT_STAGED *PSTORE_MARK_DEPLOYMENT_STAGED;

typedef const STORE_MARK_DEPLOYMENT_STAGED *PCSTORE_MARK_DEPLOYMENT_STAGED;

typedef struct _STORE_MARK_DEPLOYMENT_UNSTAGED
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionAppId *pIApplicationIdentity;
    PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReferenceTrack;
    } 	STORE_MARK_DEPLOYMENT_UNSTAGED;

typedef struct _STORE_MARK_DEPLOYMENT_UNSTAGED *PSTORE_MARK_DEPLOYMENT_UNSTAGED;

typedef const STORE_MARK_DEPLOYMENT_UNSTAGED *PCSTORE_MARK_DEPLOYMENT_UNSTAGED;

typedef /* [public][public][public][public][v1_enum] */ 
enum __MIDL_IStore_0001
    {
        STORE_TXN_OP_INVALID	= 0,
        STORE_TXN_OP_SET_CANONICALIZATION_CONTEXT	= 14,
        STORE_TXN_OP_STAGE_COMPONENT	= 20,
        STORE_TXN_OP_PIN_DEPLOYMENT	= 21,
        STORE_TXN_OP_UNPIN_DEPLOYMENT	= 22,
        STORE_TXN_OP_STAGE_COMPONENT_FILE	= 23,
        STORE_TXN_OP_INSTALL_DEPLOYMENT	= 24,
        STORE_TXN_OP_UNINSTALL_DEPLOYMENT	= 25,
        STORE_TXN_OP_SET_DEPLOYMENT_METADATA	= 26,
        STORE_TXN_OP_SCAVENGE	= 27,
        STORE_TXN_OP_ADD_CATALOG	= 31,
        STORE_TXN_OP_ALLOW_FILE_CHANGE	= 32,
        STORE_TXN_OP_UNSTAGE_DEPLOYMENT_PAYLOAD	= 30,
        STORE_TXN_OP_MARK_DEPLOYMENT_STAGED	= 28,
        STORE_TXN_OP_MARK_DEPLOYMENT_UNSTAGED	= 29
    } 	STORE_TXN_OP_TYPE;

typedef /* [switch_type] */ union _STORE_TXN_OPERATION_DATA
    {
    /* [case()] */ PCSTORE_SET_CANONICALIZATION_CONTEXT SetCanonicalizationContext;
    /* [case()] */ PCSTORE_STAGE_COMPONENT StageComponent;
    /* [case()] */ PCSTORE_STAGE_COMPONENT_FILE StageComponentFile;
    /* [case()] */ PCSTORE_PIN_DEPLOYMENT PinDeployment;
    /* [case()] */ PCSTORE_UNPIN_DEPLOYMENT UnpinDeployment;
    /* [case()] */ PCSTORE_INSTALL_DEPLOYMENT InstallDeployment;
    /* [case()] */ PCSTORE_UNINSTALL_DEPLOYMENT UninstallDeployment;
    /* [case()] */ PCSTORE_SET_DEPLOYMENT_METADATA SetDeploymentMetadata;
    /* [case()] */ PCSTORE_SCAVENGE Scavenge;
    /* [case()] */ PCSTORE_ADD_CATALOG AddCatalog;
    /* [case()] */ PCSTORE_ALLOW_FILE_CHANGE AllowFileChange;
    /* [case()] */ PCSTORE_UNSTAGE_DEPLOYMENT_PAYLOAD UnstageDeploymentPayload;
    /* [case()] */ PCSTORE_MARK_DEPLOYMENT_STAGED MarkDeploymentStaged;
    /* [case()] */ PCSTORE_MARK_DEPLOYMENT_UNSTAGED MarkDeploymentUnstaged;
    } 	STORE_TXN_OPERATION_DATA;

typedef /* [switch_type] */ union _STORE_TXN_OPERATION_DATA *PSTORE_TXN_OPERATION_DATA;

C_ASSERT(sizeof(STORE_TXN_OPERATION_DATA) == sizeof(PVOID));
typedef struct _STORE_TXN_OPERATION
    {
    STORE_TXN_OP_TYPE Operation;
    /* [switch_is] */ STORE_TXN_OPERATION_DATA Data;
    } 	STORE_TXN_OPERATION;

typedef struct _STORE_TXN_OPERATION *PSTORE_TXN_OPERATION;

typedef const STORE_TXN_OPERATION *PCSTORE_TXN_OPERATION;

/* [v1_enum] */ 
enum _ISTORE_BIND_REFERENCE_TO_ASSEMBLY_FLAGS
    {
        ISTORE_BIND_REFERENCE_TO_ASSEMBLY_FLAG_FORCE_LIBRARY_SEMANTICS	= 0x1,
        ISTORE_BIND_REFERENCE_TO_ASSEMBLY_FLAG_EXACT_MATCH	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE_BIND_DEFINITIONS_DISPOSITIONS
    {
        ISTORE_BIND_DEFINITIONS_DISPOSITION_STATE_UNDEFINED	= 0,
        ISTORE_BIND_DEFINITIONS_DISPOSITION_STATE_UNTOUCHED	= 1,
        ISTORE_BIND_DEFINITIONS_DISPOSITION_STATE_RESOLVED	= 2,
        ISTORE_BIND_DEFINITIONS_DISPOSITION_STATE_UNRESOLVED	= 3,
        ISTORE_BIND_DEFINITIONS_DISPOSITION_STATE_MASK	= 0xffff,
        ISTORE_BIND_DEFINITIONS_DISPOSITION_FLAG_POLICY_WAS_APPLIED	= 0x10000
    } ;
/* [v1_enum] */ 
enum _ISTORE_BINDING_RESULT_DISPOSITION_STATES
    {
        ISTORE_BINDING_RESULT_DISPOSITION_STATE_UNDEFINED	= 0,
        ISTORE_BINDING_RESULT_DISPOSITION_STATE_UNTOUCHED	= 1,
        ISTORE_BINDING_RESULT_DISPOSITION_STATE_RESOLVED	= 2,
        ISTORE_BINDING_RESULT_DISPOSITION_STATE_UNRESOLVED	= 3,
        ISTORE_BINDING_RESULT_DISPOSITION_STATE_MASK	= 0xffff,
        ISTORE_BINDING_RESULT_DISPOSITION_FLAG_POLICY_WAS_APPLIED	= 0x10000
    } ;
typedef struct _ISTORE_BINDING_RESULT
    {
    DWORD dwFlags;
    ULONG ulDisposition;
    COMPONENT_VERSION cvVersion;
    GUID guidCacheCoherencyGuid;
    PVOID pvReserved;
    } 	ISTORE_BINDING_RESULT;

typedef struct _ISTORE_BINDING_RESULT *PISTORE_BINDING_RESULT;

typedef const ISTORE_BINDING_RESULT *PCISTORE_BINDING_RESULT;

/* [v1_enum] */ 
enum _ISTORE_ENUM_ASSEMBLIES_FLAGS
    {
        ISTORE_ENUM_ASSEMBLIES_FLAG_LIMIT_TO_VISIBLE_ONLY	= 0x1,
        ISTORE_ENUM_ASSEMBLIES_FLAG_MATCH_SERVICING	= 0x2,
        ISTORE_ENUM_ASSEMBLIES_FLAG_FORCE_LIBRARY_SEMANTICS	= 0x4
    } ;
/* [v1_enum] */ 
enum _ISTORE_ENUM_FILES_FLAGS
    {
        ISTORE_ENUM_FILES_FLAG_INCLUDE_INSTALLED_FILES	= 0x1,
        ISTORE_ENUM_FILES_FLAG_INCLUDE_MISSING_FILES	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE_LOCK_ASSEMBLY_PATH_FLAGS
    {
        ISTORE_LOCK_ASSEMBLY_PATH_FLAG_NOT_FOUND_RETURNS_NULL	= 0x1,
        ISTORE_LOCK_ASSEMBLY_PATH_FLAG_ALLOW_NO_KTM	= 0x2,
        ISTORE_LOCK_ASSEMBLY_PATH_FLAG_DONT_USE_KTM	= 0x4
    } ;
/* [v1_enum] */ 
enum _ISTORE_ENUM_PRIVATE_FILES_FLAGS
    {
        ISTORE_ENUM_PRIVATE_FILES_FLAG_INCLUDE_INSTALLED_FILES	= 0x1,
        ISTORE_ENUM_PRIVATE_FILES_FLAG_INCLUDE_MISSING_FILES	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE_ENUM_INSTALLER_DEPLOYMENT_METADATA
    {
        ISTORE_ENUM_INSTALLER_DEPLOYMENT_METADATA_INCLUDE_FAMILIES	= 0x1,
        ISTORE_ENUM_INSTALLER_DEPLOYMENT_METADATA_INCLUDE_SPECIFICS	= 0x2
    } ;

EXTERN_C const IID IID_IStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5c62f6d-5e3e-4cd9-b345-6b281d7a1d1e")
    IStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Transact( 
            /* [annotation][in] */ 
            _In_  SIZE_T cOperation,
            /* [annotation][size_is][in] */ 
            _In_reads_(cOperation)  const STORE_TXN_OPERATION rgOperations[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cOperation)  ULONG rgDispositions[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cOperation)  HRESULT rgResults[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindReferenceToAssembly( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeploymentsToIgnore,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeploymentsToIgnore)  IDefinitionIdentity *rgpIDefinitionIdentity_DeploymentsToIgnore[  ],
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppAssembly) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CalculateDelimiterOfDeploymentsBasedOnQuota( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeployments,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeployments)  IDefinitionAppId *rgpIDefinitionAppId_Deployments[  ],
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_  ULONGLONG ulonglongQuote,
            /* [annotation][out] */ 
            _Out_  SIZE_T *Delimiter,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *SizeSharedWithExternalDeployment,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *SizeConsumedByInputDeploymentArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BindDefinitions( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  SIZE_T DefinitionCount,
            /* [annotation][length_is][in] */ 
            _In_reads_(DefinitionCount)  IDefinitionIdentity *rgpIDefinitionIdentity[  ],
            /* [annotation][in] */ 
            _In_  SIZE_T cDeploymentsToIgnore,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeploymentsToIgnore)  IDefinitionIdentity *rgpIDefinitionIdentity_DeploymentsToIgnore[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(DefinitionCount)  ISTORE_BINDING_RESULT rgBindingResults[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssemblyInformation( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppManifest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumAssemblies( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][unique][in] */ 
            _In_opt_  IReferenceIdentity *pIReferenceIdentity_ToMatch,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFiles( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInstallationReferences( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockAssemblyPath( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPVOID *ppvCookie,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPayloadRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseAssemblyPath( 
            /* [annotation][in] */ 
            _In_  LPVOID pvCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryChangeID( 
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullChangeId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCategories( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity_ToMatch,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSubcategories( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pCategoryId,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszSubcategoryPathPattern,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCategoryInstances( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pCategoryId,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszSubcategoryPath,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeploymentProperty( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDeploymentInPackage,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE InstallReference,
            /* [annotation][in] */ 
            _In_  REFCLSID PropertySet,
            /* [annotation][in] */ 
            _In_  LPCWSTR pcwszPropertyName,
            /* [annotation][retval][out] */ 
            _Out_  BLOB *PropertyValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockApplicationPath( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIdentity,
            /* [annotation][out] */ 
            _Out_  LPVOID *ppvCookie,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPayloadRoot) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseApplicationPath( 
            /* [annotation][in] */ 
            _In_  LPVOID Cookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumPrivateFiles( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pApplicationId,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInstallerDeploymentMetadata( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_opt_  IReferenceAppId *pDeploymentFilter,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumInstallerDeploymentMetadataProperties( 
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pAppidDeployment,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *Transact )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  SIZE_T cOperation,
            /* [annotation][size_is][in] */ 
            _In_reads_(cOperation)  const STORE_TXN_OPERATION rgOperations[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cOperation)  ULONG rgDispositions[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cOperation)  HRESULT rgResults[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *BindReferenceToAssembly )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeploymentsToIgnore,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeploymentsToIgnore)  IDefinitionIdentity *rgpIDefinitionIdentity_DeploymentsToIgnore[  ],
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppAssembly);
        
        HRESULT ( STDMETHODCALLTYPE *CalculateDelimiterOfDeploymentsBasedOnQuota )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeployments,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeployments)  IDefinitionAppId *rgpIDefinitionAppId_Deployments[  ],
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_  ULONGLONG ulonglongQuote,
            /* [annotation][out] */ 
            _Out_  SIZE_T *Delimiter,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *SizeSharedWithExternalDeployment,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *SizeConsumedByInputDeploymentArray);
        
        HRESULT ( STDMETHODCALLTYPE *BindDefinitions )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  SIZE_T DefinitionCount,
            /* [annotation][length_is][in] */ 
            _In_reads_(DefinitionCount)  IDefinitionIdentity *rgpIDefinitionIdentity[  ],
            /* [annotation][in] */ 
            _In_  SIZE_T cDeploymentsToIgnore,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeploymentsToIgnore)  IDefinitionIdentity *rgpIDefinitionIdentity_DeploymentsToIgnore[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(DefinitionCount)  ISTORE_BINDING_RESULT rgBindingResults[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyInformation )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppManifest);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAssemblies )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][unique][in] */ 
            _In_opt_  IReferenceIdentity *pIReferenceIdentity_ToMatch,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstallationReferences )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResults);
        
        HRESULT ( STDMETHODCALLTYPE *LockAssemblyPath )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPVOID *ppvCookie,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPayloadRoot);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseAssemblyPath )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  LPVOID pvCookie);
        
        HRESULT ( STDMETHODCALLTYPE *QueryChangeID )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullChangeId);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategories )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity_ToMatch,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubcategories )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pCategoryId,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszSubcategoryPathPattern,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategoryInstances )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pCategoryId,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszSubcategoryPath,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeploymentProperty )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDeploymentInPackage,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE InstallReference,
            /* [annotation][in] */ 
            _In_  REFCLSID PropertySet,
            /* [annotation][in] */ 
            _In_  LPCWSTR pcwszPropertyName,
            /* [annotation][retval][out] */ 
            _Out_  BLOB *PropertyValue);
        
        HRESULT ( STDMETHODCALLTYPE *LockApplicationPath )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIdentity,
            /* [annotation][out] */ 
            _Out_  LPVOID *ppvCookie,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPayloadRoot);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseApplicationPath )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  LPVOID Cookie);
        
        HRESULT ( STDMETHODCALLTYPE *EnumPrivateFiles )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pApplicationId,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstallerDeploymentMetadata )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_opt_  IReferenceAppId *pDeploymentFilter,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstallerDeploymentMetadataProperties )( 
            IStore * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pAppidDeployment,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        END_INTERFACE
    } IStoreVtbl;

    interface IStore
    {
        CONST_VTBL struct IStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStore_Transact(This,cOperation,rgOperations,rgDispositions,rgResults)	\
    ( (This)->lpVtbl -> Transact(This,cOperation,rgOperations,rgDispositions,rgResults) ) 

#define IStore_BindReferenceToAssembly(This,dwFlags,pIReferenceIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,riid,ppAssembly)	\
    ( (This)->lpVtbl -> BindReferenceToAssembly(This,dwFlags,pIReferenceIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,riid,ppAssembly) ) 

#define IStore_CalculateDelimiterOfDeploymentsBasedOnQuota(This,dwFlags,cDeployments,rgpIDefinitionAppId_Deployments,pReference,ulonglongQuote,Delimiter,SizeSharedWithExternalDeployment,SizeConsumedByInputDeploymentArray)	\
    ( (This)->lpVtbl -> CalculateDelimiterOfDeploymentsBasedOnQuota(This,dwFlags,cDeployments,rgpIDefinitionAppId_Deployments,pReference,ulonglongQuote,Delimiter,SizeSharedWithExternalDeployment,SizeConsumedByInputDeploymentArray) ) 

#define IStore_BindDefinitions(This,dwFlags,DefinitionCount,rgpIDefinitionIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,rgBindingResults)	\
    ( (This)->lpVtbl -> BindDefinitions(This,dwFlags,DefinitionCount,rgpIDefinitionIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,rgBindingResults) ) 

#define IStore_GetAssemblyInformation(This,dwFlags,pIDefinitionIdentity,riid,ppManifest)	\
    ( (This)->lpVtbl -> GetAssemblyInformation(This,dwFlags,pIDefinitionIdentity,riid,ppManifest) ) 

#define IStore_EnumAssemblies(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumAssemblies(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppQueryResult) ) 

#define IStore_EnumFiles(This,dwFlags,pDefinitionIdentity,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumFiles(This,dwFlags,pDefinitionIdentity,riid,ppQueryResult) ) 

#define IStore_EnumInstallationReferences(This,dwFlags,pDefinitionIdentity,riid,ppQueryResults)	\
    ( (This)->lpVtbl -> EnumInstallationReferences(This,dwFlags,pDefinitionIdentity,riid,ppQueryResults) ) 

#define IStore_LockAssemblyPath(This,dwFlags,pDefinitionIdentity,ppvCookie,ppszPayloadRoot)	\
    ( (This)->lpVtbl -> LockAssemblyPath(This,dwFlags,pDefinitionIdentity,ppvCookie,ppszPayloadRoot) ) 

#define IStore_ReleaseAssemblyPath(This,pvCookie)	\
    ( (This)->lpVtbl -> ReleaseAssemblyPath(This,pvCookie) ) 

#define IStore_QueryChangeID(This,pDefinitionIdentity,pullChangeId)	\
    ( (This)->lpVtbl -> QueryChangeID(This,pDefinitionIdentity,pullChangeId) ) 

#define IStore_EnumCategories(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumCategories(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppIUnknown) ) 

#define IStore_EnumSubcategories(This,dwFlags,pCategoryId,pszSubcategoryPathPattern,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumSubcategories(This,dwFlags,pCategoryId,pszSubcategoryPathPattern,riid,ppIUnknown) ) 

#define IStore_EnumCategoryInstances(This,dwFlags,pCategoryId,pszSubcategoryPath,riid,ppUnknown)	\
    ( (This)->lpVtbl -> EnumCategoryInstances(This,dwFlags,pCategoryId,pszSubcategoryPath,riid,ppUnknown) ) 

#define IStore_GetDeploymentProperty(This,dwFlags,pDeploymentInPackage,InstallReference,PropertySet,pcwszPropertyName,PropertyValue)	\
    ( (This)->lpVtbl -> GetDeploymentProperty(This,dwFlags,pDeploymentInPackage,InstallReference,PropertySet,pcwszPropertyName,PropertyValue) ) 

#define IStore_LockApplicationPath(This,dwFlags,pIdentity,ppvCookie,ppszPayloadRoot)	\
    ( (This)->lpVtbl -> LockApplicationPath(This,dwFlags,pIdentity,ppvCookie,ppszPayloadRoot) ) 

#define IStore_ReleaseApplicationPath(This,Cookie)	\
    ( (This)->lpVtbl -> ReleaseApplicationPath(This,Cookie) ) 

#define IStore_EnumPrivateFiles(This,dwFlags,pApplicationId,pDefinitionIdentity,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumPrivateFiles(This,dwFlags,pApplicationId,pDefinitionIdentity,riid,ppQueryResult) ) 

#define IStore_EnumInstallerDeploymentMetadata(This,dwFlags,pReference,pDeploymentFilter,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumInstallerDeploymentMetadata(This,dwFlags,pReference,pDeploymentFilter,riid,ppQueryResult) ) 

#define IStore_EnumInstallerDeploymentMetadataProperties(This,dwFlags,pReference,pAppidDeployment,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumInstallerDeploymentMetadataProperties(This,dwFlags,pReference,pAppidDeployment,riid,ppQueryResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0013 */
/* [local] */ 

/* [v1_enum] */ 
enum _STORE_COMPONENT_DEPLOYMENT_FLAGS
    {
        STORE_COMPONENT_DEPLOYMENT_FLAG_PINNED	= 0x1,
        STORE_COMPONENT_DEPLOYMENT_FLAG_INSTALLED	= 0x2
    } ;
typedef struct _STORE_COMPONENT_DEPLOYMENT
    {
    DWORD dwFlags;
    IDefinitionAppId *pIDefinitionAppId;
    } 	STORE_COMPONENT_DEPLOYMENT;

typedef struct _STORE_COMPONENT_DEPLOYMENT *PSTORE_COMPONENT_DEPLOYMENT;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0013_v0_0_s_ifspec;

#ifndef __IEnumSTORE_COMPONENT_DEPLOYMENT_INTERFACE_DEFINED__
#define __IEnumSTORE_COMPONENT_DEPLOYMENT_INTERFACE_DEFINED__

/* interface IEnumSTORE_COMPONENT_DEPLOYMENT */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_COMPONENT_DEPLOYMENT;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c860c9d1-fb6b-4c87-9955-a6f48b95d665")
    IEnumSTORE_COMPONENT_DEPLOYMENT : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_COMPONENT_DEPLOYMENT Deployments[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_COMPONENT_DEPLOYMENT **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_COMPONENT_DEPLOYMENTVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_COMPONENT_DEPLOYMENT Deployments[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_COMPONENT_DEPLOYMENT * This,
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_COMPONENT_DEPLOYMENT **ppEnum);
        
        END_INTERFACE
    } IEnumSTORE_COMPONENT_DEPLOYMENTVtbl;

    interface IEnumSTORE_COMPONENT_DEPLOYMENT
    {
        CONST_VTBL struct IEnumSTORE_COMPONENT_DEPLOYMENTVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_COMPONENT_DEPLOYMENT_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_COMPONENT_DEPLOYMENT_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_COMPONENT_DEPLOYMENT_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_COMPONENT_DEPLOYMENT_Next(This,celt,Deployments,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,Deployments,pceltFetched) ) 

#define IEnumSTORE_COMPONENT_DEPLOYMENT_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_COMPONENT_DEPLOYMENT_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_COMPONENT_DEPLOYMENT_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_COMPONENT_DEPLOYMENT_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0014 */
/* [local] */ 

typedef struct _COMPONENT_STORE_COMPONENT_CHANGE
    {
    DWORD dwFlags;
    IDefinitionIdentity *pPreviousIdentity;
    IDefinitionIdentity *pNewIdentity;
    } 	COMPONENT_STORE_COMPONENT_CHANGE;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0014_v0_0_s_ifspec;

#ifndef __IEnumCOMPONENT_STORE_COMPONENT_CHANGE_INTERFACE_DEFINED__
#define __IEnumCOMPONENT_STORE_COMPONENT_CHANGE_INTERFACE_DEFINED__

/* interface IEnumCOMPONENT_STORE_COMPONENT_CHANGE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCOMPONENT_STORE_COMPONENT_CHANGE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1eb9c71c-3273-40ac-9eba-d28f130e794e")
    IEnumCOMPONENT_STORE_COMPONENT_CHANGE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  COMPONENT_STORE_COMPONENT_CHANGE Changes[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumCOMPONENT_STORE_COMPONENT_CHANGE **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCOMPONENT_STORE_COMPONENT_CHANGEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  COMPONENT_STORE_COMPONENT_CHANGE Changes[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCOMPONENT_STORE_COMPONENT_CHANGE * This,
            /* [annotation][out] */ 
            _Out_  IEnumCOMPONENT_STORE_COMPONENT_CHANGE **ppEnum);
        
        END_INTERFACE
    } IEnumCOMPONENT_STORE_COMPONENT_CHANGEVtbl;

    interface IEnumCOMPONENT_STORE_COMPONENT_CHANGE
    {
        CONST_VTBL struct IEnumCOMPONENT_STORE_COMPONENT_CHANGEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_Next(This,celt,Changes,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,Changes,pceltFetched) ) 

#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCOMPONENT_STORE_COMPONENT_CHANGE_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCOMPONENT_STORE_COMPONENT_CHANGE_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0015 */
/* [local] */ 

/* [v1_enum] */ 
enum _COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_MODES
    {
        COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_MODE_UNINSTALL	= 1,
        COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_MODE_SERVICING	= 2,
        COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_MODE_INSTALL	= 3
    } ;
/* [v1_enum] */ 
enum _COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_FLAGS
    {
        COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_FLAG_FROM_SERVICING	= 0x1
    } ;
typedef struct _COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY
    {
    DWORD dwFlags;
    ULONG Phase;
    ULONG InstallerMode;
    GUID InstallerId;
    IDefinitionIdentity *pIDefinitionIdentity_Superseded;
    IDefinitionIdentity *pIDefinitionIdentity_Winning;
    } 	COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0015_v0_0_s_ifspec;

#ifndef __IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_INTERFACE_DEFINED__
#define __IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_INTERFACE_DEFINED__

/* interface IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68841d18-dd29-47c3-9817-a69886947000")
    IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY Changes[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  COMPONENT_STORE_ADVANCED_INSTALLER_ENTRY Changes[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY * This,
            /* [annotation][out] */ 
            _Out_  IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY **ppEnum);
        
        END_INTERFACE
    } IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRYVtbl;

    interface IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY
    {
        CONST_VTBL struct IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_Next(This,celt,Changes,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,Changes,pceltFetched) ) 

#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCOMPONENT_STORE_ADVANCED_INSTALLER_ENTRY_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0016 */
/* [local] */ 

/* [v1_enum] */ 
enum _ISTORE_DEPLOYMENT_REFERENCE_TYPES
    {
        ISTORE_DEPLOYMENT_REFERENCE_TYPE_PIN	= 1,
        ISTORE_DEPLOYMENT_REFERENCE_TYPE_INSTALL	= 2,
        ISTORE_DEPLOYMENT_REFERENCE_TYPE_STAGED	= 3
    } ;
typedef struct _STORE_DEPLOYMENT_REFERENCE
    {
    ULONG ReferenceType;
    STORE_ASSEMBLY_INSTALLATION_REFERENCE Reference;
    } 	STORE_DEPLOYMENT_REFERENCE;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0016_v0_0_s_ifspec;

#ifndef __IEnumSTORE_DEPLOYMENT_REFERENCE_INTERFACE_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_REFERENCE_INTERFACE_DEFINED__

/* interface IEnumSTORE_DEPLOYMENT_REFERENCE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_DEPLOYMENT_REFERENCE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ec927fd9-3add-4663-b4dd-168cdde64ff9")
    IEnumSTORE_DEPLOYMENT_REFERENCE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_DEPLOYMENT_REFERENCE Deployments[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_DEPLOYMENT_REFERENCE **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_DEPLOYMENT_REFERENCEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_DEPLOYMENT_REFERENCE Deployments[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_DEPLOYMENT_REFERENCE * This,
            /* [annotation][out] */ 
            _Out_  IEnumSTORE_DEPLOYMENT_REFERENCE **ppEnum);
        
        END_INTERFACE
    } IEnumSTORE_DEPLOYMENT_REFERENCEVtbl;

    interface IEnumSTORE_DEPLOYMENT_REFERENCE
    {
        CONST_VTBL struct IEnumSTORE_DEPLOYMENT_REFERENCEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_DEPLOYMENT_REFERENCE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_DEPLOYMENT_REFERENCE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_DEPLOYMENT_REFERENCE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_DEPLOYMENT_REFERENCE_Next(This,celt,Deployments,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,Deployments,pceltFetched) ) 

#define IEnumSTORE_DEPLOYMENT_REFERENCE_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_DEPLOYMENT_REFERENCE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_DEPLOYMENT_REFERENCE_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_DEPLOYMENT_REFERENCE_INTERFACE_DEFINED__ */


#ifndef __IStorePendingTransactionProgress_INTERFACE_DEFINED__
#define __IStorePendingTransactionProgress_INTERFACE_DEFINED__

/* interface IStorePendingTransactionProgress */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IStorePendingTransactionProgress;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c894a4f1-8e90-4061-b19a-b7ca60d77d51")
    IStorePendingTransactionProgress : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnBegin( 
            /* [annotation][in] */ 
            _In_  DWORD EstimateTicks,
            /* [annotation][out] */ 
            _Out_  DWORD *GranularityRequest) = 0;
        
        virtual void STDMETHODCALLTYPE UpdateTickEstimate( 
            /* [annotation][in] */ 
            _In_  DWORD NewTicks) = 0;
        
        virtual void STDMETHODCALLTYPE Tick( 
            /* [annotation][in] */ 
            _In_  DWORD TicksPassed) = 0;
        
        virtual void STDMETHODCALLTYPE OnEnd( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStorePendingTransactionProgressVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStorePendingTransactionProgress * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStorePendingTransactionProgress * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStorePendingTransactionProgress * This);
        
        void ( STDMETHODCALLTYPE *OnBegin )( 
            IStorePendingTransactionProgress * This,
            /* [annotation][in] */ 
            _In_  DWORD EstimateTicks,
            /* [annotation][out] */ 
            _Out_  DWORD *GranularityRequest);
        
        void ( STDMETHODCALLTYPE *UpdateTickEstimate )( 
            IStorePendingTransactionProgress * This,
            /* [annotation][in] */ 
            _In_  DWORD NewTicks);
        
        void ( STDMETHODCALLTYPE *Tick )( 
            IStorePendingTransactionProgress * This,
            /* [annotation][in] */ 
            _In_  DWORD TicksPassed);
        
        void ( STDMETHODCALLTYPE *OnEnd )( 
            IStorePendingTransactionProgress * This);
        
        END_INTERFACE
    } IStorePendingTransactionProgressVtbl;

    interface IStorePendingTransactionProgress
    {
        CONST_VTBL struct IStorePendingTransactionProgressVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStorePendingTransactionProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStorePendingTransactionProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStorePendingTransactionProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStorePendingTransactionProgress_OnBegin(This,EstimateTicks,GranularityRequest)	\
    ( (This)->lpVtbl -> OnBegin(This,EstimateTicks,GranularityRequest) ) 

#define IStorePendingTransactionProgress_UpdateTickEstimate(This,NewTicks)	\
    ( (This)->lpVtbl -> UpdateTickEstimate(This,NewTicks) ) 

#define IStorePendingTransactionProgress_Tick(This,TicksPassed)	\
    ( (This)->lpVtbl -> Tick(This,TicksPassed) ) 

#define IStorePendingTransactionProgress_OnEnd(This)	\
    ( (This)->lpVtbl -> OnEnd(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStorePendingTransactionProgress_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0018 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum _COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE
    {
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_INVALID	= 0,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_DELETE_FILE	= 1,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_COPY_FILE	= 2,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_HARDLINK_FILE	= 3,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_RENAME_FILE	= 4,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_CREATE_DIRECTORY	= 5,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_SET_FILE_INFORMATION	= 6,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_WRITE_FILE	= 7,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_CREATE_FILE	= 8,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_CREATE_KEY	= 20,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_DELETE_KEY	= 21,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_SET_KEY_INFORMATION	= 22,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_SET_UNICODE_VALUE	= 23,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_SET_BINARY_VALUE	= 24,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_DELETE_VALUE	= 25,
        COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE_DECOMPRESS_FILE	= 26
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszFilePath;
    LPVOID pSecurityDescriptor;
    ULONG ulFileAttributes;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszFilePath;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszFilePath;
    BLOB Value;
    LARGE_INTEGER ullByteOffset;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszSourcePath;
    LPCWSTR pszDestinationPath;
    LPVOID pDestinationSecurityDescriptor;
    ULONG ulDestinationFileAttributes;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszSourcePath;
    LPCWSTR pszDestinationPath;
    LPVOID pDestinationSecurityDescriptor;
    ULONG ulDestinationFileAttributes;
    BLOB FileHash;
    ULONG ulHashAlgorithm;
    ULONG ulHashTransform;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszSourcePath;
    LPCWSTR pszDestinationPath;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE
    {
    DWORD dwFlags;
    LPCWSTR pszSourcePath;
    LPCWSTR pszDestinationPath;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY
    {
    DWORD dwFlags;
    LPCWSTR pszFilePath;
    LPVOID pSecurityDescriptor;
    ULONG ulFileAttributes;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY *PCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY;


enum __MIDL___MIDL_itf_isolation_0000_0018_0001
    {
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_FILE_ATTRIBUTES_VALID	= 0x1,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_SECURITY_DESCRIPTOR_VALID	= 0x2,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_CREATION_TIME_VALID	= 0x4,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_LAST_ACCESS_TIME_VALID	= 0x8,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_LAST_WRITE_TIME_VALID	= 0x10,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_END_OF_FILE_VALID	= 0x20,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_CONTAINER_INHERIT_PERMISSIONS	= 0x40,
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION_FLAG_OBJECT_INHERIT_PERMISSIONS	= 0x80
    } ;

enum __MIDL___MIDL_itf_isolation_0000_0018_0002
    {
        COMPONENT_STORE_TEMPORARY_FOLDER_STAGE_PAYLOAD	= 0x1
    } ;
typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION
    {
    DWORD dwFlags;
    LPCWSTR pszFilePath;
    LPVOID pSecurityDescriptor;
    ULONG ulFileAttributes;
    LARGE_INTEGER liCreationTime;
    LARGE_INTEGER liLastAccessTime;
    LARGE_INTEGER liLastWriteTime;
    LARGE_INTEGER liEndOfFile;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION *PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY
    {
    DWORD dwFlags;
    HKEY hRootKey;
    LPCWSTR pszKeyName;
    LPCWSTR pszClassName;
    LPVOID pSecurityDescriptor;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY *PCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY
    {
    DWORD dwFlags;
    HKEY hRootKey;
    LPCWSTR pszKeyName;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY *PCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION
    {
    DWORD dwFlags;
    HKEY hRootKey;
    LPCWSTR pszKeyName;
    LPCWSTR pszClassName;
    LPVOID pSecurityDescriptor;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION *PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION;


enum __MIDL___MIDL_itf_isolation_0000_0018_0003
    {
        COMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION_FLAG_CONTAINER_INHERIT_PERMISSIONS	= 0x1
    } ;
typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE
    {
    DWORD dwFlags;
    HKEY hRootKey;
    LPCWSTR pszKeyName;
    LPCWSTR pszValueName;
    DWORD dwType;
    LPCWSTR pszValue;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE
    {
    DWORD dwFlags;
    HKEY hRootKey;
    LPCWSTR pszKeyName;
    LPCWSTR pszValueName;
    DWORD dwType;
    BLOB Value;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE
    {
    DWORD dwFlags;
    HKEY hRootKey;
    LPCWSTR pszKeyName;
    LPCWSTR pszValueName;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE *PCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE;

typedef union _COMPONENT_STORE_PRIMITIVE_CHANGE_DATA
    {
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_FILE DeleteFile;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_COPY_FILE CopyFile;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_HARDLINK_FILE HardLinkFile;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_RENAME_FILE RenameFile;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_DIRECTORY CreateDirectory;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_FILE_INFORMATION SetFileInformation;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_WRITE_FILE WriteFile;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_KEY CreateKey;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_CREATE_FILE CreateFile;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_KEY DeleteKey;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_KEY_INFORMATION SetKeyInformation;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_UNICODE_VALUE SetUnicodeValue;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_SET_BINARY_VALUE SetBinaryValue;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_DELETE_VALUE DeleteValue;
    PCOMPONENT_STORE_PRIMITIVE_CHANGE_DECOMPRESS_FILE DecompressFile;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE_DATA;

typedef union _COMPONENT_STORE_PRIMITIVE_CHANGE_DATA *PCOMPONENT_STORE_PRIMITIVE_CHANGE_DATA;

typedef const COMPONENT_STORE_PRIMITIVE_CHANGE_DATA *PCCOMPONENT_STORE_PRIMITIVE_CHANGE_DATA;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE
    {
    COMPONENT_STORE_PRIMITIVE_CHANGE_TYPE Type;
    COMPONENT_STORE_PRIMITIVE_CHANGE_DATA Data;
    } 	COMPONENT_STORE_PRIMITIVE_CHANGE;

typedef struct _COMPONENT_STORE_PRIMITIVE_CHANGE *PCOMPONENT_STORE_PRIMITIVE_CHANGE;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0018_v0_0_s_ifspec;

#ifndef __IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_INTERFACE_DEFINED__
#define __IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_INTERFACE_DEFINED__

/* interface IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6c45fd95-6f05-4bcd-b2f1-24f9f51c7ab0")
    IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ COMPONENT_STORE_PRIMITIVE_CHANGE rgelt[  ],
            /* [out] */ SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE **ppIEnumCSI_PENDING_PRIMITIVE_CHANGE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCOMPONENT_STORE_PRIMITIVE_CHANGEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ COMPONENT_STORE_PRIMITIVE_CHANGE rgelt[  ],
            /* [out] */ SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE * This,
            /* [out] */ IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE **ppIEnumCSI_PENDING_PRIMITIVE_CHANGE);
        
        END_INTERFACE
    } IEnumCOMPONENT_STORE_PRIMITIVE_CHANGEVtbl;

    interface IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE
    {
        CONST_VTBL struct IEnumCOMPONENT_STORE_PRIMITIVE_CHANGEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_Clone(This,ppIEnumCSI_PENDING_PRIMITIVE_CHANGE)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumCSI_PENDING_PRIMITIVE_CHANGE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCOMPONENT_STORE_PRIMITIVE_CHANGE_INTERFACE_DEFINED__ */


#ifndef __IStorePendingTransaction_INTERFACE_DEFINED__
#define __IStorePendingTransaction_INTERFACE_DEFINED__

/* interface IStorePendingTransaction */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_APPLY_FLAGS
    {
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_RESOURCES_IN_USE	= 0x1,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_ALLOW_NO_KTM	= 0x2,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_REBOOT_REQUIRED	= 0x4,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_ATTEMPT_ROLLBACK_ON_FAILURE	= 0x8,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_NO_KTM	= 0x10,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DISALLOW_ONLINE_INSTALLERS	= 0x20,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_FORBID_ROLLBACK	= 0x40,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_OMIT_ONLINE_OPERATIONS	= 0x80,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_INSTALLER_FAILS	= 0x100,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_NOT_COLDPATCHABLE	= 0x200,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_PRIMITIVES_FAIL	= 0x400,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_INDICATE_PRIMITIVE_ROLLBACK	= 0x800,
        ISTORE_PENDING_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_NO_IMPACTFUL_COMMITS	= 0x1000
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITIONS
    {
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_SUCCESS	= 1,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_RESOURCES_IN_USE	= 2,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_REBOOT_REQUIRED	= 3,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_FAILED_ROLLBACK_SUCCESSFUL	= 4,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_FAILED_ROLLBACK_REQUIRES_REBOOT	= 5,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_FAILED_REQUIRES_ONLINE_OPERATIONS	= 6,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_INSTALLER_FAILED	= 7,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_FAILED_ROLLBACK_UNSUCCESSFUL	= 8,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_NOT_COLDPATCHABLE	= 9,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_PRIMITIVES_FAILED	= 10,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_FAILED_NO_IMPACTFUL_COMMITS	= 11,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_SUCCESS_ACTIONS_PENDING	= 12,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_INSTALLER_REQUIRES_REBOOT	= 0x10000,
        ISTORE_PENDING_TRANSACTION_APPLY_DISPOSITION_PRIMITIVES_ROLLED_BACK	= 0x20000
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_PEND_FLAGS
    {
        ISTORE_PENDING_TRANSACTION_PEND_FLAGS_APPLY_PRIMITIVES_OFFLINE	= 0x1,
        ISTORE_PENDING_TRANSACTION_PEND_FLAGS_DONT_FAIL_IF_NOT_PENDABLE	= 0x2,
        ISTORE_PENDING_TRANSACTION_PEND_FLAGS_FORBID_ROLLBACK	= 0x4,
        ISTORE_PENDING_TRANSACTION_PEND_FLAGS_DONT_FAIL_IF_NO_IMPACTFUL_TRANSACTIONS	= 0x8,
        ISTORE_PENDING_TRANSACTION_PEND_FLAGS_DONT_FAIL_IF_NO_OPS	= 0x10
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_PEND_DISPOSITION
    {
        ISTORE_PENDING_TRANSACTION_PEND_DISPOSITION_PENDED	= 1,
        ISTORE_PENDING_TRANSACTION_PEND_DISPOSITION_PRIMITIVES_APPLIED_AND_PENDED	= 2,
        ISTORE_PENDING_TRANSACTION_PEND_DISPOSITION_NOT_PENDABLE	= 3,
        ISTORE_PENDING_TRANSACTION_PEND_DISPOSITION_FAILED_NO_IMPACTFUL_TRANSACTIONS	= 4,
        ISTORE_PENDING_TRANSACTION_PEND_DISPOSITION_FAILED_NO_OPS	= 5
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_GET_CHANGELIST_FLAGS
    {
        ISTORE_PENDING_TRANSACTION_GET_CHANGELIST_FLAG_RETURN_NULL_IF_INCOMPLETE	= 0x1
    } ;
/* [v1_enum] */ 
enum ISTORE_PENDING_TRANSACTION_ANALYZE_FLAGS
    {
        ISTORE_PENDING_TRANSACTION_ANALYZE_FLAG_DETERMINE_COLDPATCHABILITY	= 0x1,
        ISTORE_PENDING_TRANSACTION_ANALYZE_FLAG_DO_NOT_PEND	= 0x10
    } ;
/* [v1_enum] */ 
enum ISTORE_PENDING_TRANSACTION_ANALYZE_DISPOSITIONS
    {
        ISTORE_PENDING_TRANSACTION_ANALYZE_DISPOSITION_INVALID	= 0,
        ISTORE_PENDING_TRANSACTION_ANALYZE_DISPOSITION_COMPLETE	= 1,
        ISTORE_PENDING_TRANSACTION_ANALYZE_DISPOSITION_MISSING_FILES	= 2,
        ISTORE_PENDING_TRANSACTION_ANALYZE_DISPOSITION_NOT_COLDPATCHABLE	= 3,
        ISTORE_PENDING_TRANSACTION_ANALYZE_DISPOSITION_NOT_FULLYOFFLINECAPABLE	= 4
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_GET_PRIMITIVES_FLAGS
    {
        ISTORE_PENDING_TRANSACTION_GET_PRIMITIVES_FLAG_RETURN_NULL_IF_NOT_ANALYZED	= 0x1,
        ISTORE_PENDING_TRANSACTION_GET_PRIMITIVES_FLAG_RETURN_NULL_IF_NOT_PENDING	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_TRANSACTION_FLAGS
    {
        ISTORE_PENDING_TRANSACTION_FLAG_CONTAINS_BOOT_CRITICAL_COMPONENT	= 0x1,
        ISTORE_PENDING_TRANSACTION_FLAG_FOR_COLDPATCHING	= 0x2,
        ISTORE_PENDING_TRANSACTION_FLAG_NOT_COLDPATCH_COMPATIBLE	= 0x4
    } ;

EXTERN_C const IID IID_IStorePendingTransaction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20e20212-7fe2-4030-ad8e-99cafa256bf6")
    IStorePendingTransaction : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Apply( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pend( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPendingComponentChanges( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *pIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAdvancedInstallerExecutionQueue( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *ppIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Analyze( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD *dwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPendingPrimitiveChanges( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *pIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransactionFlags( 
            /* [out] */ DWORD *pdwTxFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStorePendingTransactionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStorePendingTransaction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStorePendingTransaction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStorePendingTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IStorePendingTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *Pend )( 
            IStorePendingTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *GetPendingComponentChanges )( 
            IStorePendingTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *pIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *GetAdvancedInstallerExecutionQueue )( 
            IStorePendingTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *ppIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *Analyze )( 
            IStorePendingTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD *dwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *GetPendingPrimitiveChanges )( 
            IStorePendingTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *pIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionFlags )( 
            IStorePendingTransaction * This,
            /* [out] */ DWORD *pdwTxFlags);
        
        END_INTERFACE
    } IStorePendingTransactionVtbl;

    interface IStorePendingTransaction
    {
        CONST_VTBL struct IStorePendingTransactionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStorePendingTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStorePendingTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStorePendingTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStorePendingTransaction_Apply(This,dwFlags,Progress,dwDisposition)	\
    ( (This)->lpVtbl -> Apply(This,dwFlags,Progress,dwDisposition) ) 

#define IStorePendingTransaction_Pend(This,dwFlags,Progress,dwDisposition)	\
    ( (This)->lpVtbl -> Pend(This,dwFlags,Progress,dwDisposition) ) 

#define IStorePendingTransaction_GetPendingComponentChanges(This,dwFlags,pIProgress,riid,ppUnknown)	\
    ( (This)->lpVtbl -> GetPendingComponentChanges(This,dwFlags,pIProgress,riid,ppUnknown) ) 

#define IStorePendingTransaction_GetAdvancedInstallerExecutionQueue(This,dwFlags,ppIProgress,riid,ppUnknown)	\
    ( (This)->lpVtbl -> GetAdvancedInstallerExecutionQueue(This,dwFlags,ppIProgress,riid,ppUnknown) ) 

#define IStorePendingTransaction_Analyze(This,dwFlags,dwDisposition)	\
    ( (This)->lpVtbl -> Analyze(This,dwFlags,dwDisposition) ) 

#define IStorePendingTransaction_GetPendingPrimitiveChanges(This,dwFlags,pIProgress,riid,ppUnknown)	\
    ( (This)->lpVtbl -> GetPendingPrimitiveChanges(This,dwFlags,pIProgress,riid,ppUnknown) ) 

#define IStorePendingTransaction_get_TransactionFlags(This,pdwTxFlags)	\
    ( (This)->lpVtbl -> get_TransactionFlags(This,pdwTxFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStorePendingTransaction_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0020 */
/* [local] */ 

/* [v1_enum] */ 
enum STORE_REPAIRED_COMPONENT_FLAGS
    {
        STORE_REPAIRED_COMPONENT_FLAG_BOOT_CRITICAL	= 0x1
    } ;
/* [v1_enum] */ 
enum STORE_REPAIRED_COMPONENT_ASPECT_FLAGS
    {
        STORE_REPAIRED_COMPONENT_ASPECT_FLAG_MANIFEST	= 0x1,
        STORE_REPAIRED_COMPONENT_ASPECT_FLAG_FILES	= 0x2,
        STORE_REPAIRED_COMPONENT_ASPECT_FLAG_PROJECTION	= 0x4
    } ;
typedef struct _STORE_REPAIRED_COMPONENT
    {
    DWORD dwFlags;
    DWORD dwBrokenAspects;
    DWORD dwRepairedAspects;
    IDefinitionIdentity *pIDefinitionIdentity;
    PVOID pvReserved;
    } 	STORE_REPAIRED_COMPONENT;

typedef struct _STORE_REPAIRED_COMPONENT *PSTORE_REPAIRED_COMPONENT;

typedef const STORE_REPAIRED_COMPONENT *PCSTORE_REPAIRED_COMPONENT;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0020_v0_0_s_ifspec;

#ifndef __IEnumSTORE_REPAIRED_COMPONENT_INTERFACE_DEFINED__
#define __IEnumSTORE_REPAIRED_COMPONENT_INTERFACE_DEFINED__

/* interface IEnumSTORE_REPAIRED_COMPONENT */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_REPAIRED_COMPONENT;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68bf3488-b97f-4e4e-a0c5-a55342bac832")
    IEnumSTORE_REPAIRED_COMPONENT : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_REPAIRED_COMPONENT rgElements[  ],
            /* [out] */ SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_REPAIRED_COMPONENT **ppIEnumSTORE_REPAIRED_COMPONENT) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_REPAIRED_COMPONENTVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_REPAIRED_COMPONENT * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_REPAIRED_COMPONENT * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_REPAIRED_COMPONENT * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_REPAIRED_COMPONENT * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_REPAIRED_COMPONENT rgElements[  ],
            /* [out] */ SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_REPAIRED_COMPONENT * This,
            /* [in] */ SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_REPAIRED_COMPONENT * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_REPAIRED_COMPONENT * This,
            /* [out] */ IEnumSTORE_REPAIRED_COMPONENT **ppIEnumSTORE_REPAIRED_COMPONENT);
        
        END_INTERFACE
    } IEnumSTORE_REPAIRED_COMPONENTVtbl;

    interface IEnumSTORE_REPAIRED_COMPONENT
    {
        CONST_VTBL struct IEnumSTORE_REPAIRED_COMPONENTVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_REPAIRED_COMPONENT_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_REPAIRED_COMPONENT_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_REPAIRED_COMPONENT_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_REPAIRED_COMPONENT_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumSTORE_REPAIRED_COMPONENT_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumSTORE_REPAIRED_COMPONENT_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_REPAIRED_COMPONENT_Clone(This,ppIEnumSTORE_REPAIRED_COMPONENT)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_REPAIRED_COMPONENT) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_REPAIRED_COMPONENT_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0021 */
/* [local] */ 

/* [v1_enum] */ 
enum STORE_DEPLOYMENT_CLOSURE_ENTRY_FLAGS
    {
        STORE_DEPLOYMENT_CLOSURE_ENTRY_FLAG_UNRESOLVED_MEMBERS	= 0x1
    } ;
typedef struct _STORE_DEPLOYMENT_CLOSURE_ENTRY
    {
    DWORD dwFlags;
    IDefinitionIdentity *pIDefinitionIdentity;
    } 	STORE_DEPLOYMENT_CLOSURE_ENTRY;

typedef struct _STORE_DEPLOYMENT_CLOSURE_ENTRY *PSTORE_DEPLOYMENT_CLOSURE_ENTRY;

typedef const STORE_DEPLOYMENT_CLOSURE_ENTRY *PCSTORE_DEPLOYMENT_CLOSURE_ENTRY;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0021_v0_0_s_ifspec;

#ifndef __IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_INTERFACE_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_INTERFACE_DEFINED__

/* interface IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("075eb756-e959-4696-bb85-38a2c0bf4f09")
    IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_DEPLOYMENT_CLOSURE_ENTRY rgElements[  ],
            /* [out] */ SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY **ppIEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_DEPLOYMENT_CLOSURE_ENTRY rgElements[  ],
            /* [out] */ SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This,
            /* [in] */ SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY * This,
            /* [out] */ IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY **ppIEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY);
        
        END_INTERFACE
    } IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRYVtbl;

    interface IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY
    {
        CONST_VTBL struct IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_Clone(This,ppIEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_DEPLOYMENT_CLOSURE_ENTRY_INTERFACE_DEFINED__ */


#ifndef __IStorePendingRepairTransaction_INTERFACE_DEFINED__
#define __IStorePendingRepairTransaction_INTERFACE_DEFINED__

/* interface IStorePendingRepairTransaction */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _ISTORE_PENDING_REPAIR_TRANSACTION_FLAGS
    {
        ISTORE_PENDING_REPAIR_TRANSACTION_FLAG_CONTAINS_BOOT_CRITICAL_COMPONENT	= 0x1
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_FLAGS
    {
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_FLAG_ALLOW_NO_KTM	= 0x1,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_FLAG_NO_KTM	= 0x2,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_RESOURCES_IN_USE	= 0x4,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_REBOOT_REQUIRED	= 0x8,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_FLAG_DONT_FAIL_IF_PENDING_CONTENT	= 0x10
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_DISPOSITIONS
    {
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_DISPOSITION_SUCCESS	= 1,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_DISPOSITION_RESOURCES_IN_USE	= 2,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_DISPOSITION_REBOOT_REQUIRED	= 3,
        ISTORE_PENDING_REPAIR_TRANSACTION_APPLY_DISPOSITION_PENDING_CONTENT	= 4
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_REPAIR_TRANSACTION_PEND_FLAGS
    {
        ISTORE_PENDING_REPAIR_TRANSACTION_PEND_FLAG_DONT_FAIL_IF_PENDING_CONTENT	= 0x1,
        ISTORE_PENDING_REPAIR_TRANSACTION_PEND_FLAG_ALLOW_NO_KTM	= 0x2,
        ISTORE_PENDING_REPAIR_TRANSACTION_PEND_FLAG_NO_KTM	= 0x4
    } ;
/* [v1_enum] */ 
enum _ISTORE_PENDING_REPAIR_TRANSACTION_PEND_DISPOSITION
    {
        ISTORE_PENDING_REPAIR_TRANSACTION_PEND_DISPOSITION_PENDED	= 1,
        ISTORE_PENDING_REPAIR_TRANSACTION_PEND_DISPOSITION_PENDING_CONTENT	= 2
    } ;

EXTERN_C const IID IID_IStorePendingRepairTransaction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01fb8142-18f5-40bf-a9e1-2068c3918597")
    IStorePendingRepairTransaction : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRepairedComponents( 
            /* [in] */ DWORD dwFlags,
            /* [annotation][out] */ 
            _Outptr_  IEnumSTORE_REPAIRED_COMPONENT **ppRepairEnum,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPendingPrimitiveChanges( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *pIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TransactionFlags( 
            /* [out] */ DWORD *pdwTxFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Apply( 
            /* [in] */ DWORD dwFlags,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pend( 
            /* [in] */ DWORD dwFlags,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStorePendingRepairTransactionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStorePendingRepairTransaction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStorePendingRepairTransaction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStorePendingRepairTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRepairedComponents )( 
            IStorePendingRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [annotation][out] */ 
            _Outptr_  IEnumSTORE_REPAIRED_COMPONENT **ppRepairEnum,
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *GetPendingPrimitiveChanges )( 
            IStorePendingRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IStorePendingTransactionProgress *pIProgress,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppUnknown);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TransactionFlags )( 
            IStorePendingRepairTransaction * This,
            /* [out] */ DWORD *pdwTxFlags);
        
        HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IStorePendingRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *Pend )( 
            IStorePendingRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *dwDisposition);
        
        END_INTERFACE
    } IStorePendingRepairTransactionVtbl;

    interface IStorePendingRepairTransaction
    {
        CONST_VTBL struct IStorePendingRepairTransactionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStorePendingRepairTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStorePendingRepairTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStorePendingRepairTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStorePendingRepairTransaction_GetRepairedComponents(This,dwFlags,ppRepairEnum,pdwDisposition)	\
    ( (This)->lpVtbl -> GetRepairedComponents(This,dwFlags,ppRepairEnum,pdwDisposition) ) 

#define IStorePendingRepairTransaction_GetPendingPrimitiveChanges(This,dwFlags,pIProgress,riid,ppUnknown)	\
    ( (This)->lpVtbl -> GetPendingPrimitiveChanges(This,dwFlags,pIProgress,riid,ppUnknown) ) 

#define IStorePendingRepairTransaction_get_TransactionFlags(This,pdwTxFlags)	\
    ( (This)->lpVtbl -> get_TransactionFlags(This,pdwTxFlags) ) 

#define IStorePendingRepairTransaction_Apply(This,dwFlags,TransactionId,Progress,dwDisposition)	\
    ( (This)->lpVtbl -> Apply(This,dwFlags,TransactionId,Progress,dwDisposition) ) 

#define IStorePendingRepairTransaction_Pend(This,dwFlags,TransactionId,Progress,dwDisposition)	\
    ( (This)->lpVtbl -> Pend(This,dwFlags,TransactionId,Progress,dwDisposition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStorePendingRepairTransaction_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0023 */
/* [local] */ 

/* [v1_enum] */ 
enum STORE_CORRUPT_COMPONENT_TYPES
    {
        STORE_CORRUPT_COMPONENT_TYPES_MANIFEST	= 0x1,
        STORE_CORRUPT_COMPONENT_TYPES_PAYLOAD	= 0x2,
        STORE_CORRUPT_COMPONENT_TYPES_METADATA	= 0x3
    } ;
typedef struct _STORE_CORRUPT_COMPONENT
    {
    DWORD dwType;
    IDefinitionIdentity *pIDefinitionIdentity;
    LPWSTR pszFilename;
    PVOID pvReserved;
    BOOL fRepaired;
    } 	STORE_CORRUPT_COMPONENT;

typedef struct _STORE_CORRUPT_COMPONENT *PSTORE_CORRUPT_COMPONENT;

typedef const STORE_CORRUPT_COMPONENT *PCSTORE_CORRUPT_COMPONENT;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0023_v0_0_s_ifspec;

#ifndef __IEnumSTORE_CORRUPT_COMPONENT_INTERFACE_DEFINED__
#define __IEnumSTORE_CORRUPT_COMPONENT_INTERFACE_DEFINED__

/* interface IEnumSTORE_CORRUPT_COMPONENT */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_CORRUPT_COMPONENT;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4CF4E09-42F9-45f0-A9FD-018B0A5C0612")
    IEnumSTORE_CORRUPT_COMPONENT : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_CORRUPT_COMPONENT rgElements[  ],
            /* [out] */ SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_CORRUPT_COMPONENT **ppIEnumSTORE_CORRUPT_COMPONENT) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_CORRUPT_COMPONENTVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_CORRUPT_COMPONENT * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_CORRUPT_COMPONENT * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_CORRUPT_COMPONENT * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_CORRUPT_COMPONENT * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_CORRUPT_COMPONENT rgElements[  ],
            /* [out] */ SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_CORRUPT_COMPONENT * This,
            /* [in] */ SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_CORRUPT_COMPONENT * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_CORRUPT_COMPONENT * This,
            /* [out] */ IEnumSTORE_CORRUPT_COMPONENT **ppIEnumSTORE_CORRUPT_COMPONENT);
        
        END_INTERFACE
    } IEnumSTORE_CORRUPT_COMPONENTVtbl;

    interface IEnumSTORE_CORRUPT_COMPONENT
    {
        CONST_VTBL struct IEnumSTORE_CORRUPT_COMPONENTVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_CORRUPT_COMPONENT_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_CORRUPT_COMPONENT_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_CORRUPT_COMPONENT_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_CORRUPT_COMPONENT_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumSTORE_CORRUPT_COMPONENT_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumSTORE_CORRUPT_COMPONENT_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_CORRUPT_COMPONENT_Clone(This,ppIEnumSTORE_CORRUPT_COMPONENT)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_CORRUPT_COMPONENT) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_CORRUPT_COMPONENT_INTERFACE_DEFINED__ */


#ifndef __IStorePendingStoreRepairTransaction_INTERFACE_DEFINED__
#define __IStorePendingStoreRepairTransaction_INTERFACE_DEFINED__

/* interface IStorePendingStoreRepairTransaction */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _ISTORE_PSRTXN_DETECT_FLAGS
    {
        ISTORE_PSRTXN_DETECT_FLAGS_IGNORE_THRESHOLD	= 0x1,
        ISTORE_PSRTXN_DETECT_FLAGS_IGNORE_PAYLOAD	= 0x2,
        ISTORE_PSRTXN_DETECT_FLAGS_IGNORE_EXISTING_MARKS	= 0x4,
        ISTORE_PSRTXN_DETECT_FLAGS_IGNORE_PAYLOAD_CORRUPTION	= 0x8,
        ISTORE_PSRTXN_DETECT_FLAGS_IGNORE_NONSERVICINGSTACK_PAYLOAD_CORRUPTION	= 0x10
    } ;
/* [v1_enum] */ 
enum _ISTORE_PSRTXN_DETECT_DISPOSITIONS
    {
        ISTORE_PSRTXN_DETECT_DISPOSITION_SUCCESS	= 1,
        ISTORE_PSRTXN_DETECT_DISPOSITION_ALREADY_DETECTED	= 2,
        ISTORE_PSRTXN_DETECT_DISPOSITION_INTERRUPTED	= 3,
        ISTORE_PSRTXN_DETECT_DISPOSITION_THRESHOLD_CROSSED	= 4,
        ISTORE_PSRTXN_DETECT_DISPOSITION_METADATA_CORRUPTIONS_DETECTED	= 0x10000,
        ISTORE_PSRTXN_DETECT_DISPOSITION_NO_CORRUPTIONS_DETECTED	= 0x20000
    } ;
/* [v1_enum] */ 
enum _ISTORE_PSRTXN_REPAIR_FLAGS
    {
        ISTORE_PSRTXN_REPAIR_FLAGS_MOVE	= 0x1,
        ISTORE_PSRTXN_REPAIR_FLAGS_FLUSH_AFTER_ADD	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE_PSRTXN_REPAIR_DISPOSITIONS
    {
        ISTORE_PSRTXN_REPAIR_DISPOSITION_SUCCESS	= 1,
        ISTORE_PSRTXN_REPAIR_DISPOSITION_REPLACEMENT_IS_CORRUPT	= 2
    } ;
/* [v1_enum] */ 
enum _ISTORE_PSRTXN_REPAIR_PER_OP_DISPOSITIONS
    {
        ISTORE_PSRTXN_REPAIR_PER_OP_DISPOSITION_SUCCESS	= 1,
        ISTORE_PSRTXN_REPAIR_PER_OP_DISPOSITION_REPLACEMENT_IS_CORRUPT	= 2
    } ;
/* [v1_enum] */ 
enum _ISTORE_PSRTXN_COMMIT_FLAGS
    {
        ISTORE_PSRTXN_COMMIT_FLAGS_ALLOW_NO_KTM	= 0x1,
        ISTORE_PSRTXN_COMMIT_FLAGS_NO_KTM	= 0x2,
        ISTORE_PSRTXN_COMMIT_FLAGS_METADATA_ONLY	= 0x4,
        ISTORE_PSRTXN_COMMIT_FLAGS_DONT_FAIL_IF_RESOURCES_IN_USE	= 0x8
    } ;
/* [v1_enum] */ 
enum _ISTORE_PSRTXN_COMMIT_DISPOSITIONS
    {
        ISTORE_PSRTXN_COMMIT_DISPOSITION_SUCCESS	= 1,
        ISTORE_PSRTXN_COMMIT_DISPOSITION_RESOURCES_IN_USE	= 2
    } ;

EXTERN_C const IID IID_IStorePendingStoreRepairTransaction;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83AE8843-EEA8-4804-BD33-B927C84BDD68")
    IStorePendingStoreRepairTransaction : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Detect( 
            /* [in] */ DWORD dwFlags,
            /* [unique][in] */ HANDLE hCancelEvent,
            /* [out] */ DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCorruptComponents( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ IEnumSTORE_CORRUPT_COMPONENT **ppIEnumCorruption,
            /* [out] */ DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCorruptFiles( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ IEnumSTORE_CORRUPT_COMPONENT **ppIEnumCorruption,
            /* [out] */ DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RepairCorruptComponents( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cOperations,
            /* [size_is][in] */ IDefinitionIdentity *rgDefIdentities[  ],
            /* [size_is][in] */ LPWSTR rgReplacementFilePaths[  ],
            /* [size_is][annotation][in] */ 
            _Inout_  DWORD rgPerOpDisposition[  ],
            /* [out] */ DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RepairCorruptFiles( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cOperations,
            /* [size_is][in] */ IDefinitionIdentity *rgDefIdentities[  ],
            /* [size_is][in] */ LPWSTR rgComponentRelativePaths[  ],
            /* [size_is][in] */ LPWSTR rgReplacementFilePaths[  ],
            /* [size_is][annotation][in] */ 
            _Inout_  DWORD rgPerOpDisposition[  ],
            /* [out] */ DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *pdwDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Abort( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *pdwDisposition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStorePendingStoreRepairTransactionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStorePendingStoreRepairTransaction * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStorePendingStoreRepairTransaction * This);
        
        HRESULT ( STDMETHODCALLTYPE *Detect )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [unique][in] */ HANDLE hCancelEvent,
            /* [out] */ DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCorruptComponents )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IEnumSTORE_CORRUPT_COMPONENT **ppIEnumCorruption,
            /* [out] */ DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCorruptFiles )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ IEnumSTORE_CORRUPT_COMPONENT **ppIEnumCorruption,
            /* [out] */ DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *RepairCorruptComponents )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cOperations,
            /* [size_is][in] */ IDefinitionIdentity *rgDefIdentities[  ],
            /* [size_is][in] */ LPWSTR rgReplacementFilePaths[  ],
            /* [size_is][annotation][in] */ 
            _Inout_  DWORD rgPerOpDisposition[  ],
            /* [out] */ DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *RepairCorruptFiles )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cOperations,
            /* [size_is][in] */ IDefinitionIdentity *rgDefIdentities[  ],
            /* [size_is][in] */ LPWSTR rgComponentRelativePaths[  ],
            /* [size_is][in] */ LPWSTR rgReplacementFilePaths[  ],
            /* [size_is][annotation][in] */ 
            _Inout_  DWORD rgPerOpDisposition[  ],
            /* [out] */ DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *pdwDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *Abort )( 
            IStorePendingStoreRepairTransaction * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ LPCWSTR TransactionId,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [out] */ DWORD *pdwDisposition);
        
        END_INTERFACE
    } IStorePendingStoreRepairTransactionVtbl;

    interface IStorePendingStoreRepairTransaction
    {
        CONST_VTBL struct IStorePendingStoreRepairTransactionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStorePendingStoreRepairTransaction_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStorePendingStoreRepairTransaction_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStorePendingStoreRepairTransaction_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStorePendingStoreRepairTransaction_Detect(This,dwFlags,hCancelEvent,pdwDisposition)	\
    ( (This)->lpVtbl -> Detect(This,dwFlags,hCancelEvent,pdwDisposition) ) 

#define IStorePendingStoreRepairTransaction_EnumCorruptComponents(This,dwFlags,ppIEnumCorruption,pdwDisposition)	\
    ( (This)->lpVtbl -> EnumCorruptComponents(This,dwFlags,ppIEnumCorruption,pdwDisposition) ) 

#define IStorePendingStoreRepairTransaction_EnumCorruptFiles(This,dwFlags,ppIEnumCorruption,pdwDisposition)	\
    ( (This)->lpVtbl -> EnumCorruptFiles(This,dwFlags,ppIEnumCorruption,pdwDisposition) ) 

#define IStorePendingStoreRepairTransaction_RepairCorruptComponents(This,dwFlags,cOperations,rgDefIdentities,rgReplacementFilePaths,rgPerOpDisposition,pdwDisposition)	\
    ( (This)->lpVtbl -> RepairCorruptComponents(This,dwFlags,cOperations,rgDefIdentities,rgReplacementFilePaths,rgPerOpDisposition,pdwDisposition) ) 

#define IStorePendingStoreRepairTransaction_RepairCorruptFiles(This,dwFlags,cOperations,rgDefIdentities,rgComponentRelativePaths,rgReplacementFilePaths,rgPerOpDisposition,pdwDisposition)	\
    ( (This)->lpVtbl -> RepairCorruptFiles(This,dwFlags,cOperations,rgDefIdentities,rgComponentRelativePaths,rgReplacementFilePaths,rgPerOpDisposition,pdwDisposition) ) 

#define IStorePendingStoreRepairTransaction_Commit(This,dwFlags,TransactionId,Progress,pdwDisposition)	\
    ( (This)->lpVtbl -> Commit(This,dwFlags,TransactionId,Progress,pdwDisposition) ) 

#define IStorePendingStoreRepairTransaction_Abort(This,dwFlags,TransactionId,Progress,pdwDisposition)	\
    ( (This)->lpVtbl -> Abort(This,dwFlags,TransactionId,Progress,pdwDisposition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStorePendingStoreRepairTransaction_INTERFACE_DEFINED__ */


#ifndef __IStore2_INTERFACE_DEFINED__
#define __IStore2_INTERFACE_DEFINED__

/* interface IStore2 */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _ISTORE2_ENUMERATE_DEPLOYMENT_REFERENCES_FLAGS
    {
        ISTORE2_ENUMERATE_DEPLOYMENT_REFERENCES_FLAG_INCLUDE_PINS	= 0x1,
        ISTORE2_ENUMERATE_DEPLOYMENT_REFERENCES_FLAG_INCLUDE_INSTALLS	= 0x2,
        ISTORE2_ENUMERATE_DEPLOYMENT_REFERENCES_FLAG_INCLUDE_STAGED_MARKS	= 0x4
    } ;
/* [v1_enum] */ 
enum _ISTORE2_ENUMERATE_COMPONENT_DEPLOYMENTS_FLAGS
    {
        ISTORE2_ENUMERATE_COMPONENT_DEPLOYMENTS_FLAG_ASSEMBLY_NOT_FOUND_RETURNS_NULL	= 0x1
    } ;
/* [v1_enum] */ 
enum _ISTORE2_ENUMERATE_TOP_LEVEL_COMPONENTS_FLAGS
    {
        ISTORE2_ENUMERATE_TOP_LEVEL_COMPONENTS_FLAG_INCLUDE_PINNED	= 0x1,
        ISTORE2_ENUMERATE_TOP_LEVEL_COMPONENTS_FLAG_INCLUDE_INSTALLED	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE2_ENUMERATE_RELATED_COMPONENT_VERSIONS_FLAGS
    {
        ISTORE2_ENUMERATE_RELATED_COMPONENT_VERSIONS_FLAG_INCLUDE_STAGED	= 0x1,
        ISTORE2_ENUMERATE_RELATED_COMPONENT_VERSIONS_FLAG_INCLUDE_PINNED	= 0x2,
        ISTORE2_ENUMERATE_RELATED_COMPONENT_VERSIONS_FLAG_INCLUDE_INSTALLED	= 0x4
    } ;
/* [v1_enum] */ 
enum _ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAGS
    {
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_IF_NOT_STAGED_RETURN_NULL	= 0x2,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_HARD_LINK_MANIFEST	= 0x4,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_ALLOW_NO_KTM	= 0x8,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_PRESTAGE_MISSING_COMPONENTS	= 0x10,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_USE_NO_KTM	= 0x20,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_RUNNING_IN_BUILD_LAB	= 0x40,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_FLUSH_AFTER_STAGE	= 0x80,
        ISTORE2_STAGE_AND_LOCK_COMPONENTS_FLAG_MOVE_MANIFEST	= 0x100
    } ;
/* [v1_enum] */ 
enum _ISTORE2_LOCK_ASSEMBLIES_FLAGS
    {
        ISTORE2_LOCK_ASSEMBLIES_FLAG_NOT_FOUND_RETURNS_NULL	= 0x1,
        ISTORE2_LOCK_ASSEMBLIES_FLAG_ALLOW_NO_KTM	= 0x2,
        ISTORE2_LOCK_ASSEMBLIES_FLAG_LOCK_PATHS	= 0x4,
        ISTORE2_LOCK_ASSEMBLIES_FLAG_DONT_USE_KTM	= 0x8
    } ;
/* [v1_enum] */ 
enum _ISTORE2_GET_ASSEMBLIES_INFORMATION_FLAGS
    {
        ISTORE_GET_ASSEMBLIES_INFORMATION_FLAG_NOT_FOUND_RETURNS_NULL	= 0x1
    } ;
/* [v1_enum] */ 
enum __MIDL_IStore2_0001
    {
        ISTORE2_GET_COMPONENTS_INSTALLED_VERSIONS_DISPOSITION_NOT_INSTALLED	= 1,
        ISTORE2_GET_COMPONENTS_INSTALLED_VERSIONS_DISPOSITION_INSTALLED	= 2,
        ISTORE2_GET_COMPONENTS_INSTALLED_VERSIONS_DISPOSITION_RELATION_WINNER	= 3,
        ISTORE2_GET_COMPONENTS_INSTALLED_VERSIONS_DISPOSITION_RELATION_SUPERSEDED	= 4,
        ISTORE2_GET_COMPONENTS_INSTALLED_VERSIONS_DISPOSITION_RELATION_LATENT	= 5
    } ;
/* [v1_enum] */ 
enum __MIDL_IStore2_0002
    {
        ISTORE2_GET_COMPONENTS_INSTALLED_VERSIONS_FLAG_DETERMINE_RELATION	= 0x1
    } ;
/* [v1_enum] */ 
enum __MIDL_IStore2_0003
    {
        ISTORE2_GET_COMPONENTS_STATUS_STATUS_STAGED	= 0x1,
        ISTORE2_GET_COMPONENTS_STATUS_STATUS_LOCKED	= 0x2,
        ISTORE2_GET_COMPONENTS_STATUS_STATUS_PINNED	= 0x4,
        ISTORE2_GET_COMPONENTS_STATUS_STATUS_INSTALLED	= 0x8,
        ISTORE2_GET_COMPONENTS_STATUS_STATUS_PRESTAGED	= 0x10
    } ;

enum __MIDL_IStore2_0004
    {
        ISTORE2_TRANSACT2_FLAG_SUPRESS_PROJECTION	= 0x1,
        ISTORE2_TRANSACT2_FLAG_DO_NOT_MERGE_TRANSACTIONS	= 0x2,
        ISTORE2_TRANSACT2_FLAG_DO_NOT_FAIL_ON_PENDING_RESOLUTION	= 0x4,
        ISTORE2_TRANSACT2_FLAG_DO_NOT_FAIL_ON_PENDING_REPAIR	= 0x8,
        ISTORE2_TRANSACT2_FLAG_DO_NOT_FAIL_ON_PENDING_ROLLBACK	= 0x10,
        ISTORE2_TRANSACT2_FLAG_COLDPATCH_FOR_HOTPATCH	= 0x40,
        ISTORE2_TRANSACT2_FLAG_PERFORM_PRELIM_VALIDITY_CHECKS	= 0x80,
        ISTORE2_TRANSACT2_FLAG_SKIP_FILE_INSTALLER	= 0x100,
        ISTORE2_TRANSACT2_FLAG_SUPRESS_FILE_STAGING	= 0x200
    } ;

enum __MIDL_IStore2_0005
    {
        ISTORE2_TRANSACT2_DISPOSITION_MERGE_REQUIRED	= 0x10000,
        ISTORE2_TRANSACT2_DISPOSITION_RESOLUTION_REQUIRED	= 0x20000,
        ISTORE2_TRANSACT2_DISPOSITION_PENDING_REPAIR	= 0x40000,
        ISTORE2_TRANSACT2_DISPOSITION_PENDING_ROLLBACK	= 0x80000
    } ;

enum __MIDL_IStore2_0006
    {
        ISTORE2_REPLACE_MACROS_FLAG_USE_PHYSICAL_PATHS	= 0x1,
        ISTORE2_REPLACE_MACROS_FLAG_SERVICING_AWARE	= 0x2
    } ;
typedef struct _ISTORE2_REPAIR_COMPONENT
    {
    DWORD cbSize;
    DWORD dwFlags;
    IDefinitionIdentity *pIComponentIdentity;
    } 	ISTORE2_REPAIR_COMPONENT;

typedef struct _ISTORE2_REPAIR_COMPONENT *PISTORE2_REPAIR_COMPONENT;

typedef const ISTORE2_REPAIR_COMPONENT *PCISTORE2_REPAIR_COMPONENT;

/* [v1_enum] */ 
enum _ISTORE2_REPAIR_COMPONENT_FLAGS
    {
        ISTORE2_REPAIR_COMPONENT_FLAG_DONT_FAIL_IF_NOT_PRESENT	= 0x1,
        ISTORE2_REPAIR_COMPONENT_FLAG_APPLY_SERVICING_SEMANTICS	= 0x2
    } ;
/* [v1_enum] */ 
enum _ISTORE2_REPAIR_COMPONENT_DISPOSITIONS
    {
        ISTORE2_REPAIR_COMPONENT_DISPOSITION_QUEUED	= 1,
        ISTORE2_REPAIR_COMPONENT_DISPOSITION_NO_SUCH_COMPONENT	= 2
    } ;
typedef /* [public][public][public][public][v1_enum] */ 
enum __MIDL_IStore2_0007
    {
        STORE_REPAIR_OP_INVALID	= 0,
        STORE_REPAIR_OP_COMPONENT	= 1
    } 	STORE_REPAIR_OP_TYPE;

typedef /* [switch_type] */ union _STORE_REPAIR_OPERATION_DATA
    {
    /* [case()] */ PCISTORE2_REPAIR_COMPONENT Component;
    } 	STORE_REPAIR_OPERATION_DATA;

typedef /* [switch_type] */ union _STORE_REPAIR_OPERATION_DATA *PSTORE_REPAIR_OPERATION_DATA;

C_ASSERT(sizeof(STORE_REPAIR_OPERATION_DATA) == sizeof(PVOID));
typedef struct _STORE_REPAIR_OPERATION
    {
    STORE_REPAIR_OP_TYPE Operation;
    /* [switch_is] */ STORE_REPAIR_OPERATION_DATA Data;
    } 	STORE_REPAIR_OPERATION;

typedef struct _STORE_REPAIR_OPERATION *PSTORE_REPAIR_OPERATION;

/* [v1_enum] */ 
enum _ISTORE2_GET_DEPLOYMENTS_CLOSURE_STATUS_FLAGS
    {
        ISTORE2_GET_DEPLOYMENTS_CLOSURE_STATUS_FLAG_DONT_FAIL_IF_NOT_PRESENT	= 0x1
    } ;
/* [v1_enum] */ 
enum _ISTORE2_GET_DEPLOYMENTS_CLOSURE_STATUS_RESULT_FLAGS
    {
        ISTORE2_GET_DEPLOYMENTS_CLOSURE_STATUS_RESULT_FLAG_CLOSURE_COMPLETE	= 0x1,
        ISTORE2_GET_DEPLOYMENTS_CLOSURE_STATUS_RESULT_FLAG_FILES_COMPLETE	= 0x2,
        ISTORE2_GET_DEPLOYMENTS_CLOSURE_STATUS_RESULT_NOT_PRESENT	= 0xffff0000
    } ;
/* [v1_enum] */ 
enum _ISTORE2_GET_DEPLOYMENTS_CLOSURE_FLAGS
    {
        ISTORE2_GET_DEPLOYMENTS_CLOSURE_FLAG_DONT_FAIL_IF_NOT_PRESENT	= 0x1
    } ;
/* [v1_enum] */ 
enum _ISTORE2_REPAIR_COMPONENTSTORE_DISPOSITIONS
    {
        ISTORE2_REPAIR_COMPONENTSTORE_DISPOSITION_CREATED	= 1
    } ;

EXTERN_C const IID IID_IStore2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a817521b-2b43-489f-8b84-67aceeab24a8")
    IStore2 : public IStore
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateDeploymentReferences( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [in] */ IDefinitionAppId *Deployment,
            /* [iid_is][out] */ IUnknown **ppEnumeration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateComponentDeployments( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [in] */ IDefinitionIdentity *Component,
            /* [full][in] */ IReferenceAppId *DeploymentFilter,
            /* [iid_is][out] */ IUnknown **ppEnumeration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateTopLevelComponents( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [full][in] */ IReferenceAppId *TlcFilter,
            /* [iid_is][out] */ IUnknown **ppEnumeration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateRelatedComponentVersions( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *pComponentIdentity,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppQueryResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StageAndLockComponents( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [in] */ REFIID ManifestsInterface,
            /* [length_is][in] */ IDefinitionIdentity *ComponentIdentities[  ],
            /* [length_is][out] */ PVOID ComponentLockCookies[  ],
            /* [length_is][optional][in] */ LPCWSTR ManifestPaths[  ],
            /* [iid_is][length_is][optional][out] */ IUnknown *ComponentManifests[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpgradeComponentLocksToPathLocks( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [length_is][in] */ PVOID LockCookies[  ],
            /* [annotation][length_is][out] */ 
            _Out_writes_(ComponentCount)  LPWSTR ComponentPaths[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LockAssemblies( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [length_is][in] */ IDefinitionIdentity *ComponentIdentities[  ],
            /* [length_is][out] */ PVOID LockCookies[  ],
            /* [length_is][optional][out] */ LPCWSTR AssemblyPaths[  ]) = 0;
        
        virtual void STDMETHODCALLTYPE ReleaseAssemblyLocks( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T Components,
            /* [length_is][in] */ PVOID LockCookies[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAssembliesInformation( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [length_is][in] */ IDefinitionIdentity *ComponentIdentites[  ],
            /* [in] */ REFIID Interface,
            /* [iid_is][length_is][out] */ IUnknown *ppOutputs[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreComponentsCompleteFromIdentities( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [length_is][in] */ IDefinitionIdentity *rgComponents[  ],
            /* [length_is][out] */ BOOL rgfAreComplete[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AreComponentsCompleteFromCookies( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [length_is][in] */ PVOID rgComponentCookies[  ],
            /* [length_is][out] */ BOOL rgfAreComplete[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentsInstalledVersions( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IDefinitionIdentity *rgComponents[  ],
            /* [size_is][out] */ DWORD rgdwDispositions[  ],
            /* [size_is][out] */ COMPONENT_VERSION rgVersions[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentsStatus( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IDefinitionIdentity *rgComponents[  ],
            /* [size_is][in] */ DWORD rgdwStatus[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Transact2( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ LPCWSTR TransactionId,
            /* [in] */ SIZE_T cOperation,
            /* [size_is][in] */ const STORE_TXN_OPERATION rgOperations[  ],
            /* [size_is][out] */ ULONG rgDispositions[  ],
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pulOverallDisposition,
            /* [out] */ IStorePendingTransaction **ppPendingTransaction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceMacros( 
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IDefinitionIdentity *pComponent,
            /* [in] */ LPCWSTR pszStringWithVariables,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszReplacedString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RepairComponents( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cOperations,
            /* [size_is][in] */ const STORE_REPAIR_OPERATION Operations[  ],
            /* [size_is][out] */ DWORD rgDispositions[  ],
            /* [out] */ DWORD *OverallDisposition,
            /* [out] */ IStorePendingRepairTransaction **ppPendingRepair) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeploymentsClosureStatus( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cDeployments,
            /* [size_is][in] */ IDefinitionAppId *rgDeployments[  ],
            /* [size_is][out] */ DWORD rgClosureStatuses[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeploymentsClosure( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cDeployments,
            /* [size_is][in] */ IDefinitionAppId *rgDeployments[  ],
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppClosureInterface) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RepairComponentStore( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD *OverallDisposition,
            /* [out] */ IStorePendingStoreRepairTransaction **ppPendingRepair) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResetManifestCache( 
            /* [in] */ DWORD dwFlags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStore2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStore2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStore2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStore2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Transact )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  SIZE_T cOperation,
            /* [annotation][size_is][in] */ 
            _In_reads_(cOperation)  const STORE_TXN_OPERATION rgOperations[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cOperation)  ULONG rgDispositions[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cOperation)  HRESULT rgResults[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *BindReferenceToAssembly )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeploymentsToIgnore,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeploymentsToIgnore)  IDefinitionIdentity *rgpIDefinitionIdentity_DeploymentsToIgnore[  ],
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppAssembly);
        
        HRESULT ( STDMETHODCALLTYPE *CalculateDelimiterOfDeploymentsBasedOnQuota )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  SIZE_T cDeployments,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeployments)  IDefinitionAppId *rgpIDefinitionAppId_Deployments[  ],
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_  ULONGLONG ulonglongQuote,
            /* [annotation][out] */ 
            _Out_  SIZE_T *Delimiter,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *SizeSharedWithExternalDeployment,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *SizeConsumedByInputDeploymentArray);
        
        HRESULT ( STDMETHODCALLTYPE *BindDefinitions )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  SIZE_T DefinitionCount,
            /* [annotation][length_is][in] */ 
            _In_reads_(DefinitionCount)  IDefinitionIdentity *rgpIDefinitionIdentity[  ],
            /* [annotation][in] */ 
            _In_  SIZE_T cDeploymentsToIgnore,
            /* [annotation][length_is][in] */ 
            _In_reads_(cDeploymentsToIgnore)  IDefinitionIdentity *rgpIDefinitionIdentity_DeploymentsToIgnore[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(DefinitionCount)  ISTORE_BINDING_RESULT rgBindingResults[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssemblyInformation )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pIDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppManifest);
        
        HRESULT ( STDMETHODCALLTYPE *EnumAssemblies )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][unique][in] */ 
            _In_opt_  IReferenceIdentity *pIReferenceIdentity_ToMatch,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstallationReferences )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResults);
        
        HRESULT ( STDMETHODCALLTYPE *LockAssemblyPath )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  LPVOID *ppvCookie,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPayloadRoot);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseAssemblyPath )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  LPVOID pvCookie);
        
        HRESULT ( STDMETHODCALLTYPE *QueryChangeID )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][out] */ 
            _Out_  ULONGLONG *pullChangeId);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategories )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IReferenceIdentity *pIReferenceIdentity_ToMatch,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubcategories )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pCategoryId,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszSubcategoryPathPattern,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategoryInstances )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pCategoryId,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszSubcategoryPath,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeploymentProperty )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pDeploymentInPackage,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE InstallReference,
            /* [annotation][in] */ 
            _In_  REFCLSID PropertySet,
            /* [annotation][in] */ 
            _In_  LPCWSTR pcwszPropertyName,
            /* [annotation][retval][out] */ 
            _Out_  BLOB *PropertyValue);
        
        HRESULT ( STDMETHODCALLTYPE *LockApplicationPath )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pIdentity,
            /* [annotation][out] */ 
            _Out_  LPVOID *ppvCookie,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPayloadRoot);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseApplicationPath )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  LPVOID Cookie);
        
        HRESULT ( STDMETHODCALLTYPE *EnumPrivateFiles )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pApplicationId,
            /* [annotation][in] */ 
            _In_  IDefinitionIdentity *pDefinitionIdentity,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstallerDeploymentMetadata )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_opt_  IReferenceAppId *pDeploymentFilter,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumInstallerDeploymentMetadataProperties )( 
            IStore2 * This,
            /* [annotation][in] */ 
            _In_  DWORD dwFlags,
            /* [annotation][in] */ 
            _In_  PCSTORE_ASSEMBLY_INSTALLATION_REFERENCE pReference,
            /* [annotation][in] */ 
            _In_  IDefinitionAppId *pAppidDeployment,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][iid_is][out] */ 
            _Out_  IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateDeploymentReferences )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [in] */ IDefinitionAppId *Deployment,
            /* [iid_is][out] */ IUnknown **ppEnumeration);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateComponentDeployments )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [in] */ IDefinitionIdentity *Component,
            /* [full][in] */ IReferenceAppId *DeploymentFilter,
            /* [iid_is][out] */ IUnknown **ppEnumeration);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateTopLevelComponents )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ REFIID riid,
            /* [full][in] */ IReferenceAppId *TlcFilter,
            /* [iid_is][out] */ IUnknown **ppEnumeration);
        
        HRESULT ( STDMETHODCALLTYPE *EnumerateRelatedComponentVersions )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *pComponentIdentity,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppQueryResult);
        
        HRESULT ( STDMETHODCALLTYPE *StageAndLockComponents )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [in] */ REFIID ManifestsInterface,
            /* [length_is][in] */ IDefinitionIdentity *ComponentIdentities[  ],
            /* [length_is][out] */ PVOID ComponentLockCookies[  ],
            /* [length_is][optional][in] */ LPCWSTR ManifestPaths[  ],
            /* [iid_is][length_is][optional][out] */ IUnknown *ComponentManifests[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *UpgradeComponentLocksToPathLocks )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [length_is][in] */ PVOID LockCookies[  ],
            /* [annotation][length_is][out] */ 
            _Out_writes_(ComponentCount)  LPWSTR ComponentPaths[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *LockAssemblies )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [length_is][in] */ IDefinitionIdentity *ComponentIdentities[  ],
            /* [length_is][out] */ PVOID LockCookies[  ],
            /* [length_is][optional][out] */ LPCWSTR AssemblyPaths[  ]);
        
        void ( STDMETHODCALLTYPE *ReleaseAssemblyLocks )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T Components,
            /* [length_is][in] */ PVOID LockCookies[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetAssembliesInformation )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T ComponentCount,
            /* [length_is][in] */ IDefinitionIdentity *ComponentIdentites[  ],
            /* [in] */ REFIID Interface,
            /* [iid_is][length_is][out] */ IUnknown *ppOutputs[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *AreComponentsCompleteFromIdentities )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [length_is][in] */ IDefinitionIdentity *rgComponents[  ],
            /* [length_is][out] */ BOOL rgfAreComplete[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *AreComponentsCompleteFromCookies )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [length_is][in] */ PVOID rgComponentCookies[  ],
            /* [length_is][out] */ BOOL rgfAreComplete[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentsInstalledVersions )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IDefinitionIdentity *rgComponents[  ],
            /* [size_is][out] */ DWORD rgdwDispositions[  ],
            /* [size_is][out] */ COMPONENT_VERSION rgVersions[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentsStatus )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IDefinitionIdentity *rgComponents[  ],
            /* [size_is][in] */ DWORD rgdwStatus[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *Transact2 )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ LPCWSTR TransactionId,
            /* [in] */ SIZE_T cOperation,
            /* [size_is][in] */ const STORE_TXN_OPERATION rgOperations[  ],
            /* [size_is][out] */ ULONG rgDispositions[  ],
            /* [annotation][out] */ 
            _Out_opt_  DWORD *pulOverallDisposition,
            /* [out] */ IStorePendingTransaction **ppPendingTransaction);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceMacros )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [full][in] */ IDefinitionIdentity *pComponent,
            /* [in] */ LPCWSTR pszStringWithVariables,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszReplacedString);
        
        HRESULT ( STDMETHODCALLTYPE *RepairComponents )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cOperations,
            /* [size_is][in] */ const STORE_REPAIR_OPERATION Operations[  ],
            /* [size_is][out] */ DWORD rgDispositions[  ],
            /* [out] */ DWORD *OverallDisposition,
            /* [out] */ IStorePendingRepairTransaction **ppPendingRepair);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeploymentsClosureStatus )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cDeployments,
            /* [size_is][in] */ IDefinitionAppId *rgDeployments[  ],
            /* [size_is][out] */ DWORD rgClosureStatuses[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeploymentsClosure )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cDeployments,
            /* [size_is][in] */ IDefinitionAppId *rgDeployments[  ],
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppClosureInterface);
        
        HRESULT ( STDMETHODCALLTYPE *RepairComponentStore )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD *OverallDisposition,
            /* [out] */ IStorePendingStoreRepairTransaction **ppPendingRepair);
        
        HRESULT ( STDMETHODCALLTYPE *ResetManifestCache )( 
            IStore2 * This,
            /* [in] */ DWORD dwFlags);
        
        END_INTERFACE
    } IStore2Vtbl;

    interface IStore2
    {
        CONST_VTBL struct IStore2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStore2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStore2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStore2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStore2_Transact(This,cOperation,rgOperations,rgDispositions,rgResults)	\
    ( (This)->lpVtbl -> Transact(This,cOperation,rgOperations,rgDispositions,rgResults) ) 

#define IStore2_BindReferenceToAssembly(This,dwFlags,pIReferenceIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,riid,ppAssembly)	\
    ( (This)->lpVtbl -> BindReferenceToAssembly(This,dwFlags,pIReferenceIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,riid,ppAssembly) ) 

#define IStore2_CalculateDelimiterOfDeploymentsBasedOnQuota(This,dwFlags,cDeployments,rgpIDefinitionAppId_Deployments,pReference,ulonglongQuote,Delimiter,SizeSharedWithExternalDeployment,SizeConsumedByInputDeploymentArray)	\
    ( (This)->lpVtbl -> CalculateDelimiterOfDeploymentsBasedOnQuota(This,dwFlags,cDeployments,rgpIDefinitionAppId_Deployments,pReference,ulonglongQuote,Delimiter,SizeSharedWithExternalDeployment,SizeConsumedByInputDeploymentArray) ) 

#define IStore2_BindDefinitions(This,dwFlags,DefinitionCount,rgpIDefinitionIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,rgBindingResults)	\
    ( (This)->lpVtbl -> BindDefinitions(This,dwFlags,DefinitionCount,rgpIDefinitionIdentity,cDeploymentsToIgnore,rgpIDefinitionIdentity_DeploymentsToIgnore,rgBindingResults) ) 

#define IStore2_GetAssemblyInformation(This,dwFlags,pIDefinitionIdentity,riid,ppManifest)	\
    ( (This)->lpVtbl -> GetAssemblyInformation(This,dwFlags,pIDefinitionIdentity,riid,ppManifest) ) 

#define IStore2_EnumAssemblies(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumAssemblies(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppQueryResult) ) 

#define IStore2_EnumFiles(This,dwFlags,pDefinitionIdentity,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumFiles(This,dwFlags,pDefinitionIdentity,riid,ppQueryResult) ) 

#define IStore2_EnumInstallationReferences(This,dwFlags,pDefinitionIdentity,riid,ppQueryResults)	\
    ( (This)->lpVtbl -> EnumInstallationReferences(This,dwFlags,pDefinitionIdentity,riid,ppQueryResults) ) 

#define IStore2_LockAssemblyPath(This,dwFlags,pDefinitionIdentity,ppvCookie,ppszPayloadRoot)	\
    ( (This)->lpVtbl -> LockAssemblyPath(This,dwFlags,pDefinitionIdentity,ppvCookie,ppszPayloadRoot) ) 

#define IStore2_ReleaseAssemblyPath(This,pvCookie)	\
    ( (This)->lpVtbl -> ReleaseAssemblyPath(This,pvCookie) ) 

#define IStore2_QueryChangeID(This,pDefinitionIdentity,pullChangeId)	\
    ( (This)->lpVtbl -> QueryChangeID(This,pDefinitionIdentity,pullChangeId) ) 

#define IStore2_EnumCategories(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumCategories(This,dwFlags,pIReferenceIdentity_ToMatch,riid,ppIUnknown) ) 

#define IStore2_EnumSubcategories(This,dwFlags,pCategoryId,pszSubcategoryPathPattern,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumSubcategories(This,dwFlags,pCategoryId,pszSubcategoryPathPattern,riid,ppIUnknown) ) 

#define IStore2_EnumCategoryInstances(This,dwFlags,pCategoryId,pszSubcategoryPath,riid,ppUnknown)	\
    ( (This)->lpVtbl -> EnumCategoryInstances(This,dwFlags,pCategoryId,pszSubcategoryPath,riid,ppUnknown) ) 

#define IStore2_GetDeploymentProperty(This,dwFlags,pDeploymentInPackage,InstallReference,PropertySet,pcwszPropertyName,PropertyValue)	\
    ( (This)->lpVtbl -> GetDeploymentProperty(This,dwFlags,pDeploymentInPackage,InstallReference,PropertySet,pcwszPropertyName,PropertyValue) ) 

#define IStore2_LockApplicationPath(This,dwFlags,pIdentity,ppvCookie,ppszPayloadRoot)	\
    ( (This)->lpVtbl -> LockApplicationPath(This,dwFlags,pIdentity,ppvCookie,ppszPayloadRoot) ) 

#define IStore2_ReleaseApplicationPath(This,Cookie)	\
    ( (This)->lpVtbl -> ReleaseApplicationPath(This,Cookie) ) 

#define IStore2_EnumPrivateFiles(This,dwFlags,pApplicationId,pDefinitionIdentity,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumPrivateFiles(This,dwFlags,pApplicationId,pDefinitionIdentity,riid,ppQueryResult) ) 

#define IStore2_EnumInstallerDeploymentMetadata(This,dwFlags,pReference,pDeploymentFilter,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumInstallerDeploymentMetadata(This,dwFlags,pReference,pDeploymentFilter,riid,ppQueryResult) ) 

#define IStore2_EnumInstallerDeploymentMetadataProperties(This,dwFlags,pReference,pAppidDeployment,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumInstallerDeploymentMetadataProperties(This,dwFlags,pReference,pAppidDeployment,riid,ppQueryResult) ) 


#define IStore2_EnumerateDeploymentReferences(This,dwFlags,riid,Deployment,ppEnumeration)	\
    ( (This)->lpVtbl -> EnumerateDeploymentReferences(This,dwFlags,riid,Deployment,ppEnumeration) ) 

#define IStore2_EnumerateComponentDeployments(This,dwFlags,riid,Component,DeploymentFilter,ppEnumeration)	\
    ( (This)->lpVtbl -> EnumerateComponentDeployments(This,dwFlags,riid,Component,DeploymentFilter,ppEnumeration) ) 

#define IStore2_EnumerateTopLevelComponents(This,dwFlags,riid,TlcFilter,ppEnumeration)	\
    ( (This)->lpVtbl -> EnumerateTopLevelComponents(This,dwFlags,riid,TlcFilter,ppEnumeration) ) 

#define IStore2_EnumerateRelatedComponentVersions(This,dwFlags,pComponentIdentity,riid,ppQueryResult)	\
    ( (This)->lpVtbl -> EnumerateRelatedComponentVersions(This,dwFlags,pComponentIdentity,riid,ppQueryResult) ) 

#define IStore2_StageAndLockComponents(This,dwFlags,ComponentCount,ManifestsInterface,ComponentIdentities,ComponentLockCookies,ManifestPaths,ComponentManifests)	\
    ( (This)->lpVtbl -> StageAndLockComponents(This,dwFlags,ComponentCount,ManifestsInterface,ComponentIdentities,ComponentLockCookies,ManifestPaths,ComponentManifests) ) 

#define IStore2_UpgradeComponentLocksToPathLocks(This,dwFlags,ComponentCount,LockCookies,ComponentPaths)	\
    ( (This)->lpVtbl -> UpgradeComponentLocksToPathLocks(This,dwFlags,ComponentCount,LockCookies,ComponentPaths) ) 

#define IStore2_LockAssemblies(This,dwFlags,ComponentCount,ComponentIdentities,LockCookies,AssemblyPaths)	\
    ( (This)->lpVtbl -> LockAssemblies(This,dwFlags,ComponentCount,ComponentIdentities,LockCookies,AssemblyPaths) ) 

#define IStore2_ReleaseAssemblyLocks(This,dwFlags,Components,LockCookies)	\
    ( (This)->lpVtbl -> ReleaseAssemblyLocks(This,dwFlags,Components,LockCookies) ) 

#define IStore2_GetAssembliesInformation(This,dwFlags,ComponentCount,ComponentIdentites,Interface,ppOutputs)	\
    ( (This)->lpVtbl -> GetAssembliesInformation(This,dwFlags,ComponentCount,ComponentIdentites,Interface,ppOutputs) ) 

#define IStore2_AreComponentsCompleteFromIdentities(This,dwFlags,cComponents,rgComponents,rgfAreComplete)	\
    ( (This)->lpVtbl -> AreComponentsCompleteFromIdentities(This,dwFlags,cComponents,rgComponents,rgfAreComplete) ) 

#define IStore2_AreComponentsCompleteFromCookies(This,dwFlags,cComponents,rgComponentCookies,rgfAreComplete)	\
    ( (This)->lpVtbl -> AreComponentsCompleteFromCookies(This,dwFlags,cComponents,rgComponentCookies,rgfAreComplete) ) 

#define IStore2_GetComponentsInstalledVersions(This,dwFlags,cComponents,rgComponents,rgdwDispositions,rgVersions)	\
    ( (This)->lpVtbl -> GetComponentsInstalledVersions(This,dwFlags,cComponents,rgComponents,rgdwDispositions,rgVersions) ) 

#define IStore2_GetComponentsStatus(This,dwFlags,cComponents,rgComponents,rgdwStatus)	\
    ( (This)->lpVtbl -> GetComponentsStatus(This,dwFlags,cComponents,rgComponents,rgdwStatus) ) 

#define IStore2_Transact2(This,dwFlags,TransactionId,cOperation,rgOperations,rgDispositions,pulOverallDisposition,ppPendingTransaction)	\
    ( (This)->lpVtbl -> Transact2(This,dwFlags,TransactionId,cOperation,rgOperations,rgDispositions,pulOverallDisposition,ppPendingTransaction) ) 

#define IStore2_ReplaceMacros(This,dwFlags,pComponent,pszStringWithVariables,ppszReplacedString)	\
    ( (This)->lpVtbl -> ReplaceMacros(This,dwFlags,pComponent,pszStringWithVariables,ppszReplacedString) ) 

#define IStore2_RepairComponents(This,dwFlags,cOperations,Operations,rgDispositions,OverallDisposition,ppPendingRepair)	\
    ( (This)->lpVtbl -> RepairComponents(This,dwFlags,cOperations,Operations,rgDispositions,OverallDisposition,ppPendingRepair) ) 

#define IStore2_GetDeploymentsClosureStatus(This,dwFlags,cDeployments,rgDeployments,rgClosureStatuses)	\
    ( (This)->lpVtbl -> GetDeploymentsClosureStatus(This,dwFlags,cDeployments,rgDeployments,rgClosureStatuses) ) 

#define IStore2_GetDeploymentsClosure(This,dwFlags,cDeployments,rgDeployments,riid,ppClosureInterface)	\
    ( (This)->lpVtbl -> GetDeploymentsClosure(This,dwFlags,cDeployments,rgDeployments,riid,ppClosureInterface) ) 

#define IStore2_RepairComponentStore(This,dwFlags,OverallDisposition,ppPendingRepair)	\
    ( (This)->lpVtbl -> RepairComponentStore(This,dwFlags,OverallDisposition,ppPendingRepair) ) 

#define IStore2_ResetManifestCache(This,dwFlags)	\
    ( (This)->lpVtbl -> ResetManifestCache(This,dwFlags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStore2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0026 */
/* [local] */ 

typedef struct _STORE_PENDING_TRANSACTION
    {
    DWORD dwFlags;
    GUID guidDeploymentEngine;
    LPWSTR pszTransactionId;
    ULONG ulAttemptCount;
    HRESULT hrLastErrorCode;
    LPWSTR pszDiagnosabilityString;
    } 	STORE_PENDING_TRANSACTION;

typedef struct _STORE_PENDING_TRANSACTION *PSTORE_PENDING_TRANSACTION;

typedef struct _STORE_ASSEMBLY_WITH_REFERENCE
    {
    DWORD dwFlags;
    IDefinitionIdentity *pIdentity;
    LPWSTR pszIdentifier;
    LPWSTR pszNonCanonicalData;
    } 	STORE_ASSEMBLY_WITH_REFERENCE;

typedef struct _STORE_ASSEMBLY_WITH_REFERENCE *PSTORE_ASSEMBLY_WITH_REFERENCE;

typedef struct _STORE_PENDING_TRANSACTION2
    {
    DWORD dwFlags;
    GUID guidDeploymentEngine;
    LPWSTR pszTransactionId;
    ULONG ulAttemptCount;
    HRESULT hrLastErrorCode;
    LPWSTR pszDiagnosabilityString;
    STORE_ASSEMBLY_WITH_REFERENCE FailingDeployment;
    } 	STORE_PENDING_TRANSACTION2;

typedef struct _STORE_PENDING_TRANSACTION2 *PSTORE_PENDING_TRANSACTION2;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0026_v0_0_s_ifspec;

#ifndef __IEnumSTORE_PENDING_TRANSACTION_INTERFACE_DEFINED__
#define __IEnumSTORE_PENDING_TRANSACTION_INTERFACE_DEFINED__

/* interface IEnumSTORE_PENDING_TRANSACTION */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_PENDING_TRANSACTION;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f5ccdf48-f3cc-48c1-9c11-3d9d1664c89d")
    IEnumSTORE_PENDING_TRANSACTION : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_PENDING_TRANSACTION rgElements[  ],
            /* [out] */ SIZE_T *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T cElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_PENDING_TRANSACTION **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_PENDING_TRANSACTIONVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_PENDING_TRANSACTION * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_PENDING_TRANSACTION * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_PENDING_TRANSACTION * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_PENDING_TRANSACTION * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_PENDING_TRANSACTION rgElements[  ],
            /* [out] */ SIZE_T *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_PENDING_TRANSACTION * This,
            /* [in] */ SIZE_T cElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_PENDING_TRANSACTION * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_PENDING_TRANSACTION * This,
            /* [out] */ IEnumSTORE_PENDING_TRANSACTION **ppenum);
        
        END_INTERFACE
    } IEnumSTORE_PENDING_TRANSACTIONVtbl;

    interface IEnumSTORE_PENDING_TRANSACTION
    {
        CONST_VTBL struct IEnumSTORE_PENDING_TRANSACTIONVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_PENDING_TRANSACTION_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_PENDING_TRANSACTION_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_PENDING_TRANSACTION_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_PENDING_TRANSACTION_Next(This,celt,rgElements,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pcFetched) ) 

#define IEnumSTORE_PENDING_TRANSACTION_Skip(This,cElements)	\
    ( (This)->lpVtbl -> Skip(This,cElements) ) 

#define IEnumSTORE_PENDING_TRANSACTION_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_PENDING_TRANSACTION_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_PENDING_TRANSACTION_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_PENDING_TRANSACTION2_INTERFACE_DEFINED__
#define __IEnumSTORE_PENDING_TRANSACTION2_INTERFACE_DEFINED__

/* interface IEnumSTORE_PENDING_TRANSACTION2 */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_PENDING_TRANSACTION2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45ecfddb-ffbf-43a3-a998-90ba27e85014")
    IEnumSTORE_PENDING_TRANSACTION2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_PENDING_TRANSACTION2 rgElements[  ],
            /* [out] */ SIZE_T *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T cElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_PENDING_TRANSACTION2 **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_PENDING_TRANSACTION2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_PENDING_TRANSACTION2 rgElements[  ],
            /* [out] */ SIZE_T *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This,
            /* [in] */ SIZE_T cElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_PENDING_TRANSACTION2 * This,
            /* [out] */ IEnumSTORE_PENDING_TRANSACTION2 **ppenum);
        
        END_INTERFACE
    } IEnumSTORE_PENDING_TRANSACTION2Vtbl;

    interface IEnumSTORE_PENDING_TRANSACTION2
    {
        CONST_VTBL struct IEnumSTORE_PENDING_TRANSACTION2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_PENDING_TRANSACTION2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_PENDING_TRANSACTION2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_PENDING_TRANSACTION2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_PENDING_TRANSACTION2_Next(This,celt,rgElements,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pcFetched) ) 

#define IEnumSTORE_PENDING_TRANSACTION2_Skip(This,cElements)	\
    ( (This)->lpVtbl -> Skip(This,cElements) ) 

#define IEnumSTORE_PENDING_TRANSACTION2_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_PENDING_TRANSACTION2_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_PENDING_TRANSACTION2_INTERFACE_DEFINED__ */


#ifndef __IAdvancedInstallerAwareStore_INTERFACE_DEFINED__
#define __IAdvancedInstallerAwareStore_INTERFACE_DEFINED__

/* interface IAdvancedInstallerAwareStore */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _IADVINSTAWARESTORE_RESOLVE_PENDING_FLAGS
    {
        IADVINSTAWARESTORE_RESOLVE_PENDING_FLAG_ATTEMPT_ROLLBACK_ON_FAILURE	= 0x1,
        IADVINSTAWARESTORE_RESOLVE_PENDING_FLAG_DONT_FAIL_IF_PRIMITIVES_PENDING	= 0x2,
        IADVINSTAWARESTORE_RESOLVE_PENDING_FLAG_QUERY_NECESSITY_ONLY	= 0x4,
        IADVINSTAWARESTORE_RESOLVE_PENDING_FLAG_INDICATE_PRIMITIVE_ROLLBACK	= 0x8
    } ;
/* [v1_enum] */ 
enum _IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITIONS
    {
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_COMPLETE	= 1,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_NONE_TO_RESOLVE_THAT_PHASE	= 2,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_NO_MORE_TO_RESOLVE	= 3,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_FAILED_ROLLBACK_SUCCESSFUL	= 4,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_FAILED_ROLLBACK_REQUIRES_REBOOT	= 5,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_PRIMITIVES_STILL_PENDING	= 6,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_FAILED_ROLLBACK_UNSUCCESSFUL	= 7,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_ROLLBACK_COMPLETE	= 8,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_NECESSARY	= 9,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_ROLLBACK_FAILED	= 10,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_PRIMITIVES_FAILED	= 11,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_INSTALLERS_FAILED	= 12,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_INSTALLER_REQUIRES_REBOOT	= 0x10000,
        IADVINSTAWARESTORE_RESOLVE_PENDING_DISPOSITION_PRIMITIVES_ROLLED_BACK	= 0x20000
    } ;
/* [v1_enum] */ 
enum _IADVINSTAWARESTORE_CANCEL_TRANSACTION_FLAGS
    {
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_FLAG_CANCEL_REPAIR	= 0x1,
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_FLAG_ROLL_BACK_ALL	= 0x2,
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_FLAG_FORCE_CANCEL_ALL	= 0x4,
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_FLAG_DONT_FAIL_ON_PENDING_ACTIONS	= 0x8
    } ;
/* [v1_enum] */ 
enum _IADVINSTAWARESTORE_CANCEL_TRANSACTION_DISPOSITIONS
    {
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_DISPOSITION_CANCELLED	= 1,
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_DISPOSITION_ROLLBACK_PENDING	= 2,
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_DISPOSITION_ROLLED_BACK	= 3,
        IADVINSTAWARESTORE_CANCEL_TRANSACTION_DISPOSITION_FAIL_OPERATIONS_PENDED	= 4
    } ;

EXTERN_C const IID IID_IAdvancedInstallerAwareStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bfbc5504-dfa9-41c7-af0d-db154e31c259")
    IAdvancedInstallerAwareStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResolvePendingTransactions( 
            /* [in] */ DWORD Flags,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [in] */ ULONG ResolutionPhase,
            /* [full][out] */ DWORD *Disposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumeratePendingTransactions( 
            /* [in] */ DWORD Flags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **Enumeration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T TransactionCount,
            /* [length_is][in] */ const LPCWSTR TransactionId[  ],
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [full][out] */ DWORD *Disposition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAdvancedInstallerAwareStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAdvancedInstallerAwareStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAdvancedInstallerAwareStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAdvancedInstallerAwareStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *ResolvePendingTransactions )( 
            IAdvancedInstallerAwareStore * This,
            /* [in] */ DWORD Flags,
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [in] */ ULONG ResolutionPhase,
            /* [full][out] */ DWORD *Disposition);
        
        HRESULT ( STDMETHODCALLTYPE *EnumeratePendingTransactions )( 
            IAdvancedInstallerAwareStore * This,
            /* [in] */ DWORD Flags,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **Enumeration);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            IAdvancedInstallerAwareStore * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T TransactionCount,
            /* [length_is][in] */ const LPCWSTR TransactionId[  ],
            /* [full][in] */ IStorePendingTransactionProgress *Progress,
            /* [full][out] */ DWORD *Disposition);
        
        END_INTERFACE
    } IAdvancedInstallerAwareStoreVtbl;

    interface IAdvancedInstallerAwareStore
    {
        CONST_VTBL struct IAdvancedInstallerAwareStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAdvancedInstallerAwareStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAdvancedInstallerAwareStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAdvancedInstallerAwareStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAdvancedInstallerAwareStore_ResolvePendingTransactions(This,Flags,Progress,ResolutionPhase,Disposition)	\
    ( (This)->lpVtbl -> ResolvePendingTransactions(This,Flags,Progress,ResolutionPhase,Disposition) ) 

#define IAdvancedInstallerAwareStore_EnumeratePendingTransactions(This,Flags,riid,Enumeration)	\
    ( (This)->lpVtbl -> EnumeratePendingTransactions(This,Flags,riid,Enumeration) ) 

#define IAdvancedInstallerAwareStore_Cancel(This,dwFlags,TransactionCount,TransactionId,Progress,Disposition)	\
    ( (This)->lpVtbl -> Cancel(This,dwFlags,TransactionCount,TransactionId,Progress,Disposition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAdvancedInstallerAwareStore_INTERFACE_DEFINED__ */


#ifndef __IMigrateStore_INTERFACE_DEFINED__
#define __IMigrateStore_INTERFACE_DEFINED__

/* interface IMigrateStore */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IMigrateStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5c6a738-fc6a-4204-b4db-b8629b67e655")
    IMigrateStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Migrate( 
            /* [in] */ LPVOID pvReserved) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMigrateStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMigrateStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMigrateStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMigrateStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *Migrate )( 
            IMigrateStore * This,
            /* [in] */ LPVOID pvReserved);
        
        END_INTERFACE
    } IMigrateStoreVtbl;

    interface IMigrateStore
    {
        CONST_VTBL struct IMigrateStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMigrateStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMigrateStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMigrateStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMigrateStore_Migrate(This,pvReserved)	\
    ( (This)->lpVtbl -> Migrate(This,pvReserved) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMigrateStore_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_DEPLOYMENT_METADATA_INTERFACE_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_METADATA_INTERFACE_DEFINED__

/* interface IEnumSTORE_DEPLOYMENT_METADATA */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_DEPLOYMENT_METADATA;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f9fd4090-93db-45c0-af87-624940f19cff")
    IEnumSTORE_DEPLOYMENT_METADATA : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ IDefinitionAppId *AppIds[  ],
            /* [out] */ SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_DEPLOYMENT_METADATA **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_DEPLOYMENT_METADATAVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ IDefinitionAppId *AppIds[  ],
            /* [out] */ SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_DEPLOYMENT_METADATA * This,
            /* [out] */ IEnumSTORE_DEPLOYMENT_METADATA **ppEnum);
        
        END_INTERFACE
    } IEnumSTORE_DEPLOYMENT_METADATAVtbl;

    interface IEnumSTORE_DEPLOYMENT_METADATA
    {
        CONST_VTBL struct IEnumSTORE_DEPLOYMENT_METADATAVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_DEPLOYMENT_METADATA_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_DEPLOYMENT_METADATA_Next(This,celt,AppIds,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,AppIds,pceltFetched) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_DEPLOYMENT_METADATA_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_INTERFACE_DEFINED__
#define __IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_INTERFACE_DEFINED__

/* interface IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY */
/* [local][unique][uuid][object] */ 

typedef struct _STORE_DEPLOYMENT_METADATA_PROPERTY
    {
    GUID guidPropertySet;
    LPCWSTR pszName;
    SIZE_T cbValue;
    /* [length_is][size_is] */ const BYTE *prgbValue;
    } 	STORE_DEPLOYMENT_METADATA_PROPERTY;

typedef struct _STORE_DEPLOYMENT_METADATA_PROPERTY *PSTORE_DEPLOYMENT_METADATA_PROPERTY;


EXTERN_C const IID IID_IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5fa4f590-a416-4b22-ac79-7c3f0d31f303")
    IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_DEPLOYMENT_METADATA_PROPERTY AppIds[  ],
            /* [out] */ SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_DEPLOYMENT_METADATA_PROPERTYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ STORE_DEPLOYMENT_METADATA_PROPERTY AppIds[  ],
            /* [out] */ SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY * This,
            /* [out] */ IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY **ppEnum);
        
        END_INTERFACE
    } IEnumSTORE_DEPLOYMENT_METADATA_PROPERTYVtbl;

    interface IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY
    {
        CONST_VTBL struct IEnumSTORE_DEPLOYMENT_METADATA_PROPERTYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_Next(This,celt,AppIds,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,AppIds,pceltFetched) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_DEPLOYMENT_METADATA_PROPERTY_INTERFACE_DEFINED__ */


#ifndef __IEnumCOMPONENT_VERSION_INTERFACE_DEFINED__
#define __IEnumCOMPONENT_VERSION_INTERFACE_DEFINED__

/* interface IEnumCOMPONENT_VERSION */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCOMPONENT_VERSION;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b9702358-c54e-4366-9079-7296e41ef59d")
    IEnumCOMPONENT_VERSION : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  COMPONENT_VERSION rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumCOMPONENT_VERSION **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCOMPONENT_VERSIONVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCOMPONENT_VERSION * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCOMPONENT_VERSION * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCOMPONENT_VERSION * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCOMPONENT_VERSION * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  COMPONENT_VERSION rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCOMPONENT_VERSION * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCOMPONENT_VERSION * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCOMPONENT_VERSION * This,
            /* [out] */ IEnumCOMPONENT_VERSION **ppEnum);
        
        END_INTERFACE
    } IEnumCOMPONENT_VERSIONVtbl;

    interface IEnumCOMPONENT_VERSION
    {
        CONST_VTBL struct IEnumCOMPONENT_VERSIONVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCOMPONENT_VERSION_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCOMPONENT_VERSION_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCOMPONENT_VERSION_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCOMPONENT_VERSION_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumCOMPONENT_VERSION_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumCOMPONENT_VERSION_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCOMPONENT_VERSION_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCOMPONENT_VERSION_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_INTERFACE_DEFINED__
#define __IEnumSTORE_ASSEMBLY_INTERFACE_DEFINED__

/* interface IEnumSTORE_ASSEMBLY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_ASSEMBLY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5c637bf-6eaa-4e5f-b535-55299657e33e")
    IEnumSTORE_ASSEMBLY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_ASSEMBLY rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_ASSEMBLY **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_ASSEMBLYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_ASSEMBLY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_ASSEMBLY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_ASSEMBLY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_ASSEMBLY * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_ASSEMBLY rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_ASSEMBLY * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_ASSEMBLY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_ASSEMBLY * This,
            /* [out] */ IEnumSTORE_ASSEMBLY **ppEnum);
        
        END_INTERFACE
    } IEnumSTORE_ASSEMBLYVtbl;

    interface IEnumSTORE_ASSEMBLY
    {
        CONST_VTBL struct IEnumSTORE_ASSEMBLYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_ASSEMBLY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_ASSEMBLY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_ASSEMBLY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_ASSEMBLY_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumSTORE_ASSEMBLY_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_ASSEMBLY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_ASSEMBLY_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_ASSEMBLY_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_FILE_INTERFACE_DEFINED__
#define __IEnumSTORE_ASSEMBLY_FILE_INTERFACE_DEFINED__

/* interface IEnumSTORE_ASSEMBLY_FILE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_ASSEMBLY_FILE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5c6aaa3-03e4-478d-b9f5-2e45908d5e4f")
    IEnumSTORE_ASSEMBLY_FILE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_ASSEMBLY_FILE rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_ASSEMBLY_FILE **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_ASSEMBLY_FILEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_ASSEMBLY_FILE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_ASSEMBLY_FILE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_ASSEMBLY_FILE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_ASSEMBLY_FILE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_ASSEMBLY_FILE rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_ASSEMBLY_FILE * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_ASSEMBLY_FILE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_ASSEMBLY_FILE * This,
            /* [out] */ IEnumSTORE_ASSEMBLY_FILE **ppEnum);
        
        END_INTERFACE
    } IEnumSTORE_ASSEMBLY_FILEVtbl;

    interface IEnumSTORE_ASSEMBLY_FILE
    {
        CONST_VTBL struct IEnumSTORE_ASSEMBLY_FILEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_ASSEMBLY_FILE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_ASSEMBLY_FILE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_ASSEMBLY_FILE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_ASSEMBLY_FILE_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumSTORE_ASSEMBLY_FILE_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_ASSEMBLY_FILE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_ASSEMBLY_FILE_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_ASSEMBLY_FILE_INTERFACE_DEFINED__ */


#ifndef __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_INTERFACE_DEFINED__
#define __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_INTERFACE_DEFINED__

/* interface IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d8b1aacb-5142-4abb-bcc1-e9dc9052a89e")
    IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_ASSEMBLY_INSTALLATION_REFERENCE rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE **ppIEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This,
            /* [annotation][in] */ 
            _In_  SIZE_T celt,
            /* [annotation][length_is][size_is][out] */ 
            _Out_writes_to_(celt, *pceltFetched)  STORE_ASSEMBLY_INSTALLATION_REFERENCE rgelt[  ],
            /* [annotation][out] */ 
            _Out_  SIZE_T *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This,
            /* [in] */ SIZE_T celt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE * This,
            /* [out] */ IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE **ppIEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE);
        
        END_INTERFACE
    } IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCEVtbl;

    interface IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE
    {
        CONST_VTBL struct IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_Clone(This,ppIEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumSTORE_ASSEMBLY_INSTALLATION_REFERENCE_INTERFACE_DEFINED__ */


#ifndef __IEnumCATEGORY_INTERFACE_DEFINED__
#define __IEnumCATEGORY_INTERFACE_DEFINED__

/* interface IEnumCATEGORY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCATEGORY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02249bf3-e0ef-4396-b8b7-8882e981175f")
    IEnumCATEGORY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ CATEGORY rgElements[  ],
            /* [out] */ SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumCATEGORY **ppIEnumCATEGORY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCATEGORYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCATEGORY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCATEGORY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCATEGORY * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ CATEGORY rgElements[  ],
            /* [out] */ SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCATEGORY * This,
            /* [in] */ SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCATEGORY * This,
            /* [out] */ IEnumCATEGORY **ppIEnumCATEGORY);
        
        END_INTERFACE
    } IEnumCATEGORYVtbl;

    interface IEnumCATEGORY
    {
        CONST_VTBL struct IEnumCATEGORYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCATEGORY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCATEGORY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCATEGORY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCATEGORY_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumCATEGORY_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumCATEGORY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCATEGORY_Clone(This,ppIEnumCATEGORY)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumCATEGORY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCATEGORY_INTERFACE_DEFINED__ */


#ifndef __IEnumCATEGORY_SUBCATEGORY_INTERFACE_DEFINED__
#define __IEnumCATEGORY_SUBCATEGORY_INTERFACE_DEFINED__

/* interface IEnumCATEGORY_SUBCATEGORY */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCATEGORY_SUBCATEGORY;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5f9fdbe5-57e1-49f6-bb9d-28c1a1503818")
    IEnumCATEGORY_SUBCATEGORY : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ CATEGORY_SUBCATEGORY rgElements[  ],
            /* [out] */ SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumCATEGORY_SUBCATEGORY **ppIEnumCATEGORY_SUBCATEGORY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCATEGORY_SUBCATEGORYVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCATEGORY_SUBCATEGORY * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCATEGORY_SUBCATEGORY * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCATEGORY_SUBCATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCATEGORY_SUBCATEGORY * This,
            /* [in] */ SIZE_T celt,
            /* [length_is][size_is][out] */ CATEGORY_SUBCATEGORY rgElements[  ],
            /* [out] */ SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCATEGORY_SUBCATEGORY * This,
            /* [in] */ SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCATEGORY_SUBCATEGORY * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCATEGORY_SUBCATEGORY * This,
            /* [out] */ IEnumCATEGORY_SUBCATEGORY **ppIEnumCATEGORY_SUBCATEGORY);
        
        END_INTERFACE
    } IEnumCATEGORY_SUBCATEGORYVtbl;

    interface IEnumCATEGORY_SUBCATEGORY
    {
        CONST_VTBL struct IEnumCATEGORY_SUBCATEGORYVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCATEGORY_SUBCATEGORY_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCATEGORY_SUBCATEGORY_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCATEGORY_SUBCATEGORY_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCATEGORY_SUBCATEGORY_Next(This,celt,rgElements,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgElements,pulFetched) ) 

#define IEnumCATEGORY_SUBCATEGORY_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumCATEGORY_SUBCATEGORY_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCATEGORY_SUBCATEGORY_Clone(This,ppIEnumCATEGORY_SUBCATEGORY)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumCATEGORY_SUBCATEGORY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCATEGORY_SUBCATEGORY_INTERFACE_DEFINED__ */


#ifndef __IEnumCATEGORY_INSTANCE_INTERFACE_DEFINED__
#define __IEnumCATEGORY_INSTANCE_INTERFACE_DEFINED__

/* interface IEnumCATEGORY_INSTANCE */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumCATEGORY_INSTANCE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8d8842d8-e031-4a7e-8571-dc0b03385807")
    IEnumCATEGORY_INSTANCE : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ SIZE_T ulElements,
            /* [length_is][size_is][out] */ CATEGORY_INSTANCE rgInstances[  ],
            /* [out] */ SIZE_T *pulFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ SIZE_T ulElements) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumCATEGORY_INSTANCE **ppIEnumCATEGORY_INSTANCE) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCATEGORY_INSTANCEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumCATEGORY_INSTANCE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumCATEGORY_INSTANCE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumCATEGORY_INSTANCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumCATEGORY_INSTANCE * This,
            /* [in] */ SIZE_T ulElements,
            /* [length_is][size_is][out] */ CATEGORY_INSTANCE rgInstances[  ],
            /* [out] */ SIZE_T *pulFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumCATEGORY_INSTANCE * This,
            /* [in] */ SIZE_T ulElements);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumCATEGORY_INSTANCE * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumCATEGORY_INSTANCE * This,
            /* [out] */ IEnumCATEGORY_INSTANCE **ppIEnumCATEGORY_INSTANCE);
        
        END_INTERFACE
    } IEnumCATEGORY_INSTANCEVtbl;

    interface IEnumCATEGORY_INSTANCE
    {
        CONST_VTBL struct IEnumCATEGORY_INSTANCEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCATEGORY_INSTANCE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCATEGORY_INSTANCE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCATEGORY_INSTANCE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCATEGORY_INSTANCE_Next(This,ulElements,rgInstances,pulFetched)	\
    ( (This)->lpVtbl -> Next(This,ulElements,rgInstances,pulFetched) ) 

#define IEnumCATEGORY_INSTANCE_Skip(This,ulElements)	\
    ( (This)->lpVtbl -> Skip(This,ulElements) ) 

#define IEnumCATEGORY_INSTANCE_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCATEGORY_INSTANCE_Clone(This,ppIEnumCATEGORY_INSTANCE)	\
    ( (This)->lpVtbl -> Clone(This,ppIEnumCATEGORY_INSTANCE) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCATEGORY_INSTANCE_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0039 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum _STATE_AXIS
    {
        STATE_AXIS_INVALID	= 0,
        STATE_AXIS_USER	= 1,
        STATE_AXIS_APPLICATION	= 2,
        STATE_AXIS_COMPONENT	= 3
    } 	STATE_AXIS;

typedef /* [v1_enum] */ enum _STATE_AXIS *PSTATE_AXIS;

typedef const STATE_AXIS *PCSTATE_AXIS;

typedef 
enum _STATE_COORDINATE_VALUE_USER
    {
        STATE_COORDINATE_VALUE_USER_INVALID	= 0,
        STATE_COORDINATE_VALUE_USER_NEUTRAL	= 1,
        STATE_COORDINATE_VALUE_USER_LOCAL_MACHINE	= 2,
        STATE_COORDINATE_VALUE_USER_GLOBAL	= 3
    } 	STATE_COORDINATE_VALUE_USER;

typedef 
enum _STATE_COORDINATE_VALUE_APPLICATION
    {
        STATE_COORDINATE_VALUE_APPLICATION_INVALID	= 0,
        STATE_COORDINATE_VALUE_APPLICATION_NEUTRAL	= 1,
        STATE_COORDINATE_VALUE_APPLICATION_VERSION_INDEPENDENT	= 2,
        STATE_COORDINATE_VALUE_APPLICATION_VERSION_FUNCTIONALITY	= 3,
        STATE_COORDINATE_VALUE_APPLICATION_VERSIONED	= 4
    } 	STATE_COORDINATE_VALUE_APPLICATION;

typedef enum _STATE_COORDINATE_VALUE_APPLICATION *PSTATE_COORDINATE_VALUE_APPLICATION;

typedef const STATE_COORDINATE_VALUE_APPLICATION *PCSTATE_COORDINATE_VALUE_APPLICATION;

typedef 
enum _STATE_COORDINATE_VALUE_COMPONENT
    {
        STATE_COORDINATE_VALUE_COMPONENT_INVALID	= 0,
        STATE_COORDINATE_VALUE_COMPONENT_NEUTRAL	= 1,
        STATE_COORDINATE_VALUE_COMPONENT_VERSION_INDEPENDENT	= 2,
        STATE_COORDINATE_VALUE_COMPONENT_VERSION_FUNCTIONALITY	= 3,
        STATE_COORDINATE_VALUE_COMPONENT_VERSIONED	= 4
    } 	STATE_COORDINATE_VALUE_COMPONENT;

typedef enum _STATE_COORDINATE_VALUE_COMPONENT *PSTATE_COORDINATE_VALUE_COMPONENT;

typedef const STATE_COORDINATE_VALUE_COMPONENT *PCSTATE_COORDINATE_VALUE_COMPONENT;

typedef /* [switch_type] */ union _STATE_COORDINATE_VALUE
    {
    /* [case()] */ STATE_COORDINATE_VALUE_USER User;
    /* [case()] */ STATE_COORDINATE_VALUE_APPLICATION Application;
    /* [case()] */ STATE_COORDINATE_VALUE_COMPONENT Component;
    } 	STATE_COORDINATE_VALUE;

typedef /* [switch_type] */ union _STATE_COORDINATE_VALUE *PSTATE_COORDINATE_VALUE;

typedef const STATE_COORDINATE_VALUE *PCSTATE_COORDINATE_VALUE;

typedef struct _STATE_COORDINATE
    {
    STATE_AXIS Axis;
    STATE_COORDINATE_VALUE Value;
    } 	STATE_COORDINATE;

typedef struct _STATE_COORDINATE *PSTATE_COORDINATE;

typedef const STATE_COORDINATE *PCSTATE_COORDINATE;

typedef struct _STATE_COORDINATE_LIST
    {
    SIZE_T Count;
    PCSTATE_COORDINATE List;
    } 	STATE_COORDINATE_LIST;

typedef struct _STATE_COORDINATE_LIST *PSTATE_COORDINATE_LIST;

typedef const STATE_COORDINATE_LIST *PCSTATE_COORDINATE_LIST;



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0039_v0_0_s_ifspec;

#ifndef __IManifestInformation_INTERFACE_DEFINED__
#define __IManifestInformation_INTERFACE_DEFINED__

/* interface IManifestInformation */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IManifestInformation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81c85208-fe61-4c15-b5bb-ff5ea66baad9")
    IManifestInformation : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FullPath( 
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ManifestPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IManifestInformationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IManifestInformation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IManifestInformation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IManifestInformation * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FullPath )( 
            IManifestInformation * This,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ManifestPath);
        
        END_INTERFACE
    } IManifestInformationVtbl;

    interface IManifestInformation
    {
        CONST_VTBL struct IManifestInformationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IManifestInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IManifestInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IManifestInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IManifestInformation_get_FullPath(This,ManifestPath)	\
    ( (This)->lpVtbl -> get_FullPath(This,ManifestPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IManifestInformation_INTERFACE_DEFINED__ */


#ifndef __IActContext_INTERFACE_DEFINED__
#define __IActContext_INTERFACE_DEFINED__

/* interface IActContext */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _IAPP_CONTEXT_REPLACE_STRING_MACROS_FLAGS
    {
        IAPP_CONTEXT_REPLACE_STRING_MACROS_FLAG_NO_COMPONENT	= 0x1
    } ;
typedef struct _IAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS
    {
    ULONG ulSize;
    DWORD dwFlags;
    } 	IAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS;

typedef struct _IAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS *PIAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS;

typedef const IAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS *PCIAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS;

/* [v1_enum] */ 
enum _IAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS_FLAGS
    {
        IAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS_FLAG_OVERALL_DISPOSITION_VALID	= 0x1
    } ;
typedef struct _IAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS
    {
    ULONG ulSize;
    DWORD dwFlags;
    DWORD dwOverallDisposition;
    } 	IAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS;

typedef struct _IAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS *PIAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS;

typedef const IAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS *PCIAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS;

/* [v1_enum] */ 
enum _IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATES
    {
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_UNDEFINED	= 0,
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_STARTING	= 1,
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_RUNNING	= 2
    } ;
/* [v1_enum] */ 
enum _IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_DISPOSITIONS
    {
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_DISPOSITION_UNDEFINED	= 0,
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_DISPOSITION_STARTING	= 1,
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_DISPOSITION_STARTING_MIGRATED	= ( 1 << 16 ) ,
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_DISPOSITION_RUNNING	= 2,
        IAPP_CONTEXT_SET_APPLICATION_RUNNING_STATE_DISPOSITION_RUNNING_FIRST_RUN	= ( 1 << 17 ) 
    } ;
/* [v1_enum] */ 
enum IAPP_CONTEXT_GET_APPLICATION_STATE_FILESYSTEM_LOCATION_FLAGS
    {
        IAPP_CONTEXT_GET_APPLICATION_STATE_FILESYSTEM_LOCATION_FLAG_NO_COMPONENT	= 0x1
    } ;
/* [v1_enum] */ 
enum _IAPP_CONTEXT_FIND_COMPONENTS_BY_DEFINITION_DISPOSITION_STATES
    {
        IAPP_CONTEXT_FIND_COMPONENTS_BY_DEFINITION_DISPOSITION_STATE_UNDEFINED	= 0,
        IAPP_CONTEXT_FIND_COMPONENTS_BY_DEFINITION_DISPOSITION_STATE_NOT_LOOKED_AT	= 1,
        IAPP_CONTEXT_FIND_COMPONENTS_BY_DEFINITION_DISPOSITION_STATE_FOUND	= 2,
        IAPP_CONTEXT_FIND_COMPONENTS_BY_DEFINITION_DISPOSITION_STATE_NOT_FOUND	= 3
    } ;
/* [v1_enum] */ 
enum _IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_DISPOSITION_STATES
    {
        IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_DISPOSITION_STATE_UNDEFINED	= 0,
        IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_DISPOSITION_STATE_NOT_LOOKED_AT	= 1,
        IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_DISPOSITION_STATE_FOUND	= 2,
        IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_DISPOSITION_STATE_NOT_FOUND	= 3
    } ;
/* [v1_enum] */ 
enum _IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_FLAGS
    {
        IAPP_CONTEXT_FIND_COMPONENTS_BY_REFERENCE_FLAG_REQUIRE_EXACT_MATCH	= 0x1
    } ;

EXTERN_C const IID IID_IActContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0af57545-a72a-4fbe-813c-8554ed7d4528")
    IActContext : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AppId( 
            /* [retval][out] */ IDefinitionAppId **ppAppId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCategories( 
            /* [in] */ DWORD dwFlags,
            /* [annotation][unique][in] */ 
            _In_opt_  IReferenceIdentity *pReferenceIdentity_ToMatch,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSubcategories( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *pIDefinitionIdentity,
            /* [in] */ LPCWSTR pszSubcategoryPathPattern,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCategoryInstances( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *pIDefinitionIdentity_Category,
            /* [in] */ LPCWSTR pszSubcategoryPath,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReplaceMacrosInStrings( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T iComponentIndex,
            /* [in] */ SIZE_T cStrings,
            /* [size_is][in] */ const LPCWSTR rgpszSourceStrings[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cStrings)  LPWSTR rgpszDestinationStrings[  ],
            /* [in] */ PCCULTURE_FALLBACK_LIST pCultureFallbackList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentStringTableStrings( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T iComponentIndex,
            /* [in] */ SIZE_T cStrings,
            /* [size_is][in] */ const LPCWSTR rgpszSourceStrings[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cStrings)  LPWSTR rgpszDestinationStrings[  ],
            /* [in] */ PCCULTURE_FALLBACK_LIST pCultureFallbackList) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationProperties( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cProperties,
            /* [size_is][in] */ const LPCWSTR rgpszPropertyNames[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cProperties)  LPWSTR rgpszPropertyValues[  ],
            /* [size_is][out] */ SIZE_T rgiComponentIndices[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ApplicationBasePath( 
            /* [in] */ DWORD dwFlags,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ApplicationPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentManifest( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *Component,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetComponentPayloadPath( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *Component,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppwszComponentPayloadPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindReferenceInContext( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IReferenceIdentity *Reference,
            /* [retval][out] */ IDefinitionIdentity **MatchedDefinition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateActContextFromCategoryInstance( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ PCCATEGORY_INSTANCE CategoryInstance,
            /* [retval][out] */ IActContext **ppCreatedAppContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumComponents( 
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ IEnumDefinitionIdentity **ppIdentityEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrepareForExecution( 
            /* [in] */ PCIAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS pInputs,
            /* [out][in] */ PIAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS pOutputs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationRunningState( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG ulState,
            /* [out] */ ULONG *Disposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationStateFilesystemLocation( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T iComponentIndex,
            /* [in] */ PCSTATE_COORDINATE_LIST pCoordinateList,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindComponentsByDefinition( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IDefinitionIdentity *pIDefinitionIdentities[  ],
            /* [size_is][out] */ SIZE_T rgiComponentIndices[  ],
            /* [size_is][out] */ ULONG rgulDispositions[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FindComponentsByReference( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IReferenceIdentity *pIReferenceIdentities[  ],
            /* [size_is][out] */ SIZE_T rgComponentIndices[  ],
            /* [size_is][out] */ ULONG rgulDispositions[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IActContextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IActContext * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IActContext * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IActContext * This);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppId )( 
            IActContext * This,
            /* [retval][out] */ IDefinitionAppId **ppAppId);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategories )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [annotation][unique][in] */ 
            _In_opt_  IReferenceIdentity *pReferenceIdentity_ToMatch,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *EnumSubcategories )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *pIDefinitionIdentity,
            /* [in] */ LPCWSTR pszSubcategoryPathPattern,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCategoryInstances )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *pIDefinitionIdentity_Category,
            /* [in] */ LPCWSTR pszSubcategoryPath,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *ReplaceMacrosInStrings )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T iComponentIndex,
            /* [in] */ SIZE_T cStrings,
            /* [size_is][in] */ const LPCWSTR rgpszSourceStrings[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cStrings)  LPWSTR rgpszDestinationStrings[  ],
            /* [in] */ PCCULTURE_FALLBACK_LIST pCultureFallbackList);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentStringTableStrings )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T iComponentIndex,
            /* [in] */ SIZE_T cStrings,
            /* [size_is][in] */ const LPCWSTR rgpszSourceStrings[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cStrings)  LPWSTR rgpszDestinationStrings[  ],
            /* [in] */ PCCULTURE_FALLBACK_LIST pCultureFallbackList);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationProperties )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cProperties,
            /* [size_is][in] */ const LPCWSTR rgpszPropertyNames[  ],
            /* [annotation][size_is][out] */ 
            _Out_writes_(cProperties)  LPWSTR rgpszPropertyValues[  ],
            /* [size_is][out] */ SIZE_T rgiComponentIndices[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ApplicationBasePath )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ApplicationPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentManifest )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *Component,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown **ppIUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *GetComponentPayloadPath )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionIdentity *Component,
            /* [annotation][retval][out] */ 
            _Out_  LPWSTR *ppwszComponentPayloadPath);
        
        HRESULT ( STDMETHODCALLTYPE *FindReferenceInContext )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IReferenceIdentity *Reference,
            /* [retval][out] */ IDefinitionIdentity **MatchedDefinition);
        
        HRESULT ( STDMETHODCALLTYPE *CreateActContextFromCategoryInstance )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ PCCATEGORY_INSTANCE CategoryInstance,
            /* [retval][out] */ IActContext **ppCreatedAppContext);
        
        HRESULT ( STDMETHODCALLTYPE *EnumComponents )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [retval][out] */ IEnumDefinitionIdentity **ppIdentityEnum);
        
        HRESULT ( STDMETHODCALLTYPE *PrepareForExecution )( 
            IActContext * This,
            /* [in] */ PCIAPP_CONTEXT_PREPARE_FOR_EXECUTION_INPUTS pInputs,
            /* [out][in] */ PIAPP_CONTEXT_PREPARE_FOR_EXECUTION_OUTPUTS pOutputs);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationRunningState )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ ULONG ulState,
            /* [out] */ ULONG *Disposition);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationStateFilesystemLocation )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T iComponentIndex,
            /* [in] */ PCSTATE_COORDINATE_LIST pCoordinateList,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE *FindComponentsByDefinition )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IDefinitionIdentity *pIDefinitionIdentities[  ],
            /* [size_is][out] */ SIZE_T rgiComponentIndices[  ],
            /* [size_is][out] */ ULONG rgulDispositions[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *FindComponentsByReference )( 
            IActContext * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ SIZE_T cComponents,
            /* [size_is][in] */ IReferenceIdentity *pIReferenceIdentities[  ],
            /* [size_is][out] */ SIZE_T rgComponentIndices[  ],
            /* [size_is][out] */ ULONG rgulDispositions[  ]);
        
        END_INTERFACE
    } IActContextVtbl;

    interface IActContext
    {
        CONST_VTBL struct IActContextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IActContext_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IActContext_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IActContext_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IActContext_get_AppId(This,ppAppId)	\
    ( (This)->lpVtbl -> get_AppId(This,ppAppId) ) 

#define IActContext_EnumCategories(This,dwFlags,pReferenceIdentity_ToMatch,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumCategories(This,dwFlags,pReferenceIdentity_ToMatch,riid,ppIUnknown) ) 

#define IActContext_EnumSubcategories(This,dwFlags,pIDefinitionIdentity,pszSubcategoryPathPattern,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumSubcategories(This,dwFlags,pIDefinitionIdentity,pszSubcategoryPathPattern,riid,ppIUnknown) ) 

#define IActContext_EnumCategoryInstances(This,dwFlags,pIDefinitionIdentity_Category,pszSubcategoryPath,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> EnumCategoryInstances(This,dwFlags,pIDefinitionIdentity_Category,pszSubcategoryPath,riid,ppIUnknown) ) 

#define IActContext_ReplaceMacrosInStrings(This,dwFlags,iComponentIndex,cStrings,rgpszSourceStrings,rgpszDestinationStrings,pCultureFallbackList)	\
    ( (This)->lpVtbl -> ReplaceMacrosInStrings(This,dwFlags,iComponentIndex,cStrings,rgpszSourceStrings,rgpszDestinationStrings,pCultureFallbackList) ) 

#define IActContext_GetComponentStringTableStrings(This,dwFlags,iComponentIndex,cStrings,rgpszSourceStrings,rgpszDestinationStrings,pCultureFallbackList)	\
    ( (This)->lpVtbl -> GetComponentStringTableStrings(This,dwFlags,iComponentIndex,cStrings,rgpszSourceStrings,rgpszDestinationStrings,pCultureFallbackList) ) 

#define IActContext_GetApplicationProperties(This,dwFlags,cProperties,rgpszPropertyNames,rgpszPropertyValues,rgiComponentIndices)	\
    ( (This)->lpVtbl -> GetApplicationProperties(This,dwFlags,cProperties,rgpszPropertyNames,rgpszPropertyValues,rgiComponentIndices) ) 

#define IActContext_ApplicationBasePath(This,dwFlags,ApplicationPath)	\
    ( (This)->lpVtbl -> ApplicationBasePath(This,dwFlags,ApplicationPath) ) 

#define IActContext_GetComponentManifest(This,dwFlags,Component,riid,ppIUnknown)	\
    ( (This)->lpVtbl -> GetComponentManifest(This,dwFlags,Component,riid,ppIUnknown) ) 

#define IActContext_GetComponentPayloadPath(This,dwFlags,Component,ppwszComponentPayloadPath)	\
    ( (This)->lpVtbl -> GetComponentPayloadPath(This,dwFlags,Component,ppwszComponentPayloadPath) ) 

#define IActContext_FindReferenceInContext(This,dwFlags,Reference,MatchedDefinition)	\
    ( (This)->lpVtbl -> FindReferenceInContext(This,dwFlags,Reference,MatchedDefinition) ) 

#define IActContext_CreateActContextFromCategoryInstance(This,dwFlags,CategoryInstance,ppCreatedAppContext)	\
    ( (This)->lpVtbl -> CreateActContextFromCategoryInstance(This,dwFlags,CategoryInstance,ppCreatedAppContext) ) 

#define IActContext_EnumComponents(This,dwFlags,ppIdentityEnum)	\
    ( (This)->lpVtbl -> EnumComponents(This,dwFlags,ppIdentityEnum) ) 

#define IActContext_PrepareForExecution(This,pInputs,pOutputs)	\
    ( (This)->lpVtbl -> PrepareForExecution(This,pInputs,pOutputs) ) 

#define IActContext_SetApplicationRunningState(This,dwFlags,ulState,Disposition)	\
    ( (This)->lpVtbl -> SetApplicationRunningState(This,dwFlags,ulState,Disposition) ) 

#define IActContext_GetApplicationStateFilesystemLocation(This,dwFlags,iComponentIndex,pCoordinateList,ppszPath)	\
    ( (This)->lpVtbl -> GetApplicationStateFilesystemLocation(This,dwFlags,iComponentIndex,pCoordinateList,ppszPath) ) 

#define IActContext_FindComponentsByDefinition(This,dwFlags,cComponents,pIDefinitionIdentities,rgiComponentIndices,rgulDispositions)	\
    ( (This)->lpVtbl -> FindComponentsByDefinition(This,dwFlags,cComponents,pIDefinitionIdentities,rgiComponentIndices,rgulDispositions) ) 

#define IActContext_FindComponentsByReference(This,dwFlags,cComponents,pIReferenceIdentities,rgComponentIndices,rgulDispositions)	\
    ( (This)->lpVtbl -> FindComponentsByReference(This,dwFlags,cComponents,pIReferenceIdentities,rgComponentIndices,rgulDispositions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IActContext_INTERFACE_DEFINED__ */


#ifndef __IStateManager_INTERFACE_DEFINED__
#define __IStateManager_INTERFACE_DEFINED__

/* interface IStateManager */
/* [local][unique][uuid][object] */ 

/* [v1_enum] */ 
enum _ISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS_FLAGS
    {
        ISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS_FLAG_APPLICATION_TO_PREPARE_VALID	= 0x1
    } ;
typedef struct _ISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS
    {
    ULONG ulSize;
    DWORD dwFlags;
    IActContext *pApplicationToPrepare;
    } 	ISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS;

typedef struct _ISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS *PISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS;

typedef const ISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS *PCISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS;

/* [v1_enum] */ 
enum _ISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS_FLAGS
    {
        ISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS_FLAG_OVERALL_DISPOSITION_VALID	= 0x1
    } ;
typedef struct _ISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS
    {
    ULONG ulSize;
    DWORD dwFlags;
    DWORD dwOverallDisposition;
    } 	ISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS;

typedef struct _ISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS *PISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS;

typedef const ISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS *PCISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS;

/* [v1_enum] */ 
enum _ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATES
    {
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_UNDEFINED	= 0,
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_STARTING	= 1,
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_RUNNING	= 2
    } ;
/* [v1_enum] */ 
enum _ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_DISPOSITIONS
    {
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_DISPOSITION_UNDEFINED	= 0,
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_DISPOSITION_STARTING	= 1,
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_DISPOSITION_STARTING_MIGRATED	= ( 1 << 16 ) ,
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_DISPOSITION_RUNNING	= 2,
        ISTATE_MANAGER_SET_APPLICATION_RUNNING_STATE_DISPOSITION_RUNNING_FIRST_RUN	= ( 1 << 17 ) 
    } ;

EXTERN_C const IID IID_IStateManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07662534-750b-4ed5-9cfb-1c5bc5acfd07")
    IStateManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PrepareApplicationState( 
            /* [in] */ PCISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS pInputs,
            /* [out][in] */ PISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS pOutputs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetApplicationRunningState( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IActContext *pIActContext,
            /* [in] */ ULONG ulState,
            /* [in] */ ULONG *pulDisposition) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetApplicationStateFilesystemLocation( 
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionAppId *pIDefinitionAppId_Application,
            /* [in] */ IDefinitionIdentity *pIDefinitionIdentity_Component,
            /* [in] */ PCSTATE_COORDINATE_LIST pCoordinateList,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Scavenge( 
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD *pdwDisposition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStateManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStateManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStateManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStateManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *PrepareApplicationState )( 
            IStateManager * This,
            /* [in] */ PCISTATE_MANAGER_PREPARE_APPLICATION_STATE_INPUTS pInputs,
            /* [out][in] */ PISTATE_MANAGER_PREPARE_APPLICATION_STATE_OUTPUTS pOutputs);
        
        HRESULT ( STDMETHODCALLTYPE *SetApplicationRunningState )( 
            IStateManager * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IActContext *pIActContext,
            /* [in] */ ULONG ulState,
            /* [in] */ ULONG *pulDisposition);
        
        HRESULT ( STDMETHODCALLTYPE *GetApplicationStateFilesystemLocation )( 
            IStateManager * This,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IDefinitionAppId *pIDefinitionAppId_Application,
            /* [in] */ IDefinitionIdentity *pIDefinitionIdentity_Component,
            /* [in] */ PCSTATE_COORDINATE_LIST pCoordinateList,
            /* [annotation][out] */ 
            _Out_  LPWSTR *ppszPath);
        
        HRESULT ( STDMETHODCALLTYPE *Scavenge )( 
            IStateManager * This,
            /* [in] */ DWORD dwFlags,
            /* [out] */ DWORD *pdwDisposition);
        
        END_INTERFACE
    } IStateManagerVtbl;

    interface IStateManager
    {
        CONST_VTBL struct IStateManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStateManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStateManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStateManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStateManager_PrepareApplicationState(This,pInputs,pOutputs)	\
    ( (This)->lpVtbl -> PrepareApplicationState(This,pInputs,pOutputs) ) 

#define IStateManager_SetApplicationRunningState(This,dwFlags,pIActContext,ulState,pulDisposition)	\
    ( (This)->lpVtbl -> SetApplicationRunningState(This,dwFlags,pIActContext,ulState,pulDisposition) ) 

#define IStateManager_GetApplicationStateFilesystemLocation(This,dwFlags,pIDefinitionAppId_Application,pIDefinitionIdentity_Component,pCoordinateList,ppszPath)	\
    ( (This)->lpVtbl -> GetApplicationStateFilesystemLocation(This,dwFlags,pIDefinitionAppId_Application,pIDefinitionIdentity_Component,pCoordinateList,ppszPath) ) 

#define IStateManager_Scavenge(This,dwFlags,pdwDisposition)	\
    ( (This)->lpVtbl -> Scavenge(This,dwFlags,pdwDisposition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStateManager_INTERFACE_DEFINED__ */


#ifndef __IManifestParseErrorCallback_INTERFACE_DEFINED__
#define __IManifestParseErrorCallback_INTERFACE_DEFINED__

/* interface IManifestParseErrorCallback */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IManifestParseErrorCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ace1b703-1aac-4956-ab87-90cac8b93ce6")
    IManifestParseErrorCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnError( 
            /* [in] */ ULONG nStartLine,
            /* [in] */ ULONG nStartColumn,
            /* [in] */ ULONG cCharacterCount,
            /* [in] */ HRESULT hr,
            /* [in] */ LPCWSTR pszErrorStatusHostFile,
            /* [in] */ SIZE_T cParameterCount,
            /* [size_is][in] */ LPCWSTR *prgpszParameters) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IManifestParseErrorCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IManifestParseErrorCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IManifestParseErrorCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IManifestParseErrorCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnError )( 
            IManifestParseErrorCallback * This,
            /* [in] */ ULONG nStartLine,
            /* [in] */ ULONG nStartColumn,
            /* [in] */ ULONG cCharacterCount,
            /* [in] */ HRESULT hr,
            /* [in] */ LPCWSTR pszErrorStatusHostFile,
            /* [in] */ SIZE_T cParameterCount,
            /* [size_is][in] */ LPCWSTR *prgpszParameters);
        
        END_INTERFACE
    } IManifestParseErrorCallbackVtbl;

    interface IManifestParseErrorCallback
    {
        CONST_VTBL struct IManifestParseErrorCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IManifestParseErrorCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IManifestParseErrorCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IManifestParseErrorCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IManifestParseErrorCallback_OnError(This,nStartLine,nStartColumn,cCharacterCount,hr,pszErrorStatusHostFile,cParameterCount,prgpszParameters)	\
    ( (This)->lpVtbl -> OnError(This,nStartLine,nStartColumn,cCharacterCount,hr,pszErrorStatusHostFile,cParameterCount,prgpszParameters) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IManifestParseErrorCallback_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_isolation_0000_0043 */
/* [local] */ 

/* [local] */ HRESULT __stdcall GetAppIdAuthority( 
    /* [annotation][out] */ 
    _Out_  IAppIdAuthority **ppIAppIdAuthority);

typedef HRESULT ( __stdcall *PGET_APPID_AUTHORITY_FUNCTION )( 
    /* [annotation][out] */ 
    _Out_  IAppIdAuthority **ppIAppIdAuthority);

/* [local] */ HRESULT __stdcall GetIdentityAuthority( 
    /* [annotation][out] */ 
    _Out_  IIdentityAuthority **ppIIdentityAuthority);

typedef HRESULT ( __stdcall *PGET_IDENTITY_AUTHORITY_FUNCTION )( 
    /* [annotation][out] */ 
    _Out_  IIdentityAuthority **ppIIdentityAuthority);

/* [local] */ HRESULT __stdcall SetIsolationIMalloc( 
    /* [annotation][in] */ 
    _In_  IMalloc *pIMalloc);

typedef HRESULT ( __stdcall *PSET_ISOLATION_IMALLOC_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  IMalloc *pIMalloc);

/* [local] */ HRESULT __stdcall GetSystemStore( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppIStore);

typedef HRESULT ( __stdcall *PGET_SYSTEM_STORE_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppIStore);

/* [v1_enum] */ 
enum _OFFLINE_STORE_CREATION_PARAMETERS_FLAGS
    {
        OFFLINE_STORE_CREATION_PARAMETERS_FLAG_FAKE_ONLINE	= 0x4,
        OFFLINE_STORE_CREATION_PARAMETERS_FLAG_APPLY_NO_KTM	= 0x10
    } ;
typedef struct _OFFLINE_STORE_CREATION_PARAMETERS
    {
    SIZE_T cbSize;
    DWORD dwFlags;
    LPCWSTR pszHostSystemDrivePath;
    LPCWSTR pszHostWindowsDirectoryPath;
    LPCWSTR pszTargetWindowsDirectoryPath;
    LPCWSTR pszHostRegistryMachineSoftwarePath;
    LPCWSTR pszHostRegistryMachineSystemPath;
    LPCWSTR pszHostRegistryMachineSecurityPath;
    LPCWSTR pszHostRegistryMachineSAMPath;
    LPCWSTR pszHostRegistryMachineComponentsPath;
    LPCWSTR pszHostRegistryUserDotDefaultPath;
    LPCWSTR pszHostRegistryDefaultUserPath;
    ULONG ulProcessorArchitecture;
    LPCWSTR pszHostRegistryMachineOfflineSchemaPath;
    } 	OFFLINE_STORE_CREATION_PARAMETERS;

typedef struct _OFFLINE_STORE_CREATION_PARAMETERS *POFFLINE_STORE_CREATION_PARAMETERS;

typedef const OFFLINE_STORE_CREATION_PARAMETERS *PCOFFLINE_STORE_CREATION_PARAMETERS;

struct _OFFLINE_STORE_CREATION_PARAMETERS_EX : _OFFLINE_STORE_CREATION_PARAMETERS
{
    LPCWSTR pszExternalServicingDirectory;          // Non-null value operates 
    LPCWSTR pszHostRegistryMachineDriversPath;      // path in the host's registry namespace to HKEY_LOCAL_MACHINE\DRIVERS (a/k/a \Registry\Machine\DRIVERS) for the target OS
    LPCWSTR pszHostRegistryBcdPath;                 // path in the host's registry namespace to BCD (a/k/a \boot\BCD ) for the EFIESP Partition in mobile
    LPCWSTR pszHostRegistryExternalServicingPath;   // optionally set up external storage hive using preloaded key
};
typedef _OFFLINE_STORE_CREATION_PARAMETERS_EX OFFLINE_STORE_CREATION_PARAMETERS_EX;
typedef OFFLINE_STORE_CREATION_PARAMETERS_EX *POFFLINE_STORE_CREATION_PARAMETERS_EX;
typedef const OFFLINE_STORE_CREATION_PARAMETERS_EX *PCOFFLINE_STORE_CREATION_PARAMETERS_EX;

enum __MIDL___MIDL_itf_isolation_0000_0043_0001
    {
        CREATE_NEW_OFFLINE_STORE_FLAGS_NO_MANIFEST_CACHING	= 0x1
    } ;

enum __MIDL___MIDL_itf_isolation_0000_0043_0002
    {
        CREATE_NEW_WINDOWS_DISABLE_COMPONENT_BACKUPS	= 0x1,
        CREATE_NEW_WINDOWS_DISABLE_SMI	= 0x2,
        CREATE_NEW_WINDOWS_DISABLE_MANIFEST_CACHE	= 0x4,
        CREATE_NEW_WINDOWS_SINGLE_RESOURCE_OWNERSHIP	= 0x8,
        CREATE_NEW_WINDOWS_MOBILE_STORE	= 0x20
    } ;
/* [local] */ HRESULT __stdcall DismountRegistryHives( 
    /* [annotation][out] */ 
    _Inout_  PVOID pvKeys);

typedef HRESULT ( __stdcall *PDISMOUNT_REGISTRY_HIVES )( 
    /* [annotation][out] */ 
    _Inout_  PVOID pvKeys);

/* [local] */ HRESULT __stdcall CreateNewOfflineStore( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  PCOFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppStore,
    /* [annotation][full][out] */ 
    _Out_opt_  DWORD *pdwDisposition);

typedef HRESULT ( __stdcall *PCREATE_NEW_OFFLINE_STORE_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  PCOFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppStore,
    /* [annotation][out] */ 
    _Out_  DWORD *pdwDisposition);


enum __MIDL___MIDL_itf_isolation_0000_0043_0003
    {
        OPEN_EXISTING_OFFLINE_STORE_FLAGS_NO_MANIFEST_CACHING	= 0x1
    } ;
/* [local] */ HRESULT __stdcall OpenExistingOfflineStore( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  PCOFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppStore,
    /* [annotation][out] */ 
    _Out_  DWORD *pdwDisposition);

typedef HRESULT ( __stdcall *POPEN_EXISTING_OFFLINE_STORE_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  PCOFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppStore,
    /* [annotation][out] */ 
    _Out_  DWORD *pdwDisposition);


enum __MIDL___MIDL_itf_isolation_0000_0043_0004
    {
        CREATE_NEW_PSEUDO_WINDOWS_FLAG_PICK_A_LOCATION	= 0x1,
        CREATE_NEW_PSEUDO_WINDOWS_FLAG_WINPE_LAYOUT	= 0x2,
        CREATE_NEW_PSEUDO_WINDOWS_FLAG_PICK_REG_ROOT	= 0x4,
        CREATE_NEW_PSEUDO_WINDOWS_FLAG_USE_EXT_STORAGE	= 0x8,
        CREATE_NEW_PSEUDO_WINDOWS_FLAG_KEEP_EXISTING	= 0x10
    } ;
/* [local] */ HRESULT __stdcall CreateNewPseudoWindows( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszDirectoryRoot,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszRegistryRoot,
    /* [annotation][out] */ 
    _Inout_  POFFLINE_STORE_CREATION_PARAMETERS pParameters);

typedef HRESULT ( __stdcall *PCREATE_NEW_PSEUDO_WINDOWS_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszDirectoryRoot,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszRegistryRoot,
    /* [annotation][out] */ 
    _Inout_  POFFLINE_STORE_CREATION_PARAMETERS pParameters);

/* [local] */ HRESULT __stdcall CreateNewPseudoWindowsEx( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszDirectoryRoot,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszRegistryRoot,
    /* [annotation][out] */ 
    _Inout_  POFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][out] */ 
    _Out_opt_  PVOID *ppvRootkey);

typedef HRESULT ( __stdcall *PCREATE_NEW_PSEUDO_WINDOWS_EX_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszDirectoryRoot,
    /* [annotation][full][in] */ 
    _In_opt_  LPCWSTR pszRegistryRoot,
    /* [annotation][out] */ 
    _Inout_  POFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][out] */ 
    _Out_opt_  PVOID *ppvRootkey);

/* [local] */ HRESULT __stdcall CreateNewWindows( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][full][in] */ 
    _In_  LPCWSTR pszSystemDrive,
    /* [annotation][out] */ 
    _Inout_  POFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][out] */ 
    _Out_opt_  PVOID *ppvKeys,
    /* [annotation][out] */ 
    _Out_opt_  DWORD *pdwDisposition);

typedef HRESULT ( __stdcall *PCREATE_NEW_WINDOWS_FUNCTION )( 
    /* [annotation][in] */ 
    _In_opt_  DWORD dwFlags,
    /* [annotation][full][in] */ 
    _In_  LPCWSTR pszSystemDrive,
    /* [annotation][out] */ 
    _Inout_  POFFLINE_STORE_CREATION_PARAMETERS pParameters,
    /* [annotation][out] */ 
    _Out_opt_  PVOID *ppvKeys,
    /* [annotation][out] */ 
    _Out_opt_  DWORD *pdwDisposition);

/* [local] */ HRESULT __stdcall GetSystemStoreForTest( 
    /* [annotation][in] */ 
    _In_  LPCWSTR FilesystemTempRoot,
    /* [annotation][in] */ 
    _In_  LPCWSTR RegistryTempRoot,
    /* [annotation][out] */ 
    _Out_  IStore **ppIStore);

typedef HRESULT ( __stdcall *PGET_SYSTEM_STORE_FOR_TEST_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  LPCWSTR FilesystemTempRoot,
    /* [annotation][in] */ 
    _In_  LPCWSTR RegistryTempRoot,
    /* [annotation][out] */ 
    _Out_  IStore **ppIStore);

/* [local] */ HRESULT __stdcall GetUserStore( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  HANDLE hToken,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppIStore);

typedef HRESULT ( __stdcall *PGET_USER_STORE_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD dwFlags,
    /* [annotation][in] */ 
    _In_  HANDLE hToken,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppIStore);

/* [local] */ HRESULT __stdcall GetUserStoreForTest( 
    /* [annotation][in] */ 
    _In_  LPCWSTR FilesystemTempRoot,
    /* [annotation][in] */ 
    _In_  LPCWSTR RegistryTempRoot,
    /* [annotation][out] */ 
    _Out_  IStore **ppIStore);

typedef HRESULT ( __stdcall *PGET_USER_STORE_FOR_TEST_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  LPCWSTR FilesystemTempRoot,
    /* [annotation][in] */ 
    _In_  LPCWSTR RegistryTempRoot,
    /* [annotation][out] */ 
    _Out_  IStore **ppIStore);

/* [local] */ HRESULT __stdcall GetUserStateManager( 
    /* [annotation][in] */ 
    _In_  DWORD Flags,
    /* [annotation][in] */ 
    _In_  HANDLE hToken,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppManager);

typedef HRESULT ( __stdcall *PGET_USER_STATE_MANAGER_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  DWORD Flags,
    /* [annotation][in] */ 
    _In_  HANDLE hToken,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppManager);

/* [local] */ HRESULT __stdcall ParseManifest( 
    /* [annotation][in] */ 
    _In_  LPCWSTR pszManifestPath,
    /* [annotation][full][in] */ 
    _In_opt_  IManifestParseErrorCallback *pIManifestParseErrorCallback,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppManifest);

typedef HRESULT ( __stdcall *PPARSE_MANIFEST_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  LPCWSTR pszManifestPath,
    /* [annotation][full][in] */ 
    _In_opt_  IManifestParseErrorCallback *pIManifestParseErrorCallback,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppManifest);

/* [local] */ HRESULT __stdcall ParseManifestFromXML( 
    /* [annotation][in] */ 
    _In_reads_bytes_(cbDataSize)  const void *pvData,
    /* [annotation][in] */ 
    _In_  SIZE_T cbDataSize,
    /* [annotation][unique][in] */ 
    _In_opt_  IManifestParseErrorCallback *pIManifestParseErrorCallback,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppManifest);

typedef HRESULT ( __stdcall *PPARSE_MANIFEST_FROM_XML_FUNCTION )( 
    /* [annotation][in] */ 
    _In_reads_bytes_(cbDataSize)  const void *pvData,
    /* [annotation][in] */ 
    _In_  SIZE_T cbDataSize,
    /* [annotation][unique][in] */ 
    _In_opt_  IManifestParseErrorCallback *pIManifestParseErrorCallback,
    /* [annotation][in] */ 
    _In_  REFIID riid,
    /* [annotation][iid_is][out] */ 
    _Out_  IUnknown **ppManifest);

/* [local] */ HRESULT __stdcall GetCurrentActContext( 
    /* [annotation][out] */ 
    _Out_  IActContext **ppIActContext);

typedef HRESULT ( __stdcall *PGET_CURRENT_ACT_CONTEXT_FUNCTION )( 
    /* [annotation][out] */ 
    _Out_  IActContext **ppIActContext);

/* [local] */ HRESULT __stdcall CreateActContext( 
    /* [annotation][in] */ 
    _In_  PCCREATE_APP_CONTEXT_DATA Data,
    /* [annotation][out] */ 
    _Out_  IActContext **ppIActContext);

typedef HRESULT ( __stdcall *PCREATE_ACT_CONTEXT_FUNCTION )( 
    /* [annotation][in] */ 
    _In_  PCCREATE_APP_CONTEXT_DATA Data,
    /* [annotation][out] */ 
    _Out_  IActContext **ppIActContext);



extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0043_v0_0_s_ifspec;


#ifndef __Isolation_LIBRARY_DEFINED__
#define __Isolation_LIBRARY_DEFINED__

/* library Isolation */
/* [version][helpstring][uuid] */ 






















EXTERN_C const IID LIBID_Isolation;
#endif /* __Isolation_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_isolation_0000_0044 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_isolation_0000_0044_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


