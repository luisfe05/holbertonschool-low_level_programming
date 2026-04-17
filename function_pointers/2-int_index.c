#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a function pointer
 * @array: the array of integers
 * @size: the number of elements in the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of first match, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* Return -1 if size <= 0, array is NULL, or cmp is NULL */
	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);

	i = 0;

	/* Walk through the array calling cmp on each element */
	while (i < size)
	{
		/* If cmp returns non-zero we found a match */
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	/* No match found */
	return (-1);
}
