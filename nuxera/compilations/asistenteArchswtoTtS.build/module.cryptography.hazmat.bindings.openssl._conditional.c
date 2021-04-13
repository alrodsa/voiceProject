/* Generated code for Python module 'cryptography.hazmat.bindings.openssl._conditional'
 * created by Nuitka version 0.6.13.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_cryptography$hazmat$bindings$openssl$_conditional" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$bindings$openssl$_conditional;
PyDictObject *moduledict_cryptography$hazmat$bindings$openssl$_conditional;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[105];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "cryptography.hazmat.bindings.openssl._conditional");

    constants_created = true;
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$bindings$openssl$_conditional(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "cryptography.hazmat.bindings.openssl._conditional");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_032255d0f4befe64421f333ece2e9526;
static PyCodeObject *codeobj_343859072a8f4355b6b831d433cfdac4;
static PyCodeObject *codeobj_03981d50792184da048765ef8af65476;
static PyCodeObject *codeobj_c012278a786fbea7047ace17748068e9;
static PyCodeObject *codeobj_8845c537839f1a7e604f96dd50956eec;
static PyCodeObject *codeobj_f15276d23cde19c3ff4de7154fb12ae1;
static PyCodeObject *codeobj_e17a6f81c941ad01c24fa68512c3a872;
static PyCodeObject *codeobj_c49b3fbd808ed37ac794efd2a6f9cd8e;
static PyCodeObject *codeobj_a4f27c314e36342f3b8eb757bace376f;
static PyCodeObject *codeobj_caa3366625099dc70ab49eca82b73424;
static PyCodeObject *codeobj_bc8005e0b4fd71ebdf8a4009b6183710;
static PyCodeObject *codeobj_c4e83f1eaa65669b696fb948b81db0b5;
static PyCodeObject *codeobj_e6343fc515a7305c757bc348be410a98;
static PyCodeObject *codeobj_d4658a8d2e3f63be4533dd651ebf517d;
static PyCodeObject *codeobj_0b087d831d6826a78f564cf03934abf2;
static PyCodeObject *codeobj_a2a59ee7eeda2f44feb8405e7df6d78c;
static PyCodeObject *codeobj_343484f1cb2510e8eae1f0628206affe;
static PyCodeObject *codeobj_175c6e55bd100e9b7977969e0119d58e;
static PyCodeObject *codeobj_bcbb1dc40e2628e1c0394aee01118d8b;
static PyCodeObject *codeobj_79e617077661887dbf7552553af05608;
static PyCodeObject *codeobj_3663fceb282743369fdb95050a8e7c08;
static PyCodeObject *codeobj_e995f42c404dfd021831d7a0bcb128bf;
static PyCodeObject *codeobj_66d065bee15f410ebcea696f12407b95;
static PyCodeObject *codeobj_22f0155d4f04d18972a6b66f2950d200;
static PyCodeObject *codeobj_172ad814b4cf76656b168160b65262e6;
static PyCodeObject *codeobj_56a45ae14194e52725b7290168804da8;
static PyCodeObject *codeobj_d0c1f8f2819f938917cb21849a27ad5b;
static PyCodeObject *codeobj_e105602c25e3460c8befc7b187ad83d7;
static PyCodeObject *codeobj_277a531f4690ce3409d003d7ddb4c292;
static PyCodeObject *codeobj_3030762a8dddd3198aded827e4596ff5;
static PyCodeObject *codeobj_0df4451db1ea8737015042062492b7d9;
static PyCodeObject *codeobj_0108ab361c24adc14f5df25b55781796;
static PyCodeObject *codeobj_13b39e417a78265d7b9fad2e6241eee2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[103]); CHECK_OBJECT(module_filename_obj);
    codeobj_032255d0f4befe64421f333ece2e9526 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[104], NULL, NULL, 0, 0, 0);
    codeobj_343859072a8f4355b6b831d433cfdac4 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], NULL, NULL, 0, 0, 0);
    codeobj_03981d50792184da048765ef8af65476 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], NULL, NULL, 0, 0, 0);
    codeobj_c012278a786fbea7047ace17748068e9 = MAKE_CODEOBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], NULL, NULL, 0, 0, 0);
    codeobj_8845c537839f1a7e604f96dd50956eec = MAKE_CODEOBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], NULL, NULL, 0, 0, 0);
    codeobj_f15276d23cde19c3ff4de7154fb12ae1 = MAKE_CODEOBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], NULL, NULL, 0, 0, 0);
    codeobj_e17a6f81c941ad01c24fa68512c3a872 = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], NULL, NULL, 0, 0, 0);
    codeobj_c49b3fbd808ed37ac794efd2a6f9cd8e = MAKE_CODEOBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], NULL, NULL, 0, 0, 0);
    codeobj_a4f27c314e36342f3b8eb757bace376f = MAKE_CODEOBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], NULL, NULL, 0, 0, 0);
    codeobj_caa3366625099dc70ab49eca82b73424 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], NULL, NULL, 0, 0, 0);
    codeobj_bc8005e0b4fd71ebdf8a4009b6183710 = MAKE_CODEOBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], NULL, NULL, 0, 0, 0);
    codeobj_c4e83f1eaa65669b696fb948b81db0b5 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], NULL, NULL, 0, 0, 0);
    codeobj_e6343fc515a7305c757bc348be410a98 = MAKE_CODEOBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], NULL, NULL, 0, 0, 0);
    codeobj_d4658a8d2e3f63be4533dd651ebf517d = MAKE_CODEOBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], NULL, NULL, 0, 0, 0);
    codeobj_0b087d831d6826a78f564cf03934abf2 = MAKE_CODEOBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], NULL, NULL, 0, 0, 0);
    codeobj_a2a59ee7eeda2f44feb8405e7df6d78c = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], NULL, NULL, 0, 0, 0);
    codeobj_343484f1cb2510e8eae1f0628206affe = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], NULL, NULL, 0, 0, 0);
    codeobj_175c6e55bd100e9b7977969e0119d58e = MAKE_CODEOBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], NULL, NULL, 0, 0, 0);
    codeobj_bcbb1dc40e2628e1c0394aee01118d8b = MAKE_CODEOBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], NULL, NULL, 0, 0, 0);
    codeobj_79e617077661887dbf7552553af05608 = MAKE_CODEOBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], NULL, NULL, 0, 0, 0);
    codeobj_3663fceb282743369fdb95050a8e7c08 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], NULL, NULL, 0, 0, 0);
    codeobj_e995f42c404dfd021831d7a0bcb128bf = MAKE_CODEOBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], NULL, NULL, 0, 0, 0);
    codeobj_66d065bee15f410ebcea696f12407b95 = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], NULL, NULL, 0, 0, 0);
    codeobj_22f0155d4f04d18972a6b66f2950d200 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], NULL, NULL, 0, 0, 0);
    codeobj_172ad814b4cf76656b168160b65262e6 = MAKE_CODEOBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], NULL, NULL, 0, 0, 0);
    codeobj_56a45ae14194e52725b7290168804da8 = MAKE_CODEOBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], NULL, NULL, 0, 0, 0);
    codeobj_d0c1f8f2819f938917cb21849a27ad5b = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], NULL, NULL, 0, 0, 0);
    codeobj_e105602c25e3460c8befc7b187ad83d7 = MAKE_CODEOBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], NULL, NULL, 0, 0, 0);
    codeobj_277a531f4690ce3409d003d7ddb4c292 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], NULL, NULL, 0, 0, 0);
    codeobj_3030762a8dddd3198aded827e4596ff5 = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], NULL, NULL, 0, 0, 0);
    codeobj_0df4451db1ea8737015042062492b7d9 = MAKE_CODEOBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_0108ab361c24adc14f5df25b55781796 = MAKE_CODEOBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], NULL, NULL, 0, 0, 0);
    codeobj_13b39e417a78265d7b9fad2e6241eee2 = MAKE_CODEOBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_scrypt();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_pkey_dhx();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_mem_functions();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_sct();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_store_ctx_get_issuer();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ed448();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_ed25519();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_poly1305();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_oneshot_evp_digest_sign_verify();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_evp_digestfinal_xof();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_evp_pkey_get_set_tls_encodedpoint();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_fips();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_ssl_sigalgs();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_psk();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_custom_ext();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_openssl_cleanup();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_tlsv13();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_keylog();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_raw_key();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_engine();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_rsa_oaep_md();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_verified_chain();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_srtp();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_get_proto_version();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_rsa_oaep_label();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl3_method();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_102_verification();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_110_verification_params();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_set_cert_cb();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ssl_st();


static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tls_st();


// The module function definitions.
static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[0]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_rsa_oaep_md(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[1]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_rsa_oaep_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[2]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl3_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[3]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_102_verification(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[4]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_110_verification_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[5]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_set_cert_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[6]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ssl_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[7]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tls_st(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[8]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_scrypt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[9]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_pkey_dhx(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[10]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_mem_functions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[11]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_sct(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[12]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_store_ctx_get_issuer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[13]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ed448(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[14]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_ed25519(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[15]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_poly1305(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[16]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_oneshot_evp_digest_sign_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[17]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_evp_digestfinal_xof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[18]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_evp_pkey_get_set_tls_encodedpoint(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[19]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_fips(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[20]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_ssl_sigalgs(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[21]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_psk(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[22]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_custom_ext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[23]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_openssl_cleanup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[24]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_tlsv13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[25]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_keylog(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[26]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_raw_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[27]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_engine(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[28]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_verified_chain(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[29]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_srtp(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[30]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_get_proto_version(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = LIST_COPY(mod_consts[31]);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_scrypt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_scrypt,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_66d065bee15f410ebcea696f12407b95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_pkey_dhx() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_pkey_dhx,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_caa3366625099dc70ab49eca82b73424,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_mem_functions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_mem_functions,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b087d831d6826a78f564cf03934abf2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_sct() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_sct,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22f0155d4f04d18972a6b66f2950d200,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_store_ctx_get_issuer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_store_ctx_get_issuer,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_13b39e417a78265d7b9fad2e6241eee2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ed448() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ed448,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e17a6f81c941ad01c24fa68512c3a872,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_ed25519() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_ed25519,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f15276d23cde19c3ff4de7154fb12ae1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_poly1305() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_poly1305,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_175c6e55bd100e9b7977969e0119d58e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_oneshot_evp_digest_sign_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_oneshot_evp_digest_sign_verify,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a2a59ee7eeda2f44feb8405e7df6d78c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_evp_digestfinal_xof() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_evp_digestfinal_xof,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a4f27c314e36342f3b8eb757bace376f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8845c537839f1a7e604f96dd50956eec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_evp_pkey_get_set_tls_encodedpoint() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bc8005e0b4fd71ebdf8a4009b6183710,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_fips() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_fips,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c4e83f1eaa65669b696fb948b81db0b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_ssl_sigalgs() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_ssl_sigalgs,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e105602c25e3460c8befc7b187ad83d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_psk() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_psk,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bcbb1dc40e2628e1c0394aee01118d8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_custom_ext() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_custom_ext,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c012278a786fbea7047ace17748068e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_openssl_cleanup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_openssl_cleanup,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_343484f1cb2510e8eae1f0628206affe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_tlsv13() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_tlsv13,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0df4451db1ea8737015042062492b7d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_keylog() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_keylog,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4658a8d2e3f63be4533dd651ebf517d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_raw_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_raw_key,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_79e617077661887dbf7552553af05608,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_engine() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_engine,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c49b3fbd808ed37ac794efd2a6f9cd8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_rsa_oaep_md() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_rsa_oaep_md,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e995f42c404dfd021831d7a0bcb128bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_verified_chain() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_verified_chain,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0108ab361c24adc14f5df25b55781796,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_srtp() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_srtp,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_56a45ae14194e52725b7290168804da8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_get_proto_version() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_get_proto_version,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6343fc515a7305c757bc348be410a98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_rsa_oaep_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_rsa_oaep_label,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3663fceb282743369fdb95050a8e7c08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl3_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl3_method,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0c1f8f2819f938917cb21849a27ad5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_102_verification() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_102_verification,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_343859072a8f4355b6b831d433cfdac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_110_verification_params() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_110_verification_params,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03981d50792184da048765ef8af65476,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_set_cert_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_set_cert_cb,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_172ad814b4cf76656b168160b65262e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ssl_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ssl_st,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_277a531f4690ce3409d003d7ddb4c292,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tls_st() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tls_st,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3030762a8dddd3198aded827e4596ff5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_cryptography$hazmat$bindings$openssl$_conditional[] = {
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_rsa_oaep_md,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_rsa_oaep_label,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl3_method,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_102_verification,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_110_verification_params,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_set_cert_cb,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ssl_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tls_st,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_scrypt,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_pkey_dhx,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_mem_functions,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_sct,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_store_ctx_get_issuer,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ed448,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_ed25519,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_poly1305,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_oneshot_evp_digest_sign_verify,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_evp_digestfinal_xof,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_evp_pkey_get_set_tls_encodedpoint,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_fips,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_ssl_sigalgs,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_psk,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_custom_ext,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_openssl_cleanup,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_tlsv13,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_keylog,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_raw_key,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_engine,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_verified_chain,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_srtp,
    impl_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_get_proto_version,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_cryptography$hazmat$bindings$openssl$_conditional;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_cryptography$hazmat$bindings$openssl$_conditional) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_cryptography$hazmat$bindings$openssl$_conditional[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_cryptography$hazmat$bindings$openssl$_conditional,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "cryptography.hazmat.bindings.openssl._conditional";

// Internal entry point for module code.
PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_cryptography$hazmat$bindings$openssl$_conditional = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 0x300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Skipping module init, already done.\n");
#endif

        return module_cryptography$hazmat$bindings$openssl$_conditional;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("cryptography.hazmat.bindings.openssl._conditional: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcryptography$hazmat$bindings$openssl$_conditional\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_cryptography$hazmat$bindings$openssl$_conditional = MODULE_DICT(module_cryptography$hazmat$bindings$openssl$_conditional);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_cryptography$hazmat$bindings$openssl$_conditional,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$bindings$openssl$_conditional,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$bindings$openssl$_conditional,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$bindings$openssl$_conditional);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_cryptography$hazmat$bindings$openssl$_conditional);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_032255d0f4befe64421f333ece2e9526;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_032255d0f4befe64421f333ece2e9526 = MAKE_MODULE_FRAME(codeobj_032255d0f4befe64421f333ece2e9526, module_cryptography$hazmat$bindings$openssl$_conditional);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_032255d0f4befe64421f333ece2e9526);
    assert(Py_REFCNT(frame_032255d0f4befe64421f333ece2e9526) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_032255d0f4befe64421f333ece2e9526);
#endif
    popFrameStack();

    assertFrameObject(frame_032255d0f4befe64421f333ece2e9526);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_032255d0f4befe64421f333ece2e9526);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_032255d0f4befe64421f333ece2e9526, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_032255d0f4befe64421f333ece2e9526->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_032255d0f4befe64421f333ece2e9526, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__1_cryptography_has_ec2m();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__2_cryptography_has_rsa_oaep_md();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__3_cryptography_has_rsa_oaep_label();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__4_cryptography_has_ssl3_method();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__5_cryptography_has_102_verification();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__6_cryptography_has_110_verification_params();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__7_cryptography_has_set_cert_cb();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__8_cryptography_has_ssl_st();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__9_cryptography_has_tls_st();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__10_cryptography_has_scrypt();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__11_cryptography_has_evp_pkey_dhx();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__12_cryptography_has_mem_functions();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__13_cryptography_has_sct();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__14_cryptography_has_x509_store_ctx_get_issuer();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__15_cryptography_has_ed448();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__16_cryptography_has_ed25519();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__17_cryptography_has_poly1305();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__18_cryptography_has_oneshot_evp_digest_sign_verify();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__19_cryptography_has_evp_digestfinal_xof();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__20_cryptography_has_evp_pkey_get_set_tls_encodedpoint();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__21_cryptography_has_fips();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__22_cryptography_has_ssl_sigalgs();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__23_cryptography_has_psk();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__24_cryptography_has_custom_ext();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__25_cryptography_has_openssl_cleanup();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__26_cryptography_has_tlsv13();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__27_cryptography_has_keylog();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__28_cryptography_has_raw_key();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__29_cryptography_has_engine();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__30_cryptography_has_verified_chain();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__31_cryptography_has_srtp();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$bindings$openssl$_conditional$$$function__32_cryptography_has_get_proto_version();

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[70];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_36 = _PyDict_NewPresized( 32 );
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[71];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[72];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[73];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[74];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[75];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[76];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[77];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[78];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[79];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[80];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[81];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[82];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[83];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[84];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[85];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[86];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[87];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[88];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[89];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[90];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[91];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[92];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[93];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[94];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[95];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[96];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[97];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[98];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[99];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[100];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[101];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$bindings$openssl$_conditional, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_36);
    }

    return module_cryptography$hazmat$bindings$openssl$_conditional;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

