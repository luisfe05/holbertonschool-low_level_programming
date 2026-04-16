#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	i = 1;
	sum = 0;

	/* If no arguments, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Walk through each argument */
	while (i < argc)
	{
		j = 0;

		/* Check every character is a digit */
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		/* Add the number to the sum */
		sum = sum + atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
