#include <stdio.h>
#include <stdlib.h>
/**
  * main- multiply two arguments
  * main: multiply two arguments
  * @argc: argument counting
  * @argv: array that contain the name of the program and  arguments
  * Return: the result of the multiplication
  **/

int main(int argc, char *argv[])

{
	long int nb1, nb2;
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = strtol(argv[1], NULL, 10);
	nb2 = strtol(argv[2], NULL, 10);
	result = nb1 * nb2;

	printf("%d\n", result);
	return (0);
}
