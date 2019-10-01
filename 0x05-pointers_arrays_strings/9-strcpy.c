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

	do {
		*(dest + len) = *(src + len);
		len++;
	} while (*(src + len - 1) != '\0');
	return (dest);
}
