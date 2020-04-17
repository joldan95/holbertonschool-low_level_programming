#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for a value in an array using jump search
 * @array: Array of sorted ints
 * @size: Size of the array
 * @value: Value to find
 *
 * Return: Index of the value
 * -1 if the value was not found or if array == NULL
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int block, i;
	int res;

	if (!array)
		return (-1);

	block = (unsigned int)sqrt(size);

	for (i = 0; i < size; i += block)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	i -= block;
	printf("Value found between indexes [%d] and [%d]\n", i, i + block);
	res = linear_search(array + i, i + block > size ? size - i : block + 1, value);
	return (res + (res == -1 ? 0 : i));
}

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
