#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of width for an array
 * @height: number of height for an array
 * Return: pointer of dimensional array or NULL
 */

int **alloc_grid(int width, int height)
{
	int num = 0, num2 = 0, **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc((height + 1) * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	while (num < height)
	{
		num2 = 0;
		while (num2 < width)
		{
			grid[num][num2] = 0;
			num2++;
		}
		num++;
	}

	return (grid);
}
