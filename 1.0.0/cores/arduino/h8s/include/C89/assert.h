/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#include <stdio.h>

#undef assert
#ifdef NDEBUG
#define assert(x) ((void)0)
#else
#ifdef __cplusplus
extern "C" {
#endif
extern void abort(void);
#ifdef __cplusplus
}
#endif
#define assert(x) ((x)?(void)0: \
        (fprintf(stderr,"ASSERTION FAILED: "#x" FILE %s,LINE %d \n", \
        __FILE__,__LINE__),abort(),(void)0))
#endif /* NDEBUG */
