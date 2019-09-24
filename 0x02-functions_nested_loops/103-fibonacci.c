#include <stdio.h>

/**
 * main - Prints the first 50
 * fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int long f1 = 1;
	int long f2 = 2;
	int long temp = 0;
	int long sum;

	while (f2 < 4000000)
	{
		if (f2 % 2 == 0)
			sum += f2;
		temp = f2;
		f2 += f1;
		f1 = temp;
	}

	printf("%lu\n", sum);
	return (0);
}
