#include "main.h"

/**
  * print_rev- print string backward
  * print_rev: print string backward
  * @s: string
  * fin: last number of the string
  * debut: first number of the string
  **/

void print_rev(char *s)

{
	int debut = 0;
	int fin;

	for (debut = 0; s[debut] != '\0' ; debut++)
	{
	}

	fin = debut - 1;

	for (; fin >= 0 ; fin--)
	{
		_putchar(s[fin]);
	}
	_putchar('\n');
}
