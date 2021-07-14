/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _STDDEF_H
#define _STDDEF_H

#if __DATA_ADDRESS_SIZE__ == 4
#ifndef _PTRDIFF_T
#define _PTRDIFF_T
typedef long ptrdiff_t;
#endif
#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned long size_t;
#endif
#else /* __DATA_ADDRESS_SIZE__ == 2 */
#ifndef _PTRDIFF_T
#define _PTRDIFF_T
typedef int ptrdiff_t;
#endif
#ifndef _SIZE_T
#define _SIZE_T
typedef unsigned int size_t;
#endif
#endif

#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL ((void *)0)
#endif
#endif

#ifndef offsetof
#ifdef __cplusplus
#define offsetof(t, memb) ((size_t)(&(((t *)0)->memb)))
#else
#define offsetof(type,id) ((char *)(&(((type *)NULL)->id))  -    \
                           (char *)((type *)NULL))
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

#ifdef __cplusplus
}
#endif

#endif /* _STDDEF_H */
