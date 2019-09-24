#include "holberton.h"

/**
 * jack_bauer - Prints every minute
 * starting from 00:00 to 23:59
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int m;
	int h = 0;
	int cod = 48;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + cod);
			_putchar(h % 10 + cod);
			_putchar(':');
			_putchar(m / 10 + cod);
			_putchar(m % 10 + cod);
			_putchar('\n');
			m++;
		}
		h++;
	}
}
