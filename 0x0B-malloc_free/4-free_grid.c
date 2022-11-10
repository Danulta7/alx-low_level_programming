#include "main.h"
/**
 * free_grid - allocates a gride
 * @grid: takes in width of grid
 * @height: height of grid
 * Return: free gride
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
