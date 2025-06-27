#include "main.h"

/**
  *
  *
  *
  *
  *
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
				k = i;

				for (; str[k] >= 'a' && str[k] <= 'z' ; k++)
				{
				}
				str[k] = str[k] - 32;
			}
		}
	}
	return (str);
}
