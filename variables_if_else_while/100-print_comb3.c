#include <stdio.h>
/**
*main - afficher nombre 0 9
*Return: renvoi 0
*/
int main(void)
{
int b = 0;
int a = 0;
for (b = 0; a <= 9; a++)
{
for (b = 0; b <= 9 ; b++)
{
if (a < b)
{
putchar(a + '0');
putchar(b + '0');
if (a < 8)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
}
}
return (0);
}
