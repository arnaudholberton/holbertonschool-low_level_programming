#include "main.h"
/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 *
 * Return: entier converti ou 0 si aucun nombre
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int num = 0;
int found_digit = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
num = num * 10 + (s[i] - '0');
}
else if (found_digit)
break;
i++;
}
if (!found_digit)
return (0);
return (sign * num);
}
