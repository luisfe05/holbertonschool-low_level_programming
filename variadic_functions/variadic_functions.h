#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct type_s - pairs a format char with a print function
 * @c: the format character
 * @f: the function to call for this type
 */
typedef struct type_s
{
	char c;
	void (*f)(va_list *);
} type_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list *args);
void print_i(va_list *args);
void print_f(va_list *args);
void print_s(va_list *args);

#endif
