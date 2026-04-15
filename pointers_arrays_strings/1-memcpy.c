#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	/* Copy n bytes from src into dest */
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
