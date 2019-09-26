#include "holberton.h"

/**
 * print_diagonal - Prints n times
 * the characte '\' on different lines
 * with different spaces
 * @n: Numbers of prints
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i, j = n;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (j-- > 0)
	{
		i = j + 1;
		while (i++ < n)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
