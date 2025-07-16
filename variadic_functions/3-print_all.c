#include "variadic_functions.h"
/**
 * print_all- print all types of arguments with a variadic function
 * @format: you have to write the type of your arguments
 */

void print_all(const char * const format, ...)
{
	va_list print;
	int j = 0, lenght = 0;
	char *s;

	while (format[lenght] != '\0')
		lenght++;
	va_start(print, format);

	while (format[j] != '\0')
	{
		if (j != 0 && j < (lenght - 1) && (format[j - 1] == 's' ||
		format[j - 1] == 'c' || format[j - 1] == 'f' || format[j - 1] == 'i'))
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
				s = va_arg(print, char *);

				if (s[0] == '\0')
				{
				printf("(nil)");
				break;
				}
				printf("%s", s);
				break;
		}
		j++;
	}
	va_end(print);
	printf("\n");
}
