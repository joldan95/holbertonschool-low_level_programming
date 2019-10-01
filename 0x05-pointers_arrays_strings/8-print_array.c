#include <stdio.h>

/**
 * print_array - Prints n elements of array
 * @a: Pointer to start of array
 * @n: Number of numbers to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		printf(i == (n - 1) ? "%d\n" : "%d, ", a[i]);

}
