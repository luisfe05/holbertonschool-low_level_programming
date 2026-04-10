#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	/* print first number without comma */
	printf("%d", n);
	/* if n is less than 98, count up */
	while (n < 98)
	{
		n++;
		/* print comma, space, and next number */
		printf(", %d", n);
	}
	/* if n is greater than 98, count down */
	while (n > 98)
	{
		n--;
		/* print comma, space, and next number */
		printf(", %d", n);
	}
	printf("\n");
}
