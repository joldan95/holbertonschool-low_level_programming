#include "holberton.h"

/**
 * print_triangle - Prints a triangle
 * followed by a new line
 * @size: The size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i = size * size;

	if (size <= 0)
		_putchar('\n');
	while (i-- > 0 && size > 0)
	{
		_putchar((i / size + i % size) < size ? '#' : ' ');
		i % size == 0 ? _putchar('\n') : 1;
	}
}
