#include "holberton.h"

/**
 * flip_bits - Returns the number of bits to flip to change the numbers
 * @n: Number 1 to compare
 * @m: Number 2 to compare
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n2, r = sizeof(n) * 8;
	int i = 0;

	n2 = n ^ m;

	while (r)
	{
		if (((n2 >> (r - 1)) & 1) == 1)
			i++;
		r--;
	}
	return (i);
}
