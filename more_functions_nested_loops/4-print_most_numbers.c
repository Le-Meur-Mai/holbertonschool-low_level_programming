#include "main.h"

/**
  * print_most_numbers- print almost all numbers
  * print_most_numbers: print numbers exept 2 and 4
  * int a: number
  **/

void print_most_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
