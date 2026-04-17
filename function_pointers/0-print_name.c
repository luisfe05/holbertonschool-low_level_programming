#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: the name to print
 * @f: pointer to the function to use for printing
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/* Call the function pointer with the name */
	f(name);
}
