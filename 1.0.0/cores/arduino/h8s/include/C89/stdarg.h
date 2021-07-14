/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _STDARG_H
#define _STDARG_H

#include <stddef.h>

typedef char *va_list ;

#define va_start(ap,param) ((void)((ap)=(size_t)\
            ((char *) &(param)+sizeof(param))%2u?\
             (char *) &(param)+sizeof(param)+1u:\
             (char *) &(param)+sizeof(param)))

#define va_arg(ap,type) (*((ap)=((size_t)((ap)+sizeof(type))%2u?\
            (ap)+sizeof(type)+1u:(ap)+sizeof(type)),\
            (type *)((size_t)((ap)-sizeof(type))%2u?\
                           (ap)-sizeof(type)-1u:\
                           (ap)-sizeof(type))))

#define va_end(ap)

#endif /* _STDARG_H */
