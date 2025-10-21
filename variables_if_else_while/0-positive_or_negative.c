#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*Fonction main donne un nombre aléatoire
*Dit ci les nombres sont positif ou négatif
*Return renvoi 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("Le nombre : %d est positif", n);
}
else if (n == 0)
{
printf("Le nombre est %d", n);
}
else
{
printf("Le nombre %+d est n�gatif", n);
}
return (0);
}
