#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid was created by alloc_grid
 *
 * @grid: contain a 2 dimensional array
 * @height: contain a height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
