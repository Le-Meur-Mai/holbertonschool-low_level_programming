#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all- return the sum of all int arguments
 * @n: numbers of arguments
 * Return: the result of the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list add;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(add, n);

	while (i < n)
	{
	result += va_arg(add, int);

	i++;
	}
	va_end(add);

	return (result);
}
