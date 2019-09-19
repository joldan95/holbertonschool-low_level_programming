B#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the decimal
 * numbers with differents combinations
 * from 01 to 89 separeted by a comma
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
		m = n + 1;
			while (m < 58)
			{
				putchar(n);
				putchar(m++);
				if (m != 58 || n != 56)
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
