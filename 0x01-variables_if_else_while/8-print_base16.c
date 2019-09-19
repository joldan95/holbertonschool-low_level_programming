#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the numbers
 * in hexadecimal notation
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
		putchar(n++);

	n = 97;

	while (n < 103)
		putchar(n++);

	putchar(10);
	return (0);
}
