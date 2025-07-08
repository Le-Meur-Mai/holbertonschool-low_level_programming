#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j = 0;
int *damier2;
int **ptr;

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
		damier2[i] = malloc(sizeof(int) * (width + 1));

		if (damier2[i] == NULL)
		{
			free (damier2);
			free (damier2[i]);
			return (NULL);
		}
	}
for (; damier[j] ; j++)
{
	for (i = 0 ; damier[j][i] != '\0' ; i++)
	{
		damier2[j][i] = 0;
	}
}
ptr = &damier2;

return (ptr);
}