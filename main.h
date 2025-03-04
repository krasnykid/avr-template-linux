#include <inttypes.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <stdlib.h>


#define PORT(x) XPORT(x)
#define XPORT(x) (PORT##x)

#define PIN(x) XPIN(x)
#define XPIN(x) (PIN##x)

#define DDR(x) XDDR(x)
#define XDDR(x) (DDR##x)

#define TRUE 1
#define FALSE 0

#ifndef _MAIN_H_
#define _MAIN_H_

#define DELAY50NS()\
{asm volatile(\
	"rjmp exit%=\n\t"\
	"exit%=:\n\t"\
::);}



void init(void);

#endif