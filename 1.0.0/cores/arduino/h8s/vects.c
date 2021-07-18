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
extern void INT_TGI1B_TPU1 (void);
extern void INT_RXI1_SCI_1(void);
extern void INT_TGI0B_TPU0(void);
extern void INT_TGI0A_TPU0(void);
extern void INT_IRQ1(void);
extern void INT_IRQ2(void);
extern void INT_IRQ9(void);
/***********************************************************************/

typedef void (*fp) (void);


/***********************************************************************
  Place the interrupt service routine symbols in the table
  to create the vector entry
*/

const fp HardwareVectors[] __attribute__ ((section (".vects"))) = {
  start,         /* Reset vector */
  (fp)(0), //vect=2
  (fp)(0), //vect=3
  (fp)(0), //vect=4
  (fp)(0), //vect=5
  (fp)(0), //vect=6
  (fp)(0), //vect=7
  (fp)(0), //vect=8
  (fp)(0), //vect=9
  (fp)(0), //vect=10
  (fp)(0), //vect=11 
  (fp)(0), //vect=12
  (fp)(0), //vect=13
  (fp)(0), //vect=14
  (fp)(0), //vect=15
  (fp)(0), //vect=16
  INT_IRQ1, //vect=17
  INT_IRQ2, //vect=18
  (fp)(0), //vect=19
  (fp)(0), //vect=20
  (fp)(0), //vect=21
  (fp)(0), //vect=22
  (fp)(0), //vect=23
  (fp)(0), //vect=24
  INT_IRQ9, //vect=25
  (fp)(0), //vect=26
  (fp)(0), //vect=27
  (fp)(0), //vect=28
  (fp)(0), //vect=29
  (fp)(0), //vect=30
  (fp)(0), //vect=31
  (fp)(0), //vect=32
  (fp)(0), //vect=33
  (fp)(0), //vect=34
  (fp)(0), //vect=35
  (fp)(0), //vect=36
  (fp)(0), //vect=37
  (fp)(0), //vect=38
  (fp)(0), //vect=39
  INT_TGI0A_TPU0, //vect=40
  INT_TGI0B_TPU0, //vect=41 
  (fp)(0), //vect=42
  (fp)(0), //vect=43
  (fp)(0), //vect=44
  (fp)(0), //vect=45
  (fp)(0), //vect=46
  (fp)(0), //vect=47
  (fp)(0), //vect=48
  (fp)(0), //vect=49
  (fp)(0), //vect=50
  (fp)(0), //vect=51
  (fp)(0), //vect=52
  (fp)(0), //vect=53
  (fp)(0), //vect=54
  (fp)(0), //vect=55
  (fp)(0), //vect=56
  (fp)(0), //vect=57
  (fp)(0), //vect=58
  (fp)(0), //vect=59
  (fp)(0), //vect=60
  (fp)(0), //vect=61
  (fp)(0), //vect=62
  (fp)(0), //vect=63
  (fp)(0), //vect=64
  (fp)(0), //vect=65
  (fp)(0), //vect=66
  (fp)(0), //vect=67
  (fp)(0), //vect=68
  (fp)(0), //vect=69
  (fp)(0), //vect=70
  (fp)(0), //vect=71 
  (fp)(0), //vect=72
  (fp)(0), //vect=73
  (fp)(0), //vect=74
  (fp)(0), //vect=75
  (fp)(0), //vect=76
  (fp)(0), //vect=77
  (fp)(0), //vect=78
  (fp)(0), //vect=79
  (fp)(0), //vect=80
  (fp)(0), //vect=81
  (fp)(0), //vect=82
  (fp)(0), //vect=83
  (fp)(0), //vect=84
  (fp)(0), //vect=85
  (fp)(0), //vect=86
  (fp)(0), //vect=87
  (fp)(0), //vect=88
  (fp)(0), //vect=89
  (fp)(0), //vect=90
  (fp)(0), //vect=91
  (fp)(0), //vect=92
  INT_RXI1_SCI_1, //vect=93
  (fp)(0), //vect=94
  (fp)(0), //vect=95
  (fp)(0), //vect=96
  (fp)(0), //vect=97
  (fp)(0), //vect=98
  (fp)(0), //vect=99
  (fp)(0), //vect=100
  (fp)(0), //vect=101 
  (fp)(0), //vect=102
  (fp)(0), //vect=103
  (fp)(0), //vect=104
  (fp)(0), //vect=105
  (fp)(0), //vect=106
  (fp)(0), //vect=107
  (fp)(0), //vect=108
  (fp)(0), //vect=109
  (fp)(0), //vect=110
  (fp)(0), //vect=111 
  (fp)(0), //vect=112
  (fp)(0), //vect=113
  (fp)(0), //vect=114
  (fp)(0), //vect=115
  (fp)(0), //vect=116
  (fp)(0), //vect=117
  (fp)(0), //vect=118
  (fp)(0), //vect=119
  (fp)(0), //vect=120
  (fp)(0), //vect=121 
  (fp)(0), //vect=122
  (fp)(0), //vect=123
  (fp)(0), //vect=124
  (fp)(0), //vect=125
  (fp)(0), //vect=126
  (fp)(0), //vect=127
  (fp)(0), //vect=128
  (fp)(0), //vect=129
  (fp)(0), //vect=130
  (fp)(0), //vect=131 
  (fp)(0), //vect=132
  (fp)(0), //vect=133
  (fp)(0), //vect=134
  (fp)(0), //vect=135
  (fp)(0), //vect=136
  (fp)(0), //vect=137
  (fp)(0), //vect=138
  (fp)(0), //vect=139
  (fp)(0), //vect=140
  (fp)(0), //vect=141 
  (fp)(0), //vect=142
  (fp)(0), //vect=143
  (fp)(0), //vect=144
  (fp)(0), //vect=145
  (fp)(0), //vect=146
  (fp)(0), //vect=147
  (fp)(0), //vect=148
  (fp)(0), //vect=149
  (fp)(0), //vect=150
  (fp)(0), //vect=151 
  (fp)(0), //vect=152
  (fp)(0), //vect=153
  (fp)(0), //vect=154
  (fp)(0), //vect=155
  (fp)(0), //vect=156
  (fp)(0), //vect=157
  (fp)(0), //vect=158
  (fp)(0), //vect=159
  (fp)(0), //vect=160
  (fp)(0), //vect=161 
  (fp)(0), //vect=162
  (fp)(0), //vect=163
  (fp)(0), //vect=164
  (fp)(0), //vect=165
  (fp)(0), //vect=166
  (fp)(0), //vect=167
  (fp)(0), //vect=168
  (fp)(0), //vect=169
  (fp)(0), //vect=170
  (fp)(0), //vect=171 
  (fp)(0), //vect=172
  (fp)(0), //vect=173
  (fp)(0), //vect=174
  (fp)(0), //vect=175
  (fp)(0), //vect=176
  (fp)(0), //vect=177
  (fp)(0), //vect=178
  (fp)(0), //vect=179
  (fp)(0), //vect=180
  (fp)(0), //vect=181 
  (fp)(0), //vect=182
  (fp)(0), //vect=183
  (fp)(0), //vect=184
  (fp)(0), //vect=185
  (fp)(0), //vect=186
  (fp)(0), //vect=187
  (fp)(0), //vect=188
  (fp)(0), //vect=189
  (fp)(0)
};

/* Done...
************************************************************************/



