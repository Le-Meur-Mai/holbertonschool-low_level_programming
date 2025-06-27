#include "main.h"

/**
  * cap_string- print an uppercase letter for the first letter of a word
  * cap_string: print an uppercase letter at the beginnig of a word
  * @str: string
  * i: counting str
  * j: counting separator
  * k: replace lowercase letter into uppercase letter
  * Return: str
  **/

char *cap_string(char *str)

{
	int i = 0;
	char separator[] = { ' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0' };
	int j;
	int k;

	for (; str[i] ; i++)
	{
		for (j = 0 ; separator[j] ; j++)
		{
			if (str[i] == separator[j])
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
