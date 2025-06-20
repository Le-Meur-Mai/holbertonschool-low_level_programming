#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check if c is a letter
 *
 * @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
