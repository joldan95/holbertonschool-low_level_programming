#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strdup - Duplicates the array inserted in other location
 * @str: String to duplicate
 *
 * Return: Pointer to the array.
 * Null if falls, or str is Null
 */
char *_strdup(char *str)
{
	char *s;
	int len;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	s = (char *)malloc((len + 1) * sizeof(char));

	if (s != NULL)
		s = _strcpy(s, str);

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
