#include "main.h"

/**
 * print_sign - checks the sign of a number.
 * @n: the number to be checked.
 *
 * Return: 1 if n is greater than zero, 0 if n is zero,
 * and -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0) /* check if n is greater than zero, print + and return 1 */
	{
		_putchar('+');
		return (1);
	}
	if (n == 0) /* check if n is zero, print 0 and return 0 */
	{
		_putchar('0');
		return (0);
	}
	_putchar('-'); /* if n is less than zero, print - and return -1 */
	return (-1);
}
