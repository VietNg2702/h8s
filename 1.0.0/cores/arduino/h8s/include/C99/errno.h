/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/
/* errno.h standard header */
#ifndef _ERRNO
#define _ERRNO
#ifndef _YVALS
#ifdef __H8__
 #include "C99/yvals.h"
#endif	/* __H8__ */
#endif /* _YVALS */

_C_STD_BEGIN

		/* ERROR CODES */
		
#ifdef __H8__

#ifndef ERANGE
#define ERANGE  1100
#endif

#ifndef EDOM
#define EDOM    1101
#endif

#ifndef EDIV
#define EDIV    1102
#endif

#ifndef ESTRN
#define ESTRN   1104
#endif

#ifndef PTRERR
#define PTRERR  1106
#endif

#ifndef SEQERR
#define SEQERR  1108
#endif

#ifndef ECBASE 
#define ECBASE  1200
#endif

#ifndef ETLN
#define ETLN    1202
#endif

#ifndef EEXP
#define EEXP    1204
#endif

#ifndef EEXPN
#define EEXPN   1206
#endif

#ifndef ENUM
#define ENUM    1208
#endif

#ifndef EFLOATO
#define EFLOATO 1210
#endif

#ifndef EFLOATU
#define EFLOATU 1220
#endif

#ifndef EOVER
#define EOVER   1230
#endif

#ifndef EUNDER
#define EUNDER  1240
#endif

#ifndef NOTOPN
#define NOTOPN  1300
#endif

#ifndef EBADF
#define EBADF   1302
#endif

#ifndef ECSPEC
#define ECSPEC  1304
#endif

#ifndef EMALRESM
#define EMALRESM 2100
#endif

#ifndef ETOKRESM
#define ETOKRESM 2110
#endif

#ifndef EIOBRESM
#define EIOBRESM 2120
#endif

#ifndef EMBLNRESM
#define EMBLNRESM 2130
#endif

#ifndef EMBSWCSRESM
#define EMBSWCSRESM 2140
#endif

#ifndef EMBWCRESM
#define EMBWCRESM 2150
#endif

#ifndef ESTLOCRESM
#define ESTLOCRESM 2160
#endif

#ifndef EWCRMBRESM
#define EWCRMBRESM 2170
#endif

#ifndef EWCSMBSRESM
#define EWCSMBSRESM 2180
#endif

#ifndef EWCMBRESM
#define EWCMBRESM 2190
#endif

#ifndef ELOCTMFESM
#define ELOCTMFESM 2200
#endif

#ifndef EMALFRSM
#define EMALFRSM 2101
#endif

#ifndef ETOKFRSM
#define ETOKFRSM 2111
#endif

#ifndef EIOBFRSM
#define EIOBFRSM 2121
#endif

#ifndef EMBLNFRSM
#define EMBLNFRSM 2131
#endif

#ifndef EMBSWCSFRSM
#define EMBSWCSFRSM 2141
#endif

#ifndef EMBWCFRSM
#define EMBWCFRSM 2151
#endif

#ifndef ESTLOCFRSM
#define ESTLOCFRSM 2161
#endif

#ifndef EWCRMBFRSM
#define EWCRMBFRSM 2171
#endif

#ifndef EWCSMBSFRSM
#define EWCSMBSFRSM 2181
#endif

#ifndef EWCMBFRSM
#define EWCMBFRSM 2191
#endif

#ifndef ELOCTMFRSM
#define ELOCTMFRSM 2201
#endif

#else /* __H8__ */
  #define EDOM           0x0021
  #define ERANGE         0x0022
  #define EBADF         0x0009
#endif

