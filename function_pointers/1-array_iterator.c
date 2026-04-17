#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: pointer to the function to call on each element
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	/* Call action on each element of the array */
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
