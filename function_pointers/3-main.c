#include "3-calc.h"
#include <stdio.h>
int main (int argc, char **argv)
{
int *num1, *num2;
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
get_op_func(num1, char, num2);
return (0);
}