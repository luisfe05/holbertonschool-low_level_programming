#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	/* If we reached the end of the string, print newline and stop */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print current character and move to the next */
	_putchar(*s);
	_puts_recursion(s + 1);
}
