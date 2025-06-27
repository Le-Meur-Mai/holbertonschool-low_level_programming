#include "main.h"

/**
  * cap_string- print an uppercase letter for the first letter of a word
  * cap_string: print an uppercase letter at the beginnig of a word
  * @str: string
  * s: string of separators
  * i: counting str
  * j: counting separator
  * k: replace lowercase letter into uppercase letter
  * Return: str
  **/

char *cap_string(char *str)

{
int i = 0;
char s[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int j;
int k;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (; str[i] ; i++)
	{
		for (j = 0 ; s[j] ; j++)
		{
			if (str[i] == s[j])
			{
				k = i + 1;
				if (str[k] >= 'a' && str[k] <= 'z')
				{
				str[k] = str[k] - 32;
				}
			}
		}
	}
	return (str);
}
