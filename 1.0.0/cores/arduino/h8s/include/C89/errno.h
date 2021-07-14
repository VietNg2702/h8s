/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _ERRNO_H
#define _ERRNO_H

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

#ifndef EMALFRSM
#define EMALFRSM 2101
#endif

#ifndef  ETOKFRSM
#define ETOKFRSM 2111
#endif

#ifndef EIOBFRSM
#define EIOBFRSM 2121
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifndef errno
#ifdef _REENTRANT
int  *errno_addr(void);
#define errno (*errno_addr())
#else
extern volatile int _errno;
#define errno _errno
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif /* _ERRNO_H */
