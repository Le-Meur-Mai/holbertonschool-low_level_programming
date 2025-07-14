#include "function_pointers.h"

/**
 * array_iterator- use a function on each int of an array
 * array_iterator: use a function that print each int of an array
 * @array: array of int to print
 * @size: size of the array
 * @action: function to execute on the elements of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
