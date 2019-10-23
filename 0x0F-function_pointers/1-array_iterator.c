#include <stdlib.h>

/**
 * array_iterator - Executes a function on each element of the array
 * @array: Array fo integers
 * @size: Array size
 * @action: Function to apply on each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action == NULL)
		return;

	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
