#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc- redoing the original function calloc
 * _calloc: dynamic allocation of memory for an array, initialize to 0
 * @nmemb: Numbers of elements in the array
 * @size: size of the bytes
 * Return: pointer to the newly allocate memorys
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	str = (char *)ptr;
	for (; i < (nmemb * size); i++)
	{
		str[i] = 0;
	}
	return (ptr);
}
