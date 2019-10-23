#include <stdlib.h>

/**
 * int_index - Search for an integer using a compare function
 * @array: Array to search in
 * @size: Array size
 * @cmp: Compare function
 *
 * Return: The index fo the element that matches with the function
 * -1 if no element matches
 * -1 if size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
