#include "main.h"
/**
  *
  *
  *
  *
  *
  *
  *
  *
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
