#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: the 2D array to free
 * @height: the height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	/* Free each row first */
	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	/* Then free the array of row pointers */
	free(grid);
}
