#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Function
 *@grid: free all the grid we did earlier.
 *@height: height int
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
