/******************************************************************************
* DISCLAIMER:
* The software supplied by Renesas Technology Europe Ltd is
* intended and supplied for use on Renesas Technology products.
* This software is owned by Renesas Technology Europe, Ltd. Or
* Renesas Technology Corporation and is protected under applicable
* copyright laws. All rights are reserved.
*
* THIS SOFTWARE IS PROVIDED "AS IS". NO WARRANTIES, WHETHER EXPRESS,
* IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* APPLY TO THIS SOFTWARE. RENESAS TECHNOLOGY AMERICA, INC. AND
* AND RENESAS TECHNOLOGY CORPORATION RESERVE THE RIGHT, WITHOUT
* NOTICE, TO MAKE CHANGES TO THIS SOFTWARE. NEITHER RENESAS
* TECHNOLOGY AMERICA, INC. NOR RENESAS TECHNOLOGY CORPORATION SHALL,
* IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
* CONSEQUENTIAL DAMAGES FOR ANY REASON WHATSOEVER ARISING OUT OF THE
* USE OR APPLICATION OF THIS SOFTWARE.
******************************************************************************/

/* Copyright (C) 2009. Renesas Technology Europe, All Rights Reserved */

/* FILE COMMENT ******************************* Technical reference data ****
* File Name		: iodefine.h
* Version 		: 1.00
* Device 		: H8S/2456R (R4F24569VFQV)
* Tool Chain 	: HEW, Hitachi H8S, H8/300 Standard Tool chain v6.2
* H/W Platform	: RSK2H8S2456R
* Description 	: SFR Defines for H8S/2456R CPU
******************************************************************************/

/******************************************************************************
* History 		: 17.06.2009 Ver. 1.00 First Release
* FILE COMMENT END *********************************************************/

#ifndef IODEFINE_H
#define IODEFINE_H

/***********************************************************************/
/* IO_2456_Rev00 Include File                                ver.2.1   */
/***********************************************************************/

