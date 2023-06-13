#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_grid - prints grid of integers
 * @grid: Address of grid
 * @height: Height of the grid
 * @width: Width of the grid
 */
void print_grid(int **grid, int width, int heigth)
{
	int w;
	int h;

	h = 0;
	while (h < heigth)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}
/**
 * main - Checks code
 *
 * Return: 0
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	free_grid(grid, 4);
	return (0);
}
