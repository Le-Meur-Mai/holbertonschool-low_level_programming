#include "main.h"

/**
  * _strpbrk- print 's' at the first occurence of a char
  * _strpbrk: print 's' at the first occurence of a char in 'accept'
  * @s: string you want to print
  * @accept: string of character you need to check
  * Return: pointeur from the first occurence of char in accept
  **/

char *_strpbrk(char *s, char *accept)

{
	int i = 0;
	int j;
	char *p;

	for (; s[i] ; i++)
	{
		for (j = 0 ; accept[j] != s[i] && s[j] != '\0' ; j++)
		{
		}
		if (accept[j] == s[i])
		{
			p = &s[i];
			break;
		}
	}
	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
	return (p);
	}
}
