#include "holberton.h"

/**
 * print_rev - Prints in reverse the string
 * @s: Pointer to a string
 *
 */
void print_rev(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i++;
	i--;
	while (i >= 0)
		_putchar(*(s + i--));

	_putchar('\n');
}
