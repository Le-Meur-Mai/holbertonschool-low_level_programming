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

	while (i <= 'z')
	{

	if (i != 'q' && i != 'e')
	{
		putchar(i);
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
