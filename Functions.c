#include <stdio.h>
#include <stdbool.h>
#include <util/delay.h>
#include <avr/io.h>
#include "header.h"

void init_ports()
{
	DDRB = (1 << LED1) | (1 << LED2) | (1 << LED3);
	PORTB = (1 << BUTTON1) | (1 << BUTTON2);
}

bool button1_is_pressed()
{
	if ((PINB & (1 << BUTTON1)) != 0) return true;
	else return false;
}
bool button2_is_pressed()
{
	if ((PINB & (1 << BUTTON2)) != 0) return true;
	else return false;
}


void led1_on() { PORTB |= (1 << LED1); }
void led1_off() { PORTB &= ~(1 << LED1); }

void led2_on() { PORTB |= (1 << LED2); }
void led2_off() { PORTB &= ~(1 << LED2); }

void led3_on() { PORTB |= (1 << LED3); }
void led3_off() { PORTB &= ~(1 << LED3); }
