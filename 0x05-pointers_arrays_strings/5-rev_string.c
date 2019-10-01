#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: Pointer to a string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char r;

	while (*(s + len) != '\0')
		len++;
	while (i < len / 2)
	{
		r = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = *(s + i);
		*(s + i) = r;
		i++;
	}
}
