#include "main.h"
/**
  * _pow_recursion- print the result of x power y
  * _pow_recursion: print the result of x power y
  * @x: number you want to multiply with himself
  * @y: number that depicts the power of x
  * Return: the result of x power y
  **/

int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
