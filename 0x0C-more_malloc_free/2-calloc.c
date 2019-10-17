#include <stdlib.h>

void *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of elements to allocate
 * @size: Size of each element
 *
 * Description: allocates memory for an array of nmemb elements
 * of 'size' bytes each, and the memory is set to 0.
 *
 * Return: A pointer to the allocated memory.
 * NULL if nmemb or size is 0.
 * NULL if can not allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	p = _memset(p, '\0', nmemb * size);
	return (p);
}

/**
 * _memset - Copies a character into the first
 * n bytes of memory in s
 * @s: Pointer to the block of memory
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: The pointer to the memory area of s
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
