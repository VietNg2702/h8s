/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/
#ifdef __H8__

#ifndef _NO_FLOAT_H
#define _NO_FLOAT_H

/* stdio */
#define fprintf    _fprintf_lite
#define fscanf     _fscanf_lite
#define printf     _printf_lite
#define scanf      _scanf_lite
#define sprintf    _sprintf_lite
#define sscanf     _sscanf_lite
#define vfprintf   _vfprintf_lite
#define vprintf    _vprintf_lite
#define vsprintf   _vsprintf_lite

#if __STDC_VERSION__ == 199901L
/* wchar_t */
#define fwprintf   _fwprintf_lite
#define fwscanf    _fwscanf_lite
#define wprintf    _wprintf_lite
#define wscanf     _wscanf_lite
#define swprintf   _swprintf_lite
#define swscanf    _swscanf_lite
#define vfwprintf  _vfwprintf_lite
#define vswprintf  _vswprintf_lite
#define vwprintf   _vwprintf_lite

/* C99 */
#define snprintf   _snprintf_lite
#define vsnprintf  _vsnprintf_lite
#define vscanf     _vscanf_lite
#define vsscanf    _vsscanf_lite
#define vfscanf    _vfscanf_lite
#define vfwscanf   _vfwscanf_lite
#define vswscanf   _vswscanf_lite
#define vwscanf    _vwscanf_lite
#endif /* __STDC_VERSION__ == 199901L */

#endif /* _NO_FLOAT_H */

#endif
