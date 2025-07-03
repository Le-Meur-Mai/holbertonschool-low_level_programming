#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
  * main- print the result of an addition of arguments
  * main: print the result of an addition of arguments
  * @argc: arguments counting
  * @argv: array that countain the arguments
  * Return: the result of the addition
  **/

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	long int nb;
	int result = 0;
	int length;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc ; i++)
	{
		length = strlen(argv[i]);

		for (j = 0; j == length ; j++)
		{
		if (!isdigit(argv[j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		nb = strtol(argv[i], NULL, 10);
		if (nb < 0)
		{
			printf("Error\n");
			return (1);
		}
		result = result + nb;
	}
	printf("%d\n", result);
	return (0);
}
