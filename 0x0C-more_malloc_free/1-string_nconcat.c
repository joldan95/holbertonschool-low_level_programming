#include <stdlib.h>

int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * string_nconcat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Bytes to be concatenaded from s2 to s1
 *
 * Description: Concatenates two strings into another that contains
 * s1 and the first n bytes of s2, and null terminated.
 * If n is greater than s2, use the entire string of s2.
 * If NULL is passed, with would be treated as an empty string.
 *
 * Return: Pointer to the array.
 * Null if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, len;

	len1 = s1 == NULL ? 0 : _strlen(s1);
	len2 = s2 == NULL ? 0 : _strlen(s2);
	len2 = n >= len2 ? len2 : n;
	len = len1 + len2;

	s = malloc((len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	s = _memcpy(s, (s1 == NULL ? "" : s1), len1);
	s = _memcpy(s + len1, (s2 == NULL ? "" : s2), len2);
	s -= len1;
	s[len] = '\0';

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
 * _memcpy - copies the memory are from
 * src to dest
 * @dest: The destination pointer
 * @src: The source pointer
 * @n: bytes to use from src
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
