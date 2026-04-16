#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the 2D array, or 0 on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	/* Return 0 if width or height is 0 or negative */
	if (width <= 0 || height <= 0)
		return (0);

	/* Allocate array of row pointers */
	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
		return (0);

	/* Allocate each row and initialize to 0 */
	i = 0;
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
			return (0);
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	return (grid);
}
