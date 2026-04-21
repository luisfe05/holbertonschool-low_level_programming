#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	i = 0;

	/* Print each number with separator between them */
	while (i < n)
	{
		printf("%d", va_arg(args, int));

		/* Print separator after every number except the last */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(args);
}
