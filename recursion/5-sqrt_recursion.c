#include "main.h"

/**
 * find_sqrt - helper function to find the square root recursively
 * @n: the number to find the square root of
 * @i: the current number being tested
 *
 * Return: square root of n, or -1 if not found
 */
int find_sqrt(int n, int i)
{
	/* If i * i is greater than n, no natural square root exists */
	if (i * i > n)
		return (-1);

	/* If i * i equals n, we found the square root */
	if (i * i == n)
		return (i);

	/* Try the next number */
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	/* If n is negative, return -1 */
	if (n < 0)
		return (-1);

	/* Start testing from 1 */
	return (find_sqrt(n, 1));
}
