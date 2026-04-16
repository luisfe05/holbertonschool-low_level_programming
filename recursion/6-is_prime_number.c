#include "main.h"

/**
 * check_prime - helper function to check if n is divisible by i
 * @n: the number to check
 * @i: the current divisor being tested
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	/* If i * i is greater than n, no divisor found, n is prime */
	if (i * i > n)
		return (1);

	/* If n is divisible by i, it is not prime */
	if (n % i == 0)
		return (0);

	/* Try the next divisor */
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, 0 if not
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* Numbers less than or equal to 1 are not prime */
	if (n <= 1)
		return (0);

	/* Start checking divisors from 2 */
	return (check_prime(n, 2));
}
