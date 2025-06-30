#include "main.h"
/**
  * _memcpy- copy n bytes from src to dest
  * _memcpy: copy n bytes from src to dest
  * @dest: string of destination
  * @src: string of origin
  * @n: numbers of bytes you have to copy
  * Return: string dest
  **/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;
	unsigned int j = 0;

	for (; src[i] ; i++)
	{
	}
	if (i >= n)
	{
		for (i = 0 ; src[i] ; i++)
		{
			dest[j] = src[i];
			j++;
		}
	}
	else if (i < n)
	{
		for (i = 0 ; src[i] ; i++)
		{
			dest[j] = src[i];
			j++;
		}
		for (; i != n ; i++)
		{
			dest[i] = 0;
		}
	}
	return (dest);
}
