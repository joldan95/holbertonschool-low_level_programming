#include "holberton.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Value where to set the bit
 * @index: the index to set
 *
 * Return: The value of a the bit at index or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r = sizeof(n) * 8, n2 = 1;

	if (index > (r - 1))
		return (-1);

	n2 <<= index;
	*n |= n2;

	return (1);
}
