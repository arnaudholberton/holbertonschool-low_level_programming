
#include <unistd.h>

/**
*main - Function
*Affiche les different type de fichier
*Return: 0 ci code valide
*/
int main(void)
{
char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, a, sizezof(a) -1);
return (1);
}
