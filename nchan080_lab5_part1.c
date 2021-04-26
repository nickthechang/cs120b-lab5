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
	
    /* Insert your solution below */
	unsigned char temp = 0x00;
    while (1) {
	temp = PINA & 0x0F;
	if(temp == 15 || temp == 14 || temp == 13) {
		PORTC = 0x3F;
	}
	else if (temp == 12 || temp == 11 || temp == 10) {
		PORTC = 0x3E;
	}
	else if(temp == 9 || temp == 8 || temp == 7) {
		PORTC = 0x3C;
	}
	else if(temp == 6 || temp == 5) {
		PORTC = 0x38;
	}
	else if(temp == 4 || temp == 3 ) {
		PORTC = 0x70;
	}
	else if(temp == 2 || temp == 1) {
		PORTC = 0x60;
	}
	else if(temp == 0)
		PORTC = 0x40;
    }
    return 1;
}
