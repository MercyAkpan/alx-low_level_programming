#include "main.h"
#include <stdlib.h>
/**
  * free_grid - This frees a pre-mentioned grid
  * @grid: Thisnis nthe specified grid to be freed(an array of pointers).
  * @height: This is the height(row number) of the grid.
  */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
	for (height--; height >= 0; height--)
		free(grid[height]);
	}
	free(grid);
}
