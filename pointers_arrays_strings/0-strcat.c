#include "main.h"
/**
  * _strcat- merge two strings on the string dest
  * _strcat: merge two strings : dest + src
  * @dest: string of destination
  * @src: string to add to dest
  * dest_length: length of the dest string
  * start: variable for counting
  * Return: string dest
  **/

char *_strcat(char *dest, char *src)

{
	int dest_length = 0;
	int start = 0;

	for (; dest[dest_length] ; dest_length++)
	{
	}

	for (; src[start] ; start++)
	{
		dest[dest_length] = src[start];
		dest_length++;
	}
	return (dest);
}
