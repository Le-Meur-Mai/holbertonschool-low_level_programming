#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid- create a two dimensional array with dynamic allocation
 * alloc_grid: create a two dimensional array with dynamic allocation
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to a two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j = 0;
	int **damier2;

if (width <= 0 || height <= 0)
{
return (NULL);
}
damier2 = malloc(sizeof(int *) * (height));

if (damier2 == NULL)
{
	return (NULL);
}

	for (i = 0 ; i < height ; i++)
	{
		damier2[i] = malloc(sizeof(int) * (width));

		if (damier2[i] == NULL)
		{
			return (NULL);
		}
	}
for (i = 0 ; i < height ; i++)
{
	for (j = 0 ; j < width ; j++)
	{
		damier2[i][j] = 0;
	}
}
return (damier2);
}