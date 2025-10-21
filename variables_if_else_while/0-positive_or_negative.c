#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Function
*Affiche les different type de fichier
*Return: 0 ci code valide
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("if the number is %d", n);
}
else
{
printf("if the number is less than  %+d ", n);
}
return (0);
}
