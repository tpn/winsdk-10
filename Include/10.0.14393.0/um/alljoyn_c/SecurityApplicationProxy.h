/**
 * @file
 * This file defines the alljoyn_securityapplicationproxy and related functions.
 */
/******************************************************************************
 * Copyright AllSeen Alliance. All rights reserved.
 *
 *    Permission to use, copy, modify, and/or distribute this software for any
 *    purpose with or without fee is hereby granted, provided that the above
 *    copyright notice and this permission notice appear in all copies.
 *
 *    THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 *    WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 *    MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 *    ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 *    WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 *    ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 *    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 ******************************************************************************/

#ifndef _ALLJOYN_C_SECURITY_APPLICATION_PROXY_H
#define _ALLJOYN_C_SECURITY_APPLICATION_PROXY_H

#include <alljoyn_c/AjAPI.h>
#include <alljoyn_c/PermissionConfigurator.h>
#include <alljoyn_c/BusAttachment.h>
#include <alljoyn_c/Session.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Session port reserved for SecurityApplicationProxy connections.
 */
extern const alljoyn_sessionport PERMISSION_MANAGEMENT_SESSION_PORT;

/**
 * alljoyn_securityapplicationproxy is a handle which exposes Security 2.0
 * proxy object used to managed the remote application's security settings.
 */
typedef struct _alljoyn_securityapplicationproxy_handle* alljoyn_securityapplicationproxy;

/**
 * Creates a Security 2.0 proxy object used to manage the remote application's security settings.
 *
 * @param[in]    bus        The bus attachment from which we're creating the proxy.
 * @param[in]    appBusName The unique bus name of the managed application.
 * @param[in]    sessionId  The session id to be used for communicating with the managed application.
 *                          It needs to be separately obtained using alljoyn_busattachment_joinsession.
 *
 * @return   The alljoyn_securityapplicationproxy. Has to be later destroyed using alljoyn_securityapplicationproxy_destroy.
 */
AJ_API alljoyn_securityapplicationproxy AJ_CALL alljoyn_securityapplicationproxy_create(alljoyn_busattachment bus,
                                                                                        AJ_PCSTR appBusName,
                                                                                        alljoyn_sessionid sessionId);

/**
 * Destroys the alljoyn_securityapplicationproxy created in alljoyn_securityapplicationproxy_create.
 *
 * @param[in]    proxy   The alljoyn_securityapplicationproxy being destroyed.
 */
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_destroy(alljoyn_securityapplicationproxy proxy);

/**
 * Claims the application. The application is provided an identity certificate chain with
 * its own cert as the leaf. The application automatically installs the policy to
 * allow all communication from the provided admin group.
 * The application's manifests are installed as well.
 *
 * @param[in]    proxy                      The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[in]    caKey                      Null-terminated C string representing the CA's PEM-encoded public key.
 * @param[in]    identityCertificateChain   Null-terminated C string representing PEM-encoded identity certificates
 *                                          with the app's certificate being the leaf. The leaf is listed first
 *                                          followed by each intermediate Certificate Authority's certificate, ending
 *                                          in the trusted root's certificate.
 * @param[in]    groupId                    Byte array representing the admin group GUID.
 * @param[in]    groupSize                  Size of "groupId" array. It must be equal to 16.
 * @param[in]    groupAuthority             Null-terminated C string containing the PEM-encoded public key of the
 *                                          security group authority.
 * @param[in]    manifestsXmls              An array of null-terminated strings containing the application's
 *                                          signed manifests in XML format. The signed manifest's XSD is located under
 *                                          alljoyn_core/docs/manifest.xsd.
 * @param[in]    manifestsCount             Count of "manifestsXmls" array elements.
 *
 * @return
 *          - #ER_OK If successful.
 *          - Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_claim(alljoyn_securityapplicationproxy proxy,
                                                              AJ_PCSTR caKey,
                                                              AJ_PCSTR identityCertificateChain,
                                                              const uint8_t* groupId,
                                                              size_t groupSize,
                                                              AJ_PCSTR groupAuthority,
                                                              AJ_PCSTR* manifestsXmls, size_t manifestsCount);

/**
 * Retrieves the manifest template in XML form from the application.
 *
 * @param[in]    proxy           The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[out]   manifestXml     A null-terminated C string with the manifest template in XML format.
 *                               The string is managed by the caller and must be later destroyed
 *                               using alljoyn_securityapplicationproxy_manifesttemplate_destroy.
 *
 * @return
 *          - #ER_OK If successful.
 *          - Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getmanifesttemplate(alljoyn_securityapplicationproxy proxy, AJ_PSTR* manifestXml);

/**
 * Frees the memory allocated for the manifest template inside alljoyn_securityapplicationproxy_get_manifest_template.
 *
 * @param[in]   manifestXml     Manifest string created using alljoyn_securityapplicationproxy_get_manifest_template.
 */
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_manifesttemplate_destroy(AJ_PSTR manifestXml);

