/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _SETJMP_H
#define _SETJMP_H

#if defined(__300L__) || defined(__300__)
typedef int jmp_buf[9];
#elif defined(__H8SXN__) || defined(__H8SXM__) || \
      defined(__H8SXA__) || defined(__H8SXX__) || \
      defined(__AE5__)
typedef long jmp_buf[8];
#else             /* CPU:300H,2600,2000 */
typedef int jmp_buf[17];
#endif

#ifdef __cplusplus
extern "C" {
#endif
extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);
#ifdef __cplusplus
}
#endif

#endif /* _SETJMP_H */
