/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _MATHF_H
#define _MATHF_H

#define ERANGE  1100
#define EDOM    1101

extern const float _HUGE_VALF;
#define HUGE_VALF _HUGE_VALF

#ifndef HUGE_VAL
#ifdef __FLT__
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

extern float acosf(float);
extern float asinf(float);
extern float atanf(float);
extern float atan2f(float, float);
extern float cosf(float);
extern float sinf(float);
extern float tanf(float);
extern float coshf(float);
extern float sinhf(float);
extern float tanhf(float);
extern float expf(float);
extern float frexpf(float, int *);
extern float ldexpf(float, int);
extern float logf(float);
extern float log10f(float);
extern float modff(float, float *);
extern float powf(float, float);
extern float sqrtf(float);
extern float ceilf(float);
extern float fabsf(float);
extern float floorf(float);
extern float fmodf(float, float);
#ifdef __cplusplus
}
#endif

#endif /* _MATHF_H */
