#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
int b;
int c = 0;
for (b = 0; s[b] != '\0'; b++)
{
c++;
}
for ( ; b >= 0 ; b--)
{
if (s[b] != '\0')
_putchar(s[b]);
}
_putchar('\n');
}
