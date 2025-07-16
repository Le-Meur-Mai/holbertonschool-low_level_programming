#include "variadic_functions.h"
/**
 * print_strings- use of a variadic function to print string with a separator
 * @separator: The separator you choose to print between the strings
 * @n: The number of strings you want to print
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list print;
	unsigned int i;
	char *strings;

	va_start(print, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
		}
		strings = va_arg(print, char *);

		if (strings == NULL)
		{
			printf("(nil)");
		}
		else if (strings != NULL)
		{
		printf("%s", strings);
		}
	}
	printf("\n");
	va_end(print);
}
