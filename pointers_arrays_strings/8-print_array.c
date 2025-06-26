#include "main.h"
#include <stdio.h>
/**
  * print_array- print values of an array followed by a coma and a space.
  * print_array: the values of the array are printed in order
  * @a: array
  * @n: length of the array
  * counting: read the array
  * end: last element of the array
  **/

void print_array(int *a, int n)

{
	int counting = 0;
	int end = n - 1;

	for (; a[counting] != '\0' ; counting++)
	{
		if (a[counting] != a[end])
		{
			printf("%d, ", a[counting]);
		}

		else if (a[counting] == a[end])
		{
			printf("%d", a[counting]);
		}
	}
	printf("\n");
}

