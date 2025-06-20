#include <stdlib.h>
#include "main.h"

/**
 * _abs - print the alphabet
 * _abs: check the absolute value of 'n'
 * @r: Whats have to be checked.
 * absolute_value : read the name
 * Return: The absolute value of 'n'
 */

int _abs(int r)

{
	int absolute_value = (r * (-1));

	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (absolute_value);
	}
}
