#include "main.h"

/**
  * _strchr- print at the first iteration of c
  * _strchr: print from the first iteration of c
  * @s: string of origin
  * @c: character of thr beggining
  * Return: the adress of the first iteration of c in s
  **/

char *_strchr(char *s, char c)

{
	int i = 0;
	char *p;

	for (; s[i] != c && s[i] != '\0' ; i++)
	{
	}
	if (s[i] == c)
	{
		p = &s[i];

		return (p);
	}
	else
	{
		return (0);
	}
}
