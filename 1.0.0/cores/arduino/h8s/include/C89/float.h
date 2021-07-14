/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _FLOAT_H
#define _FLOAT_H

#define FLT_RADIX             2
#define FLT_ROUNDS            1
#define FLT_GUARD             1
#define FLT_NORMALIZE         1
#define FLT_MAX 3.4028235677973364e+38f
#define FLT_MIN 1.175494351e-38F
#define FLT_MAX_EXP         127
#define FLT_MIN_EXP       (-149)
#define FLT_MAX_10_EXP       38
#define FLT_MIN_10_EXP     (-44)
#define FLT_DIG               6
#define FLT_MANT_DIG         24
#define FLT_EXP_DIG           8
#define FLT_POS_EPS 5.9604648328104311e-8f
#define FLT_NEG_EPS 2.9802324164052156e-8f
#define FLT_POS_EPS_EXP    (-23)
#define FLT_NEG_EPS_EXP    (-24)

#ifdef __FLT__
#define DBL_MAX         FLT_MAX
#define DBL_MIN         FLT_MIN
#define DBL_MAX_EXP     FLT_MAX_EXP
#define DBL_MIN_EXP     FLT_MIN_EXP
#define DBL_MAX_10_EXP  FLT_MAX_10_EXP
#define DBL_MIN_10_EXP  FLT_MIN_10_EXP
#define DBL_DIG         FLT_DIG
#define DBL_MANT_DIG    FLT_MANT_DIG
#define DBL_EXP_DIG     FLT_EXP_DIG
#define DBL_POS_EPS     FLT_POS_EPS
#define DBL_NEG_EPS     FLT_NEG_EPS
#define DBL_POS_EPS_EXP FLT_POS_EPS_EXP
#define DBL_NEG_EPS_EXP FLT_NEG_EPS_EXP
#else
#define DBL_MAX 1.7976931348623158e+308
#define DBL_MIN 2.2250738585072014e-308
#define DBL_MAX_EXP        1023
#define DBL_MIN_EXP      (-1074)
#define DBL_MAX_10_EXP      308
#define DBL_MIN_10_EXP    (-323)
#define DBL_DIG              15
#define DBL_MANT_DIG         53
#define DBL_EXP_DIG          11
#define DBL_POS_EPS 1.1102230246251567e-16
#define DBL_NEG_EPS 5.5511151231257834e-17
#define DBL_POS_EPS_EXP    (-52)
#define DBL_NEG_EPS_EXP    (-53)
#endif

#define LDBL_MAX 1.7976931348623158e+308
#define LDBL_MIN 2.2250738585072014e-308
#define LDBL_MAX_EXP        1023
#define LDBL_MIN_EXP      (-1074)
#define LDBL_MAX_10_EXP      308
#define LDBL_MIN_10_EXP    (-323)
#define LDBL_DIG              15
#define LDBL_MANT_DIG         53
#define LDBL_EXP_DIG          11
#define LDBL_POS_EPS 1.1102230246251567e-16
#define LDBL_NEG_EPS 5.5511151231257834e-17
#define LDBL_POS_EPS_EXP    (-52)
#define LDBL_NEG_EPS_EXP    (-53)

#endif /* _FLOAT_H */
