#include <stdio.h>

/**
 * main - Entry point of application
 *
 * Description: Prints out the decimal
 * numbers with differents combinations
 * from 00 01 to 98 99 separeted by a comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int cod;

	cod = 48;
	n = 0;

	while (n < 100)
	{
		m = n + 1;
		while (m < 100)
		{
   		   	putchar((n / 10) + cod);
			putchar((n % 10) + cod);
			putchar(32);
			putchar((m / 10) + cod);
			putchar((m % 10) + cod);

			if (n != 98 || m != 99)
			{
				putchar(44);
				putchar(32);
			}
	   		m++;
		}
		n++;
	}
	putchar(10);
	return (0);
}
