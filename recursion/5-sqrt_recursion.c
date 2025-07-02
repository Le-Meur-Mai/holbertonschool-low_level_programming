#include "main.h"

/**
  * _sqrt_recursion- print the natural square root of a number
  * _sqrt_recursion: print the natural square root of n using recursion
  * @n: number you want the square root from
  * Return: the natural square root of n
  **/

int _sqrt_recursion(int n)

{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}

	x  = _sqrt_recursion(n - 1);

	if ((x + 1) * (x + 1) > n)
	{
		return (x);
	}
	else if ((x + 1) * (x + 1) != n)
	{
		return (-1);
	}
		return (x + 1);
}
