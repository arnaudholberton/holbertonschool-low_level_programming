#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - affiche des lettre
*Return: renvoi 0
*
*/
int main(void)
{
char a= 'a';
for (a = 'a'; a <= 'z'; a++)
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
}
putchar('\n');
return (0);
}
