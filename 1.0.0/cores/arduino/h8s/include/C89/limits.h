/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _LIMITS_H
#define _LIMITS_H

#define       CHAR_BIT                   8
#define       CHAR_MAX                 127
#define       CHAR_MIN              (-128)
#define       SCHAR_MAX                127
#define       SCHAR_MIN             (-128)
#define       UCHAR_MAX               255u
#define       SHRT_MAX               32767
#define       SHRT_MIN          (-32767-1)  /* C V700 03-007 */
#define       USHRT_MAX             65535u
#define       INT_MAX                32767
#define       INT_MIN           (-32767-1)  /* C V700 03-007 */
#define       UINT_MAX              65535u
#define       LONG_MAX          2147483647
#define       LONG_MIN   (-2147483647L-1L)
#define       ULONG_MAX        4294967295u

#endif /* _LIMITS_H */
