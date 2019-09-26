#include "holberton.h"

/**
 * print_numbers - Prints the numbers
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
		_putchar('0' + i++);
	_putchar('\n');
}
