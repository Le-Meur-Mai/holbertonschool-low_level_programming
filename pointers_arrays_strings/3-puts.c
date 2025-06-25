#include "main.h"
#include <unistd.h>
/**
  * _puts- Print a string
  * _puts: Print a string
  * @str: pointer of string
  * size: size of the string
  * debut: start of the string
  **/

void _puts(char *str)
{
	int debut = 0;
	int size;

	for (debut = 0; str[debut] ; debut++)
	{
	}
	size = debut;

	write(1, str, size);
	_putchar('\n');
}
