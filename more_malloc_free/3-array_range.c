#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range- create an array with the values of min to max
 * array_range: create an array with the values of min to max
 * @min: minimal value
 * @max: maximum value
 * Return: the array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; min <= max ; min++)
	{
		array[i] = min;
		i++;
	}
	return (array);
}