/**
 * Representation of the current state of the application.
 * @see alljoyn_applicationstate in PermissionConfigurator.h for available values.
 *
 * @param[in]    proxy              The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[out]   applicationState   Current state of the application.
 *
 * @return
 *          - #ER_OK If successful.
 *          - Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getapplicationstate(alljoyn_securityapplicationproxy proxy, alljoyn_applicationstate* applicationState);

/**
 * The authentication mechanisms the managed application supports for the claim process.
 * It is a bit mask.
 * @see alljoyn_claimcapability in PermissionConfigurator.h for available values.
 *
 * @param[in]    proxy           The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[out]   capabilities    Application's claim capabilities masks.
 *
 * @return
 *          - #ER_OK If successful.
 *          - Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getclaimcapabilities(alljoyn_securityapplicationproxy proxy, alljoyn_claimcapabilities* capabilities);

/**
 * The additional information on the claim capabilities supported by the managed application.
 * It is a bit mask.
 * @see alljoyn_claimcapabilityadditionalinfo in PermissionConfigurator.h for available values.
 *
 * @param[in]    proxy           The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[out]   additionalInfo  Application's claim capabilities additional info.
 *
 * @return
 *          - #ER_OK If successful.
 *          - Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_getclaimcapabilitiesadditionalinfo(alljoyn_securityapplicationproxy proxy, alljoyn_claimcapabilitiesadditionalinfo* additionalInfo);

/**
 * This method allows an admin to install the permission policy to the
 * application. Any existing policy will be replaced if the new policy version
 * number is greater than the existing policy's version number.
 *
 * Until ASACORE-2755 is fixed the caller must include all default policies
 * (containing information about the trust anchors) with each call, so they
 * would not be removed.
 *
 * After having a new policy installed, the target bus clears out all of
 * its peer's secret and session keys, so so any existing secure session will
 * need to be re-established: alljoyn_busattachment_secureconnectionasync(true)
 * should be called to force the peers to create a new set of secret and session keys.
 *
 * @param[in]    proxy      The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[in]    policyXml  The new policy in XML format. For the policy XSD refer to
 *                          alljoyn_core/docs/policy.xsd.
 *
 * @return
 *          - #ER_OK                If successful.
 *          - #ER_PERMISSION_DENIED Error raised when the caller does not have permission.
 *          - #ER_POLICY_NOT_NEWER  Error raised when the new policy does not have a
 *                                  greater version number than the existing policy.
 *          - #ER_XML_MALFORMED     Error raised when the provided XML is not in supported policy format.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_updatepolicy(alljoyn_securityapplicationproxy proxy, AJ_PCSTR policyXml);

/**
 * This method allows an admin to update the application's identity certificate and manifests.
 * All old manifests will be overwritten by the new set.
 *
 * After having a new identity certificate installed, the target bus clears
 * out all of its peer's secret and session keys, so the next call will get
 * security violation. After calling alljoyn_securityapplicationproxy_updateidentity,
 * alljoyn_busattachment_secureconnectionasync(true) should be called to force
 * the peers to create a new set of secret and session keys.
 *
 * @param[in]    proxy                      The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[in]    identityCertificateChain   Null-terminated C string representing PEM-encoded identity certificate chain
 *                                          with the application's certificate being the leaf. The leaf is listed first
 *                                          followed by each intermediate Certificate Authority's certificate, ending
 *                                          in the trusted root's certificate.
 * @param[in]    manifestsXmls              An array of null-terminated strings containing the application's
 *                                          signed manifests in XML format.
 * @param[in]    manifestsCount             Count of "manifestsXmls" array elements.
 *
 * @return
 *          - #ER_OK                        If successful.
 *          - #ER_PERMISSION_DENIED         Error raised when the caller does not have permission.
 *          - #ER_INVALID_CERTIFICATE       Error raised when the identity certificate chain is not valid.
 *          - #ER_INVALID_CERTIFICATE_USAGE Error raised when the Extended Key Usage is not AllJoyn specific.
 *          - #ER_DIGEST_MISMATCH           Error raised when none of the provided signed manifests are
 *                                          valid for the given identity certificate.
 *          - #ER_XML_MALFORMED             Error raised the manifest is not compliant with the required format.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_updateidentity(alljoyn_securityapplicationproxy proxy,
                                                                       AJ_PCSTR identityCertificateChain,
                                                                       AJ_PCSTR* manifestsXmls, size_t manifestsCount);

/**
 * This method allows the admin to install a membership cert chain to the
 * application.
 *
 * @param[in]    proxy                      The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[in]    membershipCertificateChain Null-terminated C string representing PEM encoded membership certificates
 *                                          with the app's certificate being listed first followed by each intermediate
 *                                          Certificate Authority's certificate, ending in the trusted root's certificate.
 *
 * @return
 *          - #ER_OK                    If successful.
 *          - #ER_PERMISSION_DENIED     Error raised when the caller does not have permission.
 *          - #ER_DUPLICATE_CERTIFICATE Error raised when the membership certificate
 *                                      is already installed.
 *          - #ER_INVALID_CERTIFICATE   Error raised when the membership certificate is not valid.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_installmembership(alljoyn_securityapplicationproxy proxy, AJ_PCSTR membershipCertificateChain);

/**
 * This method allows an admin to reset the application to its original state
 * prior to claim. The application's security 2.0 related configuration is
 * discarded. The application is no longer claimed, but this is not a complete factory reset.
 * The managed application keeps its private key.
 *
 * @param[in]    proxy  The alljoyn_securityapplicationproxy connected to the managed application.
 *
 * @return
 *          - #ER_OK                If successful.
 *          - #ER_PERMISSION_DENIED Error raised when the caller does not have permission.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_reset(alljoyn_securityapplicationproxy proxy);

/**
 * This method allows an admin to remove the currently installed policy. The
 * application reverts back to the default policy generated during the claiming
 * process.
 *
 * @param[in]    proxy  The alljoyn_securityapplicationproxy connected to the managed application.
 *
 * @return
 *          - #ER_OK                If successful.
 *          - #ER_PERMISSION_DENIED Error raised when the caller does not have permission.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_resetpolicy(alljoyn_securityapplicationproxy proxy);

/**
 * Informs the remote appllication that the Security Manager will start changing its
 * Security 2.0 configuration, so it has an opportunity to gracefully terminate all
 * open sessions.
 * After the setup is finished the remote application has to be informed about this fact
 * using alljoyn_securityapplicationproxy_endmanagement.
 *
 * @param[in]    proxy  The alljoyn_securityapplicationproxy connected to the managed application.
 *
 * @return
 *          - #ER_OK If successful.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_startmanagement(alljoyn_securityapplicationproxy proxy);

/**
 * Informs the remote application that all of the Security 2.0 configuration started with
 * alljoyn_securityapplicationproxy_endmanagement has finished.
 *
 * @param[in]    proxy  The alljoyn_securityapplicationproxy connected to the managed application.
 *
 * @return
 *          - #ER_OK If successful.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_endmanagement(alljoyn_securityapplicationproxy proxy);

/**
 * Retrieves (in PEM format) the public ECC key used by the managed application.
 *
 * @param[in]    proxy          The alljoyn_securityapplicationproxy connected to the managed application.
 * @param[out]   eccPublicKey   Application's ECC public key in PEM format. It should be later destroyed
 *                              using the alljoyn_securityapplicationproxy_eccpublickey_destroy call.
 *
 * @return
 *          - #ER_OK If successful.
 *          - An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_geteccpublickey(alljoyn_securityapplicationproxy proxy, AJ_PSTR* eccPublicKey);

/**
 * Frees the memory allocated while calling alljoyn_securityapplicationproxy_geteccpublickey.
 *
 * @param[in]   eccPublicKey   The public ECC key returned by alljoyn_securityapplicationproxy_geteccpublickey.
 */
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_eccpublickey_destroy(AJ_PSTR eccPublicKey);

