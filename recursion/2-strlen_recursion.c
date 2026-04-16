#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* Base case: if we reached the end, length is 0 */
	if (*s == '\0')
		return (0);

	/* Count current character plus the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}
