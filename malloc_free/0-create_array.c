#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array- create an array of c with a dynamic allocation of memory
 * create_array: create an array of c with a size of unsigned int
 * @size: size of the array
 * @c: fill the array with the letter "c"
 * Return: the array
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i = 0;

	char *create_array = NULL;
	create_array = malloc(sizeof(char) * size);
	if (create_array == NULL)
	{
		return (NULL);
	}
	for (; i < size ; i++)
	{
	create_array[i] = c;
	}
	return (create_array);
}