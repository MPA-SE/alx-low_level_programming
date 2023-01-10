#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to
 * a 2 dimensional array of integers
 * @width: first array
 * @height: second array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **pree;

	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	pree = malloc(sizeof(int *) * height);
	if (pree == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		pree[y] = malloc(sizeof(int) * width);
		if (pree[y] == NULL)
		{
			for (; y >= 0; y--)
				free(pree[y]);
			free(pree);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			pree[y][z] = 0;
	}
	return (pree);
}

