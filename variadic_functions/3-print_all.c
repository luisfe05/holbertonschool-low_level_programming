#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - prints a char from args
 * @args: pointer to the argument list
 */
void print_c(va_list *args) { printf("%c", (char)va_arg(*args, int)); }

/**
 * print_i - prints an int from args
 * @args: pointer to the argument list
 */
void print_i(va_list *args) { printf("%d", va_arg(*args, int)); }

/**
 * print_f - prints a float from args
 * @args: pointer to the argument list
 */
void print_f(va_list *args) { printf("%f", va_arg(*args, double)); }

/**
 * print_s - prints a string from args
 * @args: pointer to the argument list
 */
void print_s(va_list *args)
{
	char *s;

	s = va_arg(*args, char *);
	printf("%s", s ? s : "(nil)");
}

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
	type_t types[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{0, NULL}
	};

	va_start(args, format);
	i = 0;
	printed = 0;

	/* Walk through each character in format */
	while (format && format[i])
	{
		/* Find matching type in the lookup table */
		j = 0;
		while (types[j].f && format[i] != types[j].c)
			j++;

		/* If we found a match, print separator and call the function */
		if (types[j].f)
		{
			printf("%s", printed++ ? ", " : "");
			types[j].f(&args);
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
