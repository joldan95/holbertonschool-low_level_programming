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
	int i = 2;

	printf("%lu\n", f1);
	printf("%lu\n", f2);

	while (i < 50)
	{
		temp = f2;
		f2 += f1;
		f1 = temp;
		printf(i == 49 ? "%lu\n" : "%lu, ", f2);
		i++;
	}
	return (0);
}
