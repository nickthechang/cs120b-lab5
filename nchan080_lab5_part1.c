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
	temp = (~PINA & 0x0F);
	if(temp == 0x0D || temp == 0x0E || temp == 0x0F) {
		PORTC = 0x3F;
	}
	else if (temp == 0x0C || temp == 0x0B || temp == 0x0A) {
		PORTC = 0x3E;
	}
	else if(temp == 0x09 || temp == 0x08 || temp == 0x07) {
		PORTC = 0x3C;
	}
	else if(temp == 0x06 || temp == 0x05) {
		PORTC = 0x38;
	}
	else if(temp == 0x04 || temp == 0x03 ) {
		PORTC = 0x70;
	}
	else if(temp == 0x02 || temp == 0x01) {
		PORTC = 0x60;
	}
	else if(temp == 0x00)
		//PORTC = 0x40;
    }
    return 1;
}
