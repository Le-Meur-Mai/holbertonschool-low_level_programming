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
	char i = '0';

	do {
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	} while (i <= '9');
	return (0);
}
