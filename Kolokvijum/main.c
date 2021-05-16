/**
 * @file	main.c
 * @brief	Glavni program zadatka
 * @author	Marko Milovic
 * @date	16-05-2021
 * @version 1.0
 */



#include <stdint.h>
#include <stdlib.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include "usart.h"
#include "../pin/pin.h"
#include "../timer0/timer0.h"
#include "arrays.h"



int main(){

usartInit(9600);
char tmp[60];
int8_t prvi_elemnt;

	while(1){

		usartPutString("Unesite prvi element");
		while(usartAvailable()==0);

		usartGetString(prvi_elemnt);





	}






	return 0;
}













