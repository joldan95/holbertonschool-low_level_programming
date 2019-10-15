#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: Size of the string to create
 * @c: Character to initialize the array
 *
 * Return: Pointer to the array.
 * Null if falls, or the size is equal to 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = (char *)malloc(size * sizeof(char));

	if (s != NULL)
	{
		for (i = 0; i < size; i++)
			s[i] = c;
	}

	return (s);
}
