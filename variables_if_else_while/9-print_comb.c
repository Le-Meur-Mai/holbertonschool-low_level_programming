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
