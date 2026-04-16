#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base number
 * @y: the exponent
 *
 * Return: x to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	/* If y is negative, return -1 */
	if (y < 0)
		return (-1);

	/* Base case: anything to the power of 0 is 1 */
	if (y == 0)
		return (1);

	/* Multiply x by x to the power of y - 1 */
	return (x * _pow_recursion(x, y - 1));
}
