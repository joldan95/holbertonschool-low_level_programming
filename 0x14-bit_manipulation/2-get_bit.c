#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at given index
 * @n: Value where to obtain the bit
 * @index: the index to get
 *
 * Return: The value of a the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int r = sizeof(n) * 8;

	if (index > (r - 1))
		return (-1);

	return ((n >> index) & 1);
}
