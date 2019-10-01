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

	while (*(s + len + 1) != '\0')
		len++;
	while (i < len / 2)
	{
		r = *(s + (len - i));
		*(s + (len - i)) = *(s + i);
		*(s + i) = r;
		i++;
	}
}
