#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to print between strings
 * @n: number of strings passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	i = 0;

	/* Print each string with separator between them */
	while (i < n)
	{
		str = va_arg(args, char *);

		/* Print (nil) if string is NULL */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print separator after every string except the last */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}

	printf("\n");
	va_end(args);
}
