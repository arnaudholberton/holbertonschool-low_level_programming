#include "main.h"
/**
 * print_square - barre diagonale
 *@n : chiifre de depart
 *
 */
void print_square(int size)
{
	int a;
	int b; 
for (b = 1; b <= size; b++)
{
for (a = 1; a <= size; a++)
{

		_putchar('#');
		if (a == size)
		_putchar('\n');
}

}
if (b < 2)
		_putchar('\n');
}
