#include "main.h"
/**
  * puts2- print only the characters of the table of 2
  * puts2: print only the characters of the table of 2
  * @str: pointer of a string
  * debut: start of the string
  **/

void puts2(char *str)

{
	int debut;

	for (debut = 0 ; str[debut] != '\0' ; debut += 2)
	{
		_putchar(str[debut]);
	}
	_putchar('\n');
}
