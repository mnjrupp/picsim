#define PERL_constant_NOTFOUND	1
#define PERL_constant_NOTDEF	2
#define PERL_constant_ISIV	3
#define PERL_constant_ISNO	4
#define PERL_constant_ISNV	5
#define PERL_constant_ISPV	6
#define PERL_constant_ISPVN	7
#define PERL_constant_ISSV	8
#define PERL_constant_ISUNDEF	9
#define PERL_constant_ISUV	10
#define PERL_constant_ISYES	11

#ifndef NVTYPE
typedef double NV; /* 5.6 and later define NVTYPE, and typedef NV to it.  */
#endif
#ifndef aTHX_
#define aTHX_ /* 5.6 or later define this for threading support.  */
#endif
#ifndef pTHX_
#define pTHX_ /* 5.6 or later define this for threading support.  */
#endif

static int
constant_3 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     FSR P16 P18 PCL PR2 */
  /* Offset 2 gives the best switch position.  */
  switch (name[2]) {
  case '2':
    if (name[0] == 'P' && name[1] == 'R') {
#ifdef PR2
      *iv_return = PR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (name[0] == 'P' && name[1] == '1') {
#ifdef P16
      *iv_return = P16;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '8':
    if (name[0] == 'P' && name[1] == '1') {
#ifdef P18
      *iv_return = P18;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (name[0] == 'P' && name[1] == 'C') {
#ifdef PCL
      *iv_return = PCL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (name[0] == 'F' && name[1] == 'S') {
#ifdef FSR
      *iv_return = FSR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_4 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     INDF PIE1 PIE2 PIR1 PIR2 TMR0 TMR2 */
  /* Offset 3 gives the best switch position.  */
  switch (name[3]) {
  case '0':
    if (memEQ(name, "TMR", 3)) {
    /*                  0     */
#ifdef TMR0
      *iv_return = TMR0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "PIE", 3)) {
    /*                  1     */
#ifdef PIE1
      *iv_return = PIE1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PIR", 3)) {
    /*                  1     */
#ifdef PIR1
      *iv_return = PIR1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "PIE", 3)) {
    /*                  2     */
#ifdef PIE2
      *iv_return = PIE2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PIR", 3)) {
    /*                  2     */
#ifdef PIR2
      *iv_return = PIR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TMR", 3)) {
    /*                  2     */
#ifdef TMR2
      *iv_return = TMR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "IND", 3)) {
    /*                  F     */
#ifdef INDF
      *iv_return = INDF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_5 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     CMCON PD_IN PORTA PORTB PORTC PORTD PORTE PT_NC RCREG RCSTA SPBRG T1CON
     T2CON TMR1H TMR1L TRISA TRISB TRISC TRISD TRISE TXREG TXSTA */
  /* Offset 4 gives the best switch position.  */
  switch (name[4]) {
  case 'A':
    if (memEQ(name, "PORT", 4)) {
    /*                   A     */
#ifdef PORTA
      *iv_return = PORTA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "RCST", 4)) {
    /*                   A     */
#ifdef RCSTA
      *iv_return = RCSTA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TRIS", 4)) {
    /*                   A     */
#ifdef TRISA
      *iv_return = TRISA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TXST", 4)) {
    /*                   A     */
#ifdef TXSTA
      *iv_return = TXSTA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "PORT", 4)) {
    /*                   B     */
#ifdef PORTB
      *iv_return = PORTB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TRIS", 4)) {
    /*                   B     */
#ifdef TRISB
      *iv_return = TRISB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "PORT", 4)) {
    /*                   C     */
#ifdef PORTC
      *iv_return = PORTC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PT_N", 4)) {
    /*                   C     */
#ifdef PT_NC
      *iv_return = PT_NC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TRIS", 4)) {
    /*                   C     */
#ifdef TRISC
      *iv_return = TRISC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "PORT", 4)) {
    /*                   D     */
#ifdef PORTD
      *iv_return = PORTD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TRIS", 4)) {
    /*                   D     */
#ifdef TRISD
      *iv_return = TRISD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "PORT", 4)) {
    /*                   E     */
#ifdef PORTE
      *iv_return = PORTE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TRIS", 4)) {
    /*                   E     */
#ifdef TRISE
      *iv_return = TRISE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "RCRE", 4)) {
    /*                   G     */
#ifdef RCREG
      *iv_return = RCREG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SPBR", 4)) {
    /*                   G     */
#ifdef SPBRG
      *iv_return = SPBRG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "TXRE", 4)) {
    /*                   G     */
#ifdef TXREG
      *iv_return = TXREG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "TMR1", 4)) {
    /*                   H     */
#ifdef TMR1H
      *iv_return = TMR1H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "TMR1", 4)) {
    /*                   L     */
#ifdef TMR1L
      *iv_return = TMR1L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "CMCO", 4)) {
    /*                   N     */
#ifdef CMCON
      *iv_return = CMCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PD_I", 4)) {
    /*                   N     */
#ifdef PD_IN
      *iv_return = PD_IN;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "T1CO", 4)) {
    /*                   N     */
#ifdef T1CON
      *iv_return = T1CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "T2CO", 4)) {
    /*                   N     */
#ifdef T2CON
      *iv_return = T2CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_6 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     ADCON0 ADCON1 ADCON2 ADRESH ADRESL BIGBUG CCPR1H CCPR1L CCPR2H CCPR2L
     CCPR3H CCPR3L ICKBUG INTCON OPTION P18_WS PCLATH PD_OUT PT_TTL SSPADD
     SSPBUF SSPCON STATUS */
  /* Offset 4 gives the best switch position.  */
  switch (name[4]) {
  case '1':
    if (memEQ(name, "CCPR1H", 6)) {
    /*                   ^       */
#ifdef CCPR1H
      *iv_return = CCPR1H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CCPR1L", 6)) {
    /*                   ^       */
#ifdef CCPR1L
      *iv_return = CCPR1L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "CCPR2H", 6)) {
    /*                   ^       */
#ifdef CCPR2H
      *iv_return = CCPR2H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CCPR2L", 6)) {
    /*                   ^       */
#ifdef CCPR2L
      *iv_return = CCPR2L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "CCPR3H", 6)) {
    /*                   ^       */
#ifdef CCPR3H
      *iv_return = CCPR3H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CCPR3L", 6)) {
    /*                   ^       */
#ifdef CCPR3L
      *iv_return = CCPR3L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "SSPADD", 6)) {
    /*                   ^       */
#ifdef SSPADD
      *iv_return = SSPADD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "ADCON0", 6)) {
    /*                   ^       */
#ifdef ADCON0
      *iv_return = ADCON0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ADCON1", 6)) {
    /*                   ^       */
#ifdef ADCON1
      *iv_return = ADCON1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ADCON2", 6)) {
    /*                   ^       */
#ifdef ADCON2
      *iv_return = ADCON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "INTCON", 6)) {
    /*                   ^       */
#ifdef INTCON
      *iv_return = INTCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "OPTION", 6)) {
    /*                   ^       */
#ifdef OPTION
      *iv_return = OPTION;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SSPCON", 6)) {
    /*                   ^       */
#ifdef SSPCON
      *iv_return = SSPCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "ADRESH", 6)) {
    /*                   ^       */
#ifdef ADRESH
      *iv_return = ADRESH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ADRESL", 6)) {
    /*                   ^       */
#ifdef ADRESL
      *iv_return = ADRESL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "PCLATH", 6)) {
    /*                   ^       */
#ifdef PCLATH
      *iv_return = PCLATH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PT_TTL", 6)) {
    /*                   ^       */
#ifdef PT_TTL
      *iv_return = PT_TTL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "BIGBUG", 6)) {
    /*                   ^       */
#ifdef BIGBUG
      *iv_return = BIGBUG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "ICKBUG", 6)) {
    /*                   ^       */
#ifdef ICKBUG
      *iv_return = ICKBUG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PD_OUT", 6)) {
    /*                   ^       */
#ifdef PD_OUT
      *iv_return = PD_OUT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "SSPBUF", 6)) {
    /*                   ^       */
#ifdef SSPBUF
      *iv_return = SSPBUF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "STATUS", 6)) {
    /*                   ^       */
#ifdef STATUS
      *iv_return = STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "P18_WS", 6)) {
    /*                   ^       */
#ifdef P18_WS
      *iv_return = P18_WS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_7 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     BUFFMAX CCP1CON CCP2CON CCP3CON P16F628 P16F777 P16F877 P18F452 P18_BSR
     P18_PCL P18_PR2 P18_UIE P18_UIR PT_CMOS SSPCON2 SSPSTAT */
  /* Offset 4 gives the best switch position.  */
  switch (name[4]) {
  case '4':
    if (memEQ(name, "P18F452", 7)) {
    /*                   ^        */
#ifdef P18F452
      *iv_return = P18F452;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "P16F628", 7)) {
    /*                   ^        */
#ifdef P16F628
      *iv_return = P16F628;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '7':
    if (memEQ(name, "P16F777", 7)) {
    /*                   ^        */
#ifdef P16F777
      *iv_return = P16F777;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '8':
    if (memEQ(name, "P16F877", 7)) {
    /*                   ^        */
#ifdef P16F877
      *iv_return = P16F877;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "P18_BSR", 7)) {
    /*                   ^        */
#ifdef P18_BSR
      *iv_return = P18_BSR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "CCP1CON", 7)) {
    /*                   ^        */
#ifdef CCP1CON
      *iv_return = CCP1CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CCP2CON", 7)) {
    /*                   ^        */
#ifdef CCP2CON
      *iv_return = CCP2CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "CCP3CON", 7)) {
    /*                   ^        */
#ifdef CCP3CON
      *iv_return = CCP3CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'M':
    if (memEQ(name, "BUFFMAX", 7)) {
    /*                   ^        */
#ifdef BUFFMAX
      *iv_return = BUFFMAX;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PT_CMOS", 7)) {
    /*                   ^        */
#ifdef PT_CMOS
      *iv_return = PT_CMOS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "SSPCON2", 7)) {
    /*                   ^        */
#ifdef SSPCON2
      *iv_return = SSPCON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "P18_PCL", 7)) {
    /*                   ^        */
#ifdef P18_PCL
      *iv_return = P18_PCL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PR2", 7)) {
    /*                   ^        */
#ifdef P18_PR2
      *iv_return = P18_PR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "SSPSTAT", 7)) {
    /*                   ^        */
#ifdef SSPSTAT
      *iv_return = SSPSTAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "P18_UIE", 7)) {
    /*                   ^        */
#ifdef P18_UIE
      *iv_return = P18_UIE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UIR", 7)) {
    /*                   ^        */
#ifdef P18_UIR
      *iv_return = P18_UIR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_8 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     P16F628A P16F648A P16F877A P18F4550 P18F4620 P18_BSRS P18_IPR1 P18_IPR2
     P18_LATA P18_LATB P18_LATC P18_LATD P18_LATE P18_PIE1 P18_PIE2 P18_PIR1
     P18_PIR2 P18_RCON P18_TMR2 P18_TOSH P18_TOSL P18_TOSU P18_UCFG P18_UCON
     P18_UEIE P18_UEP0 P18_UEP1 P18_UEP2 P18_UEP3 P18_UEP4 P18_UEP5 P18_UEP6
     P18_UEP7 P18_UEP8 P18_UEP9 P18_UIER P18_WREG PT_USART */
  /* Offset 7 gives the best switch position.  */
  switch (name[7]) {
  case '0':
    if (memEQ(name, "P18F455", 7)) {
    /*                      0     */
#ifdef P18F4550
      *iv_return = P18F4550;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18F462", 7)) {
    /*                      0     */
#ifdef P18F4620
      *iv_return = P18F4620;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      0     */
#ifdef P18_UEP0
      *iv_return = P18_UEP0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "P18_IPR", 7)) {
    /*                      1     */
#ifdef P18_IPR1
      *iv_return = P18_IPR1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PIE", 7)) {
    /*                      1     */
#ifdef P18_PIE1
      *iv_return = P18_PIE1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PIR", 7)) {
    /*                      1     */
#ifdef P18_PIR1
      *iv_return = P18_PIR1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      1     */
#ifdef P18_UEP1
      *iv_return = P18_UEP1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "P18_IPR", 7)) {
    /*                      2     */
#ifdef P18_IPR2
      *iv_return = P18_IPR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PIE", 7)) {
    /*                      2     */
#ifdef P18_PIE2
      *iv_return = P18_PIE2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PIR", 7)) {
    /*                      2     */
#ifdef P18_PIR2
      *iv_return = P18_PIR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR", 7)) {
    /*                      2     */
#ifdef P18_TMR2
      *iv_return = P18_TMR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      2     */
#ifdef P18_UEP2
      *iv_return = P18_UEP2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      3     */
#ifdef P18_UEP3
      *iv_return = P18_UEP3;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '4':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      4     */
#ifdef P18_UEP4
      *iv_return = P18_UEP4;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '5':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      5     */
#ifdef P18_UEP5
      *iv_return = P18_UEP5;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '6':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      6     */
#ifdef P18_UEP6
      *iv_return = P18_UEP6;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '7':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      7     */
#ifdef P18_UEP7
      *iv_return = P18_UEP7;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '8':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      8     */
#ifdef P18_UEP8
      *iv_return = P18_UEP8;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '9':
    if (memEQ(name, "P18_UEP", 7)) {
    /*                      9     */
#ifdef P18_UEP9
      *iv_return = P18_UEP9;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "P16F628", 7)) {
    /*                      A     */
#ifdef P16F628A
      *iv_return = P16F628A;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P16F648", 7)) {
    /*                      A     */
#ifdef P16F648A
      *iv_return = P16F648A;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P16F877", 7)) {
    /*                      A     */
#ifdef P16F877A
      *iv_return = P16F877A;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_LAT", 7)) {
    /*                      A     */
#ifdef P18_LATA
      *iv_return = P18_LATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "P18_LAT", 7)) {
    /*                      B     */
#ifdef P18_LATB
      *iv_return = P18_LATB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "P18_LAT", 7)) {
    /*                      C     */
#ifdef P18_LATC
      *iv_return = P18_LATC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "P18_LAT", 7)) {
    /*                      D     */
#ifdef P18_LATD
      *iv_return = P18_LATD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "P18_LAT", 7)) {
    /*                      E     */
#ifdef P18_LATE
      *iv_return = P18_LATE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEI", 7)) {
    /*                      E     */
#ifdef P18_UEIE
      *iv_return = P18_UEIE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "P18_UCF", 7)) {
    /*                      G     */
#ifdef P18_UCFG
      *iv_return = P18_UCFG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_WRE", 7)) {
    /*                      G     */
#ifdef P18_WREG
      *iv_return = P18_WREG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "P18_TOS", 7)) {
    /*                      H     */
#ifdef P18_TOSH
      *iv_return = P18_TOSH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "P18_TOS", 7)) {
    /*                      L     */
#ifdef P18_TOSL
      *iv_return = P18_TOSL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "P18_RCO", 7)) {
    /*                      N     */
#ifdef P18_RCON
      *iv_return = P18_RCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UCO", 7)) {
    /*                      N     */
#ifdef P18_UCON
      *iv_return = P18_UCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "P18_UIE", 7)) {
    /*                      R     */
#ifdef P18_UIER
      *iv_return = P18_UIER;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "P18_BSR", 7)) {
    /*                      S     */
#ifdef P18_BSRS
      *iv_return = P18_BSRS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "PT_USAR", 7)) {
    /*                      T     */
#ifdef PT_USART
      *iv_return = PT_USART;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "P18_TOS", 7)) {
    /*                      U     */
#ifdef P18_TOSU
      *iv_return = P18_TOSU;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_9 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     P18_CMCON P18_DEBUG P18_EEADR P18_FSR0H P18_FSR0L P18_FSR1H P18_FSR1L
     P18_FSR2H P18_FSR2L P18_INDF0 P18_INDF1 P18_INDF2 P18_PORTA P18_PORTB
     P18_PORTC P18_PORTD P18_PORTE P18_PRODH P18_PRODL P18_RCREG P18_RCSTA
     P18_SPBRG P18_T0CON P18_T1CON P18_T2CON P18_T3CON P18_TMR0H P18_TMR0L
     P18_TMR1H P18_TMR1L P18_TMR3H P18_TMR3L P18_TRISA P18_TRISB P18_TRISC
     P18_TRISD P18_TRISE P18_TXREG P18_TXSTA P18_UADDR P18_UEP10 P18_UEP11
     P18_UEP12 P18_UEP13 P18_UEP14 P18_UEP15 P18_UFRMH P18_UFRML P18_USTAT
     PT_ANALOG PT_ANAREF */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case '0':
    if (memEQ(name, "P18_INDF", 8)) {
    /*                       0     */
#ifdef P18_INDF0
      *iv_return = P18_INDF0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEP1", 8)) {
    /*                       0     */
#ifdef P18_UEP10
      *iv_return = P18_UEP10;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "P18_INDF", 8)) {
    /*                       1     */
#ifdef P18_INDF1
      *iv_return = P18_INDF1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEP1", 8)) {
    /*                       1     */
#ifdef P18_UEP11
      *iv_return = P18_UEP11;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "P18_INDF", 8)) {
    /*                       2     */
#ifdef P18_INDF2
      *iv_return = P18_INDF2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UEP1", 8)) {
    /*                       2     */
#ifdef P18_UEP12
      *iv_return = P18_UEP12;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "P18_UEP1", 8)) {
    /*                       3     */
#ifdef P18_UEP13
      *iv_return = P18_UEP13;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '4':
    if (memEQ(name, "P18_UEP1", 8)) {
    /*                       4     */
#ifdef P18_UEP14
      *iv_return = P18_UEP14;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '5':
    if (memEQ(name, "P18_UEP1", 8)) {
    /*                       5     */
#ifdef P18_UEP15
      *iv_return = P18_UEP15;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "P18_PORT", 8)) {
    /*                       A     */
#ifdef P18_PORTA
      *iv_return = P18_PORTA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_RCST", 8)) {
    /*                       A     */
#ifdef P18_RCSTA
      *iv_return = P18_RCSTA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TRIS", 8)) {
    /*                       A     */
#ifdef P18_TRISA
      *iv_return = P18_TRISA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TXST", 8)) {
    /*                       A     */
#ifdef P18_TXSTA
      *iv_return = P18_TXSTA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'B':
    if (memEQ(name, "P18_PORT", 8)) {
    /*                       B     */
#ifdef P18_PORTB
      *iv_return = P18_PORTB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TRIS", 8)) {
    /*                       B     */
#ifdef P18_TRISB
      *iv_return = P18_TRISB;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'C':
    if (memEQ(name, "P18_PORT", 8)) {
    /*                       C     */
#ifdef P18_PORTC
      *iv_return = P18_PORTC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TRIS", 8)) {
    /*                       C     */
#ifdef P18_TRISC
      *iv_return = P18_TRISC;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "P18_PORT", 8)) {
    /*                       D     */
#ifdef P18_PORTD
      *iv_return = P18_PORTD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TRIS", 8)) {
    /*                       D     */
#ifdef P18_TRISD
      *iv_return = P18_TRISD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "P18_PORT", 8)) {
    /*                       E     */
#ifdef P18_PORTE
      *iv_return = P18_PORTE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TRIS", 8)) {
    /*                       E     */
#ifdef P18_TRISE
      *iv_return = P18_TRISE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "PT_ANARE", 8)) {
    /*                       F     */
#ifdef PT_ANAREF
      *iv_return = PT_ANAREF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "P18_DEBU", 8)) {
    /*                       G     */
#ifdef P18_DEBUG
      *iv_return = P18_DEBUG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_RCRE", 8)) {
    /*                       G     */
#ifdef P18_RCREG
      *iv_return = P18_RCREG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_SPBR", 8)) {
    /*                       G     */
#ifdef P18_SPBRG
      *iv_return = P18_SPBRG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TXRE", 8)) {
    /*                       G     */
#ifdef P18_TXREG
      *iv_return = P18_TXREG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "PT_ANALO", 8)) {
    /*                       G     */
#ifdef PT_ANALOG
      *iv_return = PT_ANALOG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "P18_FSR0", 8)) {
    /*                       H     */
#ifdef P18_FSR0H
      *iv_return = P18_FSR0H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_FSR1", 8)) {
    /*                       H     */
#ifdef P18_FSR1H
      *iv_return = P18_FSR1H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_FSR2", 8)) {
    /*                       H     */
#ifdef P18_FSR2H
      *iv_return = P18_FSR2H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PROD", 8)) {
    /*                       H     */
#ifdef P18_PRODH
      *iv_return = P18_PRODH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR0", 8)) {
    /*                       H     */
#ifdef P18_TMR0H
      *iv_return = P18_TMR0H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR1", 8)) {
    /*                       H     */
#ifdef P18_TMR1H
      *iv_return = P18_TMR1H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR3", 8)) {
    /*                       H     */
#ifdef P18_TMR3H
      *iv_return = P18_TMR3H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UFRM", 8)) {
    /*                       H     */
#ifdef P18_UFRMH
      *iv_return = P18_UFRMH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "P18_FSR0", 8)) {
    /*                       L     */
#ifdef P18_FSR0L
      *iv_return = P18_FSR0L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_FSR1", 8)) {
    /*                       L     */
#ifdef P18_FSR1L
      *iv_return = P18_FSR1L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_FSR2", 8)) {
    /*                       L     */
#ifdef P18_FSR2L
      *iv_return = P18_FSR2L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PROD", 8)) {
    /*                       L     */
#ifdef P18_PRODL
      *iv_return = P18_PRODL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR0", 8)) {
    /*                       L     */
#ifdef P18_TMR0L
      *iv_return = P18_TMR0L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR1", 8)) {
    /*                       L     */
#ifdef P18_TMR1L
      *iv_return = P18_TMR1L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_TMR3", 8)) {
    /*                       L     */
#ifdef P18_TMR3L
      *iv_return = P18_TMR3L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UFRM", 8)) {
    /*                       L     */
#ifdef P18_UFRML
      *iv_return = P18_UFRML;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "P18_CMCO", 8)) {
    /*                       N     */
#ifdef P18_CMCON
      *iv_return = P18_CMCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_T0CO", 8)) {
    /*                       N     */
#ifdef P18_T0CON
      *iv_return = P18_T0CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_T1CO", 8)) {
    /*                       N     */
#ifdef P18_T1CON
      *iv_return = P18_T1CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_T2CO", 8)) {
    /*                       N     */
#ifdef P18_T2CON
      *iv_return = P18_T2CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_T3CO", 8)) {
    /*                       N     */
#ifdef P18_T3CON
      *iv_return = P18_T3CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "P18_EEAD", 8)) {
    /*                       R     */
#ifdef P18_EEADR
      *iv_return = P18_EEADR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_UADD", 8)) {
    /*                       R     */
#ifdef P18_UADDR
      *iv_return = P18_UADDR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "P18_USTA", 8)) {
    /*                       T     */
#ifdef P18_USTAT
      *iv_return = P18_USTAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_10 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     P18_ADCON0 P18_ADCON1 P18_ADCON2 P18_ADRESH P18_ADRESL P18_BDMSR0
     P18_BDMSR1 P18_BDMSR2 P18_CCPR1H P18_CCPR1L P18_CCPR2H P18_CCPR2L
     P18_CVRCON P18_EEADRH P18_EECON1 P18_EECON2 P18_EEDATA P18_INTCON
     P18_LVDCON P18_OSCCON P18_PCLATH P18_PCLATU P18_PLUSW0 P18_PLUSW1
     P18_PLUSW2 P18_SPBRGH P18_SPPCFG P18_SPPCON P18_SPPEPS P18_SSPADD
     P18_SSPBUF P18_STATUS P18_STKPTR P18_TABLAT P18_WDTCON P628_EEADR
     P877_EEADR */
  /* Offset 8 gives the best switch position.  */
  switch (name[8]) {
  case '1':
    if (memEQ(name, "P18_CCPR1H", 10)) {
    /*                       ^        */
#ifdef P18_CCPR1H
      *iv_return = P18_CCPR1H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_CCPR1L", 10)) {
    /*                       ^        */
#ifdef P18_CCPR1L
      *iv_return = P18_CCPR1L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "P18_CCPR2H", 10)) {
    /*                       ^        */
#ifdef P18_CCPR2H
      *iv_return = P18_CCPR2H;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_CCPR2L", 10)) {
    /*                       ^        */
#ifdef P18_CCPR2L
      *iv_return = P18_CCPR2L;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "P18_TABLAT", 10)) {
    /*                       ^        */
#ifdef P18_TABLAT
      *iv_return = P18_TABLAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "P18_SSPADD", 10)) {
    /*                       ^        */
#ifdef P18_SSPADD
      *iv_return = P18_SSPADD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P628_EEADR", 10)) {
    /*                       ^        */
#ifdef P628_EEADR
      *iv_return = P628_EEADR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P877_EEADR", 10)) {
    /*                       ^        */
#ifdef P877_EEADR
      *iv_return = P877_EEADR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'F':
    if (memEQ(name, "P18_SPPCFG", 10)) {
    /*                       ^        */
#ifdef P18_SPPCFG
      *iv_return = P18_SPPCFG;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'G':
    if (memEQ(name, "P18_SPBRGH", 10)) {
    /*                       ^        */
#ifdef P18_SPBRGH
      *iv_return = P18_SPBRGH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "P18_ADCON0", 10)) {
    /*                       ^        */
#ifdef P18_ADCON0
      *iv_return = P18_ADCON0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_ADCON1", 10)) {
    /*                       ^        */
#ifdef P18_ADCON1
      *iv_return = P18_ADCON1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_ADCON2", 10)) {
    /*                       ^        */
#ifdef P18_ADCON2
      *iv_return = P18_ADCON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_EECON1", 10)) {
    /*                       ^        */
#ifdef P18_EECON1
      *iv_return = P18_EECON1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_EECON2", 10)) {
    /*                       ^        */
#ifdef P18_EECON2
      *iv_return = P18_EECON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'O':
    if (memEQ(name, "P18_CVRCON", 10)) {
    /*                       ^        */
#ifdef P18_CVRCON
      *iv_return = P18_CVRCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_INTCON", 10)) {
    /*                       ^        */
#ifdef P18_INTCON
      *iv_return = P18_INTCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_LVDCON", 10)) {
    /*                       ^        */
#ifdef P18_LVDCON
      *iv_return = P18_LVDCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_OSCCON", 10)) {
    /*                       ^        */
#ifdef P18_OSCCON
      *iv_return = P18_OSCCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_SPPCON", 10)) {
    /*                       ^        */
#ifdef P18_SPPCON
      *iv_return = P18_SPPCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_WDTCON", 10)) {
    /*                       ^        */
#ifdef P18_WDTCON
      *iv_return = P18_WDTCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'P':
    if (memEQ(name, "P18_SPPEPS", 10)) {
    /*                       ^        */
#ifdef P18_SPPEPS
      *iv_return = P18_SPPEPS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'R':
    if (memEQ(name, "P18_BDMSR0", 10)) {
    /*                       ^        */
#ifdef P18_BDMSR0
      *iv_return = P18_BDMSR0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_BDMSR1", 10)) {
    /*                       ^        */
#ifdef P18_BDMSR1
      *iv_return = P18_BDMSR1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_BDMSR2", 10)) {
    /*                       ^        */
#ifdef P18_BDMSR2
      *iv_return = P18_BDMSR2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_EEADRH", 10)) {
    /*                       ^        */
#ifdef P18_EEADRH
      *iv_return = P18_EEADRH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "P18_ADRESH", 10)) {
    /*                       ^        */
#ifdef P18_ADRESH
      *iv_return = P18_ADRESH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_ADRESL", 10)) {
    /*                       ^        */
#ifdef P18_ADRESL
      *iv_return = P18_ADRESL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "P18_EEDATA", 10)) {
    /*                       ^        */
#ifdef P18_EEDATA
      *iv_return = P18_EEDATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PCLATH", 10)) {
    /*                       ^        */
#ifdef P18_PCLATH
      *iv_return = P18_PCLATH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PCLATU", 10)) {
    /*                       ^        */
#ifdef P18_PCLATU
      *iv_return = P18_PCLATU;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_STKPTR", 10)) {
    /*                       ^        */
#ifdef P18_STKPTR
      *iv_return = P18_STKPTR;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "P18_SSPBUF", 10)) {
    /*                       ^        */
#ifdef P18_SSPBUF
      *iv_return = P18_SSPBUF;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_STATUS", 10)) {
    /*                       ^        */
#ifdef P18_STATUS
      *iv_return = P18_STATUS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'W':
    if (memEQ(name, "P18_PLUSW0", 10)) {
    /*                       ^        */
#ifdef P18_PLUSW0
      *iv_return = P18_PLUSW0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PLUSW1", 10)) {
    /*                       ^        */
#ifdef P18_PLUSW1
      *iv_return = P18_PLUSW1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PLUSW2", 10)) {
    /*                       ^        */
#ifdef P18_PLUSW2
      *iv_return = P18_PLUSW2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_11 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     P16F648AICD P18_BAUDCON P18_CCP1CON P18_CCP2CON P18_ECCP1AS P18_INTCON2
     P18_INTCON3 P18_OSCTUNE P18_PREINC0 P18_PREINC1 P18_PREINC2 P18_PWM1CON
     P18_SPPDATA P18_SSPCON1 P18_SSPCON2 P18_SSPSTAT P18_STATUSS P18_TBLPTRH
     P18_TBLPTRL P18_TBLPTRU P628_EECON1 P628_EECON2 P628_EEDATA P877_EEADRH
     P877_EECON1 P877_EECON2 P877_EEDATA */
  /* Offset 10 gives the best switch position.  */
  switch (name[10]) {
  case '0':
    if (memEQ(name, "P18_PREINC", 10)) {
    /*                         0      */
#ifdef P18_PREINC0
      *iv_return = P18_PREINC0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "P18_PREINC", 10)) {
    /*                         1      */
#ifdef P18_PREINC1
      *iv_return = P18_PREINC1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_SSPCON", 10)) {
    /*                         1      */
#ifdef P18_SSPCON1
      *iv_return = P18_SSPCON1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P628_EECON", 10)) {
    /*                         1      */
#ifdef P628_EECON1
      *iv_return = P628_EECON1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P877_EECON", 10)) {
    /*                         1      */
#ifdef P877_EECON1
      *iv_return = P877_EECON1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "P18_INTCON", 10)) {
    /*                         2      */
#ifdef P18_INTCON2
      *iv_return = P18_INTCON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PREINC", 10)) {
    /*                         2      */
#ifdef P18_PREINC2
      *iv_return = P18_PREINC2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_SSPCON", 10)) {
    /*                         2      */
#ifdef P18_SSPCON2
      *iv_return = P18_SSPCON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P628_EECON", 10)) {
    /*                         2      */
#ifdef P628_EECON2
      *iv_return = P628_EECON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P877_EECON", 10)) {
    /*                         2      */
#ifdef P877_EECON2
      *iv_return = P877_EECON2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '3':
    if (memEQ(name, "P18_INTCON", 10)) {
    /*                         3      */
#ifdef P18_INTCON3
      *iv_return = P18_INTCON3;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'A':
    if (memEQ(name, "P18_SPPDAT", 10)) {
    /*                         A      */
#ifdef P18_SPPDATA
      *iv_return = P18_SPPDATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P628_EEDAT", 10)) {
    /*                         A      */
#ifdef P628_EEDATA
      *iv_return = P628_EEDATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P877_EEDAT", 10)) {
    /*                         A      */
#ifdef P877_EEDATA
      *iv_return = P877_EEDATA;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'D':
    if (memEQ(name, "P16F648AIC", 10)) {
    /*                         D      */
#ifdef P16F648AICD
      *iv_return = P16F648AICD;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'E':
    if (memEQ(name, "P18_OSCTUN", 10)) {
    /*                         E      */
#ifdef P18_OSCTUNE
      *iv_return = P18_OSCTUNE;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "P18_TBLPTR", 10)) {
    /*                         H      */
#ifdef P18_TBLPTRH
      *iv_return = P18_TBLPTRH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P877_EEADR", 10)) {
    /*                         H      */
#ifdef P877_EEADRH
      *iv_return = P877_EEADRH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'L':
    if (memEQ(name, "P18_TBLPTR", 10)) {
    /*                         L      */
#ifdef P18_TBLPTRL
      *iv_return = P18_TBLPTRL;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'N':
    if (memEQ(name, "P18_BAUDCO", 10)) {
    /*                         N      */
#ifdef P18_BAUDCON
      *iv_return = P18_BAUDCON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_CCP1CO", 10)) {
    /*                         N      */
#ifdef P18_CCP1CON
      *iv_return = P18_CCP1CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_CCP2CO", 10)) {
    /*                         N      */
#ifdef P18_CCP2CON
      *iv_return = P18_CCP2CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_PWM1CO", 10)) {
    /*                         N      */
#ifdef P18_PWM1CON
      *iv_return = P18_PWM1CON;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'S':
    if (memEQ(name, "P18_ECCP1A", 10)) {
    /*                         S      */
#ifdef P18_ECCP1AS
      *iv_return = P18_ECCP1AS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_STATUS", 10)) {
    /*                         S      */
#ifdef P18_STATUSS
      *iv_return = P18_STATUSS;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'T':
    if (memEQ(name, "P18_SSPSTA", 10)) {
    /*                         T      */
#ifdef P18_SSPSTAT
      *iv_return = P18_SSPSTAT;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'U':
    if (memEQ(name, "P18_TBLPTR", 10)) {
    /*                         U      */
#ifdef P18_TBLPTRU
      *iv_return = P18_TBLPTRU;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant_12 (pTHX_ const char *name, IV *iv_return) {
  /* When generated this function returned values for the list of names given
     here.  However, subsequent manual editing may have added or removed some.
     P18_POSTDEC0 P18_POSTDEC1 P18_POSTDEC2 P18_POSTINC0 P18_POSTINC1
     P18_POSTINC2 P877_EEDATAH */
  /* Offset 11 gives the best switch position.  */
  switch (name[11]) {
  case '0':
    if (memEQ(name, "P18_POSTDEC", 11)) {
    /*                          0      */
#ifdef P18_POSTDEC0
      *iv_return = P18_POSTDEC0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_POSTINC", 11)) {
    /*                          0      */
#ifdef P18_POSTINC0
      *iv_return = P18_POSTINC0;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '1':
    if (memEQ(name, "P18_POSTDEC", 11)) {
    /*                          1      */
#ifdef P18_POSTDEC1
      *iv_return = P18_POSTDEC1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_POSTINC", 11)) {
    /*                          1      */
#ifdef P18_POSTINC1
      *iv_return = P18_POSTINC1;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case '2':
    if (memEQ(name, "P18_POSTDEC", 11)) {
    /*                          2      */
#ifdef P18_POSTDEC2
      *iv_return = P18_POSTDEC2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    if (memEQ(name, "P18_POSTINC", 11)) {
    /*                          2      */
#ifdef P18_POSTINC2
      *iv_return = P18_POSTINC2;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  case 'H':
    if (memEQ(name, "P877_EEDATA", 11)) {
    /*                          H      */
#ifdef P877_EEDATAH
      *iv_return = P877_EEDATAH;
      return PERL_constant_ISIV;
#else
      return PERL_constant_NOTDEF;
#endif
    }
    break;
  }
  return PERL_constant_NOTFOUND;
}

static int
constant (pTHX_ const char *name, STRLEN len, IV *iv_return) {
  /* Initially switch on the length of the name.  */
  /* When generated this function returned values for the list of names given
     in this section of perl code.  Rather than manually editing these functions
     to add or remove constants, which would result in this comment and section
     of code becoming inaccurate, we recommend that you edit this section of
     code, and use it to regenerate a new set of constant functions which you
     then use to replace the originals.

     Regenerate these constant functions by feeding this entire source file to
     perl -x

#!C:\Perl\bin\perl.exe -w
use ExtUtils::Constant qw (constant_types C_constant XS_constant);

my $types = {map {($_, 1)} qw(IV)};
my @names = (qw(ADCON0 ADCON1 ADCON2 ADRESH ADRESL BIGBUG BUFFMAX CCP1CON
	       CCP2CON CCP3CON CCPR1H CCPR1L CCPR2H CCPR2L CCPR3H CCPR3L CMCON
	       FSR ICKBUG INDF INTCON OPTION P16 P16F628 P16F628A P16F648A
	       P16F648AICD P16F777 P16F877 P16F877A P18 P18F452 P18F4550
	       P18F4620 P18_ADCON0 P18_ADCON1 P18_ADCON2 P18_ADRESH P18_ADRESL
	       P18_BAUDCON P18_BDMSR0 P18_BDMSR1 P18_BDMSR2 P18_BSR P18_BSRS
	       P18_CCP1CON P18_CCP2CON P18_CCPR1H P18_CCPR1L P18_CCPR2H
	       P18_CCPR2L P18_CMCON P18_CVRCON P18_DEBUG P18_ECCP1AS P18_EEADR
	       P18_EEADRH P18_EECON1 P18_EECON2 P18_EEDATA P18_FSR0H P18_FSR0L
	       P18_FSR1H P18_FSR1L P18_FSR2H P18_FSR2L P18_INDF0 P18_INDF1
	       P18_INDF2 P18_INTCON P18_INTCON2 P18_INTCON3 P18_IPR1 P18_IPR2
	       P18_LATA P18_LATB P18_LATC P18_LATD P18_LATE P18_LVDCON
	       P18_OSCCON P18_OSCTUNE P18_PCL P18_PCLATH P18_PCLATU P18_PIE1
	       P18_PIE2 P18_PIR1 P18_PIR2 P18_PLUSW0 P18_PLUSW1 P18_PLUSW2
	       P18_PORTA P18_PORTB P18_PORTC P18_PORTD P18_PORTE P18_POSTDEC0
	       P18_POSTDEC1 P18_POSTDEC2 P18_POSTINC0 P18_POSTINC1 P18_POSTINC2
	       P18_PR2 P18_PREINC0 P18_PREINC1 P18_PREINC2 P18_PRODH P18_PRODL
	       P18_PWM1CON P18_RCON P18_RCREG P18_RCSTA P18_SPBRG P18_SPBRGH
	       P18_SPPCFG P18_SPPCON P18_SPPDATA P18_SPPEPS P18_SSPADD
	       P18_SSPBUF P18_SSPCON1 P18_SSPCON2 P18_SSPSTAT P18_STATUS
	       P18_STATUSS P18_STKPTR P18_T0CON P18_T1CON P18_T2CON P18_T3CON
	       P18_TABLAT P18_TBLPTRH P18_TBLPTRL P18_TBLPTRU P18_TMR0H
	       P18_TMR0L P18_TMR1H P18_TMR1L P18_TMR2 P18_TMR3H P18_TMR3L
	       P18_TOSH P18_TOSL P18_TOSU P18_TRISA P18_TRISB P18_TRISC
	       P18_TRISD P18_TRISE P18_TXREG P18_TXSTA P18_UADDR P18_UCFG
	       P18_UCON P18_UEIE P18_UEP0 P18_UEP1 P18_UEP10 P18_UEP11
	       P18_UEP12 P18_UEP13 P18_UEP14 P18_UEP15 P18_UEP2 P18_UEP3
	       P18_UEP4 P18_UEP5 P18_UEP6 P18_UEP7 P18_UEP8 P18_UEP9 P18_UFRMH
	       P18_UFRML P18_UIE P18_UIER P18_UIR P18_USTAT P18_WDTCON P18_WREG
	       P18_WS P628_EEADR P628_EECON1 P628_EECON2 P628_EEDATA P877_EEADR
	       P877_EEADRH P877_EECON1 P877_EECON2 P877_EEDATA P877_EEDATAH PCL
	       PCLATH PD_IN PD_OUT PIE1 PIE2 PIR1 PIR2 PORTA PORTB PORTC PORTD
	       PORTE PR2 PT_ANALOG PT_ANAREF PT_CMOS PT_NC PT_TTL PT_USART
	       RCREG RCSTA SPBRG SSPADD SSPBUF SSPCON SSPCON2 SSPSTAT STATUS
	       T1CON T2CON TMR0 TMR1H TMR1L TMR2 TRISA TRISB TRISC TRISD TRISE
	       TXREG TXSTA));

print constant_types(), "\n"; # macro defs
foreach (C_constant ("PICSIM::LIB", 'constant', 'IV', $types, undef, 3, @names) ) {
    print $_, "\n"; # C constant subs
}
print "\n#### XS Section:\n";
print XS_constant ("PICSIM::LIB", $types);
__END__
   */

  switch (len) {
  case 3:
    return constant_3 (aTHX_ name, iv_return);
    break;
  case 4:
    return constant_4 (aTHX_ name, iv_return);
    break;
  case 5:
    return constant_5 (aTHX_ name, iv_return);
    break;
  case 6:
    return constant_6 (aTHX_ name, iv_return);
    break;
  case 7:
    return constant_7 (aTHX_ name, iv_return);
    break;
  case 8:
    return constant_8 (aTHX_ name, iv_return);
    break;
  case 9:
    return constant_9 (aTHX_ name, iv_return);
    break;
  case 10:
    return constant_10 (aTHX_ name, iv_return);
    break;
  case 11:
    return constant_11 (aTHX_ name, iv_return);
    break;
  case 12:
    return constant_12 (aTHX_ name, iv_return);
    break;
  }
  return PERL_constant_NOTFOUND;
}

