#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last; /* variable that stores the last digit */

	last = n % 10; /* modulo divides n by 10 and returns the remainder */
	if (last < 0) /* if n is negative, the remainder will also be negative */
		last = -last; /* convert to positive */
	_putchar('0' + last);
	return (last); /* return the numeric value of the last digit */
}