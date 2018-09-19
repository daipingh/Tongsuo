/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the OpenSSL license (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/kdferr.h>

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA KDF_str_functs[] = {
    {ERR_PACK(ERR_LIB_KDF, KDF_F_HKDF_EXTRACT, 0), "HKDF_Extract"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_HKDF_DERIVE, 0), "kdf_hkdf_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_HKDF_NEW, 0), "kdf_hkdf_new"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_HKDF_SIZE, 0), "kdf_hkdf_size"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_MD2CTRL, 0), "kdf_md2ctrl"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_PBKDF2_CTRL_STR, 0),
     "kdf_pbkdf2_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_PBKDF2_DERIVE, 0), "kdf_pbkdf2_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_PBKDF2_NEW, 0), "kdf_pbkdf2_new"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SCRYPT_CTRL_STR, 0),
     "kdf_scrypt_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SCRYPT_CTRL_UINT32, 0),
     "kdf_scrypt_ctrl_uint32"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SCRYPT_CTRL_UINT64, 0),
     "kdf_scrypt_ctrl_uint64"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SCRYPT_DERIVE, 0), "kdf_scrypt_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SCRYPT_NEW, 0), "kdf_scrypt_new"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SSHKDF_CTRL, 0), "kdf_sshkdf_ctrl"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SSHKDF_CTRL_STR, 0),
     "kdf_sshkdf_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SSHKDF_DERIVE, 0), "kdf_sshkdf_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_SSHKDF_NEW, 0), "kdf_sshkdf_new"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_TLS1_PRF_CTRL_STR, 0),
     "kdf_tls1_prf_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_TLS1_PRF_DERIVE, 0),
     "kdf_tls1_prf_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_KDF_TLS1_PRF_NEW, 0), "kdf_tls1_prf_new"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PBKDF2_SET_MEMBUF, 0), "pbkdf2_set_membuf"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_HKDF_CTRL_STR, 0), "pkey_hkdf_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_HKDF_DERIVE, 0), "pkey_hkdf_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_HKDF_INIT, 0), "pkey_hkdf_init"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_SCRYPT_CTRL_STR, 0),
     "pkey_scrypt_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_SCRYPT_CTRL_UINT64, 0),
     "pkey_scrypt_ctrl_uint64"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_SCRYPT_DERIVE, 0), "pkey_scrypt_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_SCRYPT_INIT, 0), "pkey_scrypt_init"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_SCRYPT_SET_MEMBUF, 0),
     "pkey_scrypt_set_membuf"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_TLS1_PRF_CTRL_STR, 0),
     "pkey_tls1_prf_ctrl_str"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_TLS1_PRF_DERIVE, 0),
     "pkey_tls1_prf_derive"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_PKEY_TLS1_PRF_INIT, 0), "pkey_tls1_prf_init"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_SCRYPT_SET_MEMBUF, 0), "scrypt_set_membuf"},
    {ERR_PACK(ERR_LIB_KDF, KDF_F_TLS1_PRF_ALG, 0), "tls1_prf_alg"},
    {0, NULL}
};

static const ERR_STRING_DATA KDF_str_reasons[] = {
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_INVALID_DIGEST), "invalid digest"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_ITERATION_COUNT),
    "missing iteration count"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_KEY), "missing key"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_MESSAGE_DIGEST),
    "missing message digest"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_PARAMETER), "missing parameter"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_PASS), "missing pass"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_SALT), "missing salt"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_SECRET), "missing secret"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_SEED), "missing seed"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_SESSION_ID), "missing session id"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_TYPE), "missing type"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_MISSING_XCGHASH), "missing xcghash"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_UNKNOWN_PARAMETER_TYPE),
    "unknown parameter type"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_VALUE_ERROR), "value error"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_VALUE_MISSING), "value missing"},
    {ERR_PACK(ERR_LIB_KDF, 0, KDF_R_WRONG_OUTPUT_BUFFER_SIZE),
    "wrong output buffer size"},
    {0, NULL}
};

#endif

int ERR_load_KDF_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(KDF_str_functs[0].error) == NULL) {
        ERR_load_strings_const(KDF_str_functs);
        ERR_load_strings_const(KDF_str_reasons);
    }
#endif
    return 1;
}
