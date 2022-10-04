#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees the memory on grid
  * @grid: grid
  * @height: height or rows
  * Return: void
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
