#include "holberton.h"

/**
 * _islower - Evaluates if the parameter
 * is or not a lowercase letter *
 * @c: The character (on ASCII code) to evaluate.
 *
 * Return: If is a lowercase letter 1.
 * Otherwise, 0 is returned.
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
