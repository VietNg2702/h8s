/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/
/* stdbool.h standard header */
#ifndef _STDBOOL
#define _STDBOOL
#ifndef _YVALS
#ifdef __H8__
 #include "C99/yvals.h"
#endif	/* __H8__ */
#endif /* _YVALS */

_C_STD_BEGIN

 #define __bool_true_false_are_defined	1

 #ifndef __cplusplus
		/* TYPES */

 #if 199901L == __STDC_VERSION__

 #else /* 199901L == __STDC_VERSION__ */
typedef unsigned int _Bool;
 #endif /* 199901L == __STDC_VERSION__ */

		/* MACROS */
 #define bool	_Bool
 #define false	0
 #define true	1
 #endif /* __cplusplus */

_C_STD_END
#endif /* _STDBOOL */

/*
 * Copyright (c) 1992-2007 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V5.03:0216 */
