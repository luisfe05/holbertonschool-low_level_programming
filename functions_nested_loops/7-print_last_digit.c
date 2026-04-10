#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	/* modulo divides n by 10 and returns the remainder */
	last = n % 10;
	/* if n is negative, the remainder will also be negative */
	if (last < 0)
		/* convert to positive */
		last = -last;
	_putchar('0' + last);
	return (last);
}
