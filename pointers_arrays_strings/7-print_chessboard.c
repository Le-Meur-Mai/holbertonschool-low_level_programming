#include "main.h"
/**
  * print_chessboard- print a bi-dimensionnal array
  * print_chessboard: print a bi-dimensionnal array
  * @a: array
  **/

void print_chessboard(char (*a)[8])

{
	int i = 0;
	int j;

for (; i < 8 ; i++)
{
	for (j = 0 ; j < 8 ; j++)
	{
		_putchar(a[i][j]);
	}
	_putchar('\n');
}
}
