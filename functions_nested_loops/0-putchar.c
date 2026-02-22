#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[] = "_putchar\n";
	int i = 0;

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}

	return (0);
}
