#include "3-calc.h"

/**
 * get_op_func- get the operant of an operation
 * and link it to the function that corresponds
 * get_op_func: link the operant to the function that corresponds
 * @s: operant
 * Return: the adress of the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
