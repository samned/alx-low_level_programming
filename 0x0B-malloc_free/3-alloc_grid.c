#include "main.h"
#include <stdlib.h>
/**
 * @brief
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	grid = malloc((width * height) * sizeof(int));
	if (width == 0 || height == 0 || width < 0 || height < 0 || grid == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(**grid) * width);
		if (grid[i] == 0)
		{
			free(grid);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
