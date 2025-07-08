#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid- free the allocated memory of a bidimensionnal array
 * free_grid: free the allocated memory of a bidimensionnal array
 * @grid: bidimensionnal array
 * @height: height of the bidimensionnal array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0 ; i < height ; i++)
		{
			free(grid[i]);
		}
	free(grid);
	}
}
