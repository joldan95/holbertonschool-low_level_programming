#include <stdlib.h>

int *array_range(int min, int max);

/**
 * array_range - Creates an array of integers
 * @min: lower limit of the array
 * @max: upper limit of the array
 *
 * Description: Create an array of integers, oredered from min to max
 * including the limits
 *
 * Return: A pointer to the created array
 * NULL if min > max
 * NULL if can not allocate memory
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min + i;
	return (p);
}
