#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *nom1;
	va_list nom;
va_start(nom, n);
	for (i = 0; i < n; i++)
	{
		nom1 = va_arg(nom, char *);
		if (nom1 == NULL)
			printf("(nil)");
		else
		printf("%s", nom1);
		if (i < n - 1 && NULL != separator)
		{
			printf("%s", separator);
		}
	}
	va_end(nom);
	printf("\n");
}
