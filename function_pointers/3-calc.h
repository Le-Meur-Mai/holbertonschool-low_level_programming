#ifndef THREE_CALC_H
#define THREE_CALC_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op- structure of the operation
 * struct op: structure of the operation
 * @op: operant
 * @f: function that takes two integrers
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
