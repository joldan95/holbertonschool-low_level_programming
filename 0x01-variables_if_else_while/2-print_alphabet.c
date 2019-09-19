#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the alphabet
 * in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;

	while (n < 123)
	{
		putchar(n++);
	}
	putchar(10);
	return (0);
}
