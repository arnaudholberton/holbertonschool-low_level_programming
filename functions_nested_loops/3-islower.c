#include "main.h"
/**
*_islower - function compare miniscule
*@c : lettre a comparer
*
*Return: sinon 0
*
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
