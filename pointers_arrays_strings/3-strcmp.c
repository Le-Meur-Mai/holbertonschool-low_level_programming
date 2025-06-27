#include "main.h"
/**
  * _strcmp- difference between two strings
  * _strcmp: difference between two strings
  * @s1: first string
  * @s2: second string
  * i: counting
  * difference: value of the difference between the two strings
  * Return: return the value of difference
  **/

int _strcmp(char *s1, char *s2)

{
	int i;
	int resultat = 0;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			resultat = s1[i] - s2[i];
			break;
		}
	}
	return (resultat);
}
