/*************************************************************************
FILE NAME    	iodefine.h                                           
DESCRIPTION 	I/O Register definitions for the H8S/2215R CPU.

Copyright   : 2006 Renesas Technology Europe Ltd.
Copyright   : 2006 Renesas Technology Corporation.
All Rights Reserved
*************************************************************************/

/***********************************************************************************
Revision History
DD.MM.YYYY OSO-UID Description
03.10.2006 RTE-VNA First Release.
***********************************************************************************/

#ifndef IODEFINE_H_INCLUDED
#define IODEFINE_H_INCLUDED


struct st_usb {                                         /* struct USB   */
              unsigned char     UEPIR[23][5];           /* UEPIR        */
              char              wk1[13];                /*              */
              union {                                   /* UCTLR        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char FADSEL:1;      /*    FADSEL    */
                           unsigned char SFME  :1;      /*    SFME      */
                           unsigned char UCKS  :4;      /*    UCKS      */
                           unsigned char UIFRST:1;      /*    UIFRST    */
                           unsigned char UDCRST:1;      /*    UCDRST    */
                           }      BIT;                  /*              */
                    }           UCTLR;                  /*              */
              unsigned char     UTSTRA;                 /*              */
              union {                                   /* UDMAR        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char EP4oT:2;       /*    EP4oT     */
                           unsigned char EP4iT:2;       /*    EP4iT     */
                           unsigned char EP2oT:2;       /*    EP2oT     */
                           unsigned char EP2iT:2;       /*    EP2iT     */
                           }      BIT;                  /*              */
                    }           UDMAR;                  /*              */
              union {                                   /* UDRR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char      :6;       /*              */
                           unsigned char RWUPs:1;       /*    RWUPs     */
                           unsigned char DVR  :1;       /*    DVR       */
                           }      BIT;                  /*              */
                    }           UDRR;                   /*              */
              union {                                   /* UTRG0        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char         :2;    /*              */
                           unsigned char EP2oRDFN:1;    /*    EP2oRDFN  */
                           unsigned char EP2iPKTE:1;    /*    EP2iPKTE  */
                           unsigned char EP1iPKTE:1;    /*    EP1iPKTE  */
                           unsigned char EP0oRDFN:1;    /*    EP0oRDFN  */
                           unsigned char EP0iPKTE:1;    /*    EP0iPKTE  */
                           unsigned char EP0sRDFN:1;    /*    EP0sRDFN  */
                           }      BIT;                  /*              */
                    }           UTRG0;                  /*              */
              union {                                   /* UTRG1        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char         :5;    /*              */
                           unsigned char EP5iPKTE:1;    /*    EP5iPKTE  */
                           unsigned char EP4oRDFN:1;    /*    EP4oRDFN  */
                           unsigned char EP4iPKTE:1;    /*    EP4iPKTE  */
                           }      BIT;                  /*              */
                    }           UTRG1;                  /*              */
              union {                                   /* UFCLR0       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char EP3oCLR:1;     /*    EP3oCLR   */
                           unsigned char EP3iCLR:1;     /*    EP3iCLR   */
                           unsigned char EP2oCLR:1;     /*    EP2oCLR   */
                           unsigned char EP2iCLR:1;     /*    EP2iCLR   */
                           unsigned char EP1iCLR:1;     /*    EP1iCLR   */
                           unsigned char EP0oCLR:1;     /*    EP0oCLR   */
                           unsigned char EP0iCLR:1;     /*    EP0iCLR   */
                           }      BIT;                  /*              */
                    }           UFCLR0;                 /*              */
              union {                                   /* UFCLR1       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char        :5;     /*              */
                           unsigned char EP5iCLR:1;     /*    EP5iCLR   */
                           unsigned char EP4oCLR:1;     /*    EP4oCLR   */
                           unsigned char EP4iCLR:1;     /*    EP4iCLR   */
                           }      BIT;                  /*              */
                    }           UFCLR1;                 /*              */
              union {                                   /* UESTL0       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char EP3oSTL:1;     /*    EP3oSTL   */
                           unsigned char EP3iSTL:1;     /*    EP3iSTL   */
                           unsigned char EP2oSTL:1;     /*    EP2oSTL   */
                           unsigned char EP2iSTL:1;     /*    EP2iSTL   */
                           unsigned char EP1iSTL:1;     /*    EP1iSTL   */
                           unsigned char        :2;     /*              */
                           unsigned char EP0STL :1;     /*    EP0STL    */
                           }      BIT;                  /*              */
                    }           UESTL0;                 /*              */
              union {                                   /* UESTL1       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char SCME   :1;     /*    SCME      */
                           unsigned char        :4;     /*              */
                           unsigned char EP5iSTL:1;     /*    EP5iSTL   */
                           unsigned char EP4oSTL:1;     /*    EP4oSTL   */
                           unsigned char EP4iSTL:1;     /*    EP4iSTL   */
                           }      BIT;                  /*              */
                    }           UESTL1;                 /*              */
              char              wk3[6];                 /*              */
              union {                                   /* UEDR0s       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR0s;                 /*              */
              union {                                   /* UEDR0i       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR0i;                 /*              */
              union {                                   /* UEDR0o       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR0o;                 /*              */
              union {                                   /* UEDR1i       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR1i;                 /*              */
              union {                                   /* UEDR2i       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR2i;                 /*              */
              union {                                   /* UEDR2o       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR2o;                 /*              */
              union {                                   /* UEDR3i       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR3i;                 /*              */
              union {                                   /* UEDR3o       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR3o;                 /*              */
              union {                                   /* UEDR4i       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR4i;                 /*              */
              union {                                   /* UEDR4o       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR4o;                 /*              */
              union {                                   /* UEDR5i       */
                    unsigned long LONG;                 /*  Long Access */
                    unsigned int  WORD;                 /*  Word Access */
                    unsigned char BYTE;                 /*  Byte Access */
                    }           UEDR5i;                 /*              */
              unsigned char     UESZ0o;                 /* UESZ0o       */
              unsigned char     UESZ2o;                 /* UESZ2o       */
              unsigned char     UESZ3o;                 /* UESZ3o       */
              unsigned char     UESZ4o;                 /* UESZ4o       */
              union {                                   /* UIFR0        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char BRST   :1;     /*    BRST      */
                           unsigned char        :1;     /*              */
                           unsigned char EP1iTR :1;     /*    EP1iTR    */
                           unsigned char EP1iTS :1;     /*    EP1iTS    */
                           unsigned char EP0oTS :1;     /*    EP0oTS    */
                           unsigned char EP0iTR :1;     /*    EP0iTR    */
                           unsigned char EP0iTS :1;     /*    EP0iTS    */
                           unsigned char SetupTS:1;     /*    SetupTS   */
                           }      BIT;                  /*              */
                    }           UIFR0;                  /*              */
              union {                                   /* UIFR1        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char EP3oTF   :1;   /*    EP3oTF    */
                           unsigned char EP3oTS   :1;   /*    EP3oTS    */
                           unsigned char EP3iTF   :1;   /*    EP3iTF    */
                           unsigned char EP3iTR   :1;   /*    EP3iTR    */
                           unsigned char          :1;   /*              */
                           unsigned char EP2oREADY:1;   /*    EP2oREADY */
                           unsigned char EP2iTR   :1;   /*    EP2iTR    */
                           unsigned char EP2iEMPTY:1;   /*    EP2iEMPTY */
                           }      BIT;                  /*              */
                    }           UIFR1;                  /*              */
              union {                                   /* UIFR2        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char          :2;   /*              */
                           unsigned char EP5iTR   :1;   /*    EP5iTR    */
                           unsigned char EP5iTS   :1;   /*    EP5iTS    */
                           unsigned char          :1;   /*              */
                           unsigned char EP4oREADY:1;   /*    EP4oREADY */
                           unsigned char EP4iTR   :1;   /*    EP4iTR    */
                           unsigned char EP4iEMPTY:1;   /*    EP4iEMPTY */
                           }      BIT;                  /*              */
                    }           UIFR2;                  /*              */
              union {                                   /* UIFR3        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CK48READY:1;   /*    CK48READY */
                           unsigned char SOF      :1;   /*    SOF       */
                           unsigned char SETC     :1;   /*    SETC      */
                           unsigned char SETI     :1;   /*    SETI      */
                           unsigned char SPRSs    :1;   /*    SPRSs     */
                           unsigned char SPRSi    :1;   /*    SPRSi     */
                           unsigned char VBUSs    :1;   /*    VBUSs     */
                           unsigned char VBUSi    :1;   /*    VBISi     */
                           }      BIT;                  /*              */
                    }           UIFR3;                  /*              */
              union {                                   /* UIER0        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char BRSTE   :1;    /*    BRSTE     */
                           unsigned char         :1;    /*              */
                           unsigned char EP1iTRE :1;    /*    EP1iTRE   */
                           unsigned char EP1iTSE :1;    /*    EP1iTSE   */
                           unsigned char EP0oTSE :1;    /*    EP0oTSE   */
                           unsigned char EP0iTRE :1;    /*    EP0iTRE   */
                           unsigned char EP0iTSE :1;    /*    EP0iTSE   */
                           unsigned char SetupTSE:1;    /*    SetupTSE  */
                           }      BIT;                  /*              */
                    }           UIER0;                  /*              */
              union {                                   /* UIER1        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char           :2;  /*              */
                           unsigned char EP3iTFE   :1;  /*    EP3iTFE   */
                           unsigned char EP3iTRE   :1;  /*    EP3iTRE   */
                           unsigned char           :1;  /*              */
                           unsigned char EP2oREADYE:1;  /*    EP2oREADYE*/
                           unsigned char EP2iTRE   :1;  /*    EP2iTRE   */
                           unsigned char EP2iEMPTYE:1;  /*    EP2iEMPTYE*/
                           }      BIT;                  /*              */
                    }           UIER1;                  /*              */
              union {                                   /* UIER2        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char           :2;  /*              */
                           unsigned char EP5iTRE   :1;  /*    EP5iTRE   */
                           unsigned char EP5iTSE   :1;  /*    EP5iTSE   */
                           unsigned char           :1;  /*              */
                           unsigned char EP4oREADYE:1;  /*    EP4oREADYE*/
                           unsigned char EP4iTRE   :1;  /*    EP4iTRE   */
                           unsigned char EP4iEMPTYE:1;  /*    EP4iEMPTYE*/
                           }      BIT;                  /*              */
                    }           UIER2;                  /*              */
              union {                                   /* UIER3        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CK48READYE:1;  /*    CK48READYE*/
                           unsigned char SOFE      :1;  /*    SOFE      */
                           unsigned char SETCE     :1;  /*    SETCE     */
                           unsigned char SETIE     :1;  /*    SETIE     */
                           unsigned char           :1;  /*              */
                           unsigned char SPRSiE    :1;  /*    SPRSiE    */
                           unsigned char           :1;  /*              */
                           unsigned char VBUSiE    :1;  /*    VBISiE    */
                           }      BIT;                  /*              */
                    }           UIER3;                  /*              */
              union {                                   /* UISR0        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char BRSTS   :1;    /*    BRSTS     */
                           unsigned char         :1;    /*              */
                           unsigned char EP1iTRS :1;    /*    EP1iTRS   */
                           unsigned char EP1iTSS :1;    /*    EP1iTSS   */
                           unsigned char EP0oTSS :1;    /*    EP0oTSS   */
                           unsigned char EP0iTRS :1;    /*    EP0iTRS   */
                           unsigned char EP0iTSS :1;    /*    EP0iTSS   */
                           unsigned char SetupTSS:1;    /*    SetupTSS  */
                           }      BIT;                  /*              */
                    }           UISR0;                  /*              */
              union {                                   /* UISR1        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char           :2;  /*              */
                           unsigned char EP3iTFS   :1;  /*    EP3iTFS   */
                           unsigned char EP3iTRS   :1;  /*    EP3iTRS   */
                           unsigned char           :1;  /*              */
                           unsigned char EP2oREADYS:1;  /*    EP2oREADYS*/
                           unsigned char EP2iTRS   :1;  /*    EP2iTRS   */
                           unsigned char EP2iEMPTYS:1;  /*    EP2iEMPTYS*/
                           }      BIT;                  /*              */
                    }           UISR1;                  /*              */
              union {                                   /* UISR2        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char           :2;  /*              */
                           unsigned char EP5iTRS   :1;  /*    EP5iTRS   */
                           unsigned char EP5iTSS   :1;  /*    EP5iTSS   */
                           unsigned char           :1;  /*              */
                           unsigned char EP4oREADYS:1;  /*    EP4oREADYS*/
                           unsigned char EP4iTRS   :1;  /*    EP4iTRS   */
                           unsigned char EP4iEMPTYS:1;  /*    EP4iEMPTYS*/
                           }      BIT;                  /*              */
                    }           UISR2;                  /*              */
              union {                                   /* UISR3        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CK48READYS:1;  /*    CK48READYS*/
                           unsigned char SOFS      :1;  /*    SOFS      */
                           unsigned char SETCS     :1;  /*    SETCS     */
                           unsigned char SETIS     :1;  /*    SETIS     */
                           unsigned char           :3;  /*              */
                           unsigned char VBUSiS    :1;  /*    VBISiS    */
                           }      BIT;                  /*              */
                    }           UISR3;                  /*              */
              union {                                   /* UDSR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char       :2;      /*              */
                           unsigned char EP5iDE:1;      /*    EP5iDE    */
                           unsigned char EP4iDE:1;      /*    EP4iDE    */
                           unsigned char       :1;      /*              */
                           unsigned char EP2iDE:1;      /*    EP2iDE    */
                           unsigned char EP1iDE:1;      /*    EP1iDE    */
                           unsigned char EP0iDE:1;      /*    EP0iDE    */
                           }      BIT;                  /*              */
                    }           UDSR;                   /*              */
              char              wk4[2];                 /*              */
              union {                                   /* UCVR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char     :2;        /*              */
                           unsigned char CNFV:1;        /*    CNFV      */
                           unsigned char INTV:2;        /*    INTV      */
                           unsigned char ALTV:3;        /*    ALTV      */
                           }      BIT;                  /*              */
                    }           UCVR;                   /*              */
              unsigned char     UTSRH;                  /* UTSRH        */
              unsigned char     UTSRL;                  /* UTSRL        */
              char              wk5[30];                /*              */
              union {                                   /* UTSTR0       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char PTSTE  :1;     /*    PTSTE     */
                           unsigned char        :3;     /*              */
                           unsigned char SUSPEND:1;     /*    SUSPEND   */
                           unsigned char OE     :1;     /*    OE        */
                           unsigned char FSE0   :1;     /*    FSE0      */
                           unsigned char VPO    :1;     /*    VPO       */
                           }      BIT;                  /*              */
                    }           UTSTR0;                 /*              */
              union {                                   /* UTSTR1       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char VBUS   :1;     /*    VBUS      */
                           unsigned char UBPM   :1;     /*    UBPM      */
                           unsigned char        :3;     /*              */
                           unsigned char RCV    :1;     /*    RCV       */
                           unsigned char VP     :1;     /*    VP        */
                           unsigned char VM     :1;     /*    VM        */
                           }      BIT;                  /*              */
                    }           UTSTR1;                 /*              */
              unsigned char     UTSTR2;                 /* UTSTR2       */
              unsigned char     wk6[8];                 /*              */
              unsigned char     UTSTRB;                 /* UTSTRB       */
              unsigned char     UTSTRC;                 /* UTSTRC       */
              unsigned char     UTSTRD;                 /* UTSTRD       */
              unsigned char     UTSTRE;                 /* UTSTRE       */
              unsigned char     UTSTRF;                 /* UTSTRF       */
};                                                      /*              */
struct st_da {                                          /* struct D/A   */
             unsigned char      DADR0;                  /* DADR0        */
             unsigned char      DADR1;                  /* DADR1        */
             union {                                    /* DACR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char DAOE1:1;        /*    DAOE1     */
                          unsigned char DAOE0:1;        /*    DAOE0     */
                          unsigned char DAE  :1;        /*    DAE       */
                          }      BIT;                   /*              */
                   }            DACR;                   /*              */
};                                                      /*              */
union un_scrx {                                         /* union SCRX   */
              unsigned char BYTE;                       /*  Byte Access */
              struct {                                  /*  Bit  Access */
                     unsigned char      :4;             /*              */
                     unsigned char FLSHE:1;             /*    FLSHE     */
                     }      BIT;                        /*              */
};                                                      /*              */
union un_sbycr {                                        /* union SBYCR  */
               unsigned char BYTE;                      /*  Byte Access */
               struct {                                 /*  Bit  Access */
                      unsigned char SSBY:1;             /*    SSBY      */
                      unsigned char STS :3;             /*    STS       */
                      unsigned char OPE :1;             /*    OPE       */
                      }      BIT;                       /*              */
};                                                      /*              */
union un_syscr {                                        /* union SYSCR  */
               unsigned char BYTE;                      /*  Byte Access */
               struct {                                 /*  Bit  Access */
                      unsigned char      :2;            /*              */
                      unsigned char INTM :2;            /*    INTM      */
                      unsigned char NMIEG:1;            /*    NMIEG     */
                      unsigned char MRESE:1;            /*    MRESE     */
                      unsigned char      :1;            /*              */
                      unsigned char RAME :1;            /*    RAME      */
                      }      BIT;                       /*              */
};                                                      /*              */
union un_sckcr {                                        /* union SCKCR  */
               unsigned char BYTE;                      /*  Byte Access */
               struct {                                 /*  Bit  Access */
                      unsigned char PSTOP:1;            /*    PSTOP     */
                      unsigned char      :4;            /*              */
                      unsigned char SCK  :3;            /*    SCK       */
                      }      BIT;                       /*              */
};                                                      /*              */
union un_mdcr {                                         /* union MDCR   */
              unsigned char  BYTE;                      /*  Byte Access */
              struct {                                  /*  Bit  Access */
                     unsigned char    :5;               /*              */
                     unsigned char MDS:3;               /*    MDS       */
                     }       BIT;                       /*              */
};                                                      /*              */
struct st_mstp {                                        /* struct MSTP  */
               union {                                  /* CRA          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char _DMAC :1;     /*    DMAC      */
                            unsigned char _DTC  :1;     /*    DTC       */
                            unsigned char _TPU  :1;     /*    TPU       */
                            unsigned char _TMR01:1;     /*    TMR0,TMR1 */
                            unsigned char       :2;     /*              */
                            unsigned char _AD   :1;     /*    A/D       */
                            }      BIT;                 /*              */
                     }          CRA;                    /*              */
               union {                                  /* CRB          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char _SCI0:1;      /*    SCI0      */
                            unsigned char _SCI1:1;      /*    SCI1      */
                            unsigned char _SCI2:1;      /*    SCI2      */
                            unsigned char      :4;      /*              */
                            unsigned char _USB :1;      /*    USB       */
                            }      BIT;                 /*              */
                     }          CRB;                    /*              */
               union {                                  /* CRC          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char    :2;        /*              */
                            unsigned char _DA:1;        /*    D/A       */
                            }      BIT;                 /*              */
                     }          CRC;                    /*              */
};                                                      /*              */
union un_lpwcr {                                        /* union LPWCR  */
               unsigned char BYTE;                      /*  Byte Access */
               struct {                                 /*  Bit  Access */
                      unsigned char      :4;            /*              */
                      unsigned char RFCUT:1;            /*    RFCUT     */
                      unsigned char      :1;            /*              */
                      unsigned char STC  :2;            /*    STC       */
                      }      BIT;                       /*              */
};                                                      /*              */
struct st_bsc {                                         /* struct BSC   */
              char              wk1;                    /*              */
              union {                                   /* PFCR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char   :4;          /*              */
                           unsigned char AE:4;          /*    AE        */
                           }      BIT;                  /*              */
                    }           PFCR;                   /*              */
              char              wk2[228];               /*              */
              union {                                   /* ABWCR        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char ABW7:1;        /*    ABW7      */
                           unsigned char ABW6:1;        /*    ABW6      */
                           unsigned char ABW5:1;        /*    ABW5      */
                           unsigned char ABW4:1;        /*    ABW4      */
                           unsigned char ABW3:1;        /*    ABW3      */
                           unsigned char ABW2:1;        /*    ABW2      */
                           unsigned char ABW1:1;        /*    ABW1      */
                           unsigned char ABW0:1;        /*    ABW0      */
                           }      BIT;                  /*              */
                    }           ABWCR;                  /*              */
              union {                                   /* ASTCR        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char AST7:1;        /*    AST7      */
                           unsigned char AST6:1;        /*    AST6      */
                           unsigned char AST5:1;        /*    AST5      */
                           unsigned char AST4:1;        /*    AST4      */
                           unsigned char AST3:1;        /*    AST3      */
                           unsigned char AST2:1;        /*    AST2      */
                           unsigned char AST1:1;        /*    AST1      */
                           unsigned char AST0:1;        /*    AST0      */
                           }      BIT;                  /*              */
                    }           ASTCR;                  /*              */
              union {                                   /* WCR          */
                    unsigned int WORD;                 /*  Word Access  */
                    struct {                            /*  Byte Access */
                           unsigned char H;             /*    WCRH      */
                           unsigned char L;             /*    WCRL      */
                           }     BYTE;                  /*              */
                    struct {                            /*  Bit  Access */
                           unsigned char W7:2;          /*    W7        */
                           unsigned char W6:2;          /*    W6        */
                           unsigned char W5:2;          /*    W5        */
                           unsigned char W4:2;          /*    W4        */
                           unsigned char W3:2;          /*    W3        */
                           unsigned char W2:2;          /*    W2        */
                           unsigned char W1:2;          /*    W1        */
                           unsigned char W0:2;          /*    W0        */
                           }     BIT;                   /*              */
                    }           WCR;                    /*              */
              union {                                   /* BCR          */
                    unsigned int WORD;                  /*  Word Access */
                    struct {                            /*  Byte Access */
                           unsigned char H;             /*    BCRH      */
                           unsigned char L;             /*    BCRL      */
                           }     BYTE;                  /*              */
                    struct {                            /*  Bit  Access */
                           unsigned char ICIS1 :1;      /*    ICIS1     */
                           unsigned char ICIS0 :1;      /*    ICIS0     */
                           unsigned char BRSTRM:1;      /*    BRSTRM    */
                           unsigned char BRSTS1:1;      /*    BRSTS1    */
                           unsigned char BRSTS0:1;      /*    BRSTS0    */
                           unsigned char       :0;      /*              */
                           unsigned char BRLE  :1;      /*    BRLE      */
                           unsigned char       :6;      /*              */
                           unsigned char WAITE :1;      /*    WAITE     */
                           }     BIT;                   /*              */
                    }           BCR;                    /*              */
};                                                      /*              */
struct st_intc {                                        /* struct INTC  */
               union {                                  /* ISCR         */
                     unsigned int WORD;                 /*  Word Access */
                     struct {                           /*  Byte Access */
                            unsigned char H;            /*    ISCRH     */
                            unsigned char L;            /*    ISCRL     */
                            }     BYTE;                 /*              */
                     struct {                           /*  Bit  Access */
                            unsigned char IRQ7SC:2;     /*    IRQ7SC    */
                            unsigned char IRQ6SC:2;     /*    IRQ6SC    */
                            unsigned char IRQ5SC:2;     /*    IRQ5SC    */
                            unsigned char IRQ4SC:2;     /*    IRQ4SC    */
                            unsigned char IRQ3SC:2;     /*    IRQ3SC    */
                            unsigned char IRQ2SC:2;     /*    IRQ2SC    */
                            unsigned char IRQ1SC:2;     /*    IRQ1SC    */
                            unsigned char IRQ0SC:2;     /*    IRQ0SC    */
                            }     BIT;                  /*              */
                     }          ISCR;                   /*              */
               union {                                  /* IER          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char IRQ7E:1;      /*    IRQ7E     */
                            unsigned char IRQ6E:1;      /*    IRQ6E     */
                            unsigned char IRQ5E:1;      /*    IRQ5E     */
                            unsigned char IRQ4E:1;      /*    IRQ4E     */
                            unsigned char IRQ3E:1;      /*    IRQ3E     */
                            unsigned char IRQ2E:1;      /*    IRQ2E     */
                            unsigned char IRQ1E:1;      /*    IRQ1E     */
                            unsigned char IRQ0E:1;      /*    IRQ0E     */
                            }      BIT;                 /*              */
                     }          IER;                    /*              */
               union {                                  /* ISR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char IRQ7F:1;      /*    IRQ7F     */
                            unsigned char IRQ6F:1;      /*    IRQ6F     */
                            unsigned char IRQ5F:1;      /*    IRQ5F     */
                            unsigned char IRQ4F:1;      /*    IRQ4F     */
                            unsigned char IRQ3F:1;      /*    IRQ3F     */
                            unsigned char IRQ2F:1;      /*    IRQ2F     */
                            unsigned char IRQ1F:1;      /*    IRQ1F     */
                            unsigned char IRQ0F:1;      /*    IRQ0F     */
                            }      BIT;                 /*              */
                     }          ISR;                    /*              */
               char             wk1[170];               /*              */
               union {                                  /* IPRA         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char _IRQ0:3;      /*    IRQ0      */
                            unsigned char      :1;      /*              */
                            unsigned char _IRQ1:3;      /*    IRQ1      */
                            }      BIT;                 /*              */
                     }          IPRA;                   /*              */
               union {                                  /* IPRB         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char       :1;     /*              */
                            unsigned char _IRQ23:3;     /*    IRQ2,3    */
                            unsigned char       :1;     /*              */
                            unsigned char _IRQ45:3;     /*    IRQ4,5    */
                            }      BIT;                 /*              */
                     }          IPRB;                   /*              */
               union {                                  /* IPRC         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char       :1;     /*              */
                            unsigned char _IRQ67:3;     /*    IRQ6,7    */
                            unsigned char       :1;     /*              */
                            unsigned char _DTC  :3;     /*    DTC       */
                            }      BIT;                 /*              */
                     }          IPRC;                   /*              */
               union {                                  /* IPRD         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char     :1;       /*              */
                            unsigned char _WDT:3;       /*    WDT       */
                            }      BIT;                 /*              */
                     }          IPRD;                   /*              */
               union {                                  /* IPRE         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char    :5;        /*              */
                            unsigned char _AD:3;        /*    A/D       */
                            }      BIT;                 /*              */
                     }          IPRE;                   /*              */
               union {                                  /* IPRF         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char _TPU0:3;      /*    TPU0      */
                            unsigned char      :1;      /*              */
                            unsigned char _TPU1:3;      /*    TPU1      */
                            }      BIT;                 /*              */
                     }          IPRF;                   /*              */
               union {                                  /* IPRG         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char _TPU2:3;      /*    TPU2      */
                            }      BIT;                 /*              */
                     }          IPRG;                   /*              */
               char             wk2;                    /*              */
               union {                                  /* IPRI         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char _TMR0:3;      /*    TMR0      */
                            unsigned char      :1;      /*              */
                            unsigned char _TMR1:3;      /*    TMR1      */
                            }      BIT;                 /*              */
                     }          IPRI;                   /*              */
               union {                                  /* IPRJ         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char _DMAC:3;      /*    DMAC      */
                            unsigned char      :1;      /*              */
                            unsigned char _SCI0:3;      /*    SCI0      */
                            }      BIT;                 /*              */
                     }          IPRJ;                   /*              */
               union {                                  /* IPRK         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char _SCI1:3;      /*    SCI1      */
                            unsigned char      :1;      /*              */
                            unsigned char _SCI2:3;      /*    SCI2      */
                            }      BIT;                 /*              */
                     }          IPRK;                   /*              */
               char             wk3;                    /*              */
               union {                                  /* IPRM         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char     :1;       /*              */
                            unsigned char _USB:3;       /*    USB       */
                            }      BIT;                 /*              */
                     }          IPRM;                   /*              */
};                                                      /*              */
struct st_dtc {                                         /* struct DTC   */
              union {                                   /* DTCEA        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char IRQ0:1;        /*    IRQ0      */
                           unsigned char IRQ1:1;        /*    IRQ1      */
                           unsigned char IRQ2:1;        /*    IRQ2      */
                           unsigned char IRQ3:1;        /*    IRQ3      */
                           unsigned char IRQ4:1;        /*    IRQ4      */
                           unsigned char IRQ5:1;        /*    IRQ5      */
                           unsigned char     :1;        /*              */
                           unsigned char IRQ7:1;        /*    IRQ7      */
                           }      BIT;                  /*              */
                    }           DTCEA;                  /*              */
              union {                                   /* DTCEB        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char      :1;       /*              */
                           unsigned char ADI  :1;       /*    ADI       */
                           unsigned char TGI0A:1;       /*    TGI0A     */
                           unsigned char TGI0B:1;       /*    TGI0B     */
                           unsigned char TGI0C:1;       /*    TGI0C     */
                           unsigned char TGI0D:1;       /*    TGI0D     */
                           unsigned char TGI1A:1;       /*    TGI1A     */
                           unsigned char TGI1B:1;       /*    TGI1B     */
                           }      BIT;                  /*              */
                    }           DTCEB;                  /*              */
              union {                                   /* DTCEC        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char TGI2A:1;       /*    TGI2A     */
                           unsigned char TGI2B:1;       /*    TGI2B     */
                           }      BIT;                  /*              */
                    }           DTCEC;                  /*              */
              union {                                   /* DTCED        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char      :4;       /*              */
                           unsigned char CMIA0:1;       /*    CMIA0     */
                           unsigned char CMIB0:1;       /*    CMIB0     */
                           unsigned char CMIA1:1;       /*    CMIA1     */
                           unsigned char CMIB1:1;       /*    CMIB1     */
                           }      BIT;                  /*              */
                    }           DTCED;                  /*              */
              union {                                   /* DTCEE        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char DEND0A:1;      /*    DEND0A    */
                           unsigned char DEND0B:1;      /*    DEND0B    */
                           unsigned char DEND1A:1;      /*    DEND1A    */
                           unsigned char DEND1B:1;      /*    DEND1B    */
                           unsigned char RXI0  :1;      /*    RXI0      */
                           unsigned char TXI0  :1;      /*    TXI0      */
                           unsigned char RXI1  :1;      /*    RXI1      */
                           unsigned char TXI1  :1;      /*    TXI1      */
                           }      BIT;                  /*              */
                    }           DTCEE;                  /*              */
              union {                                   /* DTCEF        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char RXI2:1;        /*    RXI2      */
                           unsigned char TXI2:1;        /*    TXI2      */
                           }      BIT;                  /*              */
                    }           DTCEF;                  /*              */
              char              wk[3];                  /*              */
              union {                                   /* DTVECR       */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char SWDTE:1;       /*    SWDTE     */
                           unsigned char DTVEC:7;       /*    DTVEC     */
                           }      BIT;                  /*              */
                    }           DTVECR;                 /*              */
};                                                      /*              */
struct st_p1 {                                          /* struct P1    */
             unsigned char      DDR;                    /* P1DDR        */
             char               wk1[207];               /*              */
             union {                                    /* P1DR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk2[175];               /*              */
             union {                                    /* P1PORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_p3 {                                          /* struct P3    */
             unsigned char      DDR;                    /* P3DDR        */
             char               wk1[19];                /*              */
             union {                                    /* P3ODR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            ODR;                    /*              */
             char               wk2[187];               /*              */
             union {                                    /* P3DR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk3[175];               /*              */
             union {                                    /* P3PORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_p4 {                                          /* struct P4    */
             union {                                    /* P4PORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :4;           /*    Bit 7-4   */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_p7 {                                          /* struct P7    */
             unsigned char      DDR;                    /* P7DDR        */
             char               wk1[207];               /*              */
             union {                                    /* P7DR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :3;           /*    Bit 7,6,5 */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk2[175];               /*              */
             union {                                    /* P7PORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :3;           /*    Bit 7,6,5 */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_p9 {                                          /* struct P9    */
             union {                                    /* P9PORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pa {                                          /* struct PA    */
             unsigned char      DDR;                    /* PADDR        */
             char               wk1[6];                 /*              */
             union {                                    /* PAPCR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :4;           /*    Bit 7-4   */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PCR;                    /*              */
             char               wk2[6];                 /*              */
             union {                                    /* PAODR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :4;           /*    Bit 7-4   */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            ODR;                    /*              */
             char               wk3[193];               /*              */
             union {                                    /* PADR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :4;           /*    Bit 7-4   */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk4[175];               /*              */
             union {                                    /* PAPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :4;           /*    Bit 7-4   */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pb {                                          /* struct PB    */
             unsigned char      DDR;                    /* PBDDR        */
             char               wk1[6];                 /*              */
             union {                                    /* PBPCR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PCR;                    /*              */
             char               wk2[200];               /*              */
             union {                                    /* PBDR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk3[175];               /*              */
             union {                                    /* PBPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pc {                                          /* struct PC    */
             unsigned char      DDR;                    /* PCDDR        */
             char               wk1[6];                 /*              */
             union {                                    /* PCPCR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PCR;                    /*              */
             char               wk2[200];               /*              */
             union {                                    /* PCDR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk3[175];               /*              */
             union {                                    /* PCPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pd {                                          /* struct PD    */
             unsigned char      DDR;                    /* PDDDR        */
             char               wk1[6];                 /*              */
             union {                                    /* PDPCR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PCR;                    /*              */
             char               wk2[200];               /*              */
             union {                                    /* PDDR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk3[175];               /*              */
             union {                                    /* PDPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pe {                                          /* struct PE    */
             unsigned char      DDR;                    /* PEDDR        */
             char               wk1[6];                 /*              */
             union {                                    /* PEPCR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PCR;                    /*              */
             char               wk2[200];               /*              */
             union {                                    /* PEDR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk3[175];               /*              */
             union {                                    /* PEPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pf {                                          /* struct PF    */
             unsigned char      DDR;                    /* PFDDR        */
             char               wk1[207];               /*              */
             union {                                    /* PFDR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk2[175];               /*              */
             union {                                    /* PFPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char B7:1;           /*    Bit 7     */
                          unsigned char B6:1;           /*    Bit 6     */
                          unsigned char B5:1;           /*    Bit 5     */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_pg {                                          /* struct PG    */
             unsigned char      DDR;                    /* PGDDR        */
             char               wk2[207];               /*              */
             union {                                    /* PGDR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :3;           /*    Bit 7,6,5 */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            DR;                     /*              */
             char               wk1[175];               /*              */
             union {                                    /* PGPORT       */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char   :3;           /*    Bit 7,6,5 */
                          unsigned char B4:1;           /*    Bit 4     */
                          unsigned char B3:1;           /*    Bit 3     */
                          unsigned char B2:1;           /*    Bit 2     */
                          unsigned char B1:1;           /*    Bit 1     */
                          unsigned char B0:1;           /*    Bit 0     */
                          }      BIT;                   /*              */
                   }            PORT;                   /*              */
};                                                      /*              */
struct st_tpu {                                         /* struct TPU   */
              union {                                   /* TSTR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char     :5;        /*              */
                           unsigned char CST2:1;        /*    CST2      */
                           unsigned char CST1:1;        /*    CST1      */
                           unsigned char CST0:1;        /*    CST0      */
                           }      BIT;                  /*              */
                    }           TSTR;                   /*              */
              union {                                   /* TSYR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char      :5;       /*              */
                           unsigned char SYNC2:1;       /*    SYNC2     */
                           unsigned char SYNC1:1;       /*    SYNC1     */
                           unsigned char SYNC0:1;       /*    SYNC0     */
                           }      BIT;                  /*              */
                    }           TSYR;                   /*              */
};                                                      /*              */
struct st_tpu0 {                                        /* struct TPU0  */
               union {                                  /* TCR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char CCLR:3;       /*    CCLR      */
                            unsigned char CKEG:2;       /*    CKEG      */
                            unsigned char TPSC:3;       /*    TPSC      */
                            }      BIT;                 /*              */
                     }          TCR;                    /*              */
               union {                                  /* TMDR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char    :2;        /*              */
                            unsigned char BFB:1;        /*    BFB       */
                            unsigned char BFA:1;        /*    BFA       */
                            unsigned char MD :4;        /*    MD        */
                            }      BIT;                 /*              */
                     }          TMDR;                   /*              */
               union {                                  /* TIOR         */
                     unsigned int WORD;                 /*  Word Access */
                     struct {                           /*  Byte Access */
                            unsigned char H;            /*    TIORH     */
                            unsigned char L;            /*    TIORL     */
                            }     BYTE;                 /*              */
                     struct {                           /*  Bit  Access */
                            unsigned char IOB:4;        /*    IOB       */
                            unsigned char IOA:4;        /*    IOA       */
                            unsigned char IOD:4;        /*    IOD       */
                            unsigned char IOC:4;        /*    IOC       */
                            }     BIT;                  /*              */
                     }          TIOR;                   /*              */
               union {                                  /* TIER         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char TTGE :1;      /*    TTGE      */
                            unsigned char      :2;      /*              */
                            unsigned char TCIEV:1;      /*    TCIEV     */
                            unsigned char TGIED:1;      /*    TGIED     */
                            unsigned char TGIEC:1;      /*    TGIEC     */
                            unsigned char TGIEB:1;      /*    TGIEB     */
                            unsigned char TGIEA:1;      /*    TGIEA     */
                            }      BIT;                 /*              */
                     }          TIER;                   /*              */
               union {                                  /* TSR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char     :3;       /*              */
                            unsigned char TCFV:1;       /*    TCFV      */
                            unsigned char TGFD:1;       /*    TGFD      */
                            unsigned char TGFC:1;       /*    TGFC      */
                            unsigned char TGFB:1;       /*    TGFB      */
                            unsigned char TGFA:1;       /*    TGFA      */
                            }      BIT;                 /*              */
                     }          TSR;                    /*              */
               unsigned int     TCNT;                   /* TCNT         */
               unsigned int     TGRA;                   /* TGRA         */
               unsigned int     TGRB;                   /* TGRB         */
               unsigned int     TGRC;                   /* TGRC         */
               unsigned int     TGRD;                   /* TGRD         */
};                                                      /*              */
struct st_tpu1 {                                        /* struct TPU1  */
               union {                                  /* TCR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char     :1;       /*              */
                            unsigned char CCLR:2;       /*    CCLR      */
                            unsigned char CKEG:2;       /*    CKEG      */
                            unsigned char TPSC:3;       /*    TPSC      */
                            }      BIT;                 /*              */
                     }          TCR;                    /*              */
               union {                                  /* TMDR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char   :4;         /*              */
                            unsigned char MD:4;         /*    MD        */
                            }      BIT;                 /*              */
                     }          TMDR;                   /*              */
               union {                                  /* TIOR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char IOB:4;        /*    IOB       */
                            unsigned char IOA:4;        /*    IOA       */
                            }      BIT;                 /*              */
                     }          TIOR;                   /*              */
               char             wk;                     /*              */
               union {                                  /* TIER         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char TTGE :1;      /*    TTGE      */
                            unsigned char      :1;      /*              */
                            unsigned char TCIEU:1;      /*    TCIEU     */
                            unsigned char TCIEV:1;      /*    TCIEV     */
                            unsigned char      :2;      /*              */
                            unsigned char TGIEB:1;      /*    TGIEB     */
                            unsigned char TGIEA:1;      /*    TGIEA     */
                            }      BIT;                 /*              */
                     }          TIER;                   /*              */
               union {                                  /* TSR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char TCFD:1;       /*    TCFD      */
                            unsigned char     :1;       /*              */
                            unsigned char TCFU:1;       /*    TCFU      */
                            unsigned char TCFV:1;       /*    TCFV      */
                            unsigned char     :2;       /*              */
                            unsigned char TGFB:1;       /*    TGFB      */
                            unsigned char TGFA:1;       /*    TGFA      */
                            }      BIT;                 /*              */
                     }          TSR;                    /*              */
               unsigned int     TCNT;                   /* TCNT         */
               unsigned int     TGRA;                   /* TGRA         */
               unsigned int     TGRB;                   /* TGRB         */
};                                                      /*              */
struct st_sam0a {                                       /* struct DMAC0A*/
                void           *MAR;                    /* MAR          */
                unsigned int    IOAR;                   /* IOAR         */
                unsigned int    ETCR;                   /* ETCR         */
                char            wk1[122];               /*              */
                union {                                 /* DMACR        */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char DTSZ :1;     /*    DTSZ      */
                             unsigned char DTID :1;     /*    DTID      */
                             unsigned char RPE  :1;     /*    RPE       */
                             unsigned char DTDIR:1;     /*    DTDIR     */
                             unsigned char DTF  :4;     /*    DTF       */
                             }      BIT;                /*              */
                      }         DMACR;                  /*              */
                char            wk2[3];                 /*              */
                union {                                 /* DMABCR       */
                      unsigned int WORD;                /*  Word Access */
                      struct {                          /*  Byte Access */
                             unsigned char H;           /*    DMABCRH   */
                             unsigned char L;           /*    DMABCRL   */
                             }     BYTE;                /*              */
                      struct {                          /*  Bit  Access */
                             unsigned char     :1;      /*              */
                             unsigned char FAE :1;      /*    FAE       */
                             unsigned char     :1;      /*              */
                             unsigned char SAE :1;      /*    SAE       */
                             unsigned char     :3;      /*              */
                             unsigned char DTA :1;      /*    DTA       */
                             unsigned char     :3;      /*              */
                             unsigned char DTE :1;      /*    DTE       */
                             unsigned char     :3;      /*              */
                             unsigned char DTIE:1;      /*    DTIE      */
                             }     BIT;                 /*              */
                      }         DMABCR;                 /*              */
};                                                      /*              */
struct st_sam0b {                                       /* struct DMAC0B*/
                void           *MAR;                    /* MAR          */
                unsigned int    IOAR;                   /* IOAR         */
                unsigned int    ETCR;                   /* ETCR         */
                char            wk1[115];               /*              */
                union {                                 /* DMACR        */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char DTSZ :1;     /*    DTSZ      */
                             unsigned char DTID :1;     /*    DTID      */
                             unsigned char RPE  :1;     /*    RPE       */
                             unsigned char DTDIR:1;     /*    DTDIR     */
                             unsigned char DTF  :4;     /*    DTF       */
                             }      BIT;                /*              */
                      }         DMACR;                  /*              */
                char            wk2[2];                 /*              */
                union {                                 /* DMABCR       */
                      unsigned int WORD;                /*  Word Access */
                      struct {                          /*  Byte Access */
                             unsigned char H;           /*    DMABCRH   */
                             unsigned char L;           /*    DMABCRL   */
                             }     BYTE;                /*              */
                      struct {                          /*  Bit  Access */
                             unsigned char     :1;      /*              */
                             unsigned char FAE :1;      /*    FAE       */
                             unsigned char     :1;      /*              */
                             unsigned char SAE :1;      /*    SAE       */
                             unsigned char     :2;      /*              */
                             unsigned char DTA :1;      /*    DTA       */
                             unsigned char     :0;      /*              */
                             unsigned char     :2;      /*              */
                             unsigned char DTE :1;      /*    DTE       */
                             unsigned char     :3;      /*              */
                             unsigned char DTIE:1;      /*    DTIE      */
                             }     BIT;                 /*              */
                      }         DMABCR;                 /*              */
};                                                      /*              */
struct st_sam1a {                                       /* struct DMAC1A*/
                void           *MAR;                    /* MAR          */
                unsigned int    IOAR;                   /* IOAR         */
                unsigned int    ETCR;                   /* ETCR         */
                char            wk1[108];               /*              */
                union {                                 /* DMACR        */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char DTSZ :1;     /*    DTSZ      */
                             unsigned char DTID :1;     /*    DTID      */
                             unsigned char RPE  :1;     /*    RPE       */
                             unsigned char DTDIR:1;     /*    DTDIR     */
                             unsigned char DTF  :4;     /*    DTF       */
                             }      BIT;                /*              */
                      }         DMACR;                  /*              */
                char            wk2;                    /*              */
                union {                                 /* DMABCR       */
                      unsigned int WORD;                /*  Word Access */
                      struct {                          /*  Byte Access */
                             unsigned char H;           /*    DMABCRH   */
                             unsigned char L;           /*    DMABCRL   */
                             }     BYTE;                /*              */
                      struct {                          /*  Bit  Access */
                             unsigned char FAE :1;      /*    FAE       */
                             unsigned char     :1;      /*              */
                             unsigned char SAE :1;      /*    SAE       */
                             unsigned char     :2;      /*              */
                             unsigned char DTA :1;      /*    DTA       */
                             unsigned char     :0;      /*              */
                             unsigned char     :1;      /*              */
                             unsigned char DTE :1;      /*    DTE       */
                             unsigned char     :3;      /*              */
                             unsigned char DTIE:1;      /*    DTIE      */
                             }     BIT;                 /*              */
                      }         DMABCR;                 /*              */
};                                                      /*              */
struct st_sam1b {                                       /* struct DMAC1B*/
                void           *MAR;                    /* MAR          */
                unsigned int    IOAR;                   /* IOAR         */
                unsigned int    ETCR;                   /* ETCR         */
                char            wk[101];                /*              */
                union {                                 /* DMACR        */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char DTSZ :1;     /*    DTSZ      */
                             unsigned char DTID :1;     /*    DTID      */
                             unsigned char RPE  :1;     /*    RPE       */
                             unsigned char DTDIR:1;     /*    DTDIR     */
                             unsigned char DTF  :4;     /*    DTF       */
                             }      BIT;                /*              */
                      }         DMACR;                  /*              */
                union {                                 /* DMABCR       */
                      unsigned int WORD;                /*  Word Access */
                      struct {                          /*  Byte Access */
                             unsigned char H;           /*    DMABCRH   */
                             unsigned char L;           /*    DMABCRL   */
                             }     BYTE;                /*              */
                      struct {                          /*  Bit  Access */
                             unsigned char FAE :1;      /*    FAE       */
                             unsigned char     :1;      /*              */
                             unsigned char SAE :1;      /*    SAE       */
                             unsigned char     :1;      /*              */
                             unsigned char DTA :1;      /*    DTA       */
                             unsigned char     :0;      /*              */
                             unsigned char DTE :1;      /*    DTE       */
                             unsigned char     :3;      /*              */
                             unsigned char DTIE:1;      /*    DTIE      */
                             }     BIT;                 /*              */
                      }         DMABCR;                 /*              */
};                                                      /*              */
struct st_fam0 {                                        /* struct DMAC0 */
               void            *MARA;                   /* MARA         */
               char             wk1[2];                 /*              */
               unsigned int     ETCRA;                  /* ETCRA        */
               void            *MARB;                   /* MARB         */
               char             wk2[2];                 /*              */
               unsigned int     ETCRB;                  /* ETCRB        */
               char             wk3[114];               /*              */
               union {                                  /* DMACR        */
                     unsigned int WORD;                 /*  Word Access */
                     struct {                           /*  Byte Access */
                            unsigned char A;            /*    DMACRA    */
                            unsigned char B;            /*    DMACRB    */
                            }     BYTE;                 /*              */
                     struct {                           /*  Bit  Access */
                            unsigned char DTSZ  :1;     /*    DTSZ      */
                            unsigned char SAID  :1;     /*    SAID      */
                            unsigned char SAIDE :1;     /*    SAIDE     */
                            unsigned char BLKDIR:1;     /*    BLKDIR    */
                            unsigned char BLKE  :1;     /*    BLKE      */
                            unsigned char       :0;     /*              */
                            unsigned char       :1;     /*              */
                            unsigned char DAID  :1;     /*    DAID      */
                            unsigned char DAIDE :1;     /*    DAIDE     */
                            unsigned char       :1;     /*              */
                            unsigned char DTF   :4;     /*    DTF       */
                            }     BIT;                  /*              */
                     }          DMACR;                  /*              */
               char             wk4[2];                 /*              */
               union {                                  /* DMABCR       */
                     unsigned int WORD;                 /*  Word Access */
                     struct {                           /*  Byte Access */
                            unsigned char H;            /*    DMABCRH   */
                            unsigned char L;            /*    DMABCRL   */
                            }     BYTE;                 /*              */
                     struct {                           /*  Bit  Access */
                            unsigned char      :1;      /*              */
                            unsigned char FAE  :1;      /*    FAE       */
                            unsigned char      :4;      /*              */
                            unsigned char DTA  :1;      /*    DTA       */
                            unsigned char      :0;      /*              */
                            unsigned char      :2;      /*              */
                            unsigned char DTME :1;      /*    DTME      */
                            unsigned char DTE  :1;      /*    DTE       */
                            unsigned char      :2;      /*              */
                            unsigned char DTIEB:1;      /*    DTIEB     */
                            unsigned char DTIEA:1;      /*    DTIEA     */
                            }     BIT;                  /*              */
                     }          DMABCR;                 /*              */
};                                                      /*              */
struct st_fam1 {                                        /* struct DMAC1 */
               void            *MARA;                   /* MARA         */
               char             wk1[2];                 /*              */
               unsigned int     ETCRA;                  /* ETCRA        */
               void            *MARB;                   /* MARB         */
               char             wk2[2];                 /*              */
               unsigned int     ETCRB;                  /* ETCRB        */
               char             wk3[100];               /*              */
               union {                                  /* DMACR        */
                     unsigned int WORD;                 /*  Word Access */
                     struct {                           /*  Byte Access */
                            unsigned char A;            /*    DMACRA    */
                            unsigned char B;            /*    DMACRB    */
                            }     BYTE;                 /*              */
                     struct {                           /*  Bit  Access */
                            unsigned char DTSZ  :1;     /*    DTSZ      */
                            unsigned char SAID  :1;     /*    SAID      */
                            unsigned char SAIDE :1;     /*    SAIDE     */
                            unsigned char BLKDIR:1;     /*    BLKDIR    */
                            unsigned char BLKE  :1;     /*    BLKE      */
                            unsigned char       :0;     /*              */
                            unsigned char       :1;     /*              */
                            unsigned char DAID  :1;     /*    DAID      */
                            unsigned char DAIDE :1;     /*    DAIDE     */
                            unsigned char       :1;     /*              */
                            unsigned char DTF   :4;     /*    DTF       */
                            }     BIT;                  /*              */
                     }         DMACR;                   /*              */
               union {                                  /* DMABCR       */
                     unsigned int WORD;                 /*  Word Access */
                     struct {                           /*  Byte Access */
                            unsigned char H;            /*    DMABCRH   */
                            unsigned char L;            /*    DMABCRL   */
                            }     BYTE;                 /*              */
                     struct {                           /*  Bit  Access */
                            unsigned char FAE  :1;      /*    FAE       */
                            unsigned char      :3;      /*              */
                            unsigned char DTA  :1;      /*    DTA       */
                            unsigned char      :0;      /*              */
                            unsigned char DTME :1;      /*    DTME      */
                            unsigned char DTE  :1;      /*    DTE       */
                            unsigned char      :2;      /*              */
                            unsigned char DTIEB:1;      /*    DTIEB     */
                            unsigned char DTIEA:1;      /*    DTIEA     */
                            }     BIT;                  /*              */
                     }          DMABCR;                 /*              */
};                                                      /*              */
struct st_tmr {                                         /* struct TMR   */
              union {                                   /* TCR0         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CMIEB:1;       /*    CMIEB     */
                           unsigned char CMIEA:1;       /*    CMIEA     */
                           unsigned char OVIE :1;       /*    OVIE      */
                           unsigned char CCLR :2;       /*    CCLR      */
                           unsigned char CKS  :3;       /*    CKS       */
                           }      BIT;                  /*              */
                    }           TCR0;                   /*              */
              union {                                   /* TCR1         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CMIEB:1;       /*    CMIEB     */
                           unsigned char CMIEA:1;       /*    CMIEA     */
                           unsigned char OVIE :1;       /*    OVIE      */
                           unsigned char CCLR :2;       /*    CCLR      */
                           unsigned char CKS  :3;       /*    CKS       */
                           }      BIT;                  /*              */
                    }           TCR1;                   /*              */
              union {                                   /* TCSR0        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CMFB:1;        /*    CMFB      */
                           unsigned char CMFA:1;        /*    CMFA      */
                           unsigned char OVF :1;        /*    OVF       */
                           unsigned char ADTE:1;        /*    ADTE      */
                           unsigned char OS  :4;        /*    OS        */
                           }      BIT;                  /*              */
                    }           TCSR0;                  /*              */
              union {                                   /* TCSR1        */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CMFB:1;        /*    CMFB      */
                           unsigned char CMFA:1;        /*    CMFA      */
                           unsigned char OVF :1;        /*    OVF       */
                           unsigned char     :1;        /*              */
                           unsigned char OS  :4;        /*    OS        */
                           }      BIT;                  /*              */
                    }           TCSR1;                  /*              */
              unsigned int      TCORA;                  /* TCORA        */
              unsigned int      TCORB;                  /* TCORB        */
              unsigned int      TCNT;                   /* TCNT         */
};                                                      /*              */
struct st_tmr0 {                                        /* struct TMR0  */
               union {                                  /* TCR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char CMIEB:1;      /*    CMIEB     */
                            unsigned char CMIEA:1;      /*    CMIEA     */
                            unsigned char OVIE :1;      /*    OVIE      */
                            unsigned char CCLR :2;      /*    CCLR      */
                            unsigned char CKS  :3;      /*    CKS       */
                            }      BIT;                 /*              */
                     }          TCR;                    /*              */
               char             wk1;                    /*              */
               union {                                  /* TCSR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char CMFB:1;       /*    CMFB      */
                            unsigned char CMFA:1;       /*    CMFA      */
                            unsigned char OVF :1;       /*    OVF       */
                            unsigned char ADTE:1;       /*    ADTE      */
                            unsigned char OS  :4;       /*    OS        */
                            }      BIT;                 /*              */
                     }          TCSR;                   /*              */
               char             wk2;                    /*              */
               unsigned char    TCORA;                  /* TCORA        */
               char             wk3;                    /*              */
               unsigned char    TCORB;                  /* TCORB        */
               char             wk4;                    /*              */
               unsigned char    TCNT;                   /* TCNT         */
};                                                      /*              */
struct st_tmr1 {                                        /* struct TMR1  */
               union {                                  /* TCR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char CMIEB:1;      /*    CMIEB     */
                            unsigned char CMIEA:1;      /*    CMIEA     */
                            unsigned char OVIE :1;      /*    OVIE      */
                            unsigned char CCLR :2;      /*    CCLR      */
                            unsigned char CKS  :3;      /*    CKS       */
                            }      BIT;                 /*              */
                     }          TCR;                    /*              */
               char             wk1;                    /*              */
               union {                                  /* TCSR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char CMFB:1;       /*    CMFB      */
                            unsigned char CMFA:1;       /*    CMFA      */
                            unsigned char OVF :1;       /*    OVF       */
                            unsigned char     :1;       /*              */
                            unsigned char OS  :4;       /*    OS        */
                            }      BIT;                 /*              */
                     }          TCSR;                   /*              */
               char             wk2;                    /*              */
               unsigned char    TCORA;                  /* TCORA        */
               char             wk3;                    /*              */
               unsigned char    TCORB;                  /* TCORB        */
               char             wk4;                    /*              */
               unsigned char    TCNT;                   /* TCNT         */
};                                                      /*              */
union un_wdt {                                          /* union WDT    */
             struct {                                   /* Read  Access */
                    union {                             /* TCSR         */
                          unsigned char BYTE;           /*  Byte Access */
                          struct {                      /*  Bit  Access */
                                 unsigned char OVF :1;  /*    OVF       */
                                 unsigned char WTIT:1;  /*    WT/IT     */
                                 unsigned char TME :1;  /*    TME       */
                                 unsigned char     :2;  /*              */
                                 unsigned char CKS :3;  /*    CKS       */
                                 }      BIT;            /*              */
                          }       TCSR;                 /*              */
                    unsigned char TCNT;                 /* TCNT         */
                    char          wk;                   /*              */
                    union {                             /* RSTCSR       */
                          unsigned char BYTE;           /*  Byte Access */
                          struct {                      /*              */
                                 unsigned char WOVF :1; /*    WOVF      */
                                 unsigned char RSTE :1; /*    RSTE      */
                                 unsigned char RSTS :1; /*    RSTS      */
                                 }      BIT;            /*              */
                          }       RSTCSR;               /*              */
                    } READ;                             /*              */
             struct {                                   /* Write Access */
                    unsigned int  TCSR;                 /* TCSR/TCNT    */
                    unsigned int  RSTCSR;               /* RSTCSR       */
                    } WRITE;                            /*              */
};                                                      /*              */
struct st_sci0 {                                        /* struct SCI   */
               union {                                  /* SEMR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char     :4;       /*              */
                            unsigned char ABCS:1;       /*    ABCS      */
                            unsigned char ACS :3;       /*    ACS       */
                            }      BIT;                 /*              */
                     }          SEMR;                   /*              */
               char             wk[383];                /*              */
               union {                                  /* SMR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char CA  :1;       /*    C/A       */
                            unsigned char CHR :1;       /*    CHR       */
                            unsigned char _PE :1;       /*    PE        */
                            unsigned char OE  :1;       /*    O/E       */
                            unsigned char STOP:1;       /*    STOP      */
                            unsigned char MP  :1;       /*    MP        */
                            unsigned char CKS :2;       /*    CKS       */
                            }      BIT;                 /*              */
                     }          SMR;                    /*              */
               unsigned char    BRR;                    /* BRR          */
               union {                                  /* SCR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char TIE :1;       /*    TIE       */
                            unsigned char RIE :1;       /*    RIE       */
                            unsigned char TE  :1;       /*    TE        */
                            unsigned char RE  :1;       /*    RE        */
                            unsigned char MPIE:1;       /*    MPIE      */
                            unsigned char TEIE:1;       /*    TEIE      */
                            unsigned char CKE :2;       /*    CKE       */
                            }      BIT;                 /*              */
                     }          SCR;                    /*              */
               unsigned char    TDR;                    /* TDR          */
               union {                                  /* SSR          */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char TDRE:1;       /*    TDRE      */
                            unsigned char RDRF:1;       /*    RDRF      */
                            unsigned char ORER:1;       /*    ORER      */
                            unsigned char FER :1;       /*    FER       */
                            unsigned char PER :1;       /*    PER       */
                            unsigned char TEND:1;       /*    TEND      */
                            unsigned char MPB :1;       /*    MPB       */
                            unsigned char MPBT:1;       /*    MPBT      */
                            }      BIT;                 /*              */
                     }          SSR;                    /*              */
               unsigned char    RDR;                    /* RDR          */
               union {                                  /* SCMR         */
                     unsigned char BYTE;                /*  Byte Access */
                     struct {                           /*  Bit  Access */
                            unsigned char     :4;       /*              */
                            unsigned char SDIR:1;       /*    SDIR      */
                            unsigned char SINV:1;       /*    SINV      */
                            }      BIT;                 /*              */
                     }          SCMR;                   /*              */
};                                                      /*              */
struct st_sci {                                         /* struct SCI   */
              union {                                   /* SMR          */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char CA  :1;        /*    C/A       */
                           unsigned char CHR :1;        /*    CHR       */
                           unsigned char _PE :1;        /*    PE        */
                           unsigned char OE  :1;        /*    O/E       */
                           unsigned char STOP:1;        /*    STOP      */
                           unsigned char MP  :1;        /*    MP        */
                           unsigned char CKS :2;        /*    CKS       */
                           }      BIT;                  /*              */
                    }           SMR;                    /*              */
              unsigned char     BRR;                    /* BRR          */
              union {                                   /* SCR          */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char TIE :1;        /*    TIE       */
                           unsigned char RIE :1;        /*    RIE       */
                           unsigned char TE  :1;        /*    TE        */
                           unsigned char RE  :1;        /*    RE        */
                           unsigned char MPIE:1;        /*    MPIE      */
                           unsigned char TEIE:1;        /*    TEIE      */
                           unsigned char CKE :2;        /*    CKE       */
                           }      BIT;                  /*              */
                    }           SCR;                    /*              */
              unsigned char     TDR;                    /* TDR          */
              union {                                   /* SSR          */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char TDRE:1;        /*    TDRE      */
                           unsigned char RDRF:1;        /*    RDRF      */
                           unsigned char ORER:1;        /*    ORER      */
                           unsigned char FER :1;        /*    FER       */
                           unsigned char PER :1;        /*    PER       */
                           unsigned char TEND:1;        /*    TEND      */
                           unsigned char MPB :1;        /*    MPB       */
                           unsigned char MPBT:1;        /*    MPBT      */
                           }      BIT;                  /*              */
                    }           SSR;                    /*              */
              unsigned char     RDR;                    /* RDR          */
              union {                                   /* SCMR         */
                    unsigned char BYTE;                 /*  Byte Access */
                    struct {                            /*  Bit  Access */
                           unsigned char     :4;        /*              */
                           unsigned char SDIR:1;        /*    SDIR      */
                           unsigned char SINV:1;        /*    SINV      */
                           }      BIT;                  /*              */
                    }           SCMR;                   /*              */
};                                                      /*              */
struct st_ad {                                          /* struct A/D   */
             unsigned int       ADDRA;                  /* ADDRA        */
             unsigned int       ADDRB;                  /* ADDRB        */
             unsigned int       ADDRC;                  /* ADDRC        */
             unsigned int       ADDRD;                  /* ADDRD        */
             union {                                    /* ADCSR        */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char ADF :1;         /*    ADF       */
                          unsigned char ADIE:1;         /*    ADIE      */
                          unsigned char ADST:1;         /*    ADST      */
                          unsigned char SCAN:1;         /*    SCAN      */
                          unsigned char CH  :4;         /*    CH        */
                          }      BIT;                   /*              */
                   }            ADCSR;                  /*              */
             union {                                    /* ADCR         */
                   unsigned char BYTE;                  /*  Byte Access */
                   struct {                             /*  Bit  Access */
                          unsigned char TRGS:2;         /*    TRGS      */
                          unsigned char     :2;         /*              */
                          unsigned char CKS :2;         /*    CKS       */
                          }      BIT;                   /*              */
                   }            ADCR;                   /*              */
};                                                      /*              */
struct st_flash {                                       /* struct FLASH */
                union {                                 /* RAMER        */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char     :4;      /*              */
                             unsigned char RAMS:1;      /*    RAMS      */
                             unsigned char RAM :3;      /*    RAM       */
                             }      BIT;                /*              */
                      }         RAMER;                  /*              */
                char            wk[236];                /*              */
                union {                                 /* FLMCR1       */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char FWE :1;      /*    FWE       */
                             unsigned char SWE1:1;      /*    SWE1      */
                             unsigned char ESU1:1;      /*    ESU1      */
                             unsigned char PSU1:1;      /*    PSU1      */
                             unsigned char EV1 :1;      /*    EV1       */
                             unsigned char PV1 :1;      /*    PV1       */
                             unsigned char E1  :1;      /*    E1        */
                             unsigned char _P1 :1;      /*    P1        */
                             }      BIT;                /*              */
                      }         FLMCR1;                 /*              */
                union {                                 /* FLMCR2       */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char FLER:1;      /*    FLER      */
                             }      BIT;                /*              */
                      }         FLMCR2;                 /*              */
                union {                                 /* EBR1         */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char EB7:1;       /*    EB7       */
                             unsigned char EB6:1;       /*    EB6       */
                             unsigned char EB5:1;       /*    EB5       */
                             unsigned char EB4:1;       /*    EB4       */
                             unsigned char EB3:1;       /*    EB3       */
                             unsigned char EB2:1;       /*    EB2       */
                             unsigned char EB1:1;       /*    EB1       */
                             unsigned char EB0:1;       /*    EB0       */
                             }      BIT;                /*              */
                      }         EBR1;                   /*              */
                union {                                 /* EBR2         */
                      unsigned char BYTE;               /*  Byte Access */
                      struct {                          /*  Bit  Access */
                             unsigned char     :4;      /*              */
                             unsigned char EB11:1;      /*    EB11      */
                             unsigned char EB10:1;      /*    EB10      */
                             unsigned char EB9 :1;      /*    EB9       */
                             unsigned char EB8 :1;      /*    EB8       */
                             }      BIT;                /*              */
                      }         EBR2;                   /*              */
};                                                      /*              */
#define USB     (*(volatile struct st_usb   *)0xC00000) /* USB   Address*/
#define DA      (*(volatile struct st_da    *)0xFFFDAC) /* D/A   Address*/
#define SCRX    (*(volatile union  un_scrx  *)0xFFFDB4) /* SCRX  Address*/
#define SBYCR   (*(volatile union  un_sbycr *)0xFFFDE4) /* SBYCR Address*/
#define SYSCR   (*(volatile union  un_syscr *)0xFFFDE5) /* SYSCR Address*/
#define SCKCR   (*(volatile union  un_sckcr *)0xFFFDE6) /* SCKCR Address*/
#define MDCR    (*(volatile union  un_mdcr  *)0xFFFDE7) /* MDCR  Address*/
#define MSTP    (*(volatile struct st_mstp  *)0xFFFDE8) /* MSTP  Address*/
#define LPWCR   (*(volatile union  un_lpwcr *)0xFFFDEC) /* LPWCR Address*/
#define BSC     (*(volatile struct st_bsc   *)0xFFFDEA) /* BSC   Address*/
#define INTC    (*(volatile struct st_intc  *)0xFFFE12) /* INTC  Address*/
#define DTC     (*(volatile struct st_dtc   *)0xFFFE16) /* DTC   Address*/
#define P1      (*(volatile struct st_p1    *)0xFFFE30) /* P1    Address*/
#define P3      (*(volatile struct st_p3    *)0xFFFE32) /* P3    Address*/
#define P4      (*(volatile struct st_p4    *)0xFFFFB3) /* P4    Address*/
#define P7      (*(volatile struct st_p7    *)0xFFFE36) /* P7    Address*/
#define P9      (*(volatile struct st_p9    *)0xFFFFB8) /* P9    Address*/
#define PA      (*(volatile struct st_pa    *)0xFFFE39) /* PA    Address*/
#define PB      (*(volatile struct st_pb    *)0xFFFE3A) /* PB    Address*/
#define PC      (*(volatile struct st_pc    *)0xFFFE3B) /* PC    Address*/
#define PD      (*(volatile struct st_pd    *)0xFFFE3C) /* PD    Address*/
#define PE      (*(volatile struct st_pe    *)0xFFFE3D) /* PE    Address*/
#define PF      (*(volatile struct st_pf    *)0xFFFE3E) /* PF    Address*/
#define PG      (*(volatile struct st_pg    *)0xFFFE3F) /* PG    Address*/
#define TPU     (*(volatile struct st_tpu   *)0xFFFEB0) /* TPU   Address*/
#define TPU0    (*(volatile struct st_tpu0  *)0xFFFF10) /* TPU0  Address*/
#define TPU1    (*(volatile struct st_tpu1  *)0xFFFF20) /* TPU1  Address*/
#define TPU2    (*(volatile struct st_tpu1  *)0xFFFF30) /* TPU2  Address*/
#define DMAC0A  (*(volatile struct st_sam0a *)0xFFFEE0) /* DMAC 0A Addr */
#define DMAC0B  (*(volatile struct st_sam0b *)0xFFFEE8) /* DMAC 0B Addr */
#define DMAC1A  (*(volatile struct st_sam1a *)0xFFFEF0) /* DMAC 1A Addr */
#define DMAC1B  (*(volatile struct st_sam1b *)0xFFFEF8) /* DMAC 1B Addr */
#define DMAC0   (*(volatile struct st_fam0  *)0xFFFEE0) /* DMAC 0  Addr */
#define DMAC1   (*(volatile struct st_fam1  *)0xFFFEF0) /* DMAC 1  Addr */
#define TMR     (*(volatile struct st_tmr   *)0xFFFF68) /* TMR   Address*/
#define TMR0    (*(volatile struct st_tmr0  *)0xFFFF68) /* TMR0  Address*/
#define TMR1    (*(volatile struct st_tmr1  *)0xFFFF69) /* TMR1  Address*/
#define WDT     (*(volatile union  un_wdt   *)0xFFFF74) /* WDT   Address*/
#define SCI0    (*(volatile struct st_sci0  *)0xFFFDF8) /* SCI0  Address*/
#define SCI1    (*(volatile struct st_sci   *)0xFFFF80) /* SCI1  Address*/
#define SCI2    (*(volatile struct st_sci   *)0xFFFF88) /* SCI2  Address*/
#define AD      (*(volatile struct st_ad    *)0xFFFF90) /* A/D   Address*/
#define FLASH   (*(volatile struct st_flash *)0xFFFEDB) /* FLASH Address*/

#endif 		/* IODEFINE_H_INCLUDED */
