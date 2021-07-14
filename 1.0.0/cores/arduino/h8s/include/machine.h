/*------------------------------------------------------------------------------*/
/* H8S,H8/300 SERIES C/C++ Compiler Ver. 7.0                                    */
/* Copyright (C) 1994,2007 Renesas Technology Corp. and Renesas Solutions Corp. */
/* Copyright (C) 2000 Hitachi, Ltd.                                             */
/* Copyright (C) 1994,2007 Hitachi Information & Control Solutions, Ltd.        */
/* All rights reserved.                                                         */
/*------------------------------------------------------------------------------*/

#ifndef _MACHINE_H
#define _MACHINE_H

#ifdef __cplusplus
extern "C" {
#endif
extern void _builtin_set_imask_ccr(unsigned char);
extern unsigned char _builtin_get_imask_ccr(void);
extern void _builtin_set_ccr(unsigned char);
extern unsigned char _builtin_get_ccr(void);
extern void _builtin_and_ccr(unsigned char);
extern void _builtin_or_ccr(unsigned char);
extern void _builtin_xor_ccr(unsigned char);
extern void _builtin_set_imask_exr(unsigned char);
extern unsigned char _builtin_get_imask_exr(void);
extern void _builtin_set_exr(unsigned char);
extern unsigned char _builtin_get_exr(void);
extern void _builtin_and_exr(unsigned char);
extern void _builtin_or_exr(unsigned char);
extern void _builtin_xor_exr(unsigned char);
extern void _builtin_trapa(unsigned int);
extern void _builtin_sleep(void);
#ifndef __V4_ENGINE__
extern char _builtin_movfpe(char *);
extern void _builtin_eepmovi(void *, const void *, unsigned int);
extern void _builtin_eepmovb(void *, const void *, unsigned char);
extern void _builtin_eepmovw(void *, const void *, unsigned int);
#else
extern void _builtin_movfpe(char *, char);
#endif

#if defined(__H8SXN__) || defined(__H8SXM__) || \
    defined(__H8SXA__) || defined(__H8SXX__) || \
    defined(__AE5__)
extern long _builtin_mulsu(long, long);
extern unsigned long _builtin_muluu(unsigned long, unsigned long);
extern void _builtin_movmdb(void *, const void *, unsigned int);
extern void _builtin_movmdw(int *, const int *, unsigned int);
extern void _builtin_movmdl(long *, const long *, unsigned int);
extern unsigned int _builtin_movsd(char *, const char *, unsigned int);
extern void _builtin_set_vbr(void *);
#ifndef _EEPROM_H
unsigned char _builtin_eepromb(void *, const void *, unsigned char,
                               volatile unsigned char *, unsigned char,
                               volatile unsigned char *, unsigned char);
unsigned int  _builtin_eepromw(void *, const void *, unsigned int,
                               volatile unsigned char *, unsigned char,
                               volatile unsigned char *, unsigned char);
#endif
#endif
#ifdef __RS4__
#ifndef _EEPROM_H
unsigned char _builtin_eepromb(void *, const void *, unsigned char,
                               volatile unsigned char *, unsigned char,
                               volatile unsigned char *, unsigned char);
unsigned int  _builtin_eepromw(void *, const void *, unsigned int,
                               volatile unsigned char *, unsigned char,
                               volatile unsigned char *, unsigned char);
#endif
#endif
extern void _builtin_movtpe(char, char *);
extern void _builtin_tas(char *);
#if defined(__300L__) || defined(__300__)
extern void _builtin_eepmov(void *, const void *, unsigned char);
#else
extern void _builtin_eepmov(void *, const void *, unsigned int);
#endif
extern long _builtin_mac(long,int *, int *, unsigned long);
extern long _builtin_macl(long,int *, int *, unsigned long, unsigned long);
extern char _builtin_rotlc(int, char);
extern int  _builtin_rotlw(int, int);
extern long _builtin_rotll(int, long);
extern char _builtin_rotrc(int, char);
extern int  _builtin_rotrw(int, int);
extern long _builtin_rotrl(int, long);
extern int  _builtin_ovfaddc(char, char, char *);
extern int  _builtin_ovfaddw(int, int, int *);
extern int  _builtin_ovfaddl(long, long, long *);
extern int  _builtin_ovfsubc(char, char, char *);
extern int  _builtin_ovfsubw(int, int, int *);
extern int  _builtin_ovfsubl(long, long, long *);
extern int  _builtin_ovfshalc(char, char *);
extern int  _builtin_ovfshalw(int, int *);
extern int  _builtin_ovfshall(long, long *);
extern int  _builtin_ovfnegc(char, char *);
extern int  _builtin_ovfnegw(int, int *);
extern int  _builtin_ovfnegl(long, long *);
extern int  _builtin_ovfadduc(unsigned char, unsigned char, unsigned char *);
extern int  _builtin_ovfadduw(unsigned int, unsigned int, unsigned int *);
extern int  _builtin_ovfaddul(unsigned long, unsigned long, unsigned long *);
extern int  _builtin_ovfsubuc(unsigned char, unsigned char, unsigned char *);
extern int  _builtin_ovfsubuw(unsigned int, unsigned int, unsigned int *);
extern int  _builtin_ovfsubul(unsigned long, unsigned long, unsigned long *);
extern int  _builtin_ovfshlluc(unsigned char, unsigned char *);
extern int  _builtin_ovfshlluw(unsigned int, unsigned int *);
extern int  _builtin_ovfshllul(unsigned long, unsigned long *);
extern void _builtin_dadd(unsigned char, char *, char *, char *);
extern void _builtin_dsub(unsigned char, char *, char *, char *);
extern void _builtin_nop(void);
#ifdef __cplusplus
}
#endif

