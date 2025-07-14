#include "function_pointers.h"

/**
 * int_index- using callback function on the elements of an array
 * int_index: using functions that compare the int of the array
 * with others int.
 * @array: the array of int you want to compare
 * @size: size of the array
 * @cmp: function that compare the int
 * Return: the first index of the array when the comparaison is exact
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}

	}
	return (-1);
}
