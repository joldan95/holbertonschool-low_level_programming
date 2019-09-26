#include "holberton.h"

/**
 * print_square - Print a square
 * with the size inserted by parameter
 * @size: Size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i = size * size;

	if (size <= 0)
		_putchar('\n');
	while (i-- > 0 && size > 0)
	{
		_putchar('#');
		_putchar(i % size == 0 ? '\n' : 0);
	}
}