/**
 * Adds an identity certificate thumbprint to and signs the manifest XML.
 *
 * @param[in]    unsignedManifestXml    The unsigned manifest in XML format. The XML schema can be found
 *                                      under alljoyn_core/docs/manifest_template.xsd.
 * @param[in]    identityCertificatePem The identity certificate of the remote application that will
 *                                      use the signed manifest.
 * @param[in]    signingPrivateKeyPem   The PEM-encoded private ECC key used to sign the manifests. This must
 *                                      be the same private key used to sign the identity certificate.
 * @param[out]   signedManifestXml      The signed manifest in XML format.
 *                                      The string is managed by the caller and must be later destroyed
 *                                      using alljoyn_securityapplicationproxy_manifest_destroy.
 *
 * @return
 *          - #ER_OK            If successful.
 *          - #ER_XML_MALFORMED If the unsigned manifest is not compliant with the required format.
 *          - Other error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_securityapplicationproxy_signmanifest(AJ_PCSTR unsignedManifestXml,
                                                                     AJ_PCSTR identityCertificatePem,
                                                                     AJ_PCSTR signingPrivateKeyPem,
                                                                     AJ_PSTR* signedManifestXml);

/**
 * Frees the memory allocated while calling alljoyn_securityapplicationproxy_signmanifest.
 *
 * @param[in]   signedManifestXml   The signed manifest returned by alljoyn_securityapplicationproxy_signmanifest.
 */
AJ_API void AJ_CALL alljoyn_securityapplicationproxy_manifest_destroy(AJ_PSTR signedManifestXml);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
