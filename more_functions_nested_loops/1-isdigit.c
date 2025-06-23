#include "main.h"

/**
  * _isdigit- print 1 if c is a digit
  * _isdigit: print 1 if c is a digit
  * @c: the character
  * Return: 1 if its a number, 0 else
  **/

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
