#include <stdio.h>
/**
 * _atoi - Convert a string into an integer
 * @s: the string to be converted
 *
 * Return: The integer
 */
int _atoi(char *s)
{
	int sg = 1;
	unsigned int n;
	n = 0;
	do {
		sg *= *s == '-' ? -1 : 1;
		if (*s >= '0' && *s <= '0' + 9)
		{
			n = n + ((int)*s - '0');
			if (*(s + 1) >= '0' && *(s + 1) <= '9')
				n *= 10;
			else
				break;
		}
		s++;
	} while (*s != '\0');

	return (sg * n);
}
