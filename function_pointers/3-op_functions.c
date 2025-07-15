#include "3-calc.h"
/**
 * op_add- addition of two int
 * op_add: addition of two int
 * @a: first number
 * @b: second number
 * Return: the result of the addition
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- substraction of two int
 * op_sub: substraction of two int
 * @a: first number
 * @b: second number
 * Return: the result of the substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The result of the multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- division with two int
 * op_div: division with two int
 * @a: first number
 * @b: second number
 * Return: the result of the division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod- modulo with two int
 * op_mod: modulo with two int
 * @a: first number
 * @b: second number
 * Return: the result of the modulo
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a % b);
}
