#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog- free the struct dog_t
 * free_dog: free the dogs !!!
 * @d: a struct dog_t you want to free
 */

void free_dog(dog_t *d)

{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
