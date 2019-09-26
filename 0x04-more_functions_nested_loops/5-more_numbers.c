#include "holberton.h"

/**
 * more_numbers - Prints the numbers
 * from 0 to 14, 10 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			i > 9 ? _putchar(i / 10 + '0') : 1;
			_putchar(i++ % 10 + '0');
		}
		_putchar('\n');
		j++;
	}
}
