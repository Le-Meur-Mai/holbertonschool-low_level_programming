#include "main.h"

/**
  * _strncat- merge two strings but you choose how much characters
  * _strcat: merge two strings but you choose how much characters
  * @dest: string of destination
  * @src: string of origin to add
  * @n: numbers of characters of string src to add to dest
  * Return: destination
  **/

char *_strncat(char *dest, char *src, int n)

{
	int dest_length = 0;
	int start = 0;

	for (; dest[dest_length] ; dest_length++)
	{
	}

	for (; src[start] != src[n] ; start++)
	{
		dest[dest_length] = src[start];
		dest_length++;
	}
	return (dest);
}
