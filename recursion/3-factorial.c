#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to get the factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	/* If n is negative, return -1 */
	if (n < 0)
		return (-1);

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* Multiply n by the factorial of n - 1 */
	return (n * factorial(n - 1));
}
