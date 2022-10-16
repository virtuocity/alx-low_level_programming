#include "main.h"
/**
 *free_grid - Deallocate memory for 2D int grid
 *
 * @grid: matrix of integers
 * @height: height of matrix
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
