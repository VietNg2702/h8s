/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _STDLIB_H
#define _STDLIB_H

#include <stddef.h>

#pragma pack 2
typedef struct {int quot; int rem;} div_t ;
typedef struct {long quot; long rem;} ldiv_t ;
#pragma unpack

#define RAND_MAX  32767
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
#ifndef ETOKFRSM
#define ETOKFRSM 2111
#endif
#ifndef EIOBFRSM
#define EIOBFRSM 2121
#endif

#ifndef HUGE_VAL
#ifdef __FLT__
extern const float _HUGE_VALF;
#define HUGE_VAL _HUGE_VALF
#else
extern const double _HUGE_VAL;
#define HUGE_VAL _HUGE_VAL
#endif
#endif

extern const size_t _sbrk_size;

#ifdef __cplusplus
extern "C" {
#endif

#ifndef errno
#ifdef _REENTRANT
extern int *errno_addr(void);
#define errno (*errno_addr())
#else
extern volatile int _errno;
#define errno _errno
#endif
#endif

extern double atof(const char *) ;
extern int atoi(const char *) ;
extern long int atol(const char *) ;
extern double strtod(const char *, char **) ;
extern long int strtol(const char *, char **, int);
extern unsigned long int strtoul(const char *, char **, int);
extern int rand(void) ;
extern void srand(unsigned int);
extern void *calloc(size_t, size_t);
extern void free(void *) ;
extern void *malloc(size_t);
extern void *realloc(void *, size_t) ;
extern void *bsearch(const void *, const void *, size_t, size_t,
                                  int(*)(const void*,const void*) ) ;
extern void qsort(void *, size_t, size_t,
                                  int(*)(const void*,const void*) );
extern int abs(int);
extern div_t div(int, int);
extern long int labs(long int);
extern ldiv_t ldiv(long int, long int);
#ifdef __cplusplus
}
#endif

#endif /* _STDLIB_H */
