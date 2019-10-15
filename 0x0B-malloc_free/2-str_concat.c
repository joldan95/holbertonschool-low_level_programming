#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to the array.
 * Null if falls, or str is Null
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, len;

	len1 = s1 == NULL ? 0 : _strlen(s1);
	len2 = s2 == NULL ? 0 : _strlen(s2);
	len = len1 + len2;

	s = (char *)malloc((len + 1) * sizeof(char));

	if (s != NULL)
	{
		s = _strcpy(s, (s1 == NULL ? "\0" : s1));
		s = _strcpy(s + len1, (s2 == NULL ? "\0" : s2));
		s -= len1;
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
 * _strcpy - copies the second to the first
 * parameter
 * @dest: The destination pointer
 * @src: The source pointer
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	do {
		*(dest + len) = *(src + len);
		len++;
	} while (*(src + len - 1) != '\0');
	return (dest);
}
