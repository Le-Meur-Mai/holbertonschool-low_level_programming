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
	char i = 'z';

	do {
		putchar(i);
		i--;
	} while (i >= 'a');

		putchar('\n');

	return (0);
}
