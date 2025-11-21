#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - sums all its parameters
 * @n: number of parameters
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int somme = 0;
va_list nombre;
va_start(nombre, n);
for (i = 0; i < n; i++)
{
somme += va_arg(nombre, int);
}
va_end(nombre);
return (somme);
}