struct st_dtc {                                        /* struct DTC   */
       union {                                         /* DTCERI       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                          unsigned char TGI9B:1;       /*    TGI9B     */
                          unsigned char TGI9C:1;       /*    TGI9C     */
                          unsigned char TGI9D:1;       /*    TGI9D     */                                                    
                          unsigned char TGI10A:1;      /*    TGI10A    */
                          unsigned char TGI10B:1;      /*    TGI10B    */
                          unsigned char TGI11A:1;      /*    TGI11A    */
                          unsigned char TGI11B:1;      /*    TGI11B    */
                    } BIT;                             /*              */
             } DTCERI;                                 /*              */
       union {                                         /* DTCCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char SWDTE:1;             /*              */
                    unsigned char      :7;             /*              */
                    } BIT;                             /*              */
             } DTCCR;                                  /*              */
       unsigned char wk[655];                          /*              */
       union {                                         /* DTCERA       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char IRQ0:1;        /*    IRQ0      */
                          unsigned char IRQ1:1;        /*    IRQ1      */
                          unsigned char IRQ2:1;        /*    IRQ2      */
                          unsigned char IRQ3:1;        /*    IRQ3      */
                          unsigned char IRQ4:1;        /*    IRQ4      */
                          unsigned char IRQ5:1;        /*    IRQ5      */
                          unsigned char IRQ6:1;        /*    IRQ6      */
                          unsigned char IRQ7:1;        /*    IRQ7      */
                    } BIT;                             /*              */
             } DTCERA;                                 /*              */
       union {                                         /* DTCERB       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char IRQ8 :1;       /*    IRQ8      */
                          unsigned char IRQ9 :1;       /*    IRQ9      */
                          unsigned char IRQ10:1;       /*    IRQ10     */
                          unsigned char IRQ11:1;       /*    IRQ11     */
                          unsigned char IRQ12:1;       /*    IRQ12     */
                          unsigned char IRQ13:1;       /*    IRQ13     */
                          unsigned char IRQ14:1;       /*    IRQ14     */
                          unsigned char IRQ15:1;       /*    IRQ15     */
                    } BIT;                             /*              */
             } DTCERB;                                 /*              */
       union {                                         /* DTCERC       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char      :1;       /*              */
                          unsigned char ADI  :1;       /*    ADI       */
                          unsigned char TGI0A:1;       /*    TGI0A     */
                          unsigned char TGI0B:1;       /*    TGI0B     */
                          unsigned char TGI0C:1;       /*    TGI0C     */
                          unsigned char TGI0D:1;       /*    TGI0D     */
                          unsigned char TGI1A:1;       /*    TGI1A     */
                          unsigned char TGI1B:1;       /*    TGI1B     */
                    } BIT;                             /*              */
             } DTCERC;                                 /*              */
       union {                                         /* DTCERD       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char TGI2A:1;       /*    TGI2A     */
                          unsigned char TGI2B:1;       /*    TGI2B     */
                          unsigned char TGI3A:1;       /*    TGI3A     */
                          unsigned char TGI3B:1;       /*    TGI3B     */
                          unsigned char TGI3C:1;       /*    TGI3C     */
                          unsigned char TGI3D:1;       /*    TGI3D     */
                          unsigned char TGI4A:1;       /*    TGI4A     */
                          unsigned char TGI4B:1;       /*    TGI4B     */
                    } BIT;                             /*              */
             } DTCERD;                                 /*              */
       union {                                         /* DTCERE       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char TGI5A:1;       /*    TGI5A     */
                          unsigned char TGI5B:1;       /*    TGI5B     */
                          unsigned char      :2;       /*              */
                          unsigned char CMIA0:1;       /*    CMIA0     */
                          unsigned char CMIB0:1;       /*    CMIB0     */
                          unsigned char CMIA1:1;       /*    CMIA1     */
                          unsigned char CMIB1:1;       /*    CMIB1     */
                    } BIT;                             /*              */
             } DTCERE;                                 /*              */
       union {                                         /* DTCERF       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char DMTEND0A:1;    /*    DMTEND0A  */
                          unsigned char DMTEND0B:1;    /*    DMTEND0B  */
                          unsigned char DMTEND1A:1;    /*    DMTEND1A  */
                          unsigned char DMTEND1B:1;    /*    DMTEND1B  */
                          unsigned char RXI0    :1;    /*    RXI0      */
                          unsigned char TXI0    :1;    /*    TXI0      */
                          unsigned char RXI1    :1;    /*    RXI1      */
                          unsigned char TXI1    :1;    /*    TXI1      */
                    } BIT;                             /*              */
             } DTCERF;                                 /*              */
       union {                                         /* DTCERG       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char RXI2:1;        /*    RXI2      */
                          unsigned char TXI2:1;        /*    TXI2      */
                          unsigned char RXI3:1;        /*    RXI3      */
                          unsigned char TXI3:1;        /*    TXI3      */
                          unsigned char RXI4:1;        /*    RXI4      */
                          unsigned char TXI4:1;        /*    TXI4      */
                          unsigned char ADI1:1;        /*    ADI1      */
                          unsigned char TGI6A:1;       /*    TGI6A     */
                    } BIT;                             /*              */
             } DTCERG;                                 /*              */
       union {                                         /* DTCERH       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                          unsigned char TGI6B:1;       /*    TGI6B     */
                          unsigned char TGI6C:1;       /*    TGI6C     */
                          unsigned char TGI6D:1;       /*    TGI6D     */
                          unsigned char TGI7A:1;       /*    TGI7A     */
                          unsigned char TGI7B:1;       /*    TGI7B     */
                          unsigned char TGI8A:1;       /*    TGI8A     */
                          unsigned char TGI8B:1;       /*    TGI8B     */
                          unsigned char TGI9A:1;       /*    TGI9A     */
                    } BIT;                             /*              */
             } DTCERH;                                 /*              */
       union {                                         /* DTVECR       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char DTVEC7:1;            /*   DTVEC7     */
                    unsigned char DTVEC6:1;            /*   DTVEC6     */
                    unsigned char DTVEC5:1;            /*   DTVEC5     */
                    unsigned char DTVEC4:1;            /*   DTVEC4     */
                    unsigned char DTVEC3:1;            /*   DTVEC3     */
                    unsigned char DTVEC2:1;            /*   DTVEC2     */
                    unsigned char DTVEC1:1;            /*   DTVEC1     */
                    unsigned char DTVEC0:1;            /*   DTVEC0     */
                    } BIT;                             /*              */
             } DTVECR;                                 /*              */
};                                                     /*              */
struct st_usb {                                        /* struct USB   */
       union {                                         /* IFR0         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char BRST  :1;            /*   BRST       */
                    unsigned char CFDN  :1;            /*   CFDN       */
                    unsigned char SURSS :1;            /*   SURSS      */
                    unsigned char SURSF :1;            /*   SURSF      */
                    unsigned char SETC  :1;            /*   SETC       */
                    unsigned char SET1  :1;            /*   SET1       */
                    unsigned char VBUSMN:1;            /*   VBUSMN     */
                    unsigned char VBUSF :1;            /*   VBUSF      */
                    } BIT;                             /*              */
             } IFR0;                                   /*              */
       union {                                         /* IFR1         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :3;           /*              */
                    unsigned char SOF    :1;           /*   SOF        */
                    unsigned char SETUPTS:1;           /*   SETUPTS    */
                    unsigned char EP0OTS :1;           /*   EP0OTS     */
                    unsigned char EP0ITR :1;           /*   EP0ITR     */
                    unsigned char EP0ITS :1;           /*   EP0ITS     */
                    } BIT;                             /*              */
             } IFR1;                                   /*              */
       union {                                         /* IFR2         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char          :2;         /*              */
                    unsigned char EP3TR    :1;         /*   EP3TR      */
                    unsigned char EP3TS    :1;         /*   EP3TS      */
                    unsigned char EP2TR    :1;         /*   EP2TR      */
                    unsigned char EP2EMPTY :1;         /*   EP2EMPTY   */
                    unsigned char EP2ALLEMP:1;         /*   EP2ALLEMP  */
                    unsigned char EP1FULL  :1;         /*   EP1FULL    */
                    } BIT;                             /*              */
             } IFR2;                                   /*              */
       unsigned char wk0[5];                           /*              */
       union {                                         /* IER0         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char BRSTE :1;            /*   BRSTE      */
                    unsigned char CFDNE :1;            /*   CFDNE      */
                    unsigned char SSRSME:1;            /*   SSRSME     */
                    unsigned char SURSFE:1;            /*   SURSFE     */
                    unsigned char SETCE :1;            /*   SETCE      */
                    unsigned char SET1E :1;            /*   SET1E      */
                    unsigned char       :1;            /*              */
                    unsigned char VBUSFE:1;            /*   VBUSFE     */
                    } BIT;                             /*              */
             } IER0;                                   /*              */
       union {                                         /* IER1         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char         :3;          /*              */
                    unsigned char SOFE    :1;          /*   SOFE       */
                    unsigned char SETUPTSE:1;          /*   SETUPTSE   */
                    unsigned char EP0OTSE :1;          /*   EP0OTSE    */
                    unsigned char EP0ITRE :1;          /*   EP0ITRE    */
                    unsigned char EP0ITSE :1;          /*   EP0ITSE    */
                    } BIT;                             /*              */
             } IER1;                                   /*              */
       union {                                         /* IER2         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char           :2;        /*              */
                    unsigned char EP3TRE    :1;        /*   EP3TRE     */
                    unsigned char EP3TSE    :1;        /*   EP3TSE     */
                    unsigned char EP2TRE    :1;        /*   EP2TRE     */
                    unsigned char EP2EMPTYE :1;        /*   EP2EMPTYE  */
                    unsigned char EP2ALLEMPE:1;        /*   EP2ALLEMPE */
                    unsigned char EP1FULLE  :1;        /*   EP1FULLE   */
                    } BIT;                             /*              */
             } IER2;                                   /*              */
       unsigned char wk1[5];                           /*              */
       union {                                         /* ISR0         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char BRSTS :1;            /*   BRSTS      */
                    unsigned char CFDNS :1;            /*   CFDNS      */
                    unsigned char       :1;            /*              */
                    unsigned char SURSFS:1;            /*   SURSFS     */
                    unsigned char SETCS :1;            /*   SETCS      */
                    unsigned char SET1S :1;            /*   SET1S      */
                    unsigned char       :1;            /*              */
                    unsigned char VBUSFS:1;            /*   VBUSFS     */
                    } BIT;                             /*              */
             } ISR0;                                   /*              */
       union {                                         /* ISR1         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char         :3;          /*              */
                    unsigned char SOFS    :1;          /*   SOFS       */
                    unsigned char SETUPTSS:1;          /*   SETUPTSS   */
                    unsigned char EP0OTSS :1;          /*   EP0OTSS    */
                    unsigned char EP0ITRS :1;          /*   EP0ITRS    */
                    unsigned char EP0ITSS :1;          /*   EP0ITSS    */
                    } BIT;                             /*              */
             } ISR1;                                   /*              */
       union {                                         /* ISR2         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char           :2;        /*              */
                    unsigned char EP3TRS    :1;        /*   EP3TRS     */
                    unsigned char EP3TSS    :1;        /*   EP3TSS     */
                    unsigned char EP2TRS    :1;        /*   EP2TRS     */
                    unsigned char EP2EMPTYS :1;        /*   EP2EMPTYS  */
                    unsigned char EP2ALLEMPS:1;        /*   EP2ALLEMPS */
                    unsigned char EP1FULLS  :1;        /*   EP1FULLS   */
                    } BIT;                             /*              */
             } ISR2;                                   /*              */
       unsigned char wk2[13];                          /*              */
       unsigned char EPDR0I;                           /* EPDR0I       */
       unsigned char wk3[3];                           /*              */
       unsigned char EPDR0O;                           /* EPDR0O       */
       unsigned char wk4[3];                           /*              */
       unsigned char EPDR0S;                           /* EPDR0S       */
       unsigned char wk5[7];                           /*              */
       unsigned char EPDR1;                            /* EPDR1        */
       unsigned char wk6[3];                           /*              */
       unsigned char EPDR2;                            /* EPDR2        */
       unsigned char wk7[3];                           /*              */
       unsigned char EPDR3;                            /* EPDR3        */
       unsigned char wk8[71];                          /*              */
       unsigned char EPSZ0O;                           /* EPSZ0O       */
       unsigned char EPSZ1;                            /* EPSZ1        */
       unsigned char wk9[6];                           /*              */
       union {                                         /* DASTS0       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char       :7;            /*              */
                    unsigned char EP0IDE:1;            /*   EP0IDE     */
                    } BIT;                             /*              */
             } DASTS0;                                 /*              */
       union {                                         /* DASTS1       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :5;             /*              */
                    unsigned char EP3DE:1;             /*   EP3DE      */
                    unsigned char EP2DE:1;             /*   EP2DE      */
                    unsigned char      :1;             /*              */
                    } BIT;                             /*              */
             } DASTS1;                                 /*              */
       unsigned char wk10[6];                          /*              */
       union {                                         /* TRG0         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char         :5;          /*              */
                    unsigned char EP0SRDFN:1;          /*   EP0SRDFN   */
                    unsigned char EP0ORDFN:1;          /*   EP0ORDFN   */
                    unsigned char EP0IPKTE:1;          /*   EP0IPKTE   */
                    } BIT;                             /*              */
             } TRG0;                                   /*              */
       union {                                         /* TRG1         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :5;           /*              */
                    unsigned char EP3PKTE:1;           /*   EP3PKTE    */
                    unsigned char EP2PKTE:1;           /*   EP2PKTE    */
                    unsigned char EP1RDFN:1;           /*   EP1RDFN    */
                    } BIT;                             /*              */
             } TRG1;                                   /*              */
       unsigned char wk11[6];                          /*              */
       union {                                         /* FCLR0        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :6;           /*              */
                    unsigned char EP0OCLR:1;           /*   EP0OCLR    */
                    unsigned char EP0ICLR:1;           /*   EP0ICLR    */
                    } BIT;                             /*              */
             } FCLR0;                                  /*              */
       union {                                         /* FCLR1        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char       :5;            /*              */
                    unsigned char EP3CLR:1;            /*   EP3CLR     */
                    unsigned char EP2CLR:1;            /*   EP2CLR     */
                    unsigned char EP1CLR:1;            /*   EP1CLR     */
                    } BIT;                             /*              */
             } FCLR1;                                  /*              */
       unsigned char wk12[6];                          /*              */
       union {                                         /* EPSTL0       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :3;           /*              */
                    unsigned char EP0STLC:1;           /*   EP0STLC    */
                    unsigned char        :3;           /*              */
                    unsigned char EP0STLS:1;           /*   EP0STLS    */
                    } BIT;                             /*              */
             } EPSTL0;                                 /*              */
       union {                                         /* EPSTL1       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :1;           /*              */
                    unsigned char EP3STLC:1;           /*   EP3STLC    */
                    unsigned char EP2STLC:1;           /*   EP2STLC    */
                    unsigned char EP1STLC:1;           /*   EP1STLC    */
                    unsigned char        :1;           /*              */
                    unsigned char EP3STLS:1;           /*   EP3STLS    */
                    unsigned char EP2STLS:1;           /*   EP2STLS    */
                    unsigned char EP1STLS:1;           /*   EP1STLS    */
                    } BIT;                             /*              */
             } EPSTL1;                                 /*              */
       unsigned char wk13[7];                          /*              */
       union {                                         /* STLSR1       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char         :1;          /*              */
                    unsigned char EP3ASCE :1;          /*   EP3ASCE    */
                    unsigned char EP2ASCE :1;          /*   EP2ASCE    */
                    unsigned char EP1ASCE :1;          /*   EP1ASCE    */
                    unsigned char         :1;          /*              */
                    unsigned char EP3STLST:1;          /*   EP3STLST   */
                    unsigned char EP2STLST:1;          /*   EP2STLST   */
                    unsigned char EP1STLST:1;          /*   EP1STLST   */
                    } BIT;                             /*              */
             } STLSR1;                                 /*              */
       unsigned char wk14[6];                          /*              */
       union {                                         /* DMAR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :3;           /*              */
                    unsigned char EP5DMAE:1;           /*   EP5DMAE    */
                    unsigned char EP4DMAE:1;           /*   EP4DMAE    */
                    unsigned char        :1;           /*              */
                    unsigned char EP2DMAE:1;           /*   EP2DMAE    */
                    unsigned char EP1DMAE:1;           /*   EP1DMAE    */
                    } BIT;                             /*              */
             } DMAR;                                   /*              */
       unsigned char wk15[3];                          /*              */
       union {                                         /* CVR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char CNFV:2;              /*   CNFV       */
                    unsigned char INTV:2;              /*   INTV       */
                    unsigned char     :1;              /*              */
                    unsigned char ALTV:3;              /*   ALTV       */
                    } BIT;                             /*              */
             } CVR;                                    /*              */
       unsigned char wk16[3];                          /*              */
       union {                                         /* CTLR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char PULLUPE:1;           /*   PULLUPE    */
                    unsigned char        :2;           /*              */
                    unsigned char RWUPS  :1;           /*   PWUPS      */
                    unsigned char RSME   :1;           /*   RSME       */
                    unsigned char PWMD   :1;           /*   PWMD       */
                    unsigned char EP0ASCE:1;           /*   EP0ASCE    */
                    unsigned char PRTRST :1;           /*   PRTRST     */
                    } BIT;                             /*              */
             } CTLR;                                   /*              */
       unsigned char wk17[7];                          /*              */
       unsigned char EPIR;                             /* EPIR         */
       unsigned char wk18[15];                         /*              */
       union {                                         /* TRNTREG0     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char PTSTE  :1;           /*   PTSTE      */
                    unsigned char        :3;           /*              */
                    unsigned char SUSPEND:1;           /*   SUSPEND    */
                    unsigned char TXENL  :1;           /*   TXENL      */
                    unsigned char TXSE0  :1;           /*   TXSE0      */
                    unsigned char TXDATA :1;           /*   TXDATA     */
                    } BIT;                             /*              */
             } TRNTREG0;                               /*              */
       union {                                         /* TRNTREG1     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char         :5;          /*              */
                    unsigned char XVERDATA:1;          /*   XVERDATA   */
                    unsigned char DPLS    :1;          /*   DPLS       */
                    unsigned char DMNS    :1;          /*   DMNS       */
                    } BIT;                             /*              */
             } TRNTREG1;                               /*              */
};                                                     /*              */
struct st_system {                                     /* struct SYSTEM */
       union {                                         /* RMMSTPCRH    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char ACSE   :1;           /*   ACSE       */
                    unsigned char _EXDMAC:1;           /*   EXDMAC     */
                    unsigned char _DMAC  :1;           /*   DMAC       */
                    unsigned char _DTC   :1;           /*   DTC        */
                    unsigned char _TPU0  :1;           /*   TPU0       */
                    unsigned char _PPG   :1;           /*   PPG        */
                    unsigned char _TPU1  :1;           /*   TPU1       */
                    unsigned char _DA23  :1;           /*   DA23       */
                    } BIT;                             /*              */
             } RMMSTPCRH;                              /*              */
       union {                                         /* RMMSTPCRL    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _AD1   :1;           /*   AD1        */
                    unsigned char _AD0   :1;           /*   AD0        */
                    unsigned char _SCI4  :1;           /*   SCI4       */
                    unsigned char _SCI3  :1;           /*   SCI3       */
                    unsigned char _SCI2  :1;           /*   SCI2       */
                    unsigned char _SCI1  :1;           /*   SCI1       */
                    unsigned char _SCI0  :1;           /*   SCI0       */
                    unsigned char _TMR   :1;           /*   TMR        */
                    } BIT;                             /*              */
             } RMMSTPCRL;                              /*              */
       union {                                         /* USPLLCR      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :6;             /*              */
                    unsigned char USSTC:2;             /*   USSTC      */
                    } BIT;                             /*              */
             } USPLLCR;                                /*              */
       unsigned char wk1[695];                         /*              */
       union {                                         /* SBYCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char SSBY:1;              /*   SSBY       */
                    unsigned char OPE :1;              /*   OPE        */
                    unsigned char     :2;              /*              */
                    unsigned char STS :4;              /*   STS        */
                    } BIT;                             /*              */
             } SBYCR;                                  /*              */
       union {                                         /* SCKCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char PSTOP:1;             /*   PSTOP      */
                    unsigned char      :3;             /*              */
                    unsigned char STCS :1;             /*   STCS       */
                    unsigned char SCK  :3;             /*   SCK        */
                    } BIT;                             /*              */
             } SCKCR;                                  /*              */
       unsigned char wk2[1];                           /*              */
       union {                                         /* SYSCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :2;             /*              */
                    unsigned char MACS :1;             /*   MACS       */
                    unsigned char      :1;             /*              */
                    unsigned char FLSHE:1;             /*   FLSHE      */
                    unsigned char      :1;             /*              */
                    unsigned char EXPE :1;             /*   EXPE       */
                    unsigned char RAME :1;             /*   RAME       */
                    } BIT;                             /*              */
             } SYSCR;                                  /*              */
       union {                                         /* MDCR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char    :5;               /*              */
                    unsigned char MDS:3;               /*   MDS        */
                    } BIT;                             /*              */
             } MDCR;                                   /*              */
       unsigned char wk3[1];                           /*              */
       union {                                         /* MSTPCRH      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char ACSE   :1;           /*   ACSE       */
                    unsigned char _EXDMAC:1;           /*   EXDMAC     */
                    unsigned char _DMAC  :1;           /*   DMAC       */
                    unsigned char _DTC   :1;           /*   DTC        */
                    unsigned char _TPU0  :1;           /*   TPU0       */
                    unsigned char _PPG   :1;           /*   PPG        */
                    unsigned char _TPU1  :1;           /*   TPU1       */
                    unsigned char _DA23  :1;           /*   DA23       */
                    } BIT;                             /*              */
             } MSTPCRH;                                /*              */
       union {                                         /* MSTPCRL      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _AD1   :1;           /*   AD1        */
                    unsigned char _AD0   :1;           /*   AD0        */
                    unsigned char _SCI4  :1;           /*   SCI4       */
                    unsigned char _SCI3  :1;           /*   SCI3       */
                    unsigned char _SCI2  :1;           /*   SCI2       */
                    unsigned char _SCI1  :1;           /*   SCI1       */
                    unsigned char _SCI0  :1;           /*   SCI0       */
                    unsigned char _TMR   :1;           /*   TMR        */
                    } BIT;                             /*              */
             } MSTPCRL;                                /*              */
       union {                                         /* EXMSTPCRH    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char MSTP31:1;            /*   MSTP31     */
                    unsigned char MSTP30:1;            /*   MSTP30     */
                    unsigned char MSTP29:1;            /*   MSTP29     */
                    unsigned char MSTP28:1;            /*   MSTP28     */
                    unsigned char MSTP27:1;            /*   MSTP27     */
                    unsigned char MSTP26:1;            /*   MSTP26     */
                    unsigned char MSTP25:1;            /*   MSTP25     */
                    unsigned char MSTP24:1;            /*   MSTP24     */
                    } BIT;                             /*              */
             } EXMSTPCRH;                              /*              */
       union {                                         /* EXMSTPCRL    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _SSU     :1;         /*   SSU        */
                    unsigned char _IIC23   :1;         /*   IIC23      */
                    unsigned char _IIC22   :1;         /*   IIC22      */
                    unsigned char _IIC21   :1;         /*   IIC21      */
                    unsigned char _IIC20   :1;         /*   IIC20      */
                    unsigned char _USBSYSCL:1;         /*   USBSYSCLOCK */
                    unsigned char _USB48MCL:1;         /*   USB48MCLOCK */
                    unsigned char MSTP16   :1;         /*   MSTP16     */
                    } BIT;                             /*              */
             } EXMSTPCRL;                              /*              */
       unsigned char wk4[1];                           /*              */
       union {                                         /* PLLCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char    :6;               /*              */
                    unsigned char STC:2;               /*   STC        */
                    } BIT;                             /*              */
             } PLLCR;                                  /*              */
};                                                     /*              */
struct st_intc {                                       /* struct INTC  */
       union {                                         /* IPRL         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char       :1;            /*              */
                    unsigned char _TPU7 :3;            /*   _TPU7      */
                    unsigned char       :1;            /*              */
                    unsigned char _TPU8 :3;            /*   _TPU8      */
                    unsigned char       :1;            /*              */
                    unsigned char _TPU9 :3;            /*   _TPU9      */
                    unsigned char       :1;            /*              */
                    unsigned char _TPU10:3;            /*   _TPU10     */
                    } BIT;                             /*              */
             } IPRL;                                   /*              */
       union {                                         /* IPRM         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char        :1;           /*              */
                    unsigned char _TPU11 :3;           /*   _TPU11     */
                    unsigned char        :1;           /*              */
                    unsigned char _USB   :3;           /*   _USB       */
                    unsigned char        :1;           /*              */
                    unsigned char _USBres:3;           /*   _USBresume */
                    unsigned char        :1;           /*              */
                    unsigned char _IIC2  :3;           /*   _IIC2      */
                    } BIT;                             /*              */
             } IPRM;                                   /*              */
       union {                                         /* IPRN         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char     :1;              /*              */
                    unsigned char _SSU:3;              /*   _SSU       */
                    unsigned char     :1;              /*              */
                    unsigned char     :3;              /*              */
                    unsigned char     :1;              /*              */
                    unsigned char     :3;              /*              */
                    unsigned char     :1;              /*              */
                    unsigned char     :3;              /*              */
                    } BIT;                             /*              */
             } IPRN;                                   /*              */
       unsigned char wk1[362];                         /*              */
       union {                                         /* IPRA         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ0:3;             /*   _IRQ0      */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ1:3;             /*   _IRQ1      */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ2:3;             /*   _IRQ2      */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ3:3;             /*   _IRQ3      */
                    } BIT;                             /*              */
             } IPRA;                                   /*              */
       union {                                         /* IPRB         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ4:3;             /*   _IRQ4      */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ5:3;             /*   _IRQ5      */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ6:3;             /*   _IRQ6      */
                    unsigned char      :1;             /*              */
                    unsigned char _IRQ7:3;             /*   _IRQ7      */
                    } BIT;                             /*              */
             } IPRB;                                   /*              */
       union {                                         /* IPRC         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ8 :3;            /*   _IRQ8      */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ9 :3;            /*   _IRQ9      */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ10:3;            /*   _IRQ10     */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ11:3;            /*   _IRQ11     */
                    } BIT;                             /*              */
             } IPRC;                                   /*              */
       union {                                         /* IPRD         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ12:3;            /*   _IRQ12     */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ13:3;            /*   _IRQ13     */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ14:3;            /*   _IRQ14     */
                    unsigned char       :1;            /*              */
                    unsigned char _IRQ15:3;            /*   _IRQ15     */
                    } BIT;                             /*              */
             } IPRD;                                   /*              */
       union {                                         /* IPRE         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char _DTC :3;             /*   _DTC       */
                    unsigned char      :1;             /*              */
                    unsigned char _WDT0:3;             /*   _WDT0      */
                    unsigned char      :1;             /*              */
                    unsigned char _WDT1:3;             /*   _WDT1      */
                    unsigned char      :1;             /*              */
                    unsigned char _CMI :3;             /*   _CMI       */
                    } BIT;                             /*              */
             } IPRE;                                   /*              */
       union {                                         /* IPRF         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char      :3;             /*              */
                    unsigned char      :1;             /*              */
                    unsigned char _AD0 :3;             /*   _AD0       */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU0:3;             /*   _TPU0      */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU1:3;             /*   _TPU1      */
                    } BIT;                             /*              */
             } IPRF;                                   /*              */
       union {                                         /* IPRG         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU2:3;             /*   _TPU2      */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU3:3;             /*   _TPU3      */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU4:3;             /*   _TPU4      */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU5:3;             /*   _TPU5      */
                    } BIT;                             /*              */
             } IPRG;                                   /*              */
       union {                                         /* IPRH         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char _TMR0:3;             /*   _TMR0      */
                    unsigned char      :1;             /*              */
                    unsigned char _TMR1:3;             /*   _TMR1      */
                    unsigned char      :1;             /*              */
                    unsigned char _DMA :3;             /*   _DMA       */
                    unsigned char      :1;             /*              */
                    unsigned char      :3;             /*              */
                    } BIT;                             /*              */
             } IPRH;                                   /*              */
       union {                                         /* IPRI         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char         :1;          /*              */
                    unsigned char         :3;          /*              */
                    unsigned char         :1;          /*              */
                    unsigned char _EXDMAC2:3;          /*   _EXDMAC2   */
                    unsigned char         :1;          /*              */
                    unsigned char _EXDMAC3:3;          /*   _EXDMAC3   */
                    unsigned char         :1;          /*              */
                    unsigned char _SCI0   :3;          /*   _SCI0      */
                    } BIT;                             /*              */
             } IPRI;                                   /*              */
       union {                                         /* IPRJ         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char _SCI1:3;             /*   _SCI1      */
                    unsigned char      :1;             /*              */
                    unsigned char _SCI2:3;             /*   _SCI2      */
                    unsigned char      :1;             /*              */
                    unsigned char _SCI3:3;             /*   _SCI3      */
                    unsigned char      :1;             /*              */
                    unsigned char _SCI4:3;             /*   _SCI4      */
                    } BIT;                             /*              */
             } IPRJ;                                   /*              */
       union {                                         /* IPRK         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char      :3;             /*              */
                    unsigned char      :1;             /*              */
                    unsigned char _AD1 :3;             /*   _AD1       */
                    unsigned char      :1;             /*              */
                    unsigned char _IIC2:3;             /*   _IIC2      */
                    unsigned char      :1;             /*              */
                    unsigned char _TPU6:3;             /*   _TPU6      */
                    } BIT;                             /*              */
             } IPRK;                                   /*              */
       union {                                         /* ITSR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char ITS15:1;             /*   ITS15      */
                    unsigned char ITS14:1;             /*   ITS14      */
                    unsigned char ITS13:1;             /*   ITS13      */
                    unsigned char ITS12:1;             /*   ITS12      */
                    unsigned char ITS11:1;             /*   ITS11      */
                    unsigned char ITS10:1;             /*   ITS10      */
                    unsigned char ITS9 :1;             /*   ITS9       */
                    unsigned char ITS8 :1;             /*   ITS8       */
                    unsigned char ITS7 :1;             /*   ITS7       */
                    unsigned char ITS6 :1;             /*   ITS6       */
                    unsigned char ITS5 :1;             /*   ITS5       */
                    unsigned char ITS4 :1;             /*   ITS4       */
                    unsigned char ITS3 :1;             /*   ITS3       */
                    unsigned char ITS2 :1;             /*   ITS2       */
                    unsigned char ITS1 :1;             /*   ITS1       */
                    unsigned char ITS0 :1;             /*   ITS0       */
                    } BIT;                             /*              */
             } ITSR;                                   /*              */
       union {                                         /* SSIER        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char SSI15:1;             /*   SSI15      */
                    unsigned char SSI14:1;             /*   SSI14      */
                    unsigned char SSI13:1;             /*   SSI13      */
                    unsigned char SSI12:1;             /*   SSI12      */
                    unsigned char SSI11:1;             /*   SSI11      */
                    unsigned char SSI10:1;             /*   SSI10      */
                    unsigned char SSI9 :1;             /*   SSI9       */
                    unsigned char SSI8 :1;             /*   SSI8       */
                    unsigned char SSI7 :1;             /*   SSI7       */
                    unsigned char SSI6 :1;             /*   SSI6       */
                    unsigned char SSI5 :1;             /*   SSI5       */
                    unsigned char SSI4 :1;             /*   SSI4       */
                    unsigned char SSI3 :1;             /*   SSI3       */
                    unsigned char SSI2 :1;             /*   SSI2       */
                    unsigned char SSI1 :1;             /*   SSI1       */
                    unsigned char SSI0 :1;             /*   SSI0       */
                    } BIT;                             /*              */
             } SSIER;                                  /*              */
       union {                                         /* ISCRH        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char IRQ15SC:2;           /*   IRQ15SC    */
                    unsigned char IRQ14SC:2;           /*   IRQ14SC    */
                    unsigned char IRQ13SC:2;           /*   IRQ13SC    */
                    unsigned char IRQ12SC:2;           /*   IRQ12SC    */
                    unsigned char IRQ11SC:2;           /*   IRQ11SC    */
                    unsigned char IRQ10SC:2;           /*   IRQ10SC    */
                    unsigned char IRQ9SC :2;           /*   IRQ9SC     */
                    unsigned char IRQ8SC :2;           /*   IRQ8SC     */
                    } BIT;                             /*              */
             } ISCRH;                                  /*              */
       union {                                         /* ISCRL        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char IRQ7SC:2;            /*   IRQ7SC     */
                    unsigned char IRQ6SC:2;            /*   IRQ6SC     */
                    unsigned char IRQ5SC:2;            /*   IRQ5SC     */
                    unsigned char IRQ4SC:2;            /*   IRQ4SC     */
                    unsigned char IRQ3SC:2;            /*   IRQ3SC     */
                    unsigned char IRQ2SC:2;            /*   IRQ2SC     */
                    unsigned char IRQ1SC:2;            /*   IRQ1SC     */
                    unsigned char IRQ0SC:2;            /*   IRQ0SC     */
                    } BIT;                             /*              */
             } ISCRL;                                  /*              */
       unsigned char wk2[275];                         /*              */
       union {                                         /* INTCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :2;                  /*              */
                    unsigned char INTM1:1;             /*   INTM1      */
                    unsigned char INTM0:1;             /*   INTM0      */
                    unsigned char NMIEG:1;             /*   NMIEG      */
                    unsigned char :3;                  /*              */
                    } BIT;                             /*              */
             } INTCR;                                  /*              */
       union {                                         /* IER          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char IRQ15E:1;            /*   IRQ15E     */
                    unsigned char IRQ14E:1;            /*   IRQ14E     */
                    unsigned char IRQ13E:1;            /*   IRQ13E     */
                    unsigned char IRQ12E:1;            /*   IRQ12E     */
                    unsigned char IRQ11E:1;            /*   IRQ11E     */
                    unsigned char IRQ10E:1;            /*   IRQ10E     */
                    unsigned char IRQ9E :1;            /*   IRQ9E      */
                    unsigned char IRQ8E :1;            /*   IRQ8E      */
                    unsigned char IRQ7E :1;            /*   IRQ7E      */
                    unsigned char IRQ6E :1;            /*   IRQ6E      */
                    unsigned char IRQ5E :1;            /*   IRQ5E      */
                    unsigned char IRQ4E :1;            /*   IRQ4E      */
                    unsigned char IRQ3E :1;            /*   IRQ3E      */
                    unsigned char IRQ2E :1;            /*   IRQ2E      */
                    unsigned char IRQ1E :1;            /*   IRQ1E      */
                    unsigned char IRQ0E :1;            /*   IRQ0E      */
                    } BIT;                             /*              */
             } IER;                                    /*              */
       union {                                         /* ISR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned char IRQ15F:1;            /*   IRQ15F     */
                    unsigned char IRQ14F:1;            /*   IRQ14F     */
                    unsigned char IRQ13F:1;            /*   IRQ13F     */
                    unsigned char IRQ12F:1;            /*   IRQ12F     */
                    unsigned char IRQ11F:1;            /*   IRQ11F     */
                    unsigned char IRQ10F:1;            /*   IRQ10F     */
                    unsigned char IRQ9F :1;            /*   IRQ9F      */
                    unsigned char IRQ8F :1;            /*   IRQ8F      */
                    unsigned char IRQ7F :1;            /*   IRQ7F      */
                    unsigned char IRQ6F :1;            /*   IRQ6F      */
                    unsigned char IRQ5F :1;            /*   IRQ5F      */
                    unsigned char IRQ4F :1;            /*   IRQ4F      */
                    unsigned char IRQ3F :1;            /*   IRQ3F      */
                    unsigned char IRQ2F :1;            /*   IRQ2F      */
                    unsigned char IRQ1F :1;            /*   IRQ1F      */
                    unsigned char IRQ0F :1;            /*   IRQ0F      */
                    } BIT;                             /*              */
             } ISR;                                    /*              */
};                                                     /*              */
struct st_adc {                                        /* struct ADC   */
       unsigned short ADDRA;                           /* ADDRA        */
       unsigned short ADDRB;                           /* ADDRB        */
       unsigned short ADDRC;                           /* ADDRC        */
       unsigned short ADDRD;                           /* ADDRD        */
       unsigned short ADDRE;                           /* ADDRE        */
       unsigned short ADDRF;                           /* ADDRF        */
       unsigned short ADDRG;                           /* ADDRG        */
       unsigned short ADDRH;                           /* ADDRH        */
       union {                                         /* ADCSR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char ADF  :1;             /*   ADF        */
                    unsigned char ADIE :1;             /*   ADIE       */
                    unsigned char ADST :1;             /*   ADST       */
                    unsigned char EXCKS:1;             /*   EXCKS      */
                    unsigned char CH   :4;             /*   CH         */
                    } BIT;                             /*              */
             } ADCSR;                                  /*              */
       union {                                         /* ADCR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TRGS   :2;           /*   TRGS       */
                    unsigned char SCANE  :1;           /*   SCANE      */
                    unsigned char SCANS  :1;           /*   SCANS      */
                    unsigned char CKS    :2;           /*   CKS        */
                    unsigned char ADSTCLR:1;           /*   ADSTCLR    */
                    unsigned char EXTRGS :1;           /*   EXTRGS     */
                    } BIT;                             /*              */
             } ADCR;                                   /*              */
};                                                     /*              */
struct st_tpu {                                        /* struct TPU   */
       union {                                         /* TSTR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :2;              /*              */
                    unsigned char CST5:1;              /*   CST5       */
                    unsigned char CST4:1;              /*   CST4       */
                    unsigned char CST3:1;              /*   CST3       */
                    unsigned char CST2:1;              /*   CST2       */
                    unsigned char CST1:1;              /*   CST1       */
                    unsigned char CST0:1;              /*   CST0       */
                    } BIT;                             /*              */
             } TSTR;                                   /*              */
       union {                                         /* TSYR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char      :2;             /*              */
                    unsigned char SYNC5:1;             /*   SYNC5      */
                    unsigned char SYNC4:1;             /*   SYNC4      */
                    unsigned char SYNC3:1;             /*   SYNC3      */
                    unsigned char SYNC2:1;             /*   SYNC2      */
                    unsigned char SYNC1:1;             /*   SYNC1      */
                    unsigned char SYNC0:1;             /*   SYNC0      */
                    } BIT;                             /*              */
             } TSYR;                                   /*              */
};                                                     /*              */
struct st_tpu0 {                                       /* struct TPU0  */
       union {                                         /* TCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CCLR:3;              /*    CCLR      */
                    unsigned char CKEG:2;              /*    CKEG      */
                    unsigned char TPSC:3;              /*    TPSC      */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       union {                                         /* TMDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char    :2;               /*              */
                    unsigned char BFB:1;               /*    BFB       */
                    unsigned char BFA:1;               /*    BFA       */
                    unsigned char MD :4;               /*    MD        */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*    TIORH     */
                    unsigned char L;                   /*    TIORL     */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char IOB:4;               /*    IOB       */
                    unsigned char IOA:4;               /*    IOA       */
                    unsigned char IOD:4;               /*    IOD       */
                    unsigned char IOC:4;               /*    IOC       */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       union {                                         /* TIER         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TTGE :1;             /*    TTGE      */
                    unsigned char      :2;             /*              */
                    unsigned char TCIEV:1;             /*    TCIEV     */
                    unsigned char TGIED:1;             /*    TGIED     */
                    unsigned char TGIEC:1;             /*    TGIEC     */
                    unsigned char TGIEB:1;             /*    TGIEB     */
                    unsigned char TGIEA:1;             /*    TGIEA     */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       union {                                         /* TSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :3;              /*              */
                    unsigned char TCFV:1;              /*    TCFV      */
                    unsigned char TGFD:1;              /*    TGFD      */
                    unsigned char TGFC:1;              /*    TGFC      */
                    unsigned char TGFB:1;              /*    TGFB      */
                    unsigned char TGFA:1;              /*    TGFA      */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned short TGRA;                            /* TGRA         */
       unsigned short TGRB;                            /* TGRB         */
       unsigned short TGRC;                            /* TGRC         */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_tpu1 {                                       /* struct TPU1  */
       union {                                         /* TCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :1;              /*              */
                    unsigned char CCLR:2;              /*    CCLR      */
                    unsigned char CKEG:2;              /*    CKEG      */
                    unsigned char TPSC:3;              /*    TPSC      */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       union {                                         /* TMDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char   :4;                /*              */
                    unsigned char MD:4;                /*    MD        */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       union {                                         /* TIOR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char IOB:4;               /*    IOB       */
                    unsigned char IOA:4;               /*    IOA       */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk;                               /*              */
       union {                                         /* TIER         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TTGE :1;             /*    TTGE      */
                    unsigned char      :1;             /*              */
                    unsigned char TCIEU:1;             /*    TCIEU     */
                    unsigned char TCIEV:1;             /*    TCIEV     */
                    unsigned char      :2;             /*              */
                    unsigned char TGIEB:1;             /*    TGIEB     */
                    unsigned char TGIEA:1;             /*    TGIEA     */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       union {                                         /* TSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TCFD:1;              /*    TCFD      */
                    unsigned char     :1;              /*              */
                    unsigned char TCFU:1;              /*    TCFU      */
                    unsigned char TCFV:1;              /*    TCFV      */
                    unsigned char     :2;              /*              */
                    unsigned char TGFB:1;              /*    TGFB      */
                    unsigned char TGFA:1;              /*    TGFA      */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned short TGRA;                            /* TGRA         */
       unsigned short TGRB;                            /* TGRB         */
};                                                     /*              */
struct st_p1 {                                         /* struct P1    */
       union {                                         /* ODR P1PIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[223];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT P1PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR P1PIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_p2 {                                         /* struct P2    */
       union {                                         /* ODR P2PIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[223];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT P2PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR P2PIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_p3 {                                         /* struct P3    */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk0[25];                          /*              */
       union {                                         /* ODR P3PIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk1[277];                         /*              */
       union {                                         /* PORT P3PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR P3PIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_p4 {                                         /* struct P4    */
       union {                                         /* PORT P4PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
};                                                     /*              */
struct st_p5 {                                         /* struct P5    */
       union {                                         /* ODR P5PIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[225];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT P5PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR P5PIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_p6 {                                         /* struct P6    */
       union {                                         /* ODR P6PIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[225];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT P6PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR P6PIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_p8 {                                         /* struct P8    */
       union {                                         /* ODR P8PIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[226];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT P8PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR P8PIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_p9 {                                         /* struct P9    */
       union {                                         /* PORT P9PIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
};                                                     /*              */
struct st_pa {                                         /* struct PA    */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk0[12];                          /*              */
       union {                                         /* PCR PAPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PCR;                                    /*              */
       unsigned char wk1[6];                           /*              */
       union {                                         /* ODR PAPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk2[283];                         /*              */
       union {                                         /* PORT PAPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk3[15];                          /*              */
       union {                                         /* DR PAPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_pb {                                         /* struct PB    */
       union {                                         /* ODR PBPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[228];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[12];                          /*              */
       union {                                         /* PCR PBPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PCR;                                    /*              */
       unsigned char wk2[290];                         /*              */
       union {                                         /* PORT PBPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk3[15];                          /*              */
       union {                                         /* DR PBPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_pc {                                         /* struct PC    */
       union {                                         /* ODR PCPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[228];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[12];                          /*              */
       union {                                         /* PCR PCPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PCR;                                    /*              */
       unsigned char wk2[290];                         /*              */
       union {                                         /* PORT PCPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk3[15];                          /*              */
       union {                                         /* DR PCPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_pd {                                         /* struct PD    */
       union {                                         /* ODR PDPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[228];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[12];                          /*              */
       union {                                         /* PCR PDPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PCR;                                    /*              */
       unsigned char wk2[290];                         /*              */
       union {                                         /* PORT PDPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk3[15];                          /*              */
       union {                                         /* DR PDPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_pe {                                         /* struct PE    */
       union {                                         /* ODR PEPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[228];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[12];                          /*              */
       union {                                         /* PCR PEPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PCR;                                    /*              */
       unsigned char wk2[290];                         /*              */
       union {                                         /* PORT PEPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk3[15];                          /*              */
       union {                                         /* DR PEPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_pf {                                         /* struct PF    */
       union {                                         /* ODR PFPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[228];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT PFPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR PFPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_pg {                                         /* struct PG    */
       union {                                         /* ODR PGPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[228];                         /*              */
       unsigned char      DDR;                         /* DDR          */
       unsigned char wk1[303];                         /*              */
       union {                                         /* PORT PGPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk2[15];                          /*              */
       union {                                         /* DR PGPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
};                                                     /*              */
struct st_ph {                                         /* struct PH    */
       union {                                         /* ODR PHPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[548];                         /*              */
       union {                                         /* PORT PHPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk1[1];                           /*              */
       union {                                         /* DR PHPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
       unsigned char wk2[1];                           /*              */
       unsigned char      DDR;                         /* DDR          */
};                                                     /*              */
struct st_pj {                                         /* struct PJ    */
       union {                                         /* ODR PJPIN    */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } ODR;                                    /*              */
       unsigned char wk0[548];                         /*              */
       union {                                         /* PORT PJPIN   */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } PORT;                                   /*              */
       unsigned char wk1[1];                           /*              */
       union {                                         /* DR PJPIN     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                         unsigned char B7:1;           /*    Bit 7     */
                         unsigned char B6:1;           /*    Bit 6     */
                         unsigned char B5:1;           /*    Bit 5     */
                         unsigned char B4:1;           /*    Bit 4     */
                         unsigned char B3:1;           /*    Bit 3     */
                         unsigned char B2:1;           /*    Bit 2     */
                         unsigned char B1:1;           /*    Bit 1     */
                         unsigned char B0:1;           /*    Bit 0     */
                    } BIT;                             /*              */
             } DR;                                     /*              */
       unsigned char wk2[1];                           /*              */
       unsigned char      DDR;                         /* DDR          */
};                                                     /*              */
struct st_pfc {                                        /* struct PFC   */
       union {                                         /* PFCR0        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CS7E:1;              /*    CS7E      */
                    unsigned char CS6E:1;              /*    CS6E      */
                    unsigned char CS5E:1;              /*    CS5E      */
                    unsigned char CS4E:1;              /*    CS4E      */
                    unsigned char CS3E:1;              /*    CS3E      */
                    unsigned char CS2E:1;              /*    CS2E      */
                    unsigned char CS1E:1;              /*    CS1E      */
                    unsigned char CS0E:1;              /*    CS0E      */
                    } BIT;                             /*              */
             } PFCR0;                                  /*              */
       union {                                         /* PFCR1        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char A23E:1;              /*    A23E      */
                    unsigned char A22E:1;              /*    A22E      */
                    unsigned char A21E:1;              /*    A21E      */
                    unsigned char A20E:1;              /*    A20E      */
                    unsigned char A19E:1;              /*    A19E      */
                    unsigned char A18E:1;              /*    A18E      */
                    unsigned char A17E:1;              /*    A17E      */
                    unsigned char A16E:1;              /*    A16E      */
                    } BIT;                             /*              */
             } PFCR1;                                  /*              */
       union {                                         /* PFCR2        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char      :4;             /*              */
                    unsigned char ASOE :1;             /*    ASOE      */
                    unsigned char LWROE:1;             /*    LWROE     */
                    unsigned char OES  :1;             /*    OES       */
                    unsigned char      :1;             /*              */
                    } BIT;                             /*              */
             } PFCR2;                                  /*              */
       unsigned char wk[403];                          /*              */
       union {                                         /* PFCR3        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char      :1;             /*              */
                    unsigned char PPGS :1;             /*    PPGS      */
                    unsigned char TPUS :1;             /*    TPUS      */
                    unsigned char TMRS :1;             /*    TMRS      */
                    unsigned char      :4;             /*              */
                    } BIT;                             /*              */
             } PFCR3;                                  /*              */
       union {                                         /* PFCR4        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char WAITS  :1;           /*    WAITS     */
                    unsigned char BREQS  :1;           /*    BREQS     */
                    unsigned char BACKS  :1;           /*    BACKS     */
                    unsigned char BREQOS :1;           /*    BREQOS    */
                    unsigned char ADTRG0S:1;           /*    ADTRG0S   */
                    unsigned char TXD4S  :1;           /*    TXD4S     */
                    unsigned char RXD4S  :1;           /*    RXD4S     */
                    unsigned char SCK4S  :1;           /*    SCK4S     */
                    } BIT;                             /*              */
             } PFCR4;                                  /*              */
       union {                                         /* PFCR5        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char SSO0S :2;            /*    SSO0S     */
                    unsigned char SSI0S :2;            /*    SSI0S     */
                    unsigned char SSCK0S:2;            /*    SSCK0S    */
                    unsigned char SCS0S :2;            /*    SCS0S     */
                    } BIT;                             /*              */
             } PFCR5;                                  /*              */
};                                                     /*              */
struct st_iic2 {                                       /* struct IIC2  */
       union {                                         /* ICCRA        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char ICE :1;              /*    ICE       */
                    unsigned char RCVD:1;              /*    RCVD      */
                    unsigned char MST :1;              /*    MST       */
                    unsigned char TRS :1;              /*    TRS       */
                    unsigned char CKS :4;              /*    CKS       */
                    } BIT;                             /*              */
             } ICCRA;                                  /*              */
       union {                                         /* ICCRB        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char BBSY  :1;            /*    BBSY      */
                    unsigned char SCP   :1;            /*    SCP       */
                    unsigned char SDAO  :1;            /*    SDAO      */
                    unsigned char       :1;            /*              */
                    unsigned char SCLO  :1;            /*    SCLO      */
                    unsigned char       :1;            /*              */
                    unsigned char IICRST:1;            /*    IICRST    */
                    } BIT;                             /*              */
             } ICCRB;                                  /*              */
       union {                                         /* ICMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :1;              /*              */
                    unsigned char WAIT:1;              /*    WAIT      */
                    unsigned char     :2;              /*              */
                    unsigned char BCWP:1;              /*    BCWP      */
                    unsigned char BC  :3;              /*    BC        */
                    } BIT;                             /*              */
             } ICMR;                                   /*              */
       union {                                         /* ICIER        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TIE  :1;             /*    TIE       */
                    unsigned char TEIE :1;             /*    TEIE      */
                    unsigned char RIE  :1;             /*    RIE       */
                    unsigned char NAKIE:1;             /*    NAKIE     */
                    unsigned char STIE :1;             /*    STIE      */
                    unsigned char ACKE :1;             /*    ACKE      */
                    unsigned char ACKBR:1;             /*    ACKBR     */
                    unsigned char ACKBT:1;             /*    ACKBT     */
                    } BIT;                             /*              */
             } ICIER;                                  /*              */
       union {                                         /* ICSR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TDRE :1;             /*    TDRE      */
                    unsigned char TEND :1;             /*    TEND      */
                    unsigned char RDRF :1;             /*    RDRF      */
                    unsigned char NACKF:1;             /*    NACKF     */
                    unsigned char STOP :1;             /*    STOP      */
                    unsigned char AL   :1;             /*    AL        */
                    unsigned char AAS  :1;             /*    AAS       */
                    unsigned char ADZ  :1;             /*    ADZ       */
                    } BIT;                             /*              */
             } ICSR;                                   /*              */
       union {                                         /* SAR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char SVA:7;               /*    SVA       */
                    } BIT;                             /*              */
             } SAR;                                    /*              */
       unsigned char    ICDRT;                         /* ICDRT        */
       unsigned char    ICDRR;                         /* ICDRR        */
};                                                     /*              */
struct st_ssu {                                        /* struct SSU   */
       union {                                         /* SSCRH        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char MSS :1;              /*   MSS        */
                    unsigned char BIDE:1;              /*   BIDE       */
                    unsigned char     :1;              /*              */
                    unsigned char SOL :1;              /*   SOL        */
                    unsigned char SOLP:1;              /*   SOLP       */
                    unsigned char SCKS:1;              /*   SCKS       */
                    unsigned char CSS :2;              /*   CSS        */
                    } BIT;                             /*              */
             } SSCRH;                                  /*              */
       union {                                         /* SSCRL        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char      :1;             /*              */
                    unsigned char SSUMS:1;             /*   SSUMS      */
                    unsigned char SRES :1;             /*   SRES       */
                    unsigned char      :3;             /*              */
                    unsigned char DATS :2;             /*   DATS       */
                    } BIT;                             /*              */
             } SSCRL;                                  /*              */
       union {                                         /* SSMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char MLS :1;              /*   MLS        */
                    unsigned char CPOS:1;              /*   CPOS       */
                    unsigned char CPHS:1;              /*   CPHS       */
                    unsigned char     :2;              /*              */
                    unsigned char CKS :3;              /*   CKS        */
                    } BIT;                             /*              */
             } SSMR;                                   /*              */
       union {                                         /* SSER         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TE  :1;              /*   TE         */
                    unsigned char RE  :1;              /*   RE         */
                    unsigned char     :2;              /*              */
                    unsigned char TEIE:1;              /*   TEIE       */
                    unsigned char TIE :1;              /*   TIE        */
                    unsigned char RIE :1;              /*   RIE        */
                    unsigned char CEIE:1;              /*   CEIE       */
                    } BIT;                             /*              */
             } SSER;                                   /*              */
       union {                                         /* SSSR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char     :1;              /*              */
                    unsigned char ORER:1;              /*   ORER       */
                    unsigned char     :2;              /*              */
                    unsigned char TEND:1;              /*   TEND       */
                    unsigned char TDRE:1;              /*   TDRE       */
                    unsigned char RDRF:1;              /*   RDRF       */
                    unsigned char CE  :1;              /*   CE         */
                    } BIT;                             /*              */
             } SSSR;                                   /*              */
       union {                                         /* SSCR2        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char SDOS   :1;           /*   SDOS       */
                    unsigned char SSCKOS :1;           /*   SSCKOS     */
                    unsigned char SCSOS  :1;           /*   SCSOS      */
                    unsigned char TENDSTS:1;           /*   TENDSTS    */
                    unsigned char SCSATS :1;           /*   SCSATS     */
                    unsigned char SSODTS :1;           /*   SSODTS     */
                    unsigned char        :2;           /*              */
                    } BIT;                             /*              */
             } SSCR2;                                  /*              */
       unsigned char SSTDR0;                           /* SSTDR0       */
       unsigned char SSTDR1;                           /* SSTDR1       */
       unsigned char SSTDR2;                           /* SSTDR2       */
       unsigned char SSTDR3;                           /* SSTDR3       */
       unsigned char SSRDR0;                           /* SSRDR0       */
       unsigned char SSRDR1;                           /* SSRDR1       */
       unsigned char SSRDR2;                           /* SSRDR2       */
       unsigned char SSRDR3;                           /* SSRDR3       */
};                                                     /*              */
struct st_exdmac2{                                     /* struct EXDMAC2 */
       void          *EDSAR;                           /* EDSAR          */
       void          *EDDAR;                           /* EDDAR          */
       unsigned long  EDTCR;                           /* EDTCR          */
       union {                                         /* EDMDR          */
             unsigned short WORD;                      /* Word Access    */
             struct {                                  /* Bit  Access    */
                    unsigned char EDA   :1;            /*   EDA          */
                    unsigned char BEF   :1;            /*   BEF          */
                    unsigned char EDRAKE:1;            /*   EDRAKE       */
                    unsigned char ETENDE:1;            /*   ETENDE       */
                    unsigned char EDREQS:1;            /*   EDREQS       */
                    unsigned char AMS   :1;            /*   AMS          */
                    unsigned char MDS   :2;            /*   MDS          */
                    unsigned char EDIE  :1;            /*   EDIE         */
                    unsigned char IRF   :1;            /*   IRF          */
                    unsigned char TCEIE :1;            /*   TCEIE        */
                    unsigned char SDIR  :1;            /*   SDIR         */
                    unsigned char DTSIZE:1;            /*   DTSIZE       */
                    unsigned char BGUP  :1;            /*   BGUP         */
                    unsigned char       :2;            /*                */
                    } BIT;                             /*                */
             } EDMDR;                                  /*                */
       union {                                         /* EDACR          */
             unsigned short WORD;                      /* Word Access    */
             struct {                                  /* Bit  Access    */
                    unsigned char SAT  :2;             /*   SAT          */
                    unsigned char SARIE:1;             /*   SARIE        */
                    unsigned char SARA :5;             /*   SARA         */
                    unsigned char DAT  :2;             /*   DAT          */
                    unsigned char DARIE:1;             /*   DARIE        */
                    unsigned char DARA :5;             /*   DARA         */
                    } BIT;                             /*                */
             } EDACR;                                  /*                */
};                                                     /*                */
struct st_exdmac3{                                     /* struct EXDMAC3 */
       void          *EDSAR;                           /* EDSAR          */
       void          *EDDAR;                           /* EDDAR          */
       unsigned long  EDTCR;                           /* EDTCR          */
       union {                                         /* EDMDR          */
             unsigned short WORD;                      /* Word Access    */
             struct {                                  /* Bit  Access    */
                    unsigned char EDA   :1;            /*   EDA          */
                    unsigned char BEF   :1;            /*   BEF          */
                    unsigned char EDRAKE:1;            /*   EDRAKE       */
                    unsigned char ETENDE:1;            /*   ETENDE       */
                    unsigned char EDREQS:1;            /*   EDREQS       */
                    unsigned char AMS   :1;            /*   AMS          */
                    unsigned char MDS   :2;            /*   MDS          */
                    unsigned char EDIE  :1;            /*   EDIE         */
                    unsigned char IRF   :1;            /*   IRF          */
                    unsigned char TCEIE :1;            /*   TCEIE        */
                    unsigned char SDIR  :1;            /*   SDIR         */
                    unsigned char DTSIZE:1;            /*   DTSIZE       */
                    unsigned char BGUP  :1;            /*   BGUP         */
                    unsigned char       :2;            /*                */
                    } BIT;                             /*                */
             } EDMDR;                                  /*                */
       union {                                         /* EDACR          */
             unsigned short WORD;                      /* Word Access    */
             struct {                                  /* Bit  Access    */
                    unsigned char SAT  :2;             /*   SAT          */
                    unsigned char SARIE:1;             /*   SARIE        */
                    unsigned char SARA :5;             /*   SARA         */
                    unsigned char DAT  :2;             /*   DAT          */
                    unsigned char DARIE:1;             /*   DARIE        */
                    unsigned char DARA :5;             /*   DARA         */
                    } BIT;                             /*                */
             } EDACR;                                  /*                */
};                                                     /*                */
struct st_sci {                                        /* struct SCI   */
       union {                                         /* IrCR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char IrE    :1;           /*    IrE       */
                    unsigned char IrCKS  :3;           /*    IrCKS     */
                    unsigned char IrTxINV:1;           /*    IrTxINV   */
                    unsigned char IrRxINV:1;           /*    IrRxINV   */
                    } BIT;                             /*              */
             } IrCR;                                   /*              */
       unsigned char wk[345];                          /*              */
       union {                                         /* SMR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CA  :1;              /*    C/A       */
                    unsigned char CHR :1;              /*    CHR       */
                    unsigned char _PE :1;              /*    PE        */
                    unsigned char OE  :1;              /*    O/E       */
                    unsigned char STOP:1;              /*    STOP      */
                    unsigned char MP  :1;              /*    MP        */
                    unsigned char CKS :2;              /*    CKS       */
                    } BIT;                             /*              */
             } SMR;                                    /*              */
       unsigned char BRR;                              /* BRR          */
       union {                                         /* SCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TIE :1;              /*    TIE       */
                    unsigned char RIE :1;              /*    RIE       */
                    unsigned char TE  :1;              /*    TE        */
                    unsigned char RE  :1;              /*    RE        */
                    unsigned char MPIE:1;              /*    MPIE      */
                    unsigned char TEIE:1;              /*    TEIE      */
                    unsigned char CKE :2;              /*    CKE       */
                    } BIT;                             /*              */
             } SCR;                                    /*              */
       unsigned char TDR;                              /* TDR          */
       union {                                         /* SSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TDRE:1;              /*    TDRE      */
                    unsigned char RDRF:1;              /*    RDRF      */
                    unsigned char ORER:1;              /*    ORER      */
                    unsigned char FER :1;              /*    FER       */
                    unsigned char PER :1;              /*    PER       */
                    unsigned char TEND:1;              /*    TEND      */
                    unsigned char MPB :1;              /*    MPB       */
                    unsigned char MPBT:1;              /*    MPBT      */
                    } BIT;                             /*              */
             } SSR;                                    /*              */
       unsigned char RDR;                              /* RDR          */
       union {                                         /* SCMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char SDIR:1;              /*    SDIR      */
                    unsigned char SINV:1;              /*    SINV      */
                    unsigned char     :1;              /*              */
                    unsigned char SMIF:1;              /*    SMIF      */
                    }      BIT;                        /*              */
             } SCMR;                                   /*              */
};                                                     /*              */
struct st_sci1 {                                       /* struct SCI1  */
       union {                                         /* SMR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CA  :1;              /*    C/A       */
                    unsigned char CHR :1;              /*    CHR       */
                    unsigned char _PE :1;              /*    PE        */
                    unsigned char OE  :1;              /*    O/E       */
                    unsigned char STOP:1;              /*    STOP      */
                    unsigned char MP  :1;              /*    MP        */
                    unsigned char CKS :2;              /*    CKS       */
                    } BIT;                             /*              */
             } SMR;                                    /*              */
       unsigned char BRR;                              /* BRR          */
       union {                                         /* SCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TIE :1;              /*    TIE       */
                    unsigned char RIE :1;              /*    RIE       */
                    unsigned char TE  :1;              /*    TE        */
                    unsigned char RE  :1;              /*    RE        */
                    unsigned char MPIE:1;              /*    MPIE      */
                    unsigned char TEIE:1;              /*    TEIE      */
                    unsigned char CKE :2;              /*    CKE       */
                    } BIT;                             /*              */
             } SCR;                                    /*              */
       unsigned char TDR;                              /* TDR          */
       union {                                         /* SSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TDRE:1;              /*    TDRE      */
                    unsigned char RDRF:1;              /*    RDRF      */
                    unsigned char ORER:1;              /*    ORER      */
                    unsigned char FER :1;              /*    FER       */
                    unsigned char PER :1;              /*    PER       */
                    unsigned char TEND:1;              /*    TEND      */
                    unsigned char MPB :1;              /*    MPB       */
                    unsigned char MPBT:1;              /*    MPBT      */
                    } BIT;                             /*              */
             } SSR;                                    /*              */
       unsigned char RDR;                              /* RDR          */
       union {                                         /* SCMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char SDIR:1;              /*    SDIR      */
                    unsigned char SINV:1;              /*    SINV      */
                    unsigned char     :1;              /*              */
                    unsigned char SMIF:1;              /*    SMIF      */
                    }      BIT;                        /*              */
             } SCMR;                                   /*              */
};                                                     /*              */
struct st_sci2 {                                       /* struct SCI2  */
       union {                                         /* SEMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char ABCS:1;              /*    ABCS      */
                    unsigned char ACS :3;              /*    ACS       */
                    } BIT;                             /*              */
             } SEMR;                                   /*              */
       unsigned char wk[479];                          /*              */
       union {                                         /* SMR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CA  :1;              /*    C/A       */
                    unsigned char CHR :1;              /*    CHR       */
                    unsigned char _PE :1;              /*    PE        */
                    unsigned char OE  :1;              /*    O/E       */
                    unsigned char STOP:1;              /*    STOP      */
                    unsigned char MP  :1;              /*    MP        */
                    unsigned char CKS :2;              /*    CKS       */
                    } BIT;                             /*              */
             } SMR;                                    /*              */
       unsigned char BRR;                              /* BRR          */
       union {                                         /* SCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TIE :1;              /*    TIE       */
                    unsigned char RIE :1;              /*    RIE       */
                    unsigned char TE  :1;              /*    TE        */
                    unsigned char RE  :1;              /*    RE        */
                    unsigned char MPIE:1;              /*    MPIE      */
                    unsigned char TEIE:1;              /*    TEIE      */
                    unsigned char CKE :2;              /*    CKE       */
                    } BIT;                             /*              */
             } SCR;                                    /*              */
       unsigned char TDR;                              /* TDR          */
       union {                                         /* SSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TDRE:1;              /*    TDRE      */
                    unsigned char RDRF:1;              /*    RDRF      */
                    unsigned char ORER:1;              /*    ORER      */
                    unsigned char FER :1;              /*    FER       */
                    unsigned char PER :1;              /*    PER       */
                    unsigned char TEND:1;              /*    TEND      */
                    unsigned char MPB :1;              /*    MPB       */
                    unsigned char MPBT:1;              /*    MPBT      */
                    } BIT;                             /*              */
             } SSR;                                    /*              */
       unsigned char RDR;                              /* RDR          */
       union {                                         /* SCMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char SDIR:1;              /*    SDIR      */
                    unsigned char SINV:1;              /*    SINV      */
                    unsigned char     :1;              /*              */
                    unsigned char SMIF:1;              /*    SMIF      */
                    } BIT;                             /*              */
             } SCMR;                                   /*              */
};                                                     /*              */
struct st_smci {                                       /* struct SMCI  */
       union {                                         /* SMR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char GM :1;               /*    GM        */
                    unsigned char BLK:1;               /*    BLK       */
                    unsigned char _PE:1;               /*    PE        */
                    unsigned char OE :1;               /*    O/E       */
                    unsigned char BCP:2;               /*    BCP       */
                    unsigned char CKS:2;               /*    CKS       */
                    } BIT;                             /*              */
             } SMR;                                    /*              */
       unsigned char BRR;                              /* BRR          */
       union {                                         /* SCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TIE :1;              /*    TIE       */
                    unsigned char RIE :1;              /*    RIE       */
                    unsigned char TE  :1;              /*    TE        */
                    unsigned char RE  :1;              /*    RE        */
                    unsigned char MPIE:1;              /*    MPIE      */
                    unsigned char TEIE:1;              /*    TEIE      */
                    unsigned char CKE :2;              /*    CKE       */
                    } BIT;                             /*              */
             } SCR;                                    /*              */
       unsigned char TDR;                              /* TDR          */
       union {                                         /* SSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TDRE:1;              /*    TDRE      */
                    unsigned char RDRF:1;              /*    RDRF      */
                    unsigned char ORER:1;              /*    ORER      */
                    unsigned char ERS :1;              /*    ERS       */
                    unsigned char PER :1;              /*    PER       */
                    unsigned char TEND:1;              /*    TEND      */
                    unsigned char MPB :1;              /*    MPB       */
                    unsigned char MPBT:1;              /*    MPBT      */
                    } BIT;                             /*              */
             } SSR;                                    /*              */
       unsigned char RDR;                              /* RDR          */
       union {                                         /* SCMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char SDIR:1;              /*    SDIR      */
                    unsigned char SINV:1;              /*    SINV      */
                    unsigned char     :1;              /*              */
                    unsigned char SMIF:1;              /*    SMIF      */
                    } BIT;                             /*              */
             } SCMR;                                   /*              */
};                                                     /*              */
struct st_smci2 {                                      /* struct SMCI2 */
       union {                                         /* SEMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char ABCS:1;              /*    ABCS      */
                    unsigned char ACS :3;              /*    ACS       */
                    } BIT;                             /*              */
             } SEMR;                                   /*              */
       char wk[479];                                   /*              */
       union {                                         /* SMR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char GM :1;               /*    GM        */
                    unsigned char BLK:1;               /*    BLK       */
                    unsigned char _PE:1;               /*    PE        */
                    unsigned char OE :1;               /*    O/E       */
                    unsigned char BCP:2;               /*    BCP       */
                    unsigned char CKS:2;               /*    CKS       */
                    } BIT;                             /*              */
             } SMR;                                    /*              */
       unsigned char BRR;                              /* BRR          */
       union {                                         /* SCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TIE :1;              /*    TIE       */
                    unsigned char RIE :1;              /*    RIE       */
                    unsigned char TE  :1;              /*    TE        */
                    unsigned char RE  :1;              /*    RE        */
                    unsigned char MPIE:1;              /*    MPIE      */
                    unsigned char TEIE:1;              /*    TEIE      */
                    unsigned char CKE :2;              /*    CKE       */
                    } BIT;                             /*              */
             } SCR;                                    /*              */
       unsigned char TDR;                              /* TDR          */
       union {                                         /* SSR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char TDRE:1;              /*    TDRE      */
                    unsigned char RDRF:1;              /*    RDRF      */
                    unsigned char ORER:1;              /*    ORER      */
                    unsigned char ERS :1;              /*    ERS       */
                    unsigned char PER :1;              /*    PER       */
                    unsigned char TEND:1;              /*    TEND      */
                    unsigned char MPB :1;              /*    MPB       */
                    unsigned char MPBT:1;              /*    MPBT      */
                    } BIT;                             /*              */
             } SSR;                                    /*              */
       unsigned char RDR;                              /* RDR          */
       union {                                         /* SCMR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char SDIR:1;              /*    SDIR      */
                    unsigned char SINV:1;              /*    SINV      */
                    unsigned char     :1;              /*              */
                    unsigned char SMIF:1;              /*    SMIF      */
                    } BIT;                             /*              */
             } SCMR;                                   /*              */
};                                                     /*              */
struct st_flash {                                      /* struct FLASH */
       union {                                         /* FLMCR1       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char         :1;          /*              */
                    unsigned char CBIDB   :1;          /*    CBIDB     */
                    unsigned char FMEQOFQ :1;          /*    FMEQOFQ   */
                    unsigned char FMSEQRST:1;          /*    FMSEQRST  */
                    unsigned char FMLBE   :1;          /*    FMLBE     */
                    unsigned char         :2;          /*              */
                    unsigned char FMCMDEN :1;          /*    FMCMDEN   */
                    } BIT;                             /*              */
             } FLMCR1;                                 /*              */
       union {                                         /* FLMCR2       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char        :6;           /*              */
                    unsigned char FMSPREQ:1;           /*    FMSPREQ   */
                    unsigned char        :1;           /*              */
                    } BIT;                             /*              */
             } FLMCR2;                                 /*              */
       union {                                         /* DFPR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char        :7;           /*              */
                    unsigned char FMDBPTO:1;           /*    FMDBPTO   */
                    } BIT;                             /*              */
             } DFPR;                                   /*              */
       union {                                         /* FLMSTR       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char         :2;          /*              */
                    unsigned char FMERSF  :1;          /*    FMERSF    */
                    unsigned char FMERCF  :1;          /*    FMERCF    */
                    unsigned char FMPRSF  :1;          /*    FMPRSF    */
                    unsigned char FMPRCF  :1;          /*    FMPRCF    */
                    unsigned char FMDATRDY:1;          /*    FMDATRDY  */
                    unsigned char FMRDY   :1;          /*    FMRDY     */
                    } BIT;                             /*              */
             } FLMSTR;                                 /*              */
       union {                                         /* FLMPWCR      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char      :6;             /*              */
                    unsigned char FMSTP:1;             /*    FMSTP     */
                    unsigned char      :1;             /*              */
                    } BIT;                             /*              */
             } FLMPWCR;                                /*              */
       char wk[25];                                    /*              */
       union {                                         /* RAMER        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char RAMS:1;              /*    RAMS      */
                    unsigned char RAM :3;              /*    RAM       */
                    } BIT;                             /*              */
             } RAMER;                                  /*              */
};                                                     /*              */
struct st_bsc {                                        /* struct BSC   */
       union {                                         /* ABWCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char ABW7:1;              /*    ABW7      */
                    unsigned char ABW6:1;              /*    ABW6      */
                    unsigned char ABW5:1;              /*    ABW5      */
                    unsigned char ABW4:1;              /*    ABW4      */
                    unsigned char ABW3:1;              /*    ABW3      */
                    unsigned char ABW2:1;              /*    ABW2      */
                    unsigned char ABW1:1;              /*    ABW1      */
                    unsigned char ABW0:1;              /*    ABW0      */
                    } BIT;                             /*              */
             } ABWCR;                                  /*              */
       union {                                         /* ASTCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char AST7:1;              /*    AST7      */
                    unsigned char AST6:1;              /*    AST6      */
                    unsigned char AST5:1;              /*    AST5      */
                    unsigned char AST4:1;              /*    AST4      */
                    unsigned char AST3:1;              /*    AST3      */
                    unsigned char AST2:1;              /*    AST2      */
                    unsigned char AST1:1;              /*    AST1      */
                    unsigned char AST0:1;              /*    AST0      */
                    } BIT;                             /*              */
              } ASTCR;                                 /*              */
       union {                                         /* WTCRA        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char   :1;                /*              */
                    unsigned char W7:3;                /*    W7        */
                    unsigned char   :1;                /*              */
                    unsigned char W6:3;                /*    W6        */
                    unsigned char   :1;                /*              */
                    unsigned char W5:3;                /*    W5        */
                    unsigned char   :1;                /*              */
                    unsigned char W4:3;                /*    W4        */
                    } BIT;                             /*              */
             } WTCRA;                                  /*              */
       union {                                         /* WTCRB        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char   :1;                /*              */
                    unsigned char W3:3;                /*    W3        */
                    unsigned char   :1;                /*              */
                    unsigned char W2:3;                /*    W2        */
                    unsigned char   :1;                /*              */
                    unsigned char W1:3;                /*    W1        */
                    unsigned char   :1;                /*              */
                    unsigned char W0:3;                /*    W0        */
                    } BIT;                             /*              */
             } WTCRB;                                  /*              */
       union {                                         /* RDNCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char RDN7:1;              /*    RDN7      */
                    unsigned char RDN6:1;              /*    RDN6      */
                    unsigned char RDN5:1;              /*    RDN5      */
                    unsigned char RDN4:1;              /*    RDN4      */
                    unsigned char RDN3:1;              /*    RDN3      */
                    unsigned char RDN2:1;              /*    RDN2      */
                    unsigned char RDN1:1;              /*    RDN1      */
                    unsigned char RDN0:1;              /*    RDN0      */
                    } BIT;                             /*              */
             } RDNCR;                                  /*              */
       union {                                         /* CSACRH       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CSXH7:1;             /*    CSXH7     */
                    unsigned char CSXH6:1;             /*    CSXH6     */
                    unsigned char CSXH5:1;             /*    CSXH5     */
                    unsigned char CSXH4:1;             /*    CSXH4     */
                    unsigned char CSXH3:1;             /*    CSXH3     */
                    unsigned char CSXH2:1;             /*    CSXH2     */
                    unsigned char CSXH1:1;             /*    CSXH1     */
                    unsigned char CSXH0:1;             /*    CSXH0     */
                    } BIT;                             /*              */
             } CSACRH;                                 /*              */
       union {                                         /* CSACRL       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CSXT7:1;             /*    CSXT7     */
                    unsigned char CSXT6:1;             /*    CSXT6     */
                    unsigned char CSXT5:1;             /*    CSXT5     */
                    unsigned char CSXT4:1;             /*    CSXT4     */
                    unsigned char CSXT3:1;             /*    CSXT3     */
                    unsigned char CSXT2:1;             /*    CSXT2     */
                    unsigned char CSXT1:1;             /*    CSXT1     */
                    unsigned char CSXT0:1;             /*    CSXT0     */
                    } BIT;                             /*              */
             } CSACRL;                                 /*              */
       union {                                         /* BROMCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char BSRM0:1;             /*    BSRM0     */
                    unsigned char BSTS0:3;             /*    BSTS0     */
                    unsigned char      :2;             /*              */
                    unsigned char BSWD0:2;             /*    BSWD0     */
                    unsigned char BSRM1:1;             /*    BSRM1     */
                    unsigned char BSTS1:3;             /*    BSTS1     */
                    unsigned char      :2;             /*              */
                    unsigned char BSWD1:2;             /*    BSWD1     */
                    } BIT;                             /*              */
             } BROMCR;                                 /*              */
       union {                                         /* BCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char BRLE  :1;            /*    BRLE      */
                    unsigned char BREQOE:1;            /*    BREQOE    */
                    unsigned char       :1;            /*              */
                    unsigned char IDLC  :1;            /*    IDLC      */
                    unsigned char ICIS1 :1;            /*    ICIS1     */
                    unsigned char ICIS0 :1;            /*    ICIS0     */
                    unsigned char WDBE  :1;            /*    WDBE      */
                    unsigned char WAITE :1;            /*    WAITE     */
                    unsigned char       :2;            /*              */
                    unsigned char ICIS3 :1;            /*    ICIS3     */
                    unsigned char       :2;            /*              */
                    unsigned char ICIS2 :1;            /*    ICIS2     */
                    unsigned char       :2;            /*              */
                    } BIT;                             /*              */
             } BCR;                                    /*              */
       unsigned char wk;                               /*              */
       union {                                         /* MPXCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char MPXE :1;             /*    MPXE      */
                    unsigned char      :6;             /*              */
                    unsigned char ADDEX:1;             /*    ADDEX     */
                    } BIT;                             /*              */
             } MPXCR;                                  /*              */
       union {                                         /* DRAMCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char OEE  :1;             /*    OEE       */
                    unsigned char RAST :1;             /*    RAST      */
                    unsigned char      :1;             /*              */
                    unsigned char CAST :1;             /*    CAST      */
                    unsigned char      :1;             /*              */
                    unsigned char RMTS :3;             /*    RMTS      */
                    unsigned char BE   :1;             /*    BE        */
                    unsigned char RCDM :1;             /*    RCDM      */
                    unsigned char DDS  :1;             /*    DDS       */
                    unsigned char EDDS :1;             /*    EDDS      */
                    unsigned char      :1;             /*              */
                    unsigned char MXC  :3;             /*    MXC       */
                    } BIT;                             /*              */
             } DRAMCR;                                 /*              */
       union {                                         /* DRACCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DRMI :1;             /*    DRMI      */
                    unsigned char      :1;             /*              */
                    unsigned char TPC  :2;             /*    TPC       */
                    unsigned char SDWCD:1;             /*    SDWCD     */
                    unsigned char      :1;             /*              */
                    unsigned char RCD  :2;             /*    RCD       */
                    unsigned char      :4;             /*              */
                    unsigned char CKSPE:1;             /*    CKSPE     */
                    unsigned char      :1;             /*              */
                    unsigned char RDXC :2;             /*    RDXC      */
                    } BIT;                             /*              */
             } DRACCR;                                 /*              */
       union {                                         /* REFCR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CMF  :1;             /*    CMF       */
                    unsigned char CMIE :1;             /*    CMIE      */
                    unsigned char RCW  :2;             /*    RCW       */
                    unsigned char      :1;             /*              */
                    unsigned char RTCK :3;             /*    RTCK      */
                    unsigned char RFSHE:1;             /*    RFSHE     */
                    unsigned char      :1;             /*              */
                    unsigned char RLW  :2;             /*    RLW       */
                    unsigned char SLFRF:1;             /*    SLFRF     */
                    unsigned char TPS  :3;             /*    TPS       */
                    } BIT;                             /*              */
             } REFCR;                                  /*              */
       unsigned char RTCNT;                            /* RTCNT        */
       unsigned char RTCOR;                            /* RTCOR        */
};                                                     /*              */
struct st_dma {                                        /* struct DMA   */
       union {                                         /* MAR0A        */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit  Access */
                    unsigned short MAR0AH;             /*    MAR0AH    */
                    unsigned short MAR0AL;             /*    MAR0AL    */
                    } WORD;                            /*              */
             } MAR0A;                                  /*              */
       unsigned short IOAR0A;                          /* IOAR0A       */
       unsigned short ETCR0A;                          /* ETCR0A       */
       union {                                         /* MAR0B        */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit  Access */
                    unsigned short MAR0BH;             /*    MAR0BH    */
                    unsigned short MAR0BL;             /*    MAR0BL    */
                    } WORD;                            /*              */
             } MAR0B;                                  /*              */
       unsigned short IOAR0B;                          /* IOAR0B       */
       unsigned short ETCR0B;                          /* ETCR0B       */
       union {                                         /* MAR1A        */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit  Access */
                    unsigned short MAR1AH;             /*    MAR1AH    */
                    unsigned short MAR1AL;             /*    MAR1AL    */
                    } WORD;                            /*              */
             } MAR1A;                                  /*              */
       unsigned short IOAR1A;                          /* IOAR1A       */
       unsigned short ETCR1A;                          /* ETCR1A       */
       union {                                         /* MAR1B        */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit  Access */
                    unsigned short MAR1BH;             /*    MAR1BH    */
                    unsigned short MAR1BL;             /*    MAR1BL    */
                    } WORD;                            /*              */
             } MAR1B;                                  /*              */
       unsigned short IOAR1B;                          /* IOAR1B       */
       unsigned short ETCR1B;                          /* ETCR1B       */
	   char wk[32];									   /*              */
       union {                                         /* DMAWER       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :4;              /*              */
                    unsigned char WE1B:1;              /*    WE1B      */
                    unsigned char WE1A:1;              /*    WE1A      */
                    unsigned char WE0B:1;              /*    WE0B      */
                    unsigned char WE0A:1;              /*    WE0A      */
                    } BIT;                             /*              */
             } DMAWER;                                 /*              */
       union {                                         /* DMATCR       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char     :2;              /*              */
                    unsigned char TEE1:1;              /*    TEE1      */
                    unsigned char TEE0:1;              /*    TEE0      */
                    unsigned char     :4;              /*              */
                    } BIT;                             /*              */
             } DMATCR;                                 /*              */
       union {                                         /* DMACR0A      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DTSZ :1;             /*    DTSZ      */
                    unsigned char DTID :1;             /*    DTID      */
                    unsigned char RPE  :1;             /*    RPE       */
                    unsigned char DTDIR:1;             /*    DTDIR     */
                    unsigned char DTF  :4;             /*    DTF       */
                    } DMACR0AS;                        /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char DTSZ  :1;            /*    DTSZ      */
                    unsigned char SAID  :1;            /*    SAID      */
                    unsigned char SAIDE :1;            /*    SAIDE     */
                    unsigned char BLKDIR:1;            /*    BLKDIR    */
                    unsigned char BLKE  :1;            /*    BLKE      */
                    unsigned char       :3;            /*              */
                    } DMACR0AF;                        /*              */
             } DMACR0A;                                /*              */
       union {                                         /* DMACR0B      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DTSZ :1;             /*    DTSZ      */
                    unsigned char DTID :1;             /*    DTID      */
                    unsigned char RPE  :1;             /*    RPE       */
                    unsigned char DTDIR:1;             /*    DTDIR     */
                    unsigned char DTF  :4;             /*    DTF       */
                    } DMACR0BS;                        /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char      :1;             /*              */
                    unsigned char DAID :1;             /*    DAID      */
                    unsigned char DAIDE:1;             /*    DAIDE     */
                    unsigned char      :1;             /*              */
                    unsigned char DTF  :4;             /*    DTF       */
                    } DMACR0BF;                        /*              */
             } DMACR0B;                                /*              */
       union {                                         /* DMACR1A      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DTSZ :1;             /*    DTSZ      */
                    unsigned char DTID :1;             /*    DTID      */
                    unsigned char RPE  :1;             /*    RPE       */
                    unsigned char DTDIR:1;             /*    DTDIR     */
                    unsigned char DTF  :4;             /*    DTF       */
                    } DMACR1AS;                        /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char DTSZ  :1;            /*    DTSZ      */
                    unsigned char SAID  :1;            /*    SAID      */
                    unsigned char SAIDE :1;            /*    SAIDE     */
                    unsigned char BLKDIR:1;            /*    BLKDIR    */
                    unsigned char BLKE  :1;            /*    BLKE      */
                    unsigned char       :3;            /*              */
                    } DMACR1AF;                        /*              */
             } DMACR1A;                                /*              */
       union {                                         /* DMACR1B      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DTSZ :1;             /*    DTSZ      */
                    unsigned char DTID :1;             /*    DTID      */
                    unsigned char RPE  :1;             /*    RPE       */
                    unsigned char DTDIR:1;             /*    DTDIR     */
                    unsigned char DTF  :4;             /*    DTF       */
                    } DMACR1BS;                        /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char      :1;             /*              */
                    unsigned char DAID :1;             /*    DAID      */
                    unsigned char DAIDE:1;             /*    DAIDE     */
                    unsigned char      :1;             /*              */
                    unsigned char DTF  :4;             /*    DTF       */
                    } DMACR1BF;                        /*              */
             } DMACR1B;                                /*              */
       union {                                         /* DMABCRH      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char FAE1 :1;             /*    FAE1      */
                    unsigned char FAE0 :1;             /*    FAE0      */
                    unsigned char SAE1 :1;             /*    SAE1      */
                    unsigned char SAE0 :1;             /*    SAE0      */
                    unsigned char DTA1B:1;             /*    DTA1B     */
                    unsigned char DTA1A:1;             /*    DTA1A     */
                    unsigned char DTA0B:1;             /*    DTA0B     */
                    unsigned char DTA0A:1;             /*    DTA0A     */
                    } DMABCRHS;                        /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char FAE1:1;              /*    FAE1      */
                    unsigned char FAE0:1;              /*    FAE0      */
                    unsigned char     :2;              /*              */
                    unsigned char DTA1:1;              /*    DTA1      */
                    unsigned char     :1;              /*              */
                    unsigned char DTA0:1;              /*    DTA0      */
                    unsigned char     :1;              /*              */
                    } DMABCRHF;                        /*              */
             } DMABCRH;                                /*              */
       union {                                         /* DMABCRL      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DTE1B :1;            /*    DTE1B     */
                    unsigned char DTE1A :1;            /*    DTE1A     */
                    unsigned char DTE0B :1;            /*    DTE0B     */
                    unsigned char DTE0A :1;            /*    DTE0A     */
                    unsigned char DTIE1B:1;            /*    DTIE1B    */
                    unsigned char DTIE1A:1;            /*    DTIE1A    */
                    unsigned char DTIE0B:1;            /*    DTIE0B    */
                    unsigned char DTIE0A:1;            /*    DTIE0A    */
                    } DMABCRLS;                        /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char DTME1 :1;            /*    DTME1     */
                    unsigned char DTE1  :1;            /*    DTE1      */
                    unsigned char DTME0 :1;            /*    DTME0     */
                    unsigned char DTE0  :1;            /*    DTE0      */
                    unsigned char DTIE1B:1;            /*    DTIE1B    */
                    unsigned char DTIE1A:1;            /*    DTIE1A    */
                    unsigned char DTIE0B:1;            /*    DTIE0B    */
                    unsigned char DTIE0A:1;            /*    DTIE0A    */
                    } DMABCRLF;                        /*              */
             } DMABCRL;                               /*              */
};                                                     /*              */
struct st_ppg {                                        /* struct PPG   */
       union {                                         /* PCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char G3CMS:2;             /*    G3CMS     */
                    unsigned char G2CMS:2;             /*    G2CMS     */
                    unsigned char G1CMS:2;             /*    G1CMS     */
                    unsigned char G0CMS:2;             /*    G0CMS     */
                    } BIT;                             /*              */
             } PCR;                                    /*              */
       union {                                         /* PMR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char G3INV:1;             /*    G3INV     */
                    unsigned char G2INV:1;             /*    G2INV     */
                    unsigned char G1INV:1;             /*    G1INV     */
                    unsigned char G0INV:1;             /*    G0INV     */
                    unsigned char G3NOV:1;             /*    G3NOV     */
                    unsigned char G2NOV:1;             /*    G2NOV     */
                    unsigned char G1NOV:1;             /*    G1NOV     */
                    unsigned char G0NOV:1;             /*    G0NOV     */
                    } BIT;                             /*              */
             } PMR;                                    /*              */
       union {                                         /* NDER         */
             unsigned int WORD;                        /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char H;                   /*    NDERH     */
                    unsigned char L;                   /*    NDERL     */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char B15:1;               /*    NDER15    */
                    unsigned char B14:1;               /*    NDER14    */
                    unsigned char B13:1;               /*    NDER13    */
                    unsigned char B12:1;               /*    NDER12    */
                    unsigned char B11:1;               /*    NDER11    */
                    unsigned char B10:1;               /*    NDER10    */
                    unsigned char B9 :1;               /*    NDER9     */
                    unsigned char B8 :1;               /*    NDER8     */
                    unsigned char B7 :1;               /*    NDER7     */
                    unsigned char B6 :1;               /*    NDER6     */
                    unsigned char B5 :1;               /*    NDER5     */
                    unsigned char B4 :1;               /*    NDER4     */
                    unsigned char B3 :1;               /*    NDER3     */
                    unsigned char B2 :1;               /*    NDER2     */
                    unsigned char B1 :1;               /*    NDER1     */
                    unsigned char B0 :1;               /*    NDER0     */
                    } BIT;                             /*              */
             } NDER;                                   /*              */
       union {                                         /* PODR         */
             unsigned int WORD;                        /*  Word Access */
             struct {                                  /*  Bit  Access */
                    unsigned char H;                   /*    PODRH     */
                    unsigned char L;                   /*    PODRL     */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit  Access */
                    unsigned char B15:1;               /*    POD15     */
                    unsigned char B14:1;               /*    POD14     */
                    unsigned char B13:1;               /*    POD13     */
                    unsigned char B12:1;               /*    POD12     */
                    unsigned char B11:1;               /*    POD11     */
                    unsigned char B10:1;               /*    POD10     */
                    unsigned char B9 :1;               /*    POD9      */
                    unsigned char B8 :1;               /*    POD8      */
                    unsigned char B7 :1;               /*    POD7      */
                    unsigned char B6 :1;               /*    POD6      */
                    unsigned char B5 :1;               /*    POD5      */
                    unsigned char B4 :1;               /*    POD4      */
                    unsigned char B3 :1;               /*    POD3      */
                    unsigned char B2 :1;               /*    POD2      */
                    unsigned char B1 :1;               /*    POD1      */
                    unsigned char B0 :1;               /*    POD0      */
                    } BIT;                             /*              */
             } PODR;                                   /*              */
       union {                                         /* NDRHH        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char B15:1;               /*    NDR15     */
                    unsigned char B14:1;               /*    NDR14     */
                    unsigned char B13:1;               /*    NDR13     */
                    unsigned char B12:1;               /*    NDR12     */
                    unsigned char B11:1;               /*    NDR11     */
                    unsigned char B10:1;               /*    NDR10     */
                    unsigned char B9 :1;               /*    NDR9      */
                    unsigned char B8 :1;               /*    NDR8      */
                    } BIT;                             /*              */
             } NDRHH;                                  /*              */
       union {                                         /* NDRLH        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char B7:1;                /*    NDR7      */
                    unsigned char B6:1;                /*    NDR6      */
                    unsigned char B5:1;                /*    NDR5      */
                    unsigned char B4:1;                /*    NDR4      */
                    unsigned char B3:1;                /*    NDR3      */
                    unsigned char B2:1;                /*    NDR2      */
                    unsigned char B1:1;                /*    NDR1      */
                    unsigned char B0:1;                /*    NDR0      */
                    } BIT;                             /*              */
             } NDRLH;                                  /*              */
       union {                                         /* NDRHL        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char B15:1;               /*    NDR15     */
                    unsigned char B14:1;               /*    NDR14     */
                    unsigned char B13:1;               /*    NDR13     */
                    unsigned char B12:1;               /*    NDR12     */
                    unsigned char B11:1;               /*    NDR11     */
                    unsigned char B10:1;               /*    NDR10     */
                    unsigned char B9 :1;               /*    NDR9      */
                    unsigned char B8 :1;               /*    NDR8      */
                    } BIT;                             /*              */
             } NDRHL;                                  /*              */
       union {                                         /* NDRLL        */
             unsigned char BYTE;                       /*  Byte Access */
             } NDRLL;                                  /*              */
};                                                     /*              */
struct st_da {                                         /* struct D/A   */
       unsigned char DADR2;                            /* DADR2        */
       unsigned char DADR3;                            /* DADR3        */
       union {                                         /* DACR23       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char DAOE1:1;             /*    DAOE1     */
                    unsigned char DAOE0:1;             /*    DAOE0     */
                    unsigned char DAE  :1;             /*    DAE       */
                    unsigned char      :5;             /*              */
                    } BIT;                             /*              */
             } DACR23;                                 /*              */
};                                                     /*              */
struct st_tmr0 {                                       /* struct TMR0  */
       union {                                         /* TCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CMIEB:1;             /*    CMIEB     */
                    unsigned char CMIEA:1;             /*    CMIEA     */
                    unsigned char OVIE :1;             /*    OVIE      */
                    unsigned char CCLR :2;             /*    CCLR      */
                    unsigned char CKS  :3;             /*    CKS       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk1;                              /*              */
       union {                                         /* TCSR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CMFB:1;              /*    CMFB      */
                    unsigned char CMFA:1;              /*    CMFA      */
                    unsigned char OVF :1;              /*    OVF       */
                    unsigned char ADTE:1;              /*    ADTE      */
                    unsigned char OS  :4;              /*    OS        */
                    } BIT;                             /*              */
             } TCSR;                                   /*              */
       unsigned char wk2;                              /*              */
       unsigned char TCORA;                            /* TCORA        */
       unsigned char wk3;                              /*              */
       unsigned char TCORB;                            /* TCORB        */
       unsigned char wk4;                              /*              */
       unsigned char TCNT;                             /* TCNT         */
       unsigned char wk5;                              /*              */
       union {                                         /* TCCR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char      :4;             /*              */
                    unsigned char TMRIS:1;             /*    TMRIS     */
                    unsigned char      :1;             /*              */
                    unsigned char ICKS :2;             /*    ICKS      */
                    } BIT;                             /*              */
             } TCCR;                                   /*              */
};                                                     /*              */
struct st_tmr1 {                                       /* struct TMR1  */
       union {                                         /* TCR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CMIEB:1;             /*    CMIEB     */
                    unsigned char CMIEA:1;             /*    CMIEA     */
                    unsigned char OVIE :1;             /*    OVIE      */
                    unsigned char CCLR :2;             /*    CCLR      */
                    unsigned char CKS  :3;             /*    CKS       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk1;                              /*              */
       union {                                         /* TCSR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char CMFB:1;              /*    CMFB      */
                    unsigned char CMFA:1;              /*    CMFA      */
                    unsigned char OVF :1;              /*    OVF       */
                    unsigned char     :1;              /*              */
                    unsigned char OS  :4;              /*    OS        */
                    } BIT;                             /*              */
             } TCSR;                                   /*              */
       unsigned char wk2;                              /*              */
       unsigned char TCORA;                            /* TCORA        */
       unsigned char wk3;                              /*              */
       unsigned char TCORB;                            /* TCORB        */
       unsigned char wk4;                              /*              */
       unsigned char TCNT;                             /* TCNT         */
       unsigned char wk5;                              /*              */
       union {                                         /* TCCR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit  Access */
                    unsigned char      :4;             /*              */
                    unsigned char TMRIS:1;             /*    TMRIS     */
                    unsigned char      :1;             /*              */
                    unsigned char ICKS :2;             /*    ICKS      */
                    } BIT;                             /*              */
             } TCCR;                                   /*              */
};                                                     /*              */
union un_wdt {                                         /* union WDT    */
      struct {                                         /* Read  Access */
             union {                                   /* TCSR         */
                   unsigned char BYTE;                 /*  Byte Access */
                   struct {                            /*  Bit  Access */
                          unsigned char OVF :1;        /*    OVF       */
                          unsigned char WTIT:1;        /*    WT/IT     */
                          unsigned char TME :1;        /*    TME       */
                          unsigned char     :2;        /*              */
                          unsigned char CKS :3;        /*    CKS       */
                          } BIT;                       /*              */
                   } TCSR;                             /*              */
             unsigned char TCNT;                       /* TCNT         */
             unsigned char wk;                         /*              */
             union {                                   /* RSTCSR       */
                   unsigned char BYTE;                 /*  Byte Access */
                   struct {                            /*              */
                          unsigned char WOVF:1;        /*    WOVF      */
                          unsigned char RSTE:1;        /*    RSTE      */
                          unsigned char     :6;        /*              */
                          } BIT;                       /*              */
                   } RSTCSR;                           /*              */
             } READ;                                   /*              */
      struct {                                         /* Write Access */
             unsigned short TCSR;                      /* TCSR/TCNT    */
             unsigned char  RSTCSR;                    /* RSTCSR       */
             } WRITE;                                  /*              */
};                                                     /*              */



