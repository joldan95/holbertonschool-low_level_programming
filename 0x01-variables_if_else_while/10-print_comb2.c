#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the decimal
 * numbers from 00 to 99 separeted by
 * by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 48;

	while (n < 58)
	{
		m = 48;
			while (m < 58)
			{
				putchar(n);
				putchar(m++);
				if (m != 58 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		n++;
	}
	putchar(10);
	return (0);
}
