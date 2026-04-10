#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h;
	int m;

	/* loop for hours and minutes */
	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			/* print hours */
			_putchar('0' + h / 10);
			_putchar('0' + h % 10);
			_putchar(':');
			/* print minutes */
			_putchar('0' + m / 10);
			_putchar('0' + m % 10);
			_putchar('\n');
			/* increment minutes */
			m++;
		}
		/* increment hours */
		h++;
	}
}
