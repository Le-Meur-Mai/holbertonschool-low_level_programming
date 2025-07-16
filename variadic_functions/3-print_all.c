#include "variadic_functions.h"
/**
 * print_all- print all types of arguments with a variadic function
 * @format: you have to write the type of your arguments
 */

void print_all(const char * const format, ...)
{
	va_list print;
	int j = 0;
	char *s;

	va_start(print, format);

	while (format[j] != '\0')
	{
		if (j != 0 && (format[j] == 's' || format[j] == 'c' ||
		format[j] == 'f' || format[j] == 'i'))
			printf(", ");

		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				break;
			case 'i':
				printf("%d", va_arg(print, int));
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				break;
			case 's':
			{
				s = va_arg(print, char *);

				if (s[0] == '\0')
				{
				printf("(nil)");
				break;
				}
				printf("%s", s);
				break;
			}
		}
		j++;
	}
	va_end(print);
	printf("\n");
}
