/*
 * Copyright (c) 2005 Atheme Development Group
 * Rights to this code are as documented under doc/LICENSE.
 *
 * Cryptographic module support.
 *
 * $Id: crypto.h 3399 2005-11-02 18:51:40Z nenolod $
 */

#ifndef CRYPTO_H
#define CRYPTO_H

E char *(*crypt_string)(char *str, char *salt);
E char *generic_crypt_string(char *str, char *salt);
E boolean_t verify_password(char *uinput, char *pass);
E char *gen_salt(void);
E boolean_t crypto_module_loaded;

#endif
