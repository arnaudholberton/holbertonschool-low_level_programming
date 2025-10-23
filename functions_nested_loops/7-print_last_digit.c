#include "main.h"
/**
*print_last_digit - entier a comaré
*@a : chiffre
*
*Return: dernier chiffre
*
*/
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
{
b = b * -1;
}
_putchar(b + '0');
return (b);
}
