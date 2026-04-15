#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	/* Walk through the string looking for c */
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	/* Check if c is the null byte itself */
	if (s[i] == c)
		return (s + i);

	return (0);
}
