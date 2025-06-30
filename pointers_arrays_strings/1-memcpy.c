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
	unsigned int i;
	unsigned int j = 0;

	for (i = 0 ; src[i] != '\0' || i <= n ; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
