#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the matrix
 * @size: the size of the matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;

	/* Add up the two diagonals */
	while (i < size)
	{
		/* Left to right diagonal: position i * size + i */
		sum1 = sum1 + a[i * size + i];

		/* Right to left diagonal: position i * size + (size - 1 - i) */
		sum2 = sum2 + a[i * size + (size - 1 - i)];

		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}
