#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* Return 0 if size is 0 */
	if (size == 0)
		return (0);

	/* Allocate memory for the array */
	array = malloc(sizeof(char) * size);

	/* Return 0 if malloc fails */
	if (array == 0)
		return (0);

	/* Fill the array with the character c */
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
