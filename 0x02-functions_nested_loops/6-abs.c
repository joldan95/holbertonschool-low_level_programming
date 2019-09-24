#include "holberton.h"

/**
 * _abs - Compute the
 * absolute number of an integer
 * @n: The number to be evaluated
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
