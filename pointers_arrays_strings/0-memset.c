#include "main.h"
/**
  * _memset- replace n bytes by char b
  * _memset: replace n bytes by char b
  * @s : string of characters
  * @b : character you want to print at the beginning of the string
  * @n : numbers of bytes you want to replace
  * Return: s
  **/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i = 0;

	for (; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
