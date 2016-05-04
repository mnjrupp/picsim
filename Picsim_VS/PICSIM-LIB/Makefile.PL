use 5.020002;
use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    NAME              => 'PICSIM::LIB',
    VERSION_FROM      => 'lib/PICSIM/LIB.pm', # finds $VERSION, requires EU::MM from perl >= 5.5
    PREREQ_PM         => {}, # e.g., Module::Name => 1.1
    ABSTRACT_FROM     => 'lib/PICSIM/LIB.pm', # retrieve abstract from module
    AUTHOR            => 'A. U. Thor <a.u.thor@a.galaxy.far.far.away>',
    #LICENSE           => 'perl',
    #Value must be from legacy list of licenses here
    #http://search.cpan.org/perldoc?Module%3A%3ABuild%3A%3AAPI
    LIBS              => [''], # e.g., '-lm'
    DEFINE            => '', # e.g., '-DHAVE_SOMETHING'
    INC               => '-I.', # e.g., '-I. -I/usr/include/other'
	# Un-comment this if you add C files to link with later:
    # OBJECT            => '$(O_FILES)', # link all the C files too
);
if  (eval {require ExtUtils::Constant; 1}) {
  # If you edit these definitions to change the constants used by this module,
  # you will need to use the generated const-c.inc and const-xs.inc
  # files to replace their "fallback" counterparts before distributing your
  # changes.
  my @names = (qw(ADCON0 ADCON1 ADCON2 ADRESH ADRESL BIGBUG BUFFMAX CCP1CON
		 CCP2CON CCP3CON CCPR1H CCPR1L CCPR2H CCPR2L CCPR3H CCPR3L
		 CMCON FSR ICKBUG INDF INTCON OPTION P16 P16F628 P16F628A
		 P16F648A P16F648AICD P16F777 P16F877 P16F877A P18 P18F452
		 P18F4550 P18F4620 P18_ADCON0 P18_ADCON1 P18_ADCON2 P18_ADRESH
		 P18_ADRESL P18_BAUDCON P18_BDMSR0 P18_BDMSR1 P18_BDMSR2
		 P18_BSR P18_BSRS P18_CCP1CON P18_CCP2CON P18_CCPR1H P18_CCPR1L
		 P18_CCPR2H P18_CCPR2L P18_CMCON P18_CVRCON P18_DEBUG
		 P18_ECCP1AS P18_EEADR P18_EEADRH P18_EECON1 P18_EECON2
		 P18_EEDATA P18_FSR0H P18_FSR0L P18_FSR1H P18_FSR1L P18_FSR2H
		 P18_FSR2L P18_INDF0 P18_INDF1 P18_INDF2 P18_INTCON P18_INTCON2
		 P18_INTCON3 P18_IPR1 P18_IPR2 P18_LATA P18_LATB P18_LATC
		 P18_LATD P18_LATE P18_LVDCON P18_OSCCON P18_OSCTUNE P18_PCL
		 P18_PCLATH P18_PCLATU P18_PIE1 P18_PIE2 P18_PIR1 P18_PIR2
		 P18_PLUSW0 P18_PLUSW1 P18_PLUSW2 P18_PORTA P18_PORTB P18_PORTC
		 P18_PORTD P18_PORTE P18_POSTDEC0 P18_POSTDEC1 P18_POSTDEC2
		 P18_POSTINC0 P18_POSTINC1 P18_POSTINC2 P18_PR2 P18_PREINC0
		 P18_PREINC1 P18_PREINC2 P18_PRODH P18_PRODL P18_PWM1CON
		 P18_RCON P18_RCREG P18_RCSTA P18_SPBRG P18_SPBRGH P18_SPPCFG
		 P18_SPPCON P18_SPPDATA P18_SPPEPS P18_SSPADD P18_SSPBUF
		 P18_SSPCON1 P18_SSPCON2 P18_SSPSTAT P18_STATUS P18_STATUSS
		 P18_STKPTR P18_T0CON P18_T1CON P18_T2CON P18_T3CON P18_TABLAT
		 P18_TBLPTRH P18_TBLPTRL P18_TBLPTRU P18_TMR0H P18_TMR0L
		 P18_TMR1H P18_TMR1L P18_TMR2 P18_TMR3H P18_TMR3L P18_TOSH
		 P18_TOSL P18_TOSU P18_TRISA P18_TRISB P18_TRISC P18_TRISD
		 P18_TRISE P18_TXREG P18_TXSTA P18_UADDR P18_UCFG P18_UCON
		 P18_UEIE P18_UEP0 P18_UEP1 P18_UEP10 P18_UEP11 P18_UEP12
		 P18_UEP13 P18_UEP14 P18_UEP15 P18_UEP2 P18_UEP3 P18_UEP4
		 P18_UEP5 P18_UEP6 P18_UEP7 P18_UEP8 P18_UEP9 P18_UFRMH
		 P18_UFRML P18_UIE P18_UIER P18_UIR P18_USTAT P18_WDTCON
		 P18_WREG P18_WS P628_EEADR P628_EECON1 P628_EECON2 P628_EEDATA
		 P877_EEADR P877_EEADRH P877_EECON1 P877_EECON2 P877_EEDATA
		 P877_EEDATAH PCL PCLATH PD_IN PD_OUT PIE1 PIE2 PIR1 PIR2 PORTA
		 PORTB PORTC PORTD PORTE PR2 PT_ANALOG PT_ANAREF PT_CMOS PT_NC
		 PT_TTL PT_USART RCREG RCSTA SPBRG SSPADD SSPBUF SSPCON SSPCON2
		 SSPSTAT STATUS T1CON T2CON TMR0 TMR1H TMR1L TMR2 TRISA TRISB
		 TRISC TRISD TRISE TXREG TXSTA));
  ExtUtils::Constant::WriteConstants(
                                     NAME         => 'PICSIM::LIB',
                                     NAMES        => \@names,
                                     DEFAULT_TYPE => 'IV',
                                     C_FILE       => 'const-c.inc',
                                     XS_FILE      => 'const-xs.inc',
                                  );

}
else {
  use File::Copy;
  use File::Spec;
  foreach my $file ('const-c.inc', 'const-xs.inc') {
    my $fallback = File::Spec->catfile('fallback', $file);
    copy ($fallback, $file) or die "Can't copy $fallback to $file: $!";
  }
}
