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
	unsigned int j;
	char c;
	int n;
	double f;
	char *s;
	char *types;

	va_start(args, format);
	types = "cifs";
	i = 0;
	printed = 0;

	/* Walk through each character in format */
	while (format && format[i])
	{
		/* Find which index matches: 0=c, 1=i, 2=f, 3=s, 4=no match */
		j = 0;
		while (j < 4 && format[i] != types[j])
			j++;

		/* Read the right argument only if we have a match */
		c = (j == 0) ? (char)va_arg(args, int) : 0;
		n = (j == 1) ? va_arg(args, int) : 0;
		f = (j == 2) ? va_arg(args, double) : 0;
		s = (j == 3) ? va_arg(args, char *) : NULL;

		/* Print separator before value if not first */
		if (j < 4)
			printf("%s", printed++ ? ", " : "");

		/* Print the value based on which type matched */
		if (j == 0)
			printf("%c", c);
		if (j == 1)
			printf("%d", n);
		if (j == 2)
			printf("%f", f);
		if (j == 3)
			printf("%s", s ? s : "(nil)");
		i++;
	}

	printf("\n");
	va_end(args);
}
