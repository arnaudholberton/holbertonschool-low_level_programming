#include <stdio.h>
/**
*main - afficher nombre 0 9
*
*Return: renvoi 0
*/
int main(void)
{
int a = 0;
while (a < 10)
	{
	putchar(a + '0');
	a++;
	}
putchar('\n');
return (0);
}