#define EFAULT         0x000E
#define EFBIG          0x001B
#define EFPOS          0x0098
#define EMLINK         0x001F
#define ENFILE         0x0017
#define ENOENT         0x0002
#define ENOSPC         0x001C
#define ENOTTY         0x0019
#define EPIPE          0x0020
#define EROFS          0x001E
#define ESPIPE         0x001D

  #define E2BIG         0x0007
  #define EACCES        0x000D
  #define EAGAIN        0x000B
  #define EBUSY         0x0010
  #define ECHILD        0x000A
  #define EEXIST        0x0011
  #define EINTR         0x0004
  #define EINVAL        0x0016
  #define EIO           0x0005
  #define EISDIR        0x0015
  #define EMFILE        0x0018
  #define ENODEV        0x0013
  #define ENOEXEC       0x0008
  #define ENOMEM        0x000C
  #define ENOTDIR       0x0014
  #define ENXIO         0x0006
  #define EPERM         0x0001
  #define ESRCH         0x0003
  #define EXDEV         0x0012

 #if defined(_MSL_WCHAR_T_TYPE)
  #define EBADMSG       0x004A
  #define ECANCELED     0x007D
  #define EDEADLK       0x0023
  #define EILSEQ        0x0058
  #define EINPROGRESS   0x0073
  #define EMSGSIZE      0x005A
  #define ENAMETOOLONG  0x0024
  #define ENOLCK        0x004D
  #define ENOSYS        0x0026
  #define ENOTEMPTY     0x0027
  #define ENOTSUP       0x005F
  #define ETIMEDOUT     0x006E

 #elif defined(_LINUX_C_LIB)
  #define EBADMSG       0x004A
  #define ECANCELED     0x007D
  #define EDEADLK       0x0023
  #define EILSEQ        0x0054
  #define EINPROGRESS   0x0073
  #define EMSGSIZE      0x005A
  #define ENAMETOOLONG  0x0024
  #define ENOLCK        0x0025
  #define ENOSYS        0x0026
  #define ENOTEMPTY     0x0027
  #define ENOTSUP       0x005F
  #define ETIMEDOUT     0x006E

  #define EWOULDBLOCK	EAGAIN
  #define EAFNOSUPPORT	0x0061

 #else /* library type */
  #define EBADMSG       0x004D
  #define ECANCELED     0x002F
  #define EDEADLK       0x002D
  #define EILSEQ        0x0058
  #define EINPROGRESS   0x0096
  #define EMSGSIZE      0x0061
  #define ENAMETOOLONG  0x004E
  #define ENOLCK        0x002E
  #define ENOSYS        0x0059
  #define ENOTEMPTY     0x005D
  #define ENOTSUP       0x0030
  #define ETIMEDOUT     0x0091
 #endif /* library type */


		/* DECLARATIONS */
_C_LIB_DECL

#ifdef __H8__
 #ifndef errno
  #if defined(_R_REENT) || defined(_REENTRANT)
int  *errno_addr(void);

   #define errno (*errno_addr())
  #else
extern volatile int _errno;

   #define errno _errno
  #endif
 #endif

#else /* __H8__ */
 #if !_MULTI_THREAD || _COMPILER_TLS && !_GLOBAL_LOCALE
extern int _TLS_QUAL _Errno;

  #define errno	(_CSTD _Errno)

 #else /* !_MULTI_THREAD || _COMPILER_TLS && !_GLOBAL_LOCALE */
int *_Geterrno(void);

  #define errno	(*_CSTD _Geterrno())
 #endif /* !_MULTI_THREAD || _COMPILER_TLS && !_GLOBAL_LOCALE */
#endif /* __H8__ */

_END_C_LIB_DECL

 #if __STDC_WANT_LIB_EXT1__
_C_LIB_DECL

  #if !defined(_ERRNO_T_DEFINED)
   #define _ERRNO_T_DEFINED
typedef int errno_t;
  #endif /* _ERRNO_T_DEFINED */

_END_C_LIB_DECL
 #endif /* __STDC_WANT_LIB_EXT1__ */

_C_STD_END
#endif /* _ERRNO */

 #if defined(_STD_USING)

 #if __STDC_WANT_LIB_EXT1__
using _CSTD errno_t;
 #endif /* __STDC_WANT_LIB_EXT1__ */

 #endif /* defined(_STD_USING) */

/*
 * Copyright (c) 1992-2007 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V5.03:0216 */
