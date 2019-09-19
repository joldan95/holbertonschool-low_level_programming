#include <stdio.h>

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
	int l;

	n = 48;

	while (n < 58)
	{
		m = n + 1;
		while (m < 58)
		{
			l = m + 1;
			while (l < 58)
			{
				putchar(n);
				putchar(m);
				putchar(l++);
				if (n != 55 || m != 56 || l != 58)
				{
					putchar(44);
					putchar(32);
				}
			}
			m++;
		}
		n++;
	}
	putchar(10);
	return (0);
}
