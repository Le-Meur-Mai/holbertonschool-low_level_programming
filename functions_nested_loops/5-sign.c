#include "main.h"
#include <ctype.h>

/**
 * print_sign - check if n is positive-negative or zero
 *
 * @n: The number to be checked.
 *
 * Return: Depend on the result but its 1, 0, or -1
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
