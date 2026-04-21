#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 *
 * Return: sum of all parameters, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	/* Return 0 if n is 0 */
	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;
	i = 0;

	/* Add each argument to the sum */
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);
}
