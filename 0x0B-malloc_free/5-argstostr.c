#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * argstostr - Concatenates the arguments
 * @ac: Count of arguments
 * @av: Pointer to the first string of the list
 *
 * Description: Concatenates the strings inserted by av
 * putting a '\n' at the final of each string
 * Return: A pointer to the string that have the concatenation
 * Null if ac == 0 or av == NULL
 * Null if could not allocate the memory
 */
char *argstostr(int ac, char **av)
{
	char *s, *r;
	int *len;
	int i, suma = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = (int *)malloc(ac * sizeof(int));

	for (i = 0; i < ac; i++)
	{
		len[i] = _strlen(av[i]);
		suma += len[i] + 1;
	}
	suma++;

	s = (char *)malloc(suma * sizeof(char));
	if (s == NULL)
	{
		free(len);
		len = NULL;
		return (NULL);
	}
	else
	{
		r = s;
		for (i = 0; i < ac; i++)
		{
			r = _strcpy(r + (i == 0 ? 0 : len[i - 1] + 1), av[i]);
			r[len[i]] = '\n';
		}
		r = NULL;
		free(len);
	}
	s[suma - 1] = '\0';
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
