/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/
/*****************************************************************/
/* SPEC ;                                                        */
/*   NAME = stdarg :                                             */
/*   FUNC = this module do the following finctions ;             */
/*                                                               */
/*         (1) initialize parameter pointer                      */
/*         (2) set parameter pointer to next parameter           */
/*                                                               */
/*                                                               */
/*   END ;                                                       */
/*****************************************************************/
/* V10000K106 */
#ifndef _STDARG_H
#define _STDARG_H

#ifdef __H8__

typedef char *va_list ;

 #if __DATA_ADDRESS_SIZE__ == 4
#define va_start(AP,LASTARG) \
  ((void)(AP = (va_list)((sizeof(LASTARG) == 1) ? \
  ((unsigned long)&LASTARG + sizeof(LASTARG) + 1) & ~1 : \
  (unsigned long)&LASTARG + ((sizeof(LASTARG) + 1) & ~1) )))

 #else /* __DATA_ADDRESS_SIZE__ == 4 */
#define va_start(AP,LASTARG) \
  ((void)(AP = (va_list)((sizeof(LASTARG) == 1) ? \
  ((unsigned int)&LASTARG + sizeof(LASTARG) + 1) & ~1 : \
  (unsigned int)&LASTARG + ((sizeof(LASTARG) + 1) & ~1) )))
 #endif /* __DATA_ADDRESS_SIZE__ == 4 */

#define va_arg(AP,TYPE) \
  (AP += ((sizeof(TYPE)+1)&~1), *((TYPE *)(AP - ((sizeof(TYPE)+1)&~1))))

#define va_end(ap)

#endif /* __H8__ */

#if defined(_R_SHC)

typedef char *va_list ;

#define va_start(AP,LASTARG) ((void)(AP = ((va_list)&LASTARG + ((sizeof(LASTARG)+3)&~3))))

#define va_arg(AP,TYPE) \
  (AP += ((sizeof(TYPE)+3)&~3), *((TYPE *)(AP - ((sizeof(TYPE)+3)&~3))))

#define va_end(ap)

#endif /* _R_SHC */

#if defined(_R_M16C)

#ifndef _VA_LIST_DEF
typedef char *va_list;
#define _VA_LIST_DEF
#endif

#define va_arg(AP,TYPE) (AP += sizeof(TYPE), *((TYPE *)(AP - sizeof(TYPE))))
#define va_end(AP) (AP = (va_list)0)
#define va_start(AP,LASTARG) (AP = ((va_list)&LASTARG + sizeof(LASTARG)))

#endif /* _R_M16C */

#endif /* _STDARG_H */
/* V10000K106 */
