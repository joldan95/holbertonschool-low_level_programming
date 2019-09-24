#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 * ten times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int alpha;
	int i = 0;
	int cod = 97;

	do {
		alpha = 0;
		while (alpha < 26)
			_putchar(cod + alpha++);
		_putchar('\n');
		i++;
	} while (i < 10);

}
