#include "main.h"
/**
  *
  *
  *
  *
  *
  **/

void puts2(char *str)

{
	int debut;

	for (debut = 0 ; str[debut] != '\0' ; debut +=2)
	{
		_putchar(str[debut]);
	}
	_putchar('\n');
}
