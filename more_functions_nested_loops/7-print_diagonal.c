#include "main.h"
/**
 * print_line - prints 10 times the numbers, from 0 to 14
 *@n : chiifre de depart
 *
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 2; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}