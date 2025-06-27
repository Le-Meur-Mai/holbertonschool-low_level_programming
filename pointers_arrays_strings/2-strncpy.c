#include "main.h"
/**
  * _strncpy- copy the number of characters of the string desired
  * _strncpy- copy the number of characters of the string desired
  * @dest: string of destination
  * @src: string of origin
  * @n: numbers of characters desired to copy
  * copy: use to copy from a string to another
  * i: counting
  * Return: destination
  **/

char *_strncpy(char *dest, char *src, int n)

{
	int copy;
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
	}
	if (i >= n)
	{
		for (copy = 0 ; copy < n ; copy++)
		{
		dest[copy] = src[copy];
		}
	}
	else if (i < n)
	{
		for (copy = 0 ; copy < i ; copy++)
		{
			dest[copy] = src[copy];
		}
		for (; copy != n ; copy++)
		{
			dest[copy] = 0;
		}
	}

	return (dest);
}
