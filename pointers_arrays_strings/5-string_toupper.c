#include "main.h"

/**
  * string_toupper- convert lowercase letter into uppercase letter
  * string_toupper: convert lowercase letter of a string into uppercase letter
  * @str: string
  * i: counting
  * Return: return str
  **/

char *string_toupper(char *str)

{
	int i = 0;

	for (; str[i] ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
return (str);
}
