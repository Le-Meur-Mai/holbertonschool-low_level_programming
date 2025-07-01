#include "main.h"

/**
  * _print_rev_recursion- Print a string backwards
  * _print_rev_recursion: Print s backwards
  * @s : string to reverse
  **/

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
