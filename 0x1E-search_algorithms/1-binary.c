#include "search_algos.h"

/**
 * binary_search - Search for a value in an array with binary search
 * @array: Array of ints
 * @size: Size of the array
 * @value: Value to search
 *
 * Return: index of the value
 * -1 if was not found or if array == NULL
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i;
	int res;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");
	}

	i = size % 2 == 0 ? size/2 - 1 : size/2;

	if (size == 1 && array[0] != value)
		return (-1);
	if (array[i] == value)
		return (i);
	else if (array[i] > value)
		return (binary_search(array, i, value));
	else
		{
			res = binary_search((array + i + 1), size - i - 1, value);
			return (res + (res == - 1 ? 0 : i + 1));
		}
}
