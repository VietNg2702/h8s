/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _STRING_H
#define _STRING_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
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

extern void *memcpy(void *, const void *, size_t);
extern void *memmove(void *, const void *, size_t);
extern char *strcpy(char *, const char *);
extern char *strncpy(char *, const char *, size_t);
extern char *strcat(char *, const char *);
extern char *strncat(char *, const char *,size_t);
extern int  memcmp(const void *, const void *,size_t);
extern int  strcmp(const char *, const char *);
extern int  strncmp(const char *, const char *, size_t);
extern void *memchr(const void *, int, size_t);
extern char *strchr(const char *, int);
extern size_t strcspn(const char *, const char *);
extern char *strpbrk(const char *, const char *);
extern char *strrchr(const char *, int);
extern size_t strspn(const char *, const char *);
extern char *strstr(const char *, const char *);
extern char *strtok(char *, const char *);
extern void *memset(void *, int, size_t);
extern char *strerror(int);
extern size_t strlen(const char *);

#ifdef __INTRINSIC_LIB__
extern void *_builtin_memcpy(void *, const void *, size_t);
extern char *_builtin_strcpy(char *, const char *);
#define memcpy(dst,src,sz) _builtin_memcpy(dst,src,sz)
#define strcpy(dst,src)    _builtin_strcpy(dst,src)
#endif

#ifdef __cplusplus
}
#endif

#endif /* _STRING_H */
