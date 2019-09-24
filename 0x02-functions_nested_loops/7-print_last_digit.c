#include "holberton.h"

/**
 * print_last_digit - Print the last
 * digit of a number
 * @n: The number to be evaluated
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = n % 10;
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		ld = (n % 10) * -1;
		_putchar('0' + ld);
		return (ld);
	}
}
