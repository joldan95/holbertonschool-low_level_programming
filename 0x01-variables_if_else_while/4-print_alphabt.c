#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the alphabet
 * in lower case except q and e letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;

	while (n < 123)
	{
		if (n == 101 || n == 113)
			n++;
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
