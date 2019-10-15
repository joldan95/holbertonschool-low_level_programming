#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid created with 'alloc_grid'
 * @grid: Pointer to grid to free
 * @height: Number of rows of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
