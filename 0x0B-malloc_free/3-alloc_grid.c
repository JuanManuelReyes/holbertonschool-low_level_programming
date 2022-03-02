#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *alloc_grid - asd
 *@width: asd
 *@height: asd
 *Return: asd
 **/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			free(grid);
			return (NULL);
		}

		for (x = 0; x < width; x++)
			grid[i][x] = 0;
	}

	return (grid);
}
