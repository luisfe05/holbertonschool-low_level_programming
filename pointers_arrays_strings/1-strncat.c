#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string to append
 * @n: the maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Copy at most n bytes from src into dest */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Close the string with a null byte */
	dest[i] = '\0';

	return (dest);
}
