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

	if (!array)
		return (-1);

	block = (unsigned int)sqrt(size);

	for (i = 0; i < size; i += block)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}

	i -= i == 0 ? 0 : block;
	printf("Value found between indexes [%d] and [%d]\n", i, i + block);

	block = i + block + 1;
	for (; i < size && i < block ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
