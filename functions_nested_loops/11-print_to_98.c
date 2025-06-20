#include <stdio.h>
/**
 * print_to_98- read the name
 * @n: numbers
 *
 */


void print_to_98(int n)

{
	if (n < 98)
	{
	do {
	printf("%d, ", n);
	n++;
	} while (n < 98);
	}
	else
	{
	while (n > 98);
	{
		printf("%d, ", n);
	}
	printf("98");
	printf("\n");
}
