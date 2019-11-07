#include "holberton.h"

unsigned int _strlen(const char *s);
unsigned int _pow2(unsigned int n);

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String that contains a binary number
 *
 * Return: the converted number.
 * 0 if b is NULL or b have another char that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = _strlen(b) - 1, i = 0, r = 0;

	while (b[i])
	{
		switch (b[i])
		{
		case '1':
			r += _pow2(len - i);
			break;
		case '0':
			break;
		default:
			return (0);
		}
		i++;
	}
	return (r);
}


/**
 * _strlen - Returns the length of a string
 * @s: String to compute it length
 *
 * Return: The length of a string
 */
unsigned int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _pow2 - Computes the power of two
 * @n: Number of power
 *
 * Return: The value of two to nth power
 */
unsigned int _pow2(unsigned int n)
{
	unsigned int a = 1;

	while (n)
	{
		a *= 2;
		n--;
	}
	return (a);
}
