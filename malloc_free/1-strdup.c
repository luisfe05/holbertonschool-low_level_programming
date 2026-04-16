#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated copy of a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or 0 if it fails
 */
char *_strdup(char *str)
{
	char *copy;
	int len;
	int i;

	/* Return 0 if str is NULL */
	if (str == 0)
		return (0);

	/* Find the length of the string */
	len = 0;
	while (str[len] != '\0')
		len++;

	/* Allocate memory for the copy including the null byte */
	copy = malloc(sizeof(char) * (len + 1));

	/* Return 0 if malloc fails */
	if (copy == 0)
		return (0);

	/* Copy each character into the new memory */
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}

	/* Close the string with a null byte */
	copy[i] = '\0';

	return (copy);
}