#define set_imask_ccr(m)    _builtin_set_imask_ccr(m)
#define get_imask_ccr()     _builtin_get_imask_ccr()
#define set_ccr(ccr)        _builtin_set_ccr(ccr)
#define get_ccr()           _builtin_get_ccr()
#define and_ccr(ccr)        _builtin_and_ccr(ccr)
#define or_ccr(ccr)         _builtin_or_ccr(ccr)
#define xor_ccr(ccr)        _builtin_xor_ccr(ccr)
#define set_imask_exr(m)    _builtin_set_imask_exr(m)
#define get_imask_exr()     _builtin_get_imask_exr()
#define set_exr(exr)        _builtin_set_exr(exr)
#define get_exr()           _builtin_get_exr()
#define and_exr(exr)        _builtin_and_exr(exr)
#define or_exr(exr)         _builtin_or_exr(exr)
#define xor_exr(exr)        _builtin_xor_exr(exr)
#define trapa(no)           _builtin_trapa(no)
#define sleep()             _builtin_sleep()
#ifndef __V4_ENGINE__
#define eepmovi(dst,src,sz) _builtin_eepmovi(dst,src,sz)
#define eepmovb(dst,src,sz) _builtin_eepmovb(dst,src,sz)
#define eepmovw(dst,src,sz) _builtin_eepmovw(dst,src,sz)
#define _movfpe(a)          _builtin_movfpe(a)
#define movfpe(a,d)         (d = _builtin_movfpe(a))
#else
#define movfpe(a,d)         _builtin_movfpe(a,d)
#endif

#if defined(__H8SXN__) || defined(__H8SXM__) || \
    defined(__H8SXA__) || defined(__H8SXX__) || \
    defined(__AE5__)
#define mulsu(d1,d2)        _builtin_mulsu(d1,d2)
#define muluu(d1,d2)        _builtin_muluu(d1,d2)
#define movmdb(dst,src,sz)  _builtin_movmdb(dst,src,sz)
#define movmdw(dst,src,sz)  _builtin_movmdw(dst,src,sz)
#define movmdl(dst,src,sz)  _builtin_movmdl(dst,src,sz)
#define movsd(dst,src,sz)   _builtin_movsd(dst,src,sz)
#define set_vbr(vbr)        _builtin_set_vbr(vbr)
#ifndef _EEPROM_H
#define _EEPROM_H
#define eepromb(dst,src,sz,ecr,ecr_val) \
                            _builtin_eepromb(dst,src,sz,ecr,ecr_val,0,0)
#define eepromw(dst,src,sz,ecr,ecr_val) \
                            _builtin_eepromw(dst,src,sz,ecr,ecr_val,0,0)
