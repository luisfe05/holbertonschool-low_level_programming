#include "main.h"
#include <stdlib.h>

/**
 * str_len - returns the length of a string
 * @s: the string to measure
 *
 * Return: length of the string
 */
int str_len(char *s)
{
	int len;

	len = 0;

	/* Count each character until the end */
	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * str_concat - concatenates two strings into a new allocated string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the new string, or 0 on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;
	int i;
	int j;

	/* Treat NULL as empty string */
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	len1 = str_len(s1);
	len2 = str_len(s2);

	/* Allocate memory for both strings plus null byte */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Return 0 if malloc fails */
	if (concat == 0)
		return (0);

	/* Copy s1 into the new memory */
	i = 0;
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	/* Copy s2 right after s1 */
	j = 0;
	while (j < len2)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	/* Close the string with a null byte */
	concat[i] = '\0';

	return (concat);
}
