#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int der;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	 der = (n % 10);


	printf("Last digit of %d is %d ", n, der);

	if (der < 6 && der != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else if (der == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is greater than 5\n");
	}
	return (0);
}
