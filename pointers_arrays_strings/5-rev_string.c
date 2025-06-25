#include "main.h"
/**
  * rev_string- Reverse a string
  * rev_string: Reverse a string
  * @s: string of characters
  * debut: start of th string
  * fin: end of the string
  * moitie: half of the string
  **/

void rev_string(char *s)

{
	int swap = 0;
	int debut;
	int fin;
	int moitie;

	for (debut = 0; s[debut] != '\0' ; debut++)
	{
	}

	fin = debut - 1;
	debut = 0;
	moitie = fin / 2;

	for (; fin > moitie ; fin--)
	{
		swap = s[debut];
		s[debut] = s[fin];
		s[fin] = swap;
		debut++;
	}
}