#define eepromb_epr(dst,src,sz,ecr,ecr_val,epr,epr_val) \
                            _builtin_eepromb(dst,src,sz,ecr,ecr_val,epr,epr_val)
#define eepromw_epr(dst,src,sz,ecr,ecr_val,epr,epr_val) \
                            _builtin_eepromw(dst,src,sz,ecr,ecr_val,epr,epr_val)
#endif
#endif
#ifdef __RS4__
#ifndef _EEPROM_H
#define _EEPROM_H
#define eepromb(dst,src,sz,ecr,ecr_val) \
                            _builtin_eepromb(dst,src,sz,ecr,ecr_val,0,0)
#define eepromw(dst,src,sz,ecr,ecr_val) \
                            _builtin_eepromw(dst,src,sz,ecr,ecr_val,0,0)
#define eepromb_epr(dst,src,sz,ecr,ecr_val,epr,epr_val) \
                            _builtin_eepromb(dst,src,sz,ecr,ecr_val,epr,epr_val)
#define eepromw_epr(dst,src,sz,ecr,ecr_val,epr,epr_val) \
                            _builtin_eepromw(dst,src,sz,ecr,ecr_val,epr,epr_val)
#endif
#endif
#define movtpe(d,a)         _builtin_movtpe(d,a)
#define tas(a)              _builtin_tas(a)
#define eepmov(dst,src,sz)  _builtin_eepmov(dst,src,sz)
#define mac(i,d1,d2,c)      _builtin_mac(i,d1,d2,c)
#define macl(i,d1,d2,c,m)   _builtin_macl(i,d1,d2,c,m)
#define rotlc(c,d)          _builtin_rotlc(c,d)
#define rotlw(c,d)          _builtin_rotlw(c,d)
#define rotll(c,d)          _builtin_rotll(c,d)
#define rotrc(c,d)          _builtin_rotrc(c,d)
#define rotrw(c,d)          _builtin_rotrw(c,d)
#define rotrl(c,d)          _builtin_rotrl(c,d)
#define ovfaddc(d1,d2,rst)  _builtin_ovfaddc(d1,d2,rst)
#define ovfaddw(d1,d2,rst)  _builtin_ovfaddw(d1,d2,rst)
#define ovfaddl(d1,d2,rst)  _builtin_ovfaddl(d1,d2,rst)
#define ovfsubc(d1,d2,rst)  _builtin_ovfsubc(d1,d2,rst)
#define ovfsubw(d1,d2,rst)  _builtin_ovfsubw(d1,d2,rst)
#define ovfsubl(d1,d2,rst)  _builtin_ovfsubl(d1,d2,rst)
#define ovfshalc(d,rst)     _builtin_ovfshalc(d,rst)
#define ovfshalw(d,rst)     _builtin_ovfshalw(d,rst)
#define ovfshall(d,rst)     _builtin_ovfshall(d,rst)
#define ovfnegc(d,rst)      _builtin_ovfnegc(d,rst)
#define ovfnegw(d,rst)      _builtin_ovfnegw(d,rst)
#define ovfnegl(d,rst)      _builtin_ovfnegl(d,rst)
#define ovfadduc(d1,d2,rst) _builtin_ovfadduc(d1,d2,rst)
#define ovfadduw(d1,d2,rst) _builtin_ovfadduw(d1,d2,rst)
#define ovfaddul(d1,d2,rst) _builtin_ovfaddul(d1,d2,rst)
#define ovfsubuc(d1,d2,rst) _builtin_ovfsubuc(d1,d2,rst)
#define ovfsubuw(d1,d2,rst) _builtin_ovfsubuw(d1,d2,rst)
#define ovfsubul(d1,d2,rst) _builtin_ovfsubul(d1,d2,rst)
#define ovfshlluc(d,rst)    _builtin_ovfshlluc(d,rst)
#define ovfshlluw(d,rst)    _builtin_ovfshlluw(d,rst)
#define ovfshllul(d,rst)    _builtin_ovfshllul(d,rst)
#define dadd(sz,d1,d2,rst)  _builtin_dadd(sz,d1,d2,rst)
#define dsub(sz,d1,d2,rst)  _builtin_dsub(sz,d1,d2,rst)
#define nop()               _builtin_nop()

#endif /* _MACHINE_H */
