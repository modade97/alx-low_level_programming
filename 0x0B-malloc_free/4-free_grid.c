#include "main.h"

/**
 * free_grid - function frees up dynamically allocated memory
 * @grid: first parameter
 * @height: second parameter
 * Return: Nothing
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
