#include "main.h"
/**
*print_alphabet_x10 - afichage lettre
*Return: renvoi 0
*
*/
void print_alphabet_x10(void)
{
char a = 'a';
char b = 0;
while (b <= 10)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
b++;
_putchar('\n');
}
return (0);
}
