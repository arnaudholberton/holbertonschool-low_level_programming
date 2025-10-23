#include "main.h"
/**
*times_table - affiche toute les heures
*jusqua 23h
*
*/
void times_table(void)
{
int ligne;
int colone;
int nbr;
for (ligne = 0; ligne <= 9; ligne++)
{
putchar('0');
for (colone = 1; colone == 9; colone++)
{
nbre = colone * ligne;
_putchar(',');
_putchar(' ');
if (nbr <= 9)
{
_putchar(' ');
_putchar(nbr + '0');
}
else
{
_putchar(nbr / 10 + '0');
_putchar(nbr % 10 + '0');
}
}
_putchar(('\n'));
}
}