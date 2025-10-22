#include<stdio.h>
/**
 * main - afficher un message
 * Return: renvoi 0
 *
 */
int main(void)
	{
	char a[] = "_putchar";
	char i = 0;
while (i < 8)
{
	putchar(a[i]);
	i++;
}
putchar('\n');
return (0);
}
