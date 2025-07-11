#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - print numbers from 0 to 9 with space and dots
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);

		if (i < '9')
		{
			putchar(',');
			putchar(' ');
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
