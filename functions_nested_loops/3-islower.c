#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checked if the character is a lowercase letter
 *
 * @c: The character to be checked.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
