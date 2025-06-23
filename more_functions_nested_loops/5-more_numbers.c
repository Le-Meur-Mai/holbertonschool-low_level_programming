#include "main.h"
/**
  * more_numbers- print numbers from 1 to 14
  * more_numbers: print numbers from 1 to 14
  * a: numbers
  * b: lines
  **/

void more_numbers(void)

{
	int a;
	int b;

	for (b = 0 ; b < 10 ; b++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
