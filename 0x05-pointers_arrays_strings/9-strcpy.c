#include <stdio.h>
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

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	return (dest);
}
