#include "holberton.h"

/**
 * clear_bit - Clear the bit at index
 * @n: Value where to clear the bit
 * @index: the index to clear
 *
 * Return: 1 if could clear the bit or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r = sizeof(n) * 8, n2 = 1;

	if (index > (r - 1))
		return (-1);

	*n = ~*n;

	n2 <<= index;
	*n |= n2;

	*n = ~*n;

	return (1);
}
