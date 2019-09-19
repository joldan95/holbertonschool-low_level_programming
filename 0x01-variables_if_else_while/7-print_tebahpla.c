#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the alphabet
 * in lower case in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 122;

	while (n > 96)
	{
		putchar(n--);
	}
	putchar(10);
	return (0);
}
