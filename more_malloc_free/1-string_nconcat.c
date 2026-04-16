#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using at most n bytes of s2
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to use from s2
 *
 * Return: pointer to the new string, or 0 on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	char *tmp;
	unsigned int len1;
	unsigned int len2;
	unsigned int j;

	/* Treat NULL as empty string */
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	/* Find lengths and cap n to len2 if needed */
	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	/* Allocate memory for s1 + n bytes of s2 + null byte */
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == 0)
		return (0);

	/* Copy s1 then n bytes of s2 into concat */
	tmp = concat;
	while (*s1)
		*tmp++ = *s1++;
	j = 0;
	while (j < n)
	{
		*tmp++ = s2[j];
		j++;
	}
	*tmp = '\0';

	return (concat);
}
