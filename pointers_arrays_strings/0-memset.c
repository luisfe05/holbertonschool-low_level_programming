#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to fill
 * @b: the constant byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	/* Fill the first n bytes of s with the byte b */
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
