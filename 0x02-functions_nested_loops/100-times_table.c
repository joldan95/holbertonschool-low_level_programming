#include "holberton.h"

/**
 * print_times_table - Prints the n times
 * table, starting with 0.
 * @n: The number of the times table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;
	int cod = 48;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i < (n + 1); i++)
	{
		for (j = 0; j < (n + 1); j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar(res + cod);
			}
			else
			{
				_putchar(' ');
				_putchar(((res / 100) == 0) ? ' ' : (res / 100) + cod);
				_putchar(((res / 10) == 0) ? ' ' : (res / 10) % 10 + cod);
				_putchar((res % 10) + cod);
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
