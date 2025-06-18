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
	char e = 'A';
	char i = 'a';

	do {
		putchar(i);
		i++;
	} while (i <= 'z');

	do {
		putchar(e);
		e++;
	} while (e <= 'Z');

		putchar('\n');

	return (0);
}
