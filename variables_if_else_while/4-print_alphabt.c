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
char a;
for (a = 'a'; a == 'z'; a++)
{
if (a != 'q' || a != 'e')
{
putchar(a);
}
}
putshar('\n');
return (0);
}
