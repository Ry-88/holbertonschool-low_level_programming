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
	int num = 0, num2 = 0, **grid, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int) + 1);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(width * sizeof(int) + 1);
		if (grid[i] == NULL)
		{
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
