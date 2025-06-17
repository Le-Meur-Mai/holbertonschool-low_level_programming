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
	char i = 'a';

	do {
		putchar(i);
		i++;
	} while (i <= 'z');

		putchar('\n');

	return (0);
}
