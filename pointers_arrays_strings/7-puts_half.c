#include "main.h"

/**
  * puts_half- print the last half of a string
  * puts_half: print the last half of a string
  * @str: string
  * length: length of the string
  * half: half of the string
  **/

void puts_half(char *str)

{
	int length = 0;
	int half;

	for (; str[length] != '\0' ; length++)
	{
	}

	if ((length % 2) == 0)
	{
		half = length / 2;

		for (; str[half] != '\0' ; half++)
		{
			_putchar(str[half]);
		}
		_putchar('\n');
	}

	else if ((length % 2) != 0)
	{
		half = (length + 1) / 2;

		for (; str[half] != '\0' ; half++)
		{
			_putchar(str[half]);
		}
		_putchar('\n');
	}
}
