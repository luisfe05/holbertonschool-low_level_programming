#include "main.h"

/**
 * _strncpy - copies a string using at most n bytes
 * @dest: the destination string
 * @src: the source string to copy
 * @n: the maximum number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	/* Copy at most n bytes from src into dest */
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	/* Fill the rest with null bytes if src is shorter than n */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
