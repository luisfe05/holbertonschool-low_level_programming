#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: the integer to evaluate.
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	if (n < 0) /* if n is negative, return negative */
		return (-n);
	return (n); /* if n is zero or positive, return n */
}
