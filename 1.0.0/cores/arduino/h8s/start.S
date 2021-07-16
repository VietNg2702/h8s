;/****************************************************************
;KPIT Cummins Infosystems Ltd, Pune, India. - 01-Feb-2004.
;
;This program is distributed in the hope that it will be useful,
;but WITHOUT ANY WARRANTY; without even the implied warranty of
;MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
;
;*****************************************************************/

;


	.h8300s
	.section .text
	.global	_start
        .extern _hw_initialise
	.extern _data
	.extern _mdata
	.extern _edata
	.extern _bss
	.extern _ebss
	.extern _stack

_start:
	mov #0xFFEFC0,er7

        /* call the hardware initialiser */
	jsr     @_hw_initialise

	mov #_stack,er7
	/* copy ROM image of data */
	
/*load data area from rom to ram only if ROMSTART is defined*/
#if ROMSTART

        mov.l #_mdata,er0
	mov.l #_data,er1
	mov.l #_edata,er2
data_init_loop:
	cmp er2,er1
	bge finished_data_init
	mov.b @er0+,r3l
	mov.b r3l,@er1
	adds #1,er1
	bra data_init_loop	
finished_data_init:

#endif //ROMSTART
	
	/* bss initialisation */
	
        mov.l #_bss,er0
        mov.l #_ebss,er1
	mov.b #0,r2l

bss_init_loop:	
	
	cmp er1,er0
	bge finished_bss_init
	mov.b r2l,@er0	
	adds #1,er0
	bra bss_init_loop

finished_bss_init:

	/* start user program */

	jsr	@_main

        /* on return from main put the processor to sleep */
_exit:
        sleep
        bra _exit

	.end


