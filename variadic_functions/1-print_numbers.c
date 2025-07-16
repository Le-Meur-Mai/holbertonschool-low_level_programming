#include "variadic_functions.h"
/**
 * print_numbers- variadic function that print numbers with a separator.
 * @separator: string to define as a separator
 * @n: numbers of arguments you want to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	int numbers;

	va_start(print, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		numbers = va_arg(print, int);

		printf("%d", numbers);
	}
	printf("\n");
	va_end(print);
}
