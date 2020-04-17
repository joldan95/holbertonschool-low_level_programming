#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of ints using linear search
 * @array: Array of ints
 * @size: Size of array
 * @value: value to search
 *
 * Return: index where value is located
 * -1 if number was not found or array == NULL
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
