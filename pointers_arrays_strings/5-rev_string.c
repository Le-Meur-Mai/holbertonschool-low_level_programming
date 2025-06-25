#include "main.h"
/**
  *
  *
  *
  *
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
