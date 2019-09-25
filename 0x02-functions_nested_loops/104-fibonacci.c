#include <stdio.h>

/**
 * main - Prints the fibonacci
 * series for the first 98 values
 * separeted by a commma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int long f1 = 1;
	unsigned int long f2 = 2;
	unsigned int long temp = 0;
	unsigned int long fh1, ft1, fh2, ft2, fh, ft;
	int i = 2;

	printf("%lu, ", f1);
	printf("%lu, ", f2);

	while (i <= 90)
	{
		temp = f2;
		f2 += f1;
		f1 = temp;
		printf("%lu, ", f2);
		i++;
	}

	fh1 = f1 / 1000;
	ft1 = f1 % 1000;
	fh2 = f2 / 1000;
	ft2 = f2 % 1000;

	while (i < 98)
	{
		fh = fh1 + fh2;
		ft = ft1 + ft2;
		fh += ft / 1000;
		ft %= 1000;
		printf(i == 97 ? "%lu%03lu\n" : "%lu%03lu, ", fh, ft);
		fh1 = fh2;
		fh2 = fh;
		ft1 = ft2;
		ft2 = ft;
		i++;
	}
	return (0);
}
