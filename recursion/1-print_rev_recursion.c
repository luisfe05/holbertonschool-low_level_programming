#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print in reverse
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	/* If we reached the end, start printing on the way back */
	if (*s == '\0')
		return;

	/* Go to the end of the string first */
	_print_rev_recursion(s + 1);

	/* Print current character on the way back */
	_putchar(*s);
}
