#include "main.h"

/**
  * print_square- print square of #
  * print_square: print square of # based on size
  * @size: size of the square
  * column: vertical lenght of the square
  * line: horizontal lenght of the square
  **/

void print_square(int size)

{
	int column;
	int line;

	if (size > 0)
	{
		for (column = 0 ; column < size ; column++)
		{
			for (line = 0 ; line < size ; line++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
