/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/
#if __STDC_VERSION__ == 199901L

 #ifdef _STDIO_C89
	#include <C89/stdio.h>
 #else
	#include <C99/stdio.h>
 #endif
	
#else
 #ifdef _STDIO_C99
	#include <C99/stdio.h>
 #else
	#include <C89/stdio.h>
 #endif

#endif

