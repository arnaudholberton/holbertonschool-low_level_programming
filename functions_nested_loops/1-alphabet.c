#include "main.h"
/**
*print_alphabet - afichage lettre
*_putchar; imprime caractere
*
*/
void print_alphabet(void)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n')
}
