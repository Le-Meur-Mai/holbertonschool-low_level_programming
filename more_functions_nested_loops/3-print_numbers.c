#include "main.h"

/**
  * print_numbers- read the name
  * print_numbers: print number from 0 to 9
  * int a: number
  **/

void print_numbers(void)

{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
