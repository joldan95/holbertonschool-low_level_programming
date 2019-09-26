#include "holberton.h"

/**
 * print_most_numbers - Prints the numbers
 * excluding 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int i = -1;

	while (i++ < 9)
		i != 2 && i != 4 ? _putchar('0' + i) : 1;
	_putchar('\n');
}
