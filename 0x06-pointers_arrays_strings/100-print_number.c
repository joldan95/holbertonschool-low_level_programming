#include "holberton.h"

/**
 * print_number - Prints an integer number
 * @n: integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int numerillo;

	n < 0 ? _putchar('-') : 1;
	n *= n < 0 ? -1 : 1;
	numerillo = n;
	if (numerillo / 10)
		print_number(numerillo / 10);
	_putchar(numerillo % 10 + '0');
}
