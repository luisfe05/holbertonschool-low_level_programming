#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to look for
 *
 * Return: pointer to first matching byte in s, or 0 if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;

	/* Walk through each character of s */
	while (s[i] != '\0')
	{
		j = 0;

		/* Check if current character exists in accept */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (0);
}
