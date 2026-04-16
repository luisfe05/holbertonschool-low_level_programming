#include "main.h"
#include <stdlib.h>

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
	char *tmp;
	int len1;
	int len2;
	int i;

	/* Treat NULL as empty string */
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	/* Find lengths */
	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Allocate and fill */
	concat = malloc(len1 + len2 + 1);
	if (concat == 0)
		return (0);

	tmp = concat;
	i = 0;
	while (s1[i])
		*tmp++ = s1[i++];
	i = 0;
	while (s2[i])
		*tmp++ = s2[i++];
	*tmp = '\0';

	return (concat);
}