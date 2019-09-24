#include <stdio.h>

/**
 * main - Prints the sum of
 * multiplies of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	printf("%d\n", sum);
	return (0);
}
