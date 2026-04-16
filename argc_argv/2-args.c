#include <stdio.h>

/**
 * main - prints all arguments received by the program
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	/* Print each argument on its own line */
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
