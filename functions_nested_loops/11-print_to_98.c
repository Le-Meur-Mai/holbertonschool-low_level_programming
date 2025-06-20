#include <stdio.h>
/**
 * print_to_98- read the name
 * @n: numbers
 *
 */


void print_to_98(int n)

{
	if (n <= 98)
	{
	do {
	printf("%d, ", n);
	n++;
	} while (n < 98);
	}
	else
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n > 98);
	}
	printf("98");
	printf("\n");
}
