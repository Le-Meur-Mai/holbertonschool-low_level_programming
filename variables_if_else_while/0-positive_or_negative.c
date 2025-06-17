#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
	/*fonction de depart*/
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive");
	}
	else if (n == 0)
	{
		printf("%d is zero");
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}
