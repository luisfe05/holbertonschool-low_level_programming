#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string to append
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
		i++;

	/* Copy src into dest starting at the end */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Close the string with a null byte */
	dest[i] = '\0';

	return (dest);
}
