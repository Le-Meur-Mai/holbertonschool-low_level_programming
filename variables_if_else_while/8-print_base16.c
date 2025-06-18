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
	char e = '0';
	char i = 'a';

	do {
		putchar(e);
		e++;
	} while (e <= '9');

	do {
		putchar(i);
		i++;
	} while (i <= 'f');

		putchar('\n');

	return (0);
}
