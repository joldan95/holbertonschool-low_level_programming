#include "holberton.h"

/**
 * print_number - Prints an integer number
 * @n: Integer to print
 * Return: Nothing
 */
void print_number(int n)
{
	int d = 1;

	while (n / d > 9)
		d *= 10;

	while (d != 1)
	{
		_putchar(n / d + '0');
		n %= d;
		d /= 10;
	}
	_putchar(n % 10 + '0');
}
