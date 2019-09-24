#include "holberton.h"

/**
 * print_sign - Print the sign of a
 * number inserted by parameter
 * @n: The number to be evaluated
 *
 * Description: Print + if the number
 * is greater than 0. Print 0 if is equal
 * to zero. Print - if is less than zero.
 *
 * Return: 1 if the parameter is greater than 0.
 * 0 if n is equal to 0. -1 if n is less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
