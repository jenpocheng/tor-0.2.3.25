/* Copyright (c) 2007-2012, The Tor Project, Inc. */
/* See LICENSE for licensing information */

#include "orconfig.h"
#define DNS_USE_OPENSSL_FOR_ID
#ifndef HAVE_UINT
typedef unsigned int uint;
#endif
#ifndef HAVE_U_CHAR
typedef unsigned char u_char;
#endif
#ifdef _WIN32
#define inline __inline
#endif
#include "torint.h"

/* These are for debugging possible memory leaks. */
#include "util.h"
#include "compat.h"

