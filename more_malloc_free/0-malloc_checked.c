#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- check if malloc worked
 * malloc_checked: check if malloc worked
 * @b: allocated spaces of memory wanted
 * Return: a pointer to the newly allocated space
 */

 void *malloc_checked(unsigned int b)

 {
	void *check;

	check = malloc(b);

	if (check == NULL)
	{
		exit (98);
	}
	return (check);
 }
