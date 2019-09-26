#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Computes the largest
 * prime factor of teh number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long num = 612852475143;
	long f = 2;

	do {
		if (num % f == 0)
		{
			num = num / f;
			if (num == 1)
				break;
			f = 1;
		}
	} while (f++ <= num);

	printf("%lu\n", f);

	return (0);
}
