#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	/* If we don't receive exactly two arguments, print Error */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers and print the result */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
