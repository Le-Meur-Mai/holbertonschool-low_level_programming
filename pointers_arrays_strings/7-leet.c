#include "main.h"
/**
  * leet- Replace certains characters
  * leet: replace some letters by some numbers
  * @str: the string of origin
  * i: counting
  * j: counting
  * r: characters to replace
  * c: characters to convert
  * Return: modified string
  **/

char *leet(char *str)

{
	int i = 0;
	int j;
	char r[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char c[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (; str[i] ; i++)
	{
		for (j = 0 ; r[j] ; j++)
		{
			if (str[i] == r[j])
			{
				str[i] = c[j] + 0;
			}
		}
	}
	return (str);
}
