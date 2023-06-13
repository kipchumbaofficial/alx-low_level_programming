#include <stdlib.h>
/**
 * free_grid - Frees Memory
 * @grid: Address to be freed
 * @height: Height of 2D array
 */
void free_grid(int **grid, int height)
{
	int i;
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
