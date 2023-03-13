#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the previously 2 dimensional grid
 * @grid: 2d grid
 * @height: height dimension of grid
 * Return: returns void
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

