#include "holberton.h"

/**
 * _isalpha - Evaluates if the parameter
 * is or not a letter.
 * @c: The character (on ASCII code) to evaluate.
 *
 * Return: If is a letter 1.
 * Otherwise, 0 is returned.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
