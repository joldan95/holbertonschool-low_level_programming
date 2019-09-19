#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the decimal
 * numbers separeted by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n++);
		if (n != 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
