#include <stdlib.h>

void free_gr(int **grid, int height);

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 * @width: Number of columns of the array
 * @height: Number of rows of the array
 *
 * Return: A pointer to a 2 dimensional array with 'width' columns
 * and 'height' rows
 * Null on failure or if any parameter is less than 1
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(width * sizeof(int));
			if (p[i] ==NULL)
			{
				free_gr(p, i - 1);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				p[i][j] = 0;
		}
	}

	return (p);
}

/**
 * free_gr - Frees a 2 dimensional grid created with 'alloc_grid'
 * @grid: Pointer to grid to free
 * @height: Number of rows of the array
 *
 * Return: Nothing
 */
void free_gr(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
