#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name- using a callback on function that print a string
 * print_name: using function that print a name
 * @name: name to print
 * @f: pointer to a function who take name as an argument to execute
 */

void print_name(char *name, void (*f)(char *))

{
	f(name);
}
