#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the array, or 0 on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	/* Return 0 if min is greater than max */
	if (min > max)
		return (0);

	/* Allocate memory for all values from min to max */
	array = malloc(sizeof(int) * (max - min + 1));

	/* Return 0 if malloc fails */
	if (array == 0)
		return (0);

	/* Fill array counting up from min to max */
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}

	return (array);
}
