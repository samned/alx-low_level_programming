#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - short desc
 * @width: width
 * @height: height
 *
 * Description - descriptioon
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc(sizeof(int *) * height);
	if (width == 0 || height == 0 || width < 0 || height < 0 || grid == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
