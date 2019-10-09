#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * using recursion
 * @s: String to print
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
