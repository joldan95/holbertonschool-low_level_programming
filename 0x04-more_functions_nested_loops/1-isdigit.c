#include "holberton.h"

/**
 * _isdigit - Evaluates if the parameter
 * is or not a digit
 * @c: The character (on ASCII code) to evaluate.
 *
 * Return: If is a digit 1.
 * Otherwise, 0 is returned.
 */
int _isdigit(int c)
{
	return (c < '0' || c > '9' ? 0 : 1);
}
