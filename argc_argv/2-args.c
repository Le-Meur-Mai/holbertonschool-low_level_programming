#include <stdio.h>

/**
  * main- print the arguments, one per line.
  * main: function that print the arguments, one per line.
  * @argc: argument counting
  * @argv: array that countain the name of the program and arguments
  * Return: the arguments
  **/

int main(int argc, char *argv[])

{
	int i = 0;

	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
