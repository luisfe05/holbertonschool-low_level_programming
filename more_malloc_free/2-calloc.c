#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: the number of elements
 * @size: the size of each element in bytes
 *
 * Return: pointer to allocated memory, or 0 on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	/* Return 0 if nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (0);

	/* Allocate memory for nmemb elements of size bytes each */
	ptr = malloc(nmemb * size);

	/* Return 0 if malloc fails */
	if (ptr == 0)
		return (0);

	/* Set every byte to zero */
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
