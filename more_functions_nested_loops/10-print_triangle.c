#include "main.h"

/**
  * print_triangle- read the name
  * print_triangle: print triangle of #
  * @size : size of triangle
  **/

void print_triangle(int size)

{
	int hashtag;
	int space;
	int triangle;
	int nb_space = size - 1;
	int nb_hashtag = 1;

		if (size > 0)
		{
			for (triangle = 0 ; triangle < size; triangle++)
			{
				for (space = nb_space ; space > 0 ; space--)
				{
					_putchar(' ');
				}
				for (hashtag = 1 ; hashtag <= nb_hashtag ; hashtag++)
				{
					_putchar('#');
				}
				_putchar('\n');
				nb_space--;
				nb_hashtag++;
			}
		}
		else if (size <= 0)
		{
			_putchar('\n');
		}
}
