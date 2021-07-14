/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _MATH_H
#define _MATH_H

#define ERANGE  1100
#define EDOM    1101

#ifndef HUGE_VAL
#ifdef __FLT__
extern const float _HUGE_VALF;
#define HUGE_VAL _HUGE_VALF
#else
extern const double _HUGE_VAL;
#define HUGE_VAL _HUGE_VAL
#endif
#endif

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

extern double acos(double);
extern double asin(double);
extern double atan(double);
extern double atan2(double, double);
extern double cos(double);
extern double sin(double);
extern double tan(double);
extern double cosh(double);
extern double sinh(double);
extern double tanh(double);
extern double exp(double);
extern double frexp(double, int *);
extern double ldexp(double, int);
extern double log(double);
extern double log10(double);
extern double modf(double, double *);
extern double pow(double, double);
extern double sqrt(double);
extern double ceil(double);
extern double fabs(double);
extern double floor(double);
extern double fmod(double, double);
#ifdef __cplusplus
}
#endif

#endif /* _MATH_H */
