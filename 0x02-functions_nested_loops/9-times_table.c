#include "holberton.h"

/**
 * times_table - Prints the 9 times
 * table, starting with 0.
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int res;
	int cod = 48;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar(res + cod);
			}
			else
			{
				_putchar(' ');
				if ((res / 10) == 0)
					_putchar(' ');
				else
					_putchar((res / 10) + cod);
				_putchar((res % 10) + cod);
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
