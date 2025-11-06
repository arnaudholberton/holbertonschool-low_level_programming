#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
int n;
n = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
}
else
{
int rendu;
for (rendu = 0; n >= 25; rendu++)
{
n -= 25;
}
for (; n >= 10; rendu++)
{
n -= 10;
}
for (; n >= 5; rendu++)
{
n -= 5;
}
for (; n >= 2; rendu++)
{
n -= 2;
}
for (; n >= 1; rendu++)
{
n -= 1;
}
printf("%d\n", rendu);
}
}
