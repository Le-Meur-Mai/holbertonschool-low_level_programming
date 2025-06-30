#include "main.h"
/**
  * _strspn- print the length of a prefix substring
  * _strspn: print the length of a prefix substring
  * @s: string you want the length from
  * @accept: characters you want to be present in s
  * Return: the length of caracters that are present in s and in accept
  **/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int counting = 0;

	for (; s[i] ; i++)
	{
		for (j = 0 ; accept[j] != s[i] && accept[j] != '\0' ; j++)
		{
		}
			if (accept[j] == s[i])
			{
				counting++;
			}
			else if (accept[j] == '\0')
			{
				break;
			}
	}
	return (counting);
}
