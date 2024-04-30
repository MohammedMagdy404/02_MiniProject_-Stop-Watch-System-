/*
 * header.h
 *
 *  Created on: Sep 15, 2023
 *      Author: mm929
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


void pinConf(void);



#define ocr_num 1
void Display_7seg(int val);
void incHour(void);
void incMin(void);
void incSec(void);




void INT0_init(void);



void pomodoroBuzzer(void);
