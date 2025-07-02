#include "main.h"
/**
  * factorial- factorial function
  * factorial: factorial function
  * @n: the number you want the factorial to work with
  * Return: the result of the calculation
  **/

int factorial(int n)

{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (factorial(n - 1) * n);
}
