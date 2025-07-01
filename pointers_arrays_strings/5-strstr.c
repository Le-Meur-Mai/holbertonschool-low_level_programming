#include "main.h"
#include <stddef.h>
/**
  * _strstr- function that locate a substring
  * _strstr: locate the substring needle is haystack
  * @haystack: string you want to search in
  * @needle: string you want to find in haystack
  * Return: (adress of the substring found
  **/

char *_strstr(char *haystack, char *needle)

{
	int i = 0;
	int j = 0;
	int h = 0;
	char *start;

	for (; haystack[i] ; i++)
	{
		if (haystack[i] == needle[0])
		{
			start = &haystack[i];
			h = i;

			for (j = 0; needle[j] == haystack[h] && needle[j] != '\0' && haystack[h] != '\0' ; j++)
			{
				h++;
			}
			if (needle[j] == '\0')
			{
				break;
			}
		}
	}
	if (haystack[i] == '\0' || needle[0] == '\0')
	{
		return (NULL);
	}
	return (start);
}
