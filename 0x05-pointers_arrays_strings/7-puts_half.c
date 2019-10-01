#include "holberton.h"

/**
 * puts_half - Prints the second half of a string
 * @s: Pointer to a string
 *
 * Return: Nothing
 */
void puts_half(char *s)
{
	int i = 0, len = 0;

	while (*(s + len) != '\0')
		len++;
	i = len / 2;
	while (i < len)
		_putchar(*(s + i++));
	_putchar('\n');
}
