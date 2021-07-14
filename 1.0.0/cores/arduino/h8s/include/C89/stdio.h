/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _STDIO_H
#define _STDIO_H

#include <stddef.h>

#ifndef _NFILE
#define _NFILE _nfiles

#define FOPEN_MAX _nfiles

extern const int _nfiles;
#pragma pack 2
extern struct _iobuf {
       unsigned char *_bufptr;          /* buffer pointer             */
                long  _bufcnt;          /* buffer count               */
       unsigned char *_bufbase;         /* buffer base pointer        */
                long  _buflen;          /* buffer length              */
                char  _ioflag1;         /* I/O control flag 1         */
                char  _ioflag2;         /* I/O control flag 2         */
                char  _iofd;
                char  reserve;
}  _iob[];
#pragma unpack


typedef struct _iobuf  FILE;            /* define FILE of file-stream */

                                     /* define function of prototype  */
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

extern int     _fillbuf(FILE*);
extern int     _flshbuf(int,FILE*);
extern int     fclose(FILE *);
extern int     fflush(FILE *);
extern FILE   *fopen(const char *, const char *);
extern FILE   *freopen(const char *, const char *, FILE *);
extern void    setbuf(FILE *, char *);
extern int     setvbuf(FILE *, char *, int, size_t);
extern int     fprintf(FILE *, const char *, ...);
extern int     fscanf(FILE *, const char *, ...);
extern int     printf(const char * ,...);
extern int     scanf(const char * ,...);
extern int     sprintf(char *, const char * ,...);
extern int     sscanf(const char *, const char * ,...);
extern int     vfprintf(FILE *, const char *, char *);
extern int     vprintf(const char *, char *);
extern int     vsprintf(char *, const char *, char *);
extern int     fgetc(FILE *);
extern char   *fgets(char *, int, FILE *);
extern int     fputc(int , FILE *);
extern int     fputs(const char *, FILE *);
extern int     getc(FILE *);
extern int     getchar(void);
extern char   *gets(char *);
extern int     putc(int, FILE *);
extern int     putchar(int);
extern int     puts(const char *);
extern int     ungetc(int, FILE *);
extern size_t  fread(void *, size_t, size_t, FILE *);
extern size_t  fwrite(const void *, size_t, size_t, FILE *);
extern int     fseek(FILE *, long int, int);
extern long    ftell(FILE *);
extern void    rewind(FILE *);
extern void    clearerr(FILE *);
extern int     feof(FILE *);
extern int     ferror(FILE *);
extern void    perror(const char *);
#ifdef __cplusplus
}
#endif

#define _IOFBF 1                   /* define _IOFBF of full buffering */
#define _IOLBF 2                   /* define _IOLBF of line buffering */
#define _IONBF 3                   /* define _IONBF of non buffering  */

#define SEEK_SET 0                      /* allocate top position */
#define SEEK_CUR 1                      /* allocate current position */
#define SEEK_END 2                      /* allocate bottom position */

#define BUFSIZ 512                      /* default buffer size */

                                        /* error number define */
#ifndef EBADF
#define EBADF  1302                     /* I/O operation error */
#endif
#ifndef PTRERR
#define PTRERR 1106                     /* fp null */
#endif
#ifndef ECSPEC
#define ECSPEC 1304                     /* format err */
#endif
#ifndef NOTOPN
#define NOTOPN 1300                     /* file not open */
#endif

#ifndef EMALRESM
#define EMALRESM 2100                   /* malloc semaphore reserve error */
#endif
#ifndef ETOKRESM
#define ETOKRESM 2110                   /* strtok semaphore reserve error */
#endif
#ifndef EIOBRESM
#define EIOBRESM 2120                   /* _iob   semaphore reserve error */
#endif
#ifndef EMALFRSM
#define EMALFRSM 2101                   /* malloc semaphore free error    */
#endif
#ifndef ETOKFRSM
#define ETOKFRSM 2111                   /* strtok semaphore free error    */
#endif
#ifndef EIOBFRSM
#define EIOBFRSM 2121                   /* _iob   semaphore free error    */
#endif


                                        /* I/O flags for _ioflag1     */
#define _IOREAD    1                    /* only read or update read   */
#define _IOWRITE   2                    /* only write or update write */
#define _IORW      4                    /* update file                */
#define _IOUNBUF   8                    /* unbffering I/O             */
#define _IOBGBUF  16                    /* automatic buffer allocate  */
#define _IOEOF    32                    /* end of file                */
#define _IOERR    64                    /* I/O error                  */
#define _IOBIN   128                    /* binaly file                */
#define _UNGTC     1                    /* ungetc issued (_ioflag2)   */
#define _IOLINBUF  2                    /* line buffering             */

#define EOF     (-1)
#define _EOL    (0x0A)                  /* end of line                */

#define stdin       (&_iob[0])          /* standard input file */
#define stdout      (&_iob[1])          /* standard output file */
#define stderr      (&_iob[2])          /* standard error output file */

#define getchar()   getc(stdin)
#define putchar(x)  putc(x,stdout)
#define feof(fp)    ((fp)->_ioflag1&_IOEOF)
#define ferror(fp)  ((fp)->_ioflag1&_IOERR)
#define clearerr(fp) ((void)((fp)->_ioflag1&=~(_IOEOF|_IOERR)))
#endif

#endif /* _STDIO_H */
