#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	/* nested loop for table */
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			/* first number of each row has no comma */
			if (j == 0)
			{
				_putchar('0' + result);
			}
			else
			{
				/* print comma and space */
				_putchar(',');
				/* two spaces for single digit, one space for double digit */
				if (result < 10)
					_putchar(' ');
				_putchar(' ');
				/* print the result */
				if (result >= 10)
					_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			/* increment j for next column */
			j++;
		}
		_putchar('\n');
		i++;
	}
}
