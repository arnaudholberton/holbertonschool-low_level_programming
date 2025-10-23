#include "main.h"
#include <stdio.h>
/**
*print_to_98 - imprime une suite de nombre
*@a : nbre de depart
*/
void print_to_98(int a)
{
if (a <= 98)
{
for (; a <= 98 ; a++)
{
printf("%d", a);
if (a != 98)
{
printf(", ");
}
}
printf("\n");
}
else if (a > 98)
{
for (; a >= 98; a--)
{
printf("%d", a);
if (a != 98)
{
printf(", ");
}
}
printf("\n");
}
else
{
printf("98");
}
}
