#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
int a = 0;
while (str[a] != '\0')
{
	a++;
}
a = (a + 1) / 2;

while (str[a] != '\0')
{

_putchar(str[a]);
a++;
}
_putchar('\n');
}
