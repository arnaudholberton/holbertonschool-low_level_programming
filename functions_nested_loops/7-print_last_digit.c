#include "main.h"
/**
*print_last_digit - entier a comaré
*@a : chiffre
*@b : dernier chiffre
*Return: dernier chiffre
*
*/
int print_last_digit(int a)
{
int b = a % 10;
if (b < 0)
{
b = -b;
}
_putchar(b + '0');
return (b);
}
