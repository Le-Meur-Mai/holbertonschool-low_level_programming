#include "main.h"
#include <stdio.h>
/**
  * print_diagsums- print the sum of a bidimensionnal array
  * print_diagsums: print the sum of the diagonals of a square array
  * @a : bidimensionnal square array
  * @size : size of the array
  **/

void print_diagsums(int *a, int size)

{
	int i = 0;
	int j = size - 1;
	int resultD1 = 0;
	int resultD2 = 0;

	for (; i != size ; i++)
	{
		resultD1 = a[i * size + i] + resultD1;
	}
	for (i = 0 ; j >= 0 ; j--)
	{
		resultD2 = a[i * size + j] + resultD2;
		i++;
	}
	printf("%d, %d \n", resultD1, resultD2);
}
