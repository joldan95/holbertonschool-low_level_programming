#include "holberton.h"

/**
 * _isupper - Evaluates if the parameter
 * is or not an uppercase letter *
 * @c: The character (on ASCII code) to evaluate.
 *
 * Return: If is a uppercase letter 1.
 * Otherwise, 0 is returned.
 */
int _isupper(int c)
{
	return (c < 'A' || c > 'Z' ? 0 : 1);
}
