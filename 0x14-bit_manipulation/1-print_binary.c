#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int r = sizeof(n) * 8, n2;
	int p = 0;

	while (r)
	{
		n2 = (n >> (r - 1)) & 1;

		if (p == 1 || (p == 0 && n2 == 1))
		{
			p = 1;
			_putchar(n2 + '0');
		}
		if (p == 0 && r == 1)
		{
			_putchar('0');
			return;
		}
		r--;
	}
}
