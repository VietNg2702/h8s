/****************************************************************
KPIT Cummins Infosystems Ltd, Pune, India. - 1-Feb-2004.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

Author:
        Rohit Kumar Srivastava <rohits@kpitcummins.com>.

*****************************************************************/

OUTPUT_ARCH(h8300s)
ENTRY(_start)
MEMORY
{
  ram (rw) : o = 0x040000, l = 256k
  rom (rx) : o = 0x000000, l = 256k
}
SECTIONS

{ 
  .vects 0x000000:  
  { 
    _vects = .; 
    *(.vects);
  } > rom
  .text 0x000400 : 
  { 
    CREATE_OBJECT_SYMBOLS 
    *(.text) 
    etext = .; 
  } > rom 
  .init :
  {
    *(.init)
  } > rom
  .fini :
  {
    *(.fini)
  } > rom
  .got :
  {
    *(.got)
    *(.got.plt)
  } > rom
  .rodata : 
  {
      *(.rodata)
      *(.rodata.*)
      _erodata = .;
  } > rom
  .eh_frame_hdr :
  { 
      *(.eh_frame_hdr)
  }> rom
  .eh_frame : 
  { 
      *(.eh_frame)
  }> rom
  .jcr :
  { 
      *(.jcr)
  } > rom

  .tors : 
  {
      __CTOR_LIST__ = .; 
      LONG((__CTOR_END__ - __CTOR_LIST__) / 4 - 2) 
      ___ctors = . ; 
      *(.ctors)
      ___ctors_end = . ; 
      LONG(0) 
    __CTOR_END__ = .; 
      __DTOR_LIST__ = .; 
    LONG((__DTOR_END__ - __DTOR_LIST__) / 4 - 2) 
      ___dtors = . ; 
    *(.dtors)
      ___dtors_end = . ; 
      LONG(0) 
      __DTOR_END__ = .; 
    _mdata = .; 
  } > rom

  .data : AT (_mdata) { 
    _data = .;
    *(.data) 
    _edata = .; 
  } > ram

  .gcc_exc :
  {
      *(.gcc_exc)
  } > ram

  .bss :
  {
      _bss = . ;
      *(.bss)
      *(COMMON)
      _ebss = . ;
      _end = . ;
  } > ram

  .stack 0x07FFC0 :
  {
    _stack = .;
    *(.stack)
  } >ram 
  .stab . (NOLOAD) : 
  { 
    [ .stab ] 
  } 
  .stabstr . (NOLOAD) : 
  { 
    [ .stabstr ] 
  } 
  /DISCARD/ : 
  {
  *(.comment)
  }
}



