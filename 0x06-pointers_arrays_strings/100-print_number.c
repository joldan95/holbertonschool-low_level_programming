#include "holberton.h"

/**
 * print_number - Prints an integer number
 * @n: integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	n < 0 ? _putchar('-') : 1;
	n *= n < 0 ? -1 : 1;
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
