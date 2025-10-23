#include "main.h"
/*
*_islower - function compare miniscule
*Return: 1 ci ok
*Return: sinon 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
