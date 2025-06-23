#include "main.h"
/**
  *
  *
  *
  *
  **/

void print_line(int n)

{
	int nb_line;

	if (n > 0)
	{

	for (nb_line = 0 ; nb_line <= n ; nb_line++)
	{
			_putchar('_');
	}
	_putchar('\n');
	}
	else if ( n <= 0)
	{
		_putchar('\n');
	}
}
