#include "main.h"
/**
  * reverse_array- reverse an array
  * reverse_array: reverse an array
  * @a: array
  * @n: lenght of the array
  * i: counting
  * temp: reverse the array
  * half: half of the array
  **/

void reverse_array(int *a, int n)

{
	int i = 0;
	int temp = 0;
	int half = 0;

	half = n / 2;
	n = n - 1;

	for (; i < half ; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
