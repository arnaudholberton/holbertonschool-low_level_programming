#include "main.h"
/*
*jack_bauer : affiche toute les heures
*
*
*/

void jack_bauer(void)
{
	int a, b, c, d;

while (a == 2 && b == 3 && c == 5 && d == 9)
{
_putchar(a);
_putchar(b);
_putchar(':');
_putchar(c);
_putchar(d);
if (d == 9)
c++;
if (c == 5)
b++;
if (b == 9)
a++;
}
}
