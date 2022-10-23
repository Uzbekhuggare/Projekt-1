#ifndef HEADER_H_
#define HEADER_H_

#define F_CPU 16000000UL

#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>

//portarna för pin 6 och 7 ville inte fungera så jag använde 8-10 istället och det fungerade.
#define LED1 PORTB0
#define LED2 PORTB1
#define LED3 PORTB2

#define BUTTON1 4
#define BUTTON2 5


void init_ports();

bool button1_is_pressed();
bool button2_is_pressed();

void led1_on();
void led1_off();

void led2_on();
void led2_off();

void led3_on();
void led3_off();

#endif
