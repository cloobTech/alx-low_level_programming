#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 *
 * @width: 1st operand
 * @height: 2nd operand
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 * return (NULL) for failure.
 */


int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
