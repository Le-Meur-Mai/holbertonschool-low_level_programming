#include "main.h"
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
	int length_of_needle = 0;
	char *start;

	for (; needle[length_of_needle] ; length_of_needle++)
	{
	}
	for (; haystack[i] ; i++)
	{
		if (haystack[i] == needle[0])
		{
			start = &haystack[i];
			h = i;

			for (j = 0; needle[j] == haystack[h] && j < length_of_needle ; j++)
			{
				h++;
			}
			if (j == length_of_needle)
			{
				break;
			}
		}
	}
	if (haystack[i] == '\0')
	{
		return (0);
	}
	else
	{
	return (start);
	}
}
