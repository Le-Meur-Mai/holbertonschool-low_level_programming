#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit- print
 * @r: Whats have to be checked.
 * @n: result
 * absolute_value : read the name
 * Return: The absolute value of 'n'
 */

int print_last_digit(int n)

{
	int last_number = n % 10;

	if (last_number >= 0)
	{
		_putchar(last_number + '0');
	}
	else
	{
		last_number = last_number * -1;
		_putchar(last_number + '0');
	}
	return (last_number);
}
