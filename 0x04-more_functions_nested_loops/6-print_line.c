#include "holberton.h"

/**
 * print_line - Prints n times
 * the characte '_'
 * @n: Numbers of prints
 *
 * Return: Nothing
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
