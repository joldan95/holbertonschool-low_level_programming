#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i = 0;
	int cod = 97;

	while (i < 26)
		_putchar(cod + i++);
	_putchar('\n');
}
