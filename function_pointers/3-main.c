#include "3-calc.h"

/**
 * main- execute a program that print the result of the operations
 * @argc: arguments count
 * @argv: array of arguments
 * Return: the result of the operation
 */

int main(int argc, char *argv[])

{
	int nb1;
	int nb2;
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
	printf("ERROR\n");
	exit(98);
	}

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	result = operation(nb1, nb2);

	printf("%d\n", result);
	return (0);
}
