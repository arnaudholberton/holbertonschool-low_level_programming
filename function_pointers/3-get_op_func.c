#include "3-calc.h"
#include "3-op_functions.c"
#include <stdlib.h>
int (*get_op_func(char *s))(int, int)
{
	op_t ops[2] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
};
int i;
}
