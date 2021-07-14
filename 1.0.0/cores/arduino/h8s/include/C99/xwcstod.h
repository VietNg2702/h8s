/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/
/* xwcstod.h internal header */
#ifndef _WCSTOD
#define _WCSTOD

#if defined(__cplusplus) && !defined(_NO_CPP_INLINES)
		/* INLINES, FOR C++ */
_C_LIB_DECL
inline double wcstod(const wchar_t *_Restrict _Str,
	wchar_t **_Restrict _Endptr)
	{return (_WStod(_Str, _Endptr, 0));
	}

inline unsigned long wcstoul(const wchar_t *_Restrict _Str,
	wchar_t **_Restrict _Endptr, int _Base)
	{return (_WStoul(_Str, _Endptr, _Base));
	}
_END_C_LIB_DECL

  #else /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
		/* MACROS AND DECLARATIONS, FOR C */

    #ifdef __H8__
	  _C_LIB_DECL
	  double wcstod(const wchar_t *_Restrict _Str, wchar_t **_Restrict _Endptr);
	  unsigned long wcstoul(const wchar_t *_Restrict _Str, wchar_t **_Restrict _Endptr, int _Base);
	  _END_C_LIB_DECL
    #else /* __H8__ */
      _C_LIB_DECL
      double wcstod(const wchar_t *, wchar_t **);
      unsigned long wcstoul(const wchar_t *, wchar_t **, int);
      _END_C_LIB_DECL

      #define wcstod(str, endptr)	_WStod(str, endptr, 0)
      #define wcstoul(str, endptr, base)	_WStoul(str, endptr, base)
    #endif /* __H8__ */
  #endif /* defined(__cplusplus) && !defined(_NO_CPP_INLINES) */
#endif /* _WCSTOD */

/*
 * Copyright (c) 1992-2007 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V5.03:0216 */

