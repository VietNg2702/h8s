/****************************************************************
KPIT Cummins Infosystems Ltd, Pune, India. - 01-Feb-2004.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************/

/************************************************************************

  Interrupt vectors section - H8/300L

************************************************************************/

/***********************************************************************
  Place the prototypes for interrupt service routines here
*/

/* User start code */
void start (void);
//extern void INT_TGI1B_TPU1 (void);

/***********************************************************************/

typedef void (*fp) (void);


/***********************************************************************
  Place the interrupt service routine symbols in the table
  to create the vector entry
*/

const fp HardwareVectors[] __attribute__ ((section (".vects"))) = {
  start,         /* Reset vector */
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0),
  (fp)(0)
};

/* Done...
************************************************************************/



