#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers
 * from n to 98
 * @n: Starting number
 *
 * Result: Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
			printf("%d, ", n--);
		else
			printf("%d, ", n++);
	}
	printf("%d\n", n);
}
