#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: pointer to allocated memory, exits with 98 if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	/* Allocate memory */
	ptr = malloc(b);

	/* If malloc fails, exit with status 98 */
	if (ptr == 0)
		exit(98);

	return (ptr);
}
