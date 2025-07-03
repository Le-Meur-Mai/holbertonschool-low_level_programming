#include <stdio.h>

/**
  * main- print the number of arguments
  * main: function that print the numbers of arguments
  * @argc: counting the numbers of argument + the program
  * @argv: array that contain the name of the programs and arguments
  * Return: the number of arguments
  **/

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);
	return (0);
}
