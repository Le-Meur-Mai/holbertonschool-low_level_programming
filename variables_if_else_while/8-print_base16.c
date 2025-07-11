#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - print numbers from 0 to 9 and letters from a to f
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
