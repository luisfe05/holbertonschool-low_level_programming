#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	int printed;
	char c;
	int n;
	float f;
	char *s;

	va_start(args, format);
	i = 0;
	printed = 0;

	/* Walk through each character in format */
	while (format && format[i])
	{
		s = NULL;
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%s%c", printed ? ", " : "", c);
			printed++;
		}
		else if (format[i] == 'i')
		{
			n = va_arg(args, int);
			printf("%s%d", printed ? ", " : "", n);
			printed++;
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%s%f", printed ? ", " : "", f);
			printed++;
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			printf("%s%s", printed ? ", " : "", s ? s : "(nil)");
			printed++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
