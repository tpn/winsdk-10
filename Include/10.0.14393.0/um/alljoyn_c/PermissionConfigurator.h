/**
 * @file
 * This file defines the alljoyn_permissionconfigurator and related functions.
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

#ifndef _ALLJOYN_C_PERMISSIONCONFIGURATOR_H
#define _ALLJOYN_C_PERMISSIONCONFIGURATOR_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * alljoyn_permissionconfigurator is a handle which exposes Security 2.0 permission
 * management capabilities to the application.
 */
typedef struct _alljoyn_permissionconfigurator_handle* alljoyn_permissionconfigurator;

/**
 *  Enum defining the application's current state.
 */
typedef enum {
    NOT_CLAIMABLE,      /**< The application is not claimed and not accepting claim requests. */
    CLAIMABLE,          /**< The application is not claimed and is accepting claim requests. */
    CLAIMED,            /**< The application is claimed and can be configured. */
    NEED_UPDATE         /**< The application is claimed, but requires a configuration update (after a software upgrade). */
} alljoyn_applicationstate;

/**
 *  Bitmasks used to indicate possible ways to claim the app.
 */
typedef uint16_t alljoyn_claimcapabilities;
typedef enum {
    CAPABLE_ECDHE_NULL = 0x0001,
    CAPABLE_ECDHE_ECDSA = 0x0004,
    CAPABLE_ECDHE_SPEKE = 0x0008
} alljoyn_claimcapability_masks;

extern const alljoyn_claimcapabilities CLAIM_CAPABILITIES_DEFAULT;

/**
 *  Bitmasks used to indicate password source.
 */
typedef uint16_t alljoyn_claimcapabilitiesadditionalinfo;
typedef enum {
    PASSWORD_GENERATED_BY_SECURITY_MANAGER = 0x0001,
    PASSWORD_GENERATED_BY_APPLICATION = 0x0002
} alljoyn_claimcapabilityadditionalinfo_masks;

/**
 * Retrieves the current application state.
 *
 * @param[in]   configurator    The queried alljoyn_permissionconfigurator.
 * @param[out]  state           Returned state.
 *
 * @return
 *          #ER_OK if successful.
 *          Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getapplicationstate(const alljoyn_permissionconfigurator configurator, alljoyn_applicationstate* state);

/**
 * Set the application state.  The state cannot be changed from CLAIMED to CLAIMABLE.
 *
 * @param[in]   configurator    The queried alljoyn_permissionconfigurator.
 * @param[in]   state           New state.
 *
 * @return
 *          #ER_OK if action is allowed.
 *          #ER_INVALID_APPLICATION_STATE if the state can't be changed.
 *          Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setapplicationstate(alljoyn_permissionconfigurator configurator, alljoyn_applicationstate state);

/**
 * Set the application's manifest template from an XML.
 *
 * @param[in]   configurator    The queried alljoyn_permissionconfigurator.
 * @param[in]   manifestXml     String containing the XML version of the manifest template.
 *
 * @return
 *          #ER_OK if successful.
 *          #ER_XML_MALFORMED if the the XML is not in a valid manifest template format.
 *          Other error status codes indicating a failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setmanifestfromxml(alljoyn_permissionconfigurator configurator, AJ_PCSTR manifestXml);

/**
 * Get the authentication mechanisms the application supports for the
 * claim process.
 *
 * @param[in]   configurator        The queried alljoyn_permissionconfigurator.
 * @param[out]  claimCapabilities   The authentication mechanisms the application supports.
 *
 * @return
 *          #ER_OK if successful.
 *          An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getclaimcapabilities(const alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilities* claimCapabilities);

/**
 * Set the authentication mechanisms the application supports for the
 * claim process. It is a bit mask created by the bitwise OR of the
 * alljoyn_claimcapability_masks constants.
 *
 * @param[in]   configurator        The queried alljoyn_permissionconfigurator.
 * @param[in]   claimCapabilities   The authentication mechanisms the application supports.
 *
 * @return
 *          #ER_OK if successful.
 *          An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setclaimcapabilities(alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilities claimCapabilities);

/**
 * Get the additional information on the claim capabilities.
 *
 * @param[in]   configurator    The queried alljoyn_permissionconfigurator.
 * @param[out]  additionalInfo  The additional claim info.
 *
 * @return
 *          #ER_OK if successful.
 *          An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_getclaimcapabilitiesadditionalinfo(const alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilitiesadditionalinfo* additionalInfo);

/**
 * Set the additional information on the claim capabilities.
 * It is a bit mask, created by the bitwise OR of the
 * alljoyn_claimcapabilityadditionalinfo_masks constants.
 *
 * @param[in]   configurator    The queried alljoyn_permissionconfigurator.
 * @param[in]   additionalInfo  The additional info.
 *
 * @return
 *          #ER_OK if successful.
 *          An error status indicating failure.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_setclaimcapabilitiesadditionalinfo(alljoyn_permissionconfigurator configurator, alljoyn_claimcapabilitiesadditionalinfo additionalInfo);

/**
 * Reset the permission settings by removing the manifest all the
 * trust anchors, installed policy and certificates.
 *
 * @param[in]   configurator    The alljoyn_permissionconfigurator performing the reset.
 *
 * @return
 *          #ER_OK if successful.
 *          An error code otherwise.
 */
AJ_API QStatus AJ_CALL alljoyn_permissionconfigurator_reset(alljoyn_permissionconfigurator configurator);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif