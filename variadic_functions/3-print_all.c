#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int ii = 0, i;
	float f;
	char *s;
	va_list mot;
va_start(mot, format);
	while (format[ii] != '\0')
	{
		switch (format[ii])
		{
			case 'c':
			printf("%c", (char)va_arg(mot, int));
			printf(", ");
			break;

			case 'i':
			i = va_arg(mot, int);
			printf("%d", i);
			printf(", ");
			break;

			case 'f':
			f = va_arg(mot, double);
			printf("%f", f);
			printf(", ");
			break;

			case 's':
			s = va_arg(mot, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		ii++;

	}
	va_end(mot);
}
