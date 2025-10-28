#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int b;
int c = 0;
for (b = 0; s[b] != '\0'; b++)
{
	_putchar(s[b]);
c++;
}
for ( ; b >= 0 ; b--)
{
if (s[b] != '\0')
_putchar(s[b]);
}
_putchar('\n');
}
