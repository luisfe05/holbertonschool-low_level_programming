#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to beginning of needle in haystack, or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;

	/* Walk through each character of haystack */
	while (haystack[i] != '\0')
	{
		j = 0;

		/* Check if needle matches starting at position i */
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;

		/* If we reached the end of needle, we found a match */
		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}

	return (0);
}
