#include "main.h"
/**
  * _strlen_recursion- print the length of a string
  * _strlen_recursion: print the length of a string
  * @s: string you want to work with
  * Return: the length of the string
  **/

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
