/**
 * @file	arrays.h
 * @brief	Funkcije za arrays
 * @author	Marko Milovic
 * @date	16-05-2021
 */
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

#ifndef ARRAYS_H_
#define ARRAYS_H_

///Makro za niz ako je niz geometrijski
#define TACNO 1

///Makro za niz ako niz nije geometrijski
#define NETACNO 1

///Makro za definisanje moda ITERATIVE
#define MODE_ITERATIVE 1

///Makro za definisanje moda FORMULA
#define MODE_FORMULA 0

/**
 * Element - deklarisemo funkciju koja izra�unava vrednost n-tog �lana geometrijskog niza
opisanog pomo�u po�etne vrednosti niza i odnosa susednih elemenata
 *@param first_element - prvi element niza
 *@param ratio - ratio parametar
 * @return vrednost n-tog �lana geometrijskog niza
 */

int16_t Element(int16_t first_element, int16_t ratio, int16_t n);

/**
 * Sum - Deklarisemo Funkciju Sum koja izra�unava sumu prvih n �lanova geometrijskog niza
opisanog pomo�u po�etne vrednosti niza i odnosa
 *@param first_element - prvi element niza
 *@param ratio - ratio parametar
 *@param n - koliko clanova zelimo da saberemo
 *@param mode - koji mod zelimo
 * @return vrednost sume n �lanova geometrijskog niza
 */
void Sum(int16_t first_element, int16_t ratio, int16_t n, int8_t
mode);





#endif /* ARRAYS_H_ */
