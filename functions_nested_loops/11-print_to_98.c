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
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
		else if (n > 98)
		{
			while (n > 98)
			{
			printf("%d, ", n);
			n--;
			}
		}
	printf("98");
	printf("\n");
}
