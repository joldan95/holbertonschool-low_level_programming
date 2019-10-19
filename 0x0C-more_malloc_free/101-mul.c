#include <stdlib.h>
#include "holberton.h"

int check_digits(char *s);
char *trim_zeros(char *s);
void _puts(char *str);
char *mult(char *n1, char *n2);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

/**
 * main - Entry point of application
 * Compute the multiplication between two numbers
 * @argc: Count of arguments
 * @argv: Array of strings of the arguments
 *
 * Return: 0 if success.
 * 1 if encounter an error.
 */
int main(int argc, char **argv)
{
	char *p;
	char *max, *min;
	int lenmax, lenmin;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	/* Check the digits at argv */
	if (!check_digits(argv[1]) || !check_digits(argv[2]))
	{
		_puts("Error");
		exit(98);
	}

	/* Organize the greater and lower number with strcmp */
	lenmax = _strlen(argv[1]);
	lenmin = _strlen(argv[2]);
	if (lenmax == lenmin)
	{
		max = (_strcmp(argv[1], argv[2]) > 0 ? argv[1] : argv[2]);
		min = (_strcmp(argv[1], argv[2]) < 0 ? argv[1] : argv[2]);
	}
	else
	{
		max = (lenmax > lenmin ? argv[1] : argv[2]);
		min = (lenmax < lenmin ? argv[1] : argv[2]);
	}
	max = trim_zeros(max);
	min = trim_zeros(min);

	p = mult(max, min);

	_puts(trim_zeros(p));
	free(p);
	return (0);

}

/**
 * mult - Compute the multiplication of two integers
 * @n1: Integer number 1
 * @n2: Integer number 2
 *
 * Return: Pointer to the result of the operation
 * NULL if fails
 */
char *mult(char *n1, char *n2)
{
	char *s;
	int len1, len2;
	int dig, size, lim;
	int i1, i2, j;
	int sum;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	size = len1 + len2;
	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	s[size] = '\0';

	dig = size - 1;
	sum = 0;
	while (dig >= 0)
	{
		i1 = (dig >= len1 ? len1 - 1 : dig);
		i2 = (dig > len1 ? dig - len1 : 0);
		if (dig >= len1)
		{
			lim = size - dig;
			for (j = 0; j < lim; j++)
			{
				sum += ((n1[i1 - j] - '0') * (n2[i2 + j] - '0')) % 10;
				if (j != (lim - 1))
					sum += ((n1[i1 - j] - '0') * (n2[i2 + j + 1] - '0')) / 10;
			}
		}
		else
		{
			lim = (dig > len2 - 1 ? len2 : dig + 1);
			for (j = 0; j < lim; j++)
			{
				sum += ((n1[i1 - j] - '0') * (n2[i2 + j] - '0')) / 10;
				if (j != (lim - 1) || dig >= len2)
					sum += ((n1[i1 - j - 1] - '0') * (n2[i2 + j] - '0')) % 10;
			}
		}
		s[dig] = (sum % 10) + '0';
		sum /= 10;
		dig--;
	}

	return (s);
}

/**
 * _strlen - return the length of a string
 * @s: Pointer to an string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * _strcmp - Compares two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: The pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 - *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}


/**
 * check_digits - Check if a string just have digits
 * @s: String to check
 *
 * Return: 1 if just have digits
 * 0 if have any other character
 */
int check_digits(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * trim_zeros - Check if the starting characters of a string are 0
 * Recursive function
 * @s: string to check
 *
 * Return: The pointer to the real starting point
 */
char *trim_zeros(char *s)
{
	if (s[0] != '0' || (s[0] == '0' && s[1] == '\0'))
		return (s);
	return (trim_zeros(s + 1));
}

/**
 * _puts - prints a string, followed by a new line
 * @str: String to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
