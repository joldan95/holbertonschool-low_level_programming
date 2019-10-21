#include "holberton.h"

void _puts(char *str);

/**
 * main - Entry point of application
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts(__FILE__);
	return (0);
}

/**
 * _puts - prints a string, followed by a new line
 * @str: String to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
