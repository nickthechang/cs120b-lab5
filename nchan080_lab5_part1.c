/*	Author: lab
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char A0 = 0x00;
	unsigned char A1 = 0x00;
	unsigned char A2 = 0x00;
	unsigned char A3 = 0x00;
    /* Insert your solution below */
	//unsigned char temp = 0x00;
    while (1) {
	//temp = PINA & 0x0F;
	A0 = ~PINA & 0x01;
	A1 = ~PINA & 0x02;
	A2 = ~PINA & 0x03;
	A3 = ~PINA & 0x04;
	    
	if((A3 && A2 && A1 && A0) || 
	   (A3 && A2 && A1) || (A3 && A2 && A0)) {
		PORTC = 0x3F;
	}
	else if ((A3 && A2) || (A3 && A1 && A0) || (A3 && A1)) {
		PORTC = 0x3E;
	}
	else if((A3 && A0) || (A3) || (A2 && A1 && A0)) {
		PORTC = 0x3C;
	}
	else if((A2 && A1) || (A2 && A0) {
		PORTC = 0x38;
	}
	else if((A2) || (A1&&A0) ) {
		PORTC = 0x70;
	}
	else if((A1) || (A0) {
		PORTC = 0x60;
	}
	else
		PORTC = 0x40;
    }
    return 1;
}
