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
	int space;

	if (n > 0)
	{
		for (nb_column = 0 ; nb_column < n ; nb_column++)
		{
			if (nb_space > 0 ) 
			{
				for (space = 0 ; space < nb_space; space++)
				{
					_putchar(' ');
				}
			}
		_putchar('\\');
		_putchar('\n');
		nb_space++;
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
