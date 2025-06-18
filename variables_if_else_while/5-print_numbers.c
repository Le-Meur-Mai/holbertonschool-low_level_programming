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
	char i = '1';

	do {
		putchar(i);
		i++;
	} while (i <= '9');
	putchar('\n');
	return (0);
}
