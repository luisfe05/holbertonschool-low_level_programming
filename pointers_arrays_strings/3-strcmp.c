#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 if equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	/* Walk through both strings (Hello World!) until they differ or end */
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;

	/* Return the difference between the two characters */
	return (s1[i] - s2[i]);
}
