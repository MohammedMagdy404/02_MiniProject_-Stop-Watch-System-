/*
 * PIN_CONF.c
 *
 *  Created on: Sep 15, 2023
 *      Author: mm929
 */

#include "header.h"

void pinConf(void){

	// Configure first 4-pins of PORTC as Output pins
	// AND initialize the O/p Values with 0
	DDRC |= 0x0F;
	PORTC &= 0xF0;

	// Configure first 6-pins of PORTA as Output pins for 7-SEG Multiplexing
	// AND initialize the O/p Values with 0
	DDRA |= 0x3F;
	PORTA &= 0xC0;

	// Configure (PD0) PIN as Output to Buzzer
	// BUZZER runs every 25min applying POMODORO technique
	DDRD |= (1<<PD0);
	PORTD &= ~(1<<PD0);


}


