#include "main.h"
/**
  * _strcpy- copy a string to another string
  * _strcpy: copy the string of *src to *dest
  * @dest: destination of the copy
  * @src: origin of the copy
  * i: counting element
  * copy: copy the elements of src to dest
  * Return: return string of *dest
  **/

char *_strcpy(char *dest, char *src)

{
	int i;
	int copy;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
	}
	for (copy = 0 ; copy <= i ; copy++)
	{
		dest[copy] = src[copy];
	}
	return (dest);
}
