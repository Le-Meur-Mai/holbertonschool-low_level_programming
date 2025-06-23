#include "main.h"
/**
  * print_diagonal- read the name
  * print_diagonal: its in the name
  * @n: number of diagonal
  * nb_space: its in the name
  * nb_column: its in the name
  **/

void print_diagonal(int n)

{
	int nb_space = 0;
	int nb_column;

	if (n > 0)
	{
		for (nb_column = 0 ; nb_column < n ; nb_column++)
		{
			_putchar(' ');
			nb_space++;
		}
		_putchar('\\');
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
