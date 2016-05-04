#define PERL_NO_GET_CONTEXT
#include "EXTERN.h"
#include "perl.h"
#include "XSUB.h"

#include "ppport.h"

#include <picsim.h>
#include <periferic18.h>
#include <periferic.h>
#include <p18fxxx_defs.h>
#include <p16fxxx_defs.h>

#include "const-c.inc"

MODULE = PICSIM::LIB		PACKAGE = PICSIM::LIB		

INCLUDE: const-xs.inc
