#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nbr;
	va_list affiche;
va_start(affiche, n);
	for (i = 0; i < n; i++)
	{
		nbr = va_arg(affiche, int);
		printf("%d", nbr);
		if (i < n - 1 && NULL != separator)
		printf("%s", separator);
	}
	va_end(affiche);
	printf("\n");
}
