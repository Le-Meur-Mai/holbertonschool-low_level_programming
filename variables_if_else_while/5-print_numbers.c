#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = '0';

	do {
		putchar(i);
		i++;
	} while (i <= '9');
	putchar('\n');
	return (0);
}
