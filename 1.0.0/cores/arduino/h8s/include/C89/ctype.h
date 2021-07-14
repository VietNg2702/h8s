/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _CTYPE_H
#define _CTYPE_H

extern unsigned char _ctype[];

#ifdef __cplusplus
extern "C" {
#endif
extern int isalnum(int);
extern int isalpha(int);
extern int iscntrl(int);
extern int isdigit(int);
extern int isgraph(int);
extern int islower(int);
extern int isprint(int);
extern int ispunct(int);
extern int isspace(int);
extern int isupper(int);
extern int isxdigit(int);
extern int tolower(int);
extern int toupper(int);
#ifdef __cplusplus
}
#endif

#define _UPPER   0x01
#define _LOWER   0x02
#define _DIGIT   0x04
#define _SPACE   0x08
#define _PUNCT   0x10
#define _CNTRL   0x20
#define _WHITE   0x40
#define _HEX     0x80

#define isalnum(c)  (_ctype[(c) & 0xff] & (_UPPER | _LOWER | _DIGIT))
#define isalpha(c)  (_ctype[(c) & 0xff] & (_UPPER | _LOWER))
#define iscntrl(c)  (_ctype[(c) & 0xff] & _CNTRL)
#define isdigit(c)  (_ctype[(c) & 0xff] & _DIGIT)
#define isgraph(c)  (_ctype[(c) & 0xff] & (_UPPER | _LOWER | _DIGIT | _PUNCT))
#define islower(c)  (_ctype[(c) & 0xff] & _LOWER)
#define isprint(c)  (_ctype[(c) & 0xff] & (_UPPER|_LOWER|_DIGIT|_PUNCT|_SPACE))
#define ispunct(c)  (_ctype[(c) & 0xff] & _PUNCT)
#define isspace(c)  (_ctype[(c) & 0xff] & _WHITE)
#define isupper(c)  (_ctype[(c) & 0xff] & _UPPER)
#define isxdigit(c) (_ctype[(c) & 0xff] & _HEX)
#define tolower(c)  (isupper(c) ? ((c)-'A'+'a') : (c))
#define toupper(c)  (islower(c) ? ((c)-'a'+'A') : (c))

#endif /* _CTYPE_H */
