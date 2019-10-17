#include <stdlib.h>

/**
 * malloc_checked - Allocate a memory with malloc and
 * check if can do the allocation
 * @b: The amount of bytes to be allocated
 *
 * Return: A pointer to the allocated memory
 * If the process fail, cause a normal process termination
 * with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