#define USB     (*(volatile struct st_usb     *)0xFFFB00)    /* USB     Address */
#define SYSTEM  (*(volatile struct st_system  *)0xFFFC80)    /* SYSTEM  Address */
#define INTC    (*(volatile struct st_intc    *)0xFFFC90)    /* INTC    Address */
#define DTC     (*(volatile struct st_dtc     *)0xFFFC96)    /* DTC     Address */
#define ADC0    (*(volatile struct st_adc     *)0xFFFF90)    /* ADC0    Address */
#define ADC1    (*(volatile struct st_adc     *)0xFFFCA0)    /* ADC1    Address */
#define TPU     (*(volatile struct st_tpu     *)0xFFFFC0)    /* TPU     Address */
#define TPU0    (*(volatile struct st_tpu0    *)0xFFFFD0)    /* TPU0    Address */
#define TPU1    (*(volatile struct st_tpu1    *)0xFFFFE0)    /* TPU1    Address */
#define TPU2    (*(volatile struct st_tpu1    *)0xFFFFF0)    /* TPU2    Address */
#define TPU3    (*(volatile struct st_tpu0    *)0xFFFE80)    /* TPU3    Address */
#define TPU4    (*(volatile struct st_tpu1    *)0xFFFE90)    /* TPU4    Address */
#define TPU5    (*(volatile struct st_tpu1    *)0xFFFEA0)    /* TPU5    Address */
#define TPUB    (*(volatile struct st_tpu     *)0xFFFCC0)    /* TPUB    Address */
#define TPU6    (*(volatile struct st_tpu0    *)0xFFFCD0)    /* TPU6    Address */
#define TPU7    (*(volatile struct st_tpu1    *)0xFFFCE0)    /* TPU7    Address */
#define TPU8    (*(volatile struct st_tpu1    *)0xFFFCF0)    /* TPU8    Address */
#define TPU9    (*(volatile struct st_tpu0    *)0xFFFD00)    /* TPU9    Address */
#define TPU10   (*(volatile struct st_tpu1    *)0xFFFD10)    /* TPU10   Address */
#define TPU11   (*(volatile struct st_tpu1    *)0xFFFD20)    /* TPU11   Address */
#define P1      (*(volatile struct st_p1      *)0xFFFD40)    /* PORT1   Address */
#define P2      (*(volatile struct st_p2      *)0xFFFD41)    /* PORT2   Address */
#define P3      (*(volatile struct st_p3      *)0xFFFE22)    /* PORT3   Address */
#define P4      (*(volatile struct st_p4      *)0xFFFF53)    /* PORT4   Address */
#define P5      (*(volatile struct st_p5      *)0xFFFD42)    /* PORT5   Address */
#define P6      (*(volatile struct st_p6      *)0xFFFD43)    /* PORT6   Address */
#define P8      (*(volatile struct st_p8      *)0xFFFD44)    /* PORT8   Address */
#define P9      (*(volatile struct st_p9      *)0xFFFF58)    /* PORT9   Address */
#define PA      (*(volatile struct st_pa      *)0xFFFE29)    /* PORTA   Address */
#define PB      (*(volatile struct st_pb      *)0xFFFD45)    /* PORTB   Address */
#define PC      (*(volatile struct st_pc      *)0xFFFD46)    /* PORTC   Address */
#define PD      (*(volatile struct st_pd      *)0xFFFD47)    /* PORTD   Address */
#define PE      (*(volatile struct st_pe      *)0xFFFD48)    /* PORTE   Address */
#define PF      (*(volatile struct st_pf      *)0xFFFD49)    /* PORTF   Address */
#define PG      (*(volatile struct st_pg      *)0xFFFD4A)    /* PORTG   Address */
#define PH      (*(volatile struct st_ph      *)0xFFFD4B)    /* PORTH   Address */
#define PJ      (*(volatile struct st_pj      *)0xFFFD4C)    /* PORTJ   Address */
#define PFC     (*(volatile struct st_pfc     *)0xFFFE32)    /* PFC     Address */
#define IIC0    (*(volatile struct st_iic2    *)0xFFFD58)    /* IIC0    Address */
#define IIC1    (*(volatile struct st_iic2    *)0xFFFD60)    /* IIC1    Address */
#define IIC2    (*(volatile struct st_iic2    *)0xFFFD68)    /* IIC2    Address */
#define IIC3    (*(volatile struct st_iic2    *)0xFFFD70)    /* IIC3    Address */
#define SSU     (*(volatile struct st_ssu     *)0xFFFDB0)    /* SSU     Address */
#define EXDMAC2 (*(volatile struct st_exdmac2 *)0xFFFDE0)    /* ExDMAC2 Address */
#define EXDMAC3 (*(volatile struct st_exdmac3 *)0xFFFDF0)    /* ExDMAC3 Address */
#define SCI0    (*(volatile struct st_sci     *)0xFFFE1E)    /* SCI0    Address */
#define SCI1    (*(volatile struct st_sci1    *)0xFFFF80)    /* SCI1    Address */
#define SCI2    (*(volatile struct st_sci2    *)0xFFFDA8)    /* SCI2    Address */
#define SCI3    (*(volatile struct st_sci1    *)0xFFFE40)    /* SCI3    Address */
#define SCI4    (*(volatile struct st_sci1    *)0xFFFE48)    /* SCI4    Address */
#define SMCI0   (*(volatile struct st_smci    *)0xFFFF78)    /* SMCI0   Address */
#define SMCI1   (*(volatile struct st_smci    *)0xFFFF80)    /* SMCI1   Address */
#define SMCI2   (*(volatile struct st_smci2   *)0xFFFDA8)    /* SMCI2   Address */
#define SMCI3   (*(volatile struct st_smci    *)0xFFFE40)    /* SMCI3   Address */
#define SMCI4   (*(volatile struct st_smci    *)0xFFFE48)    /* SMCI4   Address */
#define FLASH   (*(volatile struct st_flash   *)0xFFFEB0)    /* FLASH   Address */
#define BSC     (*(volatile struct st_bsc     *)0xFFFEC0)    /* BSC     Address */
#define DMA     (*(volatile struct st_dma     *)0xFFFEE0)    /* DMA     Address */
#define PPG     (*(volatile struct st_ppg     *)0xFFFF46)    /* PPG     Address */
#define DA      (*(volatile struct st_da      *)0xFFFFA8)    /* DA      Address */
#define TMR0    (*(volatile struct st_tmr0    *)0xFFFFB0)    /* TMR0    Address */
#define TMR1    (*(volatile struct st_tmr1    *)0xFFFFB1)    /* TMR1    Address */
#define WDT     (*(volatile union  un_wdt     *)0xFFFFBC)    /* WDT     Address */

#endif